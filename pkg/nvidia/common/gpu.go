package common

type GPU struct {
	Product       string
	UUID          string
	UsedMem       float32
	BusID         string
	TotalMem      int
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
