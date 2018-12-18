## Set the top level module
set_top algo_top
##
#### Add source code
add_files ${PROJ_DIR}/src/algo_top.cpp
#
### Add testbed files
add_files -tb ${PROJ_DIR}/src/algo_top_tb.cpp -cflags ${CFLAGS}

### Add test input files
add_files -tb ${PROJ_DIR}/data/test1_inp.txt
add_files -tb ${PROJ_DIR}/data/test1_out_ref.txt

