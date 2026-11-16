#!/usr/bin/env python3
"""Exercise the built image and its real fake NVML library without GPU hardware."""
import argparse
import csv
import io
import json
import shlex
import subprocess

parser = argparse.ArgumentParser()
parser.add_argument('image')
args = parser.parse_args()
results = []

def query(name, options):
    command = ['docker', 'run', '--rm', '--network', 'none', '--entrypoint', '/bin/sh',
               '-e', 'FAKE_GPU_CONFIG=/fake-gpu/fake-gpu.yaml',
               '-e', 'NVIDIA_VISIBLE_DEVICES=all', args.image, '-c',
               'ln -s /fake-gpu/libfakegpu.so /tmp/libnvidia-ml.so.1; '
               'export LD_LIBRARY_PATH=/tmp; exec /fake-gpu/nvidia-smi ' + shlex.join(options)]
    result = subprocess.run(command, capture_output=True, text=True, timeout=30)
    results.append(dict(name=name, exitCode=result.returncode, stdout=result.stdout, stderr=result.stderr))
    return result

r = query('inventory', ['--query-gpu=uuid,index,name,memory.total,memory.used,utilization.gpu,pci.bus_id,driver_version', '--format=csv,noheader,nounits'])
assert r.returncode == 0, r.stderr
rows = list(csv.reader(io.StringIO(r.stdout)))
assert len(rows) == 4, rows
for row in rows:
    assert len(row) == 8, row
    for index in (1, 3, 4, 5):
        int(row[index])
    assert ':' in row[6] and row[0].startswith('GPU-'), row
r = query('empty_compute_processes', ['--query-compute-apps=pid,gpu_uuid,used_memory', '--format=csv,noheader,nounits'])
assert r.returncode == 0 and r.stdout == '', (r.stdout, r.stderr)
r = query('unknown_gpu_field', ['--query-gpu=unknown', '--format=csv'])
assert r.returncode != 0 and 'unsupported GPU query field' in r.stdout + r.stderr
r = query('unknown_process_field', ['--query-compute-apps=unknown', '--format=csv'])
assert r.returncode != 0 and 'unsupported compute query field' in r.stdout + r.stderr
r = query('conflicting_queries', ['--query-gpu=uuid', '--query-compute-apps=pid', '--format=csv'])
assert r.returncode != 0 and 'mutually exclusive' in r.stdout + r.stderr
print(json.dumps(dict(passed=len(results), results=results), indent=2))
