# Load RUCKUS library
source -quiet $::env(RUCKUS_DIR)/vivado_proc.tcl

# # Load Source Code
loadSource -path "$::DIR_PATH/rtl/algo_top_wrapper.vhd"
loadSource -path "$::DIR_PATH/rtl/algo_pkg.vhd"

#loadSource -path "$::DIR_PATH/vivado_hls/ip/algo_top.dcp"
#loadSource -path "$::DIR_PATH/vivado_hls/ip/algo_top_stub.vhd"

loadSource -dir "$::DIR_PATH/vivado_hls/proj/solution1/impl/ip/hdl/vhdl/"
