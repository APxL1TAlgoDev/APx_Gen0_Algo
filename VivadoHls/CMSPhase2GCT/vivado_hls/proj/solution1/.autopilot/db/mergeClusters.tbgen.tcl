set moduleName mergeClusters
set isTaskLevelControl 1
set isCombinational 1
set isDatapathOnly 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {mergeClusters}
set C_modelType { int 96 }
set C_modelArgList {
	{ ieta1 uint 3 regular  }
	{ iphi1 int 4 regular  }
	{ icet1 int 16 regular  }
	{ ieta2 int 3 regular  }
	{ iphi2 int 16 regular  }
	{ icet2 int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "ieta1", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "iphi1", "interface" : "wire", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "icet1", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ieta2", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "iphi2", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "icet2", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 96} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ieta1 sc_in sc_lv 3 signal 0 } 
	{ iphi1 sc_in sc_lv 4 signal 1 } 
	{ icet1 sc_in sc_lv 16 signal 2 } 
	{ ieta2 sc_in sc_lv 3 signal 3 } 
	{ iphi2 sc_in sc_lv 16 signal 4 } 
	{ icet2 sc_in sc_lv 16 signal 5 } 
	{ ap_return_0 sc_out sc_lv 16 signal -1 } 
	{ ap_return_1 sc_out sc_lv 16 signal -1 } 
	{ ap_return_2 sc_out sc_lv 16 signal -1 } 
	{ ap_return_3 sc_out sc_lv 16 signal -1 } 
	{ ap_return_4 sc_out sc_lv 16 signal -1 } 
	{ ap_return_5 sc_out sc_lv 16 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ieta1", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "ieta1", "role": "default" }} , 
 	{ "name": "iphi1", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "iphi1", "role": "default" }} , 
 	{ "name": "icet1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "icet1", "role": "default" }} , 
 	{ "name": "ieta2", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "ieta2", "role": "default" }} , 
 	{ "name": "iphi2", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "iphi2", "role": "default" }} , 
 	{ "name": "icet2", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "icet2", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "mergeClusters",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "ieta1", "Type" : "None", "Direction" : "I"},
			{"Name" : "iphi1", "Type" : "None", "Direction" : "I"},
			{"Name" : "icet1", "Type" : "None", "Direction" : "I"},
			{"Name" : "ieta2", "Type" : "None", "Direction" : "I"},
			{"Name" : "iphi2", "Type" : "None", "Direction" : "I"},
			{"Name" : "icet2", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	mergeClusters {
		ieta1 {Type I LastRead 0 FirstWrite -1}
		iphi1 {Type I LastRead 0 FirstWrite -1}
		icet1 {Type I LastRead 0 FirstWrite -1}
		ieta2 {Type I LastRead 0 FirstWrite -1}
		iphi2 {Type I LastRead 0 FirstWrite -1}
		icet2 {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	ieta1 { ap_none {  { ieta1 in_data 0 3 } } }
	iphi1 { ap_none {  { iphi1 in_data 0 4 } } }
	icet1 { ap_none {  { icet1 in_data 0 16 } } }
	ieta2 { ap_none {  { ieta2 in_data 0 3 } } }
	iphi2 { ap_none {  { iphi2 in_data 0 16 } } }
	icet2 { ap_none {  { icet2 in_data 0 16 } } }
}
