package common

type GPU struct {
	Product       string
	UUID          string
	UsedMem       uint64
	BusID         string
	TotalMem      uint64
	Util          uint32
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
	PID     uint32
	UsedMem uint64
}

type Opstion struct {
	Query  []string
	Format []string
}
