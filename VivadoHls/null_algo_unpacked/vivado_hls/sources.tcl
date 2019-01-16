## Set the top level module
set_top algo_unpacked
##
#### Add source code
add_files src/algo_unpacked.cpp
#
### Add testbed files
add_files -tb src/algo_unpacked_tb.cpp 

### Add test input files
add_files -tb data/test1_inp.txt
add_files -tb data/test1_out_ref.txt

add_files -tb data/rnd_inp.txt
add_files -tb data/rnd_out_ref.txt
