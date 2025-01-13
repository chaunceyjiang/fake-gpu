package common

type GPU struct {
	Product       string
	UUID          string
	UsedMem       uint64
	BusID         string
	TotalMem      uint64
	Util          int
	Idx           int
	Name          string
	DriverVersion string
	CudaVersion   string
	Temperature   int
	PowerUsage    int
	PowerCap      int
	FanSpeed      int
	Processes     []Process
}

type Process struct {
	Name    string
	PID     int
	GPU     int
	UsedMem int
}
