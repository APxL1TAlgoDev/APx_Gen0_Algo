# APx_Gen0_Algo
APx Phase-2 Gen-0 Algorithm Playground

The repo contains a Gen-0 Phase-2 reference HLS project. It's intended to be 
device agnostic, with default target set to Xilinx Virtex-7 FPGA (CTP7).

Interface at the top level of the algorithm (algo_top) is agnostic in regard 
to user algorithm. The interface consists of 48 inputs and 48 outputs, each of
which is an AXI-stream with 64bit data width. Initial target frequency is set
to 120 MHz (possible to increase it).

This Gen-0 algo assumes use of 10Gbps links with 8b10b encoding, providing 
192 bits of data per bunch crossing (BX) per link.

The HLS reference project contains unpacker/packer implemented in C code and 
takes care of providing fully unpacked data to user algorithm. If so desired,
one can implement their own unpacker/packer for specific needs. Alternatively,
with proper algorithm design, it's possible and likely more efficent in HLS
to just process the data as a stream without unpacking it first. 

# Before you clone the GIT repository

The project is based on Ruckus build system from SLAC.
https://github.com/slaclab/ruckus

It requires relatively recent version of git and git-lfs to be installed on your
build machine.

1) Setup for large filesystems on github

```
git lfs install
```

2) Verify that you have git version 2.13.0 (or later) installed 

```
git version
```

3) Verify that you have git-lfs version 2.1.1 (or later) installed 

```
git-lfs version
```

# Clone the GIT repository

```
git clone --recursive git@github.com:APxL1TAlgoDev/APx_Gen0_Algo.git
```

# How to build HLS project using Ruckus

1) Setup Xilinx tools 


>> i.e. in Bash:    
```
source /opt/Xilinx/Vivado/2018.2/settings64.sh
```

2) Go to the target directory (that you want to build) and make the firmware:

```
cd APx_Gen0_Algo/
mkdir build
cd VivadoHls/null_algo/vivado_hls/
make clean # To remove remants from the previous build 
make ARGV="<test_vector>" # i.e. make ARGV="test1"
# Compile post-synth checkpoint (to be integrated in final bitile)
make ARGV="<test_vector>" dcp  # i.e. make ARGV="test1" dcp
```

To add a new test vector set, please make <test_vector>_inp.txt and <test_vector>_out_ref.txt  file in the data directory, and add it to the sources.tcl

You can skip default output checks by passing a second parameter (skipOutRefCmp) into simulation

```
make ARGV="<test_vector> skipOutRefCmp" 
```

3) Optional: After a build completes, review the results in Vivado HLS GUI mode
```
make gui
```


