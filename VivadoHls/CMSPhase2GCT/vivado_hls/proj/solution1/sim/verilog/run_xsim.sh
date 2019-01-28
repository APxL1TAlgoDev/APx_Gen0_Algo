
/data/tools/Xilinx/Vivado/2018.2/bin/xelab xil_defaultlib.apatb_algo_unpacked_top glbl -prj algo_unpacked.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims_ver -L xpm --initfile "/data/tools/Xilinx/Vivado/2018.2/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s algo_unpacked -debug wave
/data/tools/Xilinx/Vivado/2018.2/bin/xsim --noieeewarnings algo_unpacked -tclbatch algo_unpacked.tcl

