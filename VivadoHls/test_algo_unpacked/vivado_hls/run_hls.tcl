# open the project, don't forget to reset
open_project -reset proj
set_top algo_unpacked

add_files src/algo_unpacked.cpp
add_files -tb src/algo_unpacked_tb.cpp 
add_files -tb data/test1_inp.txt
add_files -tb data/test1_out_ref.txt

# # reset the solution
open_solution -reset "solution1"

set_part {xc7vx690tffg1927-2}
create_clock -period 120MHz -name default
source "./directives.tcl"

csim_design -argv "test1"
csynth_design
cosim_design -argv "test1" -trace_level port
export_design -format ip_catalog

 exit
