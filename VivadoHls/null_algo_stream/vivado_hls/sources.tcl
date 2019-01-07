## Set the top level module
set_top algo_top
##
#### Add source code
add_files src/algo_top.cpp
#
### Add testbed files
add_files -tb src/algo_top_tb.cpp

### Add test input files
add_files -tb data/test1_inp.txt
add_files -tb data/test1_out_ref.txt

