// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2018.2 (lin64) Build 2258646 Thu Jun 14 20:02:38 MDT 2018
// Date        : Tue Dec 18 16:00:57 2018
// Host        : moonraker.cern.ch running 64-bit Scientific Linux CERN SLC release 6.10 (Carbon)
// Command     : write_verilog -force -mode synth_stub
//               /data/alex/repos/algos/APx_Gen0_Algo/VivadoHls/null_algo_stream/vivado_hls/ip/algo_top_stub.v
// Design      : algo_top
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7vx690tffg1927-2
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
module algo_top(ap_clk, ap_rst_n, ap_start, ap_done, ap_idle, 
  ap_ready, link_out_00_TREADY, link_out_01_TREADY, link_out_02_TREADY, link_out_03_TREADY, 
  link_out_04_TREADY, link_out_05_TREADY, link_out_06_TREADY, link_out_07_TREADY, 
  link_out_08_TREADY, link_out_09_TREADY, link_out_10_TREADY, link_out_11_TREADY, 
  link_out_12_TREADY, link_out_13_TREADY, link_out_14_TREADY, link_out_15_TREADY, 
  link_out_16_TREADY, link_out_17_TREADY, link_out_18_TREADY, link_out_19_TREADY, 
  link_out_20_TREADY, link_out_21_TREADY, link_out_22_TREADY, link_out_23_TREADY, 
  link_out_24_TREADY, link_out_25_TREADY, link_out_26_TREADY, link_out_27_TREADY, 
  link_out_28_TREADY, link_out_29_TREADY, link_out_30_TREADY, link_out_31_TREADY, 
  link_out_32_TREADY, link_out_33_TREADY, link_out_34_TREADY, link_out_35_TREADY, 
  link_out_36_TREADY, link_out_37_TREADY, link_out_38_TREADY, link_out_39_TREADY, 
  link_out_40_TREADY, link_out_41_TREADY, link_out_42_TREADY, link_out_43_TREADY, 
  link_out_44_TREADY, link_out_45_TREADY, link_out_46_TREADY, link_out_47_TREADY, 
  link_in_00_TDATA, link_in_00_TVALID, link_in_00_TREADY, link_in_00_TLAST, 
  link_in_01_TDATA, link_in_01_TVALID, link_in_01_TREADY, link_in_01_TLAST, 
  link_in_02_TDATA, link_in_02_TVALID, link_in_02_TREADY, link_in_02_TLAST, 
  link_in_03_TDATA, link_in_03_TVALID, link_in_03_TREADY, link_in_03_TLAST, 
  link_in_04_TDATA, link_in_04_TVALID, link_in_04_TREADY, link_in_04_TLAST, 
  link_in_05_TDATA, link_in_05_TVALID, link_in_05_TREADY, link_in_05_TLAST, 
  link_in_06_TDATA, link_in_06_TVALID, link_in_06_TREADY, link_in_06_TLAST, 
  link_in_07_TDATA, link_in_07_TVALID, link_in_07_TREADY, link_in_07_TLAST, 
  link_in_08_TDATA, link_in_08_TVALID, link_in_08_TREADY, link_in_08_TLAST, 
  link_in_09_TDATA, link_in_09_TVALID, link_in_09_TREADY, link_in_09_TLAST, 
  link_in_10_TDATA, link_in_10_TVALID, link_in_10_TREADY, link_in_10_TLAST, 
  link_in_11_TDATA, link_in_11_TVALID, link_in_11_TREADY, link_in_11_TLAST, 
  link_in_12_TDATA, link_in_12_TVALID, link_in_12_TREADY, link_in_12_TLAST, 
  link_in_13_TDATA, link_in_13_TVALID, link_in_13_TREADY, link_in_13_TLAST, 
  link_in_14_TDATA, link_in_14_TVALID, link_in_14_TREADY, link_in_14_TLAST, 
  link_in_15_TDATA, link_in_15_TVALID, link_in_15_TREADY, link_in_15_TLAST, 
  link_in_16_TDATA, link_in_16_TVALID, link_in_16_TREADY, link_in_16_TLAST, 
  link_in_17_TDATA, link_in_17_TVALID, link_in_17_TREADY, link_in_17_TLAST, 
  link_in_18_TDATA, link_in_18_TVALID, link_in_18_TREADY, link_in_18_TLAST, 
  link_in_19_TDATA, link_in_19_TVALID, link_in_19_TREADY, link_in_19_TLAST, 
  link_in_20_TDATA, link_in_20_TVALID, link_in_20_TREADY, link_in_20_TLAST, 
  link_in_21_TDATA, link_in_21_TVALID, link_in_21_TREADY, link_in_21_TLAST, 
  link_in_22_TDATA, link_in_22_TVALID, link_in_22_TREADY, link_in_22_TLAST, 
  link_in_23_TDATA, link_in_23_TVALID, link_in_23_TREADY, link_in_23_TLAST, 
  link_in_24_TDATA, link_in_24_TVALID, link_in_24_TREADY, link_in_24_TLAST, 
  link_in_25_TDATA, link_in_25_TVALID, link_in_25_TREADY, link_in_25_TLAST, 
  link_in_26_TDATA, link_in_26_TVALID, link_in_26_TREADY, link_in_26_TLAST, 
  link_in_27_TDATA, link_in_27_TVALID, link_in_27_TREADY, link_in_27_TLAST, 
  link_in_28_TDATA, link_in_28_TVALID, link_in_28_TREADY, link_in_28_TLAST, 
  link_in_29_TDATA, link_in_29_TVALID, link_in_29_TREADY, link_in_29_TLAST, 
  link_in_30_TDATA, link_in_30_TVALID, link_in_30_TREADY, link_in_30_TLAST, 
  link_in_31_TDATA, link_in_31_TVALID, link_in_31_TREADY, link_in_31_TLAST, 
  link_in_32_TDATA, link_in_32_TVALID, link_in_32_TREADY, link_in_32_TLAST, 
  link_in_33_TDATA, link_in_33_TVALID, link_in_33_TREADY, link_in_33_TLAST, 
  link_in_34_TDATA, link_in_34_TVALID, link_in_34_TREADY, link_in_34_TLAST, 
  link_in_35_TDATA, link_in_35_TVALID, link_in_35_TREADY, link_in_35_TLAST, 
  link_in_36_TDATA, link_in_36_TVALID, link_in_36_TREADY, link_in_36_TLAST, 
  link_in_37_TDATA, link_in_37_TVALID, link_in_37_TREADY, link_in_37_TLAST, 
  link_in_38_TDATA, link_in_38_TVALID, link_in_38_TREADY, link_in_38_TLAST, 
  link_in_39_TDATA, link_in_39_TVALID, link_in_39_TREADY, link_in_39_TLAST, 
  link_in_40_TDATA, link_in_40_TVALID, link_in_40_TREADY, link_in_40_TLAST, 
  link_in_41_TDATA, link_in_41_TVALID, link_in_41_TREADY, link_in_41_TLAST, 
  link_in_42_TDATA, link_in_42_TVALID, link_in_42_TREADY, link_in_42_TLAST, 
  link_in_43_TDATA, link_in_43_TVALID, link_in_43_TREADY, link_in_43_TLAST, 
  link_in_44_TDATA, link_in_44_TVALID, link_in_44_TREADY, link_in_44_TLAST, 
  link_in_45_TDATA, link_in_45_TVALID, link_in_45_TREADY, link_in_45_TLAST, 
  link_in_46_TDATA, link_in_46_TVALID, link_in_46_TREADY, link_in_46_TLAST, 
  link_in_47_TDATA, link_in_47_TVALID, link_in_47_TREADY, link_in_47_TLAST, 
  link_out_00_TDATA, link_out_00_TVALID, link_out_00_TLAST, link_out_01_TDATA, 
  link_out_01_TVALID, link_out_01_TLAST, link_out_02_TDATA, link_out_02_TVALID, 
  link_out_02_TLAST, link_out_03_TDATA, link_out_03_TVALID, link_out_03_TLAST, 
  link_out_04_TDATA, link_out_04_TVALID, link_out_04_TLAST, link_out_05_TDATA, 
  link_out_05_TVALID, link_out_05_TLAST, link_out_06_TDATA, link_out_06_TVALID, 
  link_out_06_TLAST, link_out_07_TDATA, link_out_07_TVALID, link_out_07_TLAST, 
  link_out_08_TDATA, link_out_08_TVALID, link_out_08_TLAST, link_out_09_TDATA, 
  link_out_09_TVALID, link_out_09_TLAST, link_out_10_TDATA, link_out_10_TVALID, 
  link_out_10_TLAST, link_out_11_TDATA, link_out_11_TVALID, link_out_11_TLAST, 
  link_out_12_TDATA, link_out_12_TVALID, link_out_12_TLAST, link_out_13_TDATA, 
  link_out_13_TVALID, link_out_13_TLAST, link_out_14_TDATA, link_out_14_TVALID, 
  link_out_14_TLAST, link_out_15_TDATA, link_out_15_TVALID, link_out_15_TLAST, 
  link_out_16_TDATA, link_out_16_TVALID, link_out_16_TLAST, link_out_17_TDATA, 
  link_out_17_TVALID, link_out_17_TLAST, link_out_18_TDATA, link_out_18_TVALID, 
  link_out_18_TLAST, link_out_19_TDATA, link_out_19_TVALID, link_out_19_TLAST, 
  link_out_20_TDATA, link_out_20_TVALID, link_out_20_TLAST, link_out_21_TDATA, 
  link_out_21_TVALID, link_out_21_TLAST, link_out_22_TDATA, link_out_22_TVALID, 
  link_out_22_TLAST, link_out_23_TDATA, link_out_23_TVALID, link_out_23_TLAST, 
  link_out_24_TDATA, link_out_24_TVALID, link_out_24_TLAST, link_out_25_TDATA, 
  link_out_25_TVALID, link_out_25_TLAST, link_out_26_TDATA, link_out_26_TVALID, 
  link_out_26_TLAST, link_out_27_TDATA, link_out_27_TVALID, link_out_27_TLAST, 
  link_out_28_TDATA, link_out_28_TVALID, link_out_28_TLAST, link_out_29_TDATA, 
  link_out_29_TVALID, link_out_29_TLAST, link_out_30_TDATA, link_out_30_TVALID, 
  link_out_30_TLAST, link_out_31_TDATA, link_out_31_TVALID, link_out_31_TLAST, 
  link_out_32_TDATA, link_out_32_TVALID, link_out_32_TLAST, link_out_33_TDATA, 
  link_out_33_TVALID, link_out_33_TLAST, link_out_34_TDATA, link_out_34_TVALID, 
  link_out_34_TLAST, link_out_35_TDATA, link_out_35_TVALID, link_out_35_TLAST, 
  link_out_36_TDATA, link_out_36_TVALID, link_out_36_TLAST, link_out_37_TDATA, 
  link_out_37_TVALID, link_out_37_TLAST, link_out_38_TDATA, link_out_38_TVALID, 
  link_out_38_TLAST, link_out_39_TDATA, link_out_39_TVALID, link_out_39_TLAST, 
  link_out_40_TDATA, link_out_40_TVALID, link_out_40_TLAST, link_out_41_TDATA, 
  link_out_41_TVALID, link_out_41_TLAST, link_out_42_TDATA, link_out_42_TVALID, 
  link_out_42_TLAST, link_out_43_TDATA, link_out_43_TVALID, link_out_43_TLAST, 
  link_out_44_TDATA, link_out_44_TVALID, link_out_44_TLAST, link_out_45_TDATA, 
  link_out_45_TVALID, link_out_45_TLAST, link_out_46_TDATA, link_out_46_TVALID, 
  link_out_46_TLAST, link_out_47_TDATA, link_out_47_TVALID, link_out_47_TLAST)
/* synthesis syn_black_box black_box_pad_pin="ap_clk,ap_rst_n,ap_start,ap_done,ap_idle,ap_ready,link_out_00_TREADY,link_out_01_TREADY,link_out_02_TREADY,link_out_03_TREADY,link_out_04_TREADY,link_out_05_TREADY,link_out_06_TREADY,link_out_07_TREADY,link_out_08_TREADY,link_out_09_TREADY,link_out_10_TREADY,link_out_11_TREADY,link_out_12_TREADY,link_out_13_TREADY,link_out_14_TREADY,link_out_15_TREADY,link_out_16_TREADY,link_out_17_TREADY,link_out_18_TREADY,link_out_19_TREADY,link_out_20_TREADY,link_out_21_TREADY,link_out_22_TREADY,link_out_23_TREADY,link_out_24_TREADY,link_out_25_TREADY,link_out_26_TREADY,link_out_27_TREADY,link_out_28_TREADY,link_out_29_TREADY,link_out_30_TREADY,link_out_31_TREADY,link_out_32_TREADY,link_out_33_TREADY,link_out_34_TREADY,link_out_35_TREADY,link_out_36_TREADY,link_out_37_TREADY,link_out_38_TREADY,link_out_39_TREADY,link_out_40_TREADY,link_out_41_TREADY,link_out_42_TREADY,link_out_43_TREADY,link_out_44_TREADY,link_out_45_TREADY,link_out_46_TREADY,link_out_47_TREADY,link_in_00_TDATA[63:0],link_in_00_TVALID,link_in_00_TREADY,link_in_00_TLAST[0:0],link_in_01_TDATA[63:0],link_in_01_TVALID,link_in_01_TREADY,link_in_01_TLAST[0:0],link_in_02_TDATA[63:0],link_in_02_TVALID,link_in_02_TREADY,link_in_02_TLAST[0:0],link_in_03_TDATA[63:0],link_in_03_TVALID,link_in_03_TREADY,link_in_03_TLAST[0:0],link_in_04_TDATA[63:0],link_in_04_TVALID,link_in_04_TREADY,link_in_04_TLAST[0:0],link_in_05_TDATA[63:0],link_in_05_TVALID,link_in_05_TREADY,link_in_05_TLAST[0:0],link_in_06_TDATA[63:0],link_in_06_TVALID,link_in_06_TREADY,link_in_06_TLAST[0:0],link_in_07_TDATA[63:0],link_in_07_TVALID,link_in_07_TREADY,link_in_07_TLAST[0:0],link_in_08_TDATA[63:0],link_in_08_TVALID,link_in_08_TREADY,link_in_08_TLAST[0:0],link_in_09_TDATA[63:0],link_in_09_TVALID,link_in_09_TREADY,link_in_09_TLAST[0:0],link_in_10_TDATA[63:0],link_in_10_TVALID,link_in_10_TREADY,link_in_10_TLAST[0:0],link_in_11_TDATA[63:0],link_in_11_TVALID,link_in_11_TREADY,link_in_11_TLAST[0:0],link_in_12_TDATA[63:0],link_in_12_TVALID,link_in_12_TREADY,link_in_12_TLAST[0:0],link_in_13_TDATA[63:0],link_in_13_TVALID,link_in_13_TREADY,link_in_13_TLAST[0:0],link_in_14_TDATA[63:0],link_in_14_TVALID,link_in_14_TREADY,link_in_14_TLAST[0:0],link_in_15_TDATA[63:0],link_in_15_TVALID,link_in_15_TREADY,link_in_15_TLAST[0:0],link_in_16_TDATA[63:0],link_in_16_TVALID,link_in_16_TREADY,link_in_16_TLAST[0:0],link_in_17_TDATA[63:0],link_in_17_TVALID,link_in_17_TREADY,link_in_17_TLAST[0:0],link_in_18_TDATA[63:0],link_in_18_TVALID,link_in_18_TREADY,link_in_18_TLAST[0:0],link_in_19_TDATA[63:0],link_in_19_TVALID,link_in_19_TREADY,link_in_19_TLAST[0:0],link_in_20_TDATA[63:0],link_in_20_TVALID,link_in_20_TREADY,link_in_20_TLAST[0:0],link_in_21_TDATA[63:0],link_in_21_TVALID,link_in_21_TREADY,link_in_21_TLAST[0:0],link_in_22_TDATA[63:0],link_in_22_TVALID,link_in_22_TREADY,link_in_22_TLAST[0:0],link_in_23_TDATA[63:0],link_in_23_TVALID,link_in_23_TREADY,link_in_23_TLAST[0:0],link_in_24_TDATA[63:0],link_in_24_TVALID,link_in_24_TREADY,link_in_24_TLAST[0:0],link_in_25_TDATA[63:0],link_in_25_TVALID,link_in_25_TREADY,link_in_25_TLAST[0:0],link_in_26_TDATA[63:0],link_in_26_TVALID,link_in_26_TREADY,link_in_26_TLAST[0:0],link_in_27_TDATA[63:0],link_in_27_TVALID,link_in_27_TREADY,link_in_27_TLAST[0:0],link_in_28_TDATA[63:0],link_in_28_TVALID,link_in_28_TREADY,link_in_28_TLAST[0:0],link_in_29_TDATA[63:0],link_in_29_TVALID,link_in_29_TREADY,link_in_29_TLAST[0:0],link_in_30_TDATA[63:0],link_in_30_TVALID,link_in_30_TREADY,link_in_30_TLAST[0:0],link_in_31_TDATA[63:0],link_in_31_TVALID,link_in_31_TREADY,link_in_31_TLAST[0:0],link_in_32_TDATA[63:0],link_in_32_TVALID,link_in_32_TREADY,link_in_32_TLAST[0:0],link_in_33_TDATA[63:0],link_in_33_TVALID,link_in_33_TREADY,link_in_33_TLAST[0:0],link_in_34_TDATA[63:0],link_in_34_TVALID,link_in_34_TREADY,link_in_34_TLAST[0:0],link_in_35_TDATA[63:0],link_in_35_TVALID,link_in_35_TREADY,link_in_35_TLAST[0:0],link_in_36_TDATA[63:0],link_in_36_TVALID,link_in_36_TREADY,link_in_36_TLAST[0:0],link_in_37_TDATA[63:0],link_in_37_TVALID,link_in_37_TREADY,link_in_37_TLAST[0:0],link_in_38_TDATA[63:0],link_in_38_TVALID,link_in_38_TREADY,link_in_38_TLAST[0:0],link_in_39_TDATA[63:0],link_in_39_TVALID,link_in_39_TREADY,link_in_39_TLAST[0:0],link_in_40_TDATA[63:0],link_in_40_TVALID,link_in_40_TREADY,link_in_40_TLAST[0:0],link_in_41_TDATA[63:0],link_in_41_TVALID,link_in_41_TREADY,link_in_41_TLAST[0:0],link_in_42_TDATA[63:0],link_in_42_TVALID,link_in_42_TREADY,link_in_42_TLAST[0:0],link_in_43_TDATA[63:0],link_in_43_TVALID,link_in_43_TREADY,link_in_43_TLAST[0:0],link_in_44_TDATA[63:0],link_in_44_TVALID,link_in_44_TREADY,link_in_44_TLAST[0:0],link_in_45_TDATA[63:0],link_in_45_TVALID,link_in_45_TREADY,link_in_45_TLAST[0:0],link_in_46_TDATA[63:0],link_in_46_TVALID,link_in_46_TREADY,link_in_46_TLAST[0:0],link_in_47_TDATA[63:0],link_in_47_TVALID,link_in_47_TREADY,link_in_47_TLAST[0:0],link_out_00_TDATA[63:0],link_out_00_TVALID,link_out_00_TLAST[0:0],link_out_01_TDATA[63:0],link_out_01_TVALID,link_out_01_TLAST[0:0],link_out_02_TDATA[63:0],link_out_02_TVALID,link_out_02_TLAST[0:0],link_out_03_TDATA[63:0],link_out_03_TVALID,link_out_03_TLAST[0:0],link_out_04_TDATA[63:0],link_out_04_TVALID,link_out_04_TLAST[0:0],link_out_05_TDATA[63:0],link_out_05_TVALID,link_out_05_TLAST[0:0],link_out_06_TDATA[63:0],link_out_06_TVALID,link_out_06_TLAST[0:0],link_out_07_TDATA[63:0],link_out_07_TVALID,link_out_07_TLAST[0:0],link_out_08_TDATA[63:0],link_out_08_TVALID,link_out_08_TLAST[0:0],link_out_09_TDATA[63:0],link_out_09_TVALID,link_out_09_TLAST[0:0],link_out_10_TDATA[63:0],link_out_10_TVALID,link_out_10_TLAST[0:0],link_out_11_TDATA[63:0],link_out_11_TVALID,link_out_11_TLAST[0:0],link_out_12_TDATA[63:0],link_out_12_TVALID,link_out_12_TLAST[0:0],link_out_13_TDATA[63:0],link_out_13_TVALID,link_out_13_TLAST[0:0],link_out_14_TDATA[63:0],link_out_14_TVALID,link_out_14_TLAST[0:0],link_out_15_TDATA[63:0],link_out_15_TVALID,link_out_15_TLAST[0:0],link_out_16_TDATA[63:0],link_out_16_TVALID,link_out_16_TLAST[0:0],link_out_17_TDATA[63:0],link_out_17_TVALID,link_out_17_TLAST[0:0],link_out_18_TDATA[63:0],link_out_18_TVALID,link_out_18_TLAST[0:0],link_out_19_TDATA[63:0],link_out_19_TVALID,link_out_19_TLAST[0:0],link_out_20_TDATA[63:0],link_out_20_TVALID,link_out_20_TLAST[0:0],link_out_21_TDATA[63:0],link_out_21_TVALID,link_out_21_TLAST[0:0],link_out_22_TDATA[63:0],link_out_22_TVALID,link_out_22_TLAST[0:0],link_out_23_TDATA[63:0],link_out_23_TVALID,link_out_23_TLAST[0:0],link_out_24_TDATA[63:0],link_out_24_TVALID,link_out_24_TLAST[0:0],link_out_25_TDATA[63:0],link_out_25_TVALID,link_out_25_TLAST[0:0],link_out_26_TDATA[63:0],link_out_26_TVALID,link_out_26_TLAST[0:0],link_out_27_TDATA[63:0],link_out_27_TVALID,link_out_27_TLAST[0:0],link_out_28_TDATA[63:0],link_out_28_TVALID,link_out_28_TLAST[0:0],link_out_29_TDATA[63:0],link_out_29_TVALID,link_out_29_TLAST[0:0],link_out_30_TDATA[63:0],link_out_30_TVALID,link_out_30_TLAST[0:0],link_out_31_TDATA[63:0],link_out_31_TVALID,link_out_31_TLAST[0:0],link_out_32_TDATA[63:0],link_out_32_TVALID,link_out_32_TLAST[0:0],link_out_33_TDATA[63:0],link_out_33_TVALID,link_out_33_TLAST[0:0],link_out_34_TDATA[63:0],link_out_34_TVALID,link_out_34_TLAST[0:0],link_out_35_TDATA[63:0],link_out_35_TVALID,link_out_35_TLAST[0:0],link_out_36_TDATA[63:0],link_out_36_TVALID,link_out_36_TLAST[0:0],link_out_37_TDATA[63:0],link_out_37_TVALID,link_out_37_TLAST[0:0],link_out_38_TDATA[63:0],link_out_38_TVALID,link_out_38_TLAST[0:0],link_out_39_TDATA[63:0],link_out_39_TVALID,link_out_39_TLAST[0:0],link_out_40_TDATA[63:0],link_out_40_TVALID,link_out_40_TLAST[0:0],link_out_41_TDATA[63:0],link_out_41_TVALID,link_out_41_TLAST[0:0],link_out_42_TDATA[63:0],link_out_42_TVALID,link_out_42_TLAST[0:0],link_out_43_TDATA[63:0],link_out_43_TVALID,link_out_43_TLAST[0:0],link_out_44_TDATA[63:0],link_out_44_TVALID,link_out_44_TLAST[0:0],link_out_45_TDATA[63:0],link_out_45_TVALID,link_out_45_TLAST[0:0],link_out_46_TDATA[63:0],link_out_46_TVALID,link_out_46_TLAST[0:0],link_out_47_TDATA[63:0],link_out_47_TVALID,link_out_47_TLAST[0:0]" */;
  input ap_clk;
  input ap_rst_n;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  input link_out_00_TREADY;
  input link_out_01_TREADY;
  input link_out_02_TREADY;
  input link_out_03_TREADY;
  input link_out_04_TREADY;
  input link_out_05_TREADY;
  input link_out_06_TREADY;
  input link_out_07_TREADY;
  input link_out_08_TREADY;
  input link_out_09_TREADY;
  input link_out_10_TREADY;
  input link_out_11_TREADY;
  input link_out_12_TREADY;
  input link_out_13_TREADY;
  input link_out_14_TREADY;
  input link_out_15_TREADY;
  input link_out_16_TREADY;
  input link_out_17_TREADY;
  input link_out_18_TREADY;
  input link_out_19_TREADY;
  input link_out_20_TREADY;
  input link_out_21_TREADY;
  input link_out_22_TREADY;
  input link_out_23_TREADY;
  input link_out_24_TREADY;
  input link_out_25_TREADY;
  input link_out_26_TREADY;
  input link_out_27_TREADY;
  input link_out_28_TREADY;
  input link_out_29_TREADY;
  input link_out_30_TREADY;
  input link_out_31_TREADY;
  input link_out_32_TREADY;
  input link_out_33_TREADY;
  input link_out_34_TREADY;
  input link_out_35_TREADY;
  input link_out_36_TREADY;
  input link_out_37_TREADY;
  input link_out_38_TREADY;
  input link_out_39_TREADY;
  input link_out_40_TREADY;
  input link_out_41_TREADY;
  input link_out_42_TREADY;
  input link_out_43_TREADY;
  input link_out_44_TREADY;
  input link_out_45_TREADY;
  input link_out_46_TREADY;
  input link_out_47_TREADY;
  input [63:0]link_in_00_TDATA;
  input link_in_00_TVALID;
  output link_in_00_TREADY;
  input [0:0]link_in_00_TLAST;
  input [63:0]link_in_01_TDATA;
  input link_in_01_TVALID;
  output link_in_01_TREADY;
  input [0:0]link_in_01_TLAST;
  input [63:0]link_in_02_TDATA;
  input link_in_02_TVALID;
  output link_in_02_TREADY;
  input [0:0]link_in_02_TLAST;
  input [63:0]link_in_03_TDATA;
  input link_in_03_TVALID;
  output link_in_03_TREADY;
  input [0:0]link_in_03_TLAST;
  input [63:0]link_in_04_TDATA;
  input link_in_04_TVALID;
  output link_in_04_TREADY;
  input [0:0]link_in_04_TLAST;
  input [63:0]link_in_05_TDATA;
  input link_in_05_TVALID;
  output link_in_05_TREADY;
  input [0:0]link_in_05_TLAST;
  input [63:0]link_in_06_TDATA;
  input link_in_06_TVALID;
  output link_in_06_TREADY;
  input [0:0]link_in_06_TLAST;
  input [63:0]link_in_07_TDATA;
  input link_in_07_TVALID;
  output link_in_07_TREADY;
  input [0:0]link_in_07_TLAST;
  input [63:0]link_in_08_TDATA;
  input link_in_08_TVALID;
  output link_in_08_TREADY;
  input [0:0]link_in_08_TLAST;
  input [63:0]link_in_09_TDATA;
  input link_in_09_TVALID;
  output link_in_09_TREADY;
  input [0:0]link_in_09_TLAST;
  input [63:0]link_in_10_TDATA;
  input link_in_10_TVALID;
  output link_in_10_TREADY;
  input [0:0]link_in_10_TLAST;
  input [63:0]link_in_11_TDATA;
  input link_in_11_TVALID;
  output link_in_11_TREADY;
  input [0:0]link_in_11_TLAST;
  input [63:0]link_in_12_TDATA;
  input link_in_12_TVALID;
  output link_in_12_TREADY;
  input [0:0]link_in_12_TLAST;
  input [63:0]link_in_13_TDATA;
  input link_in_13_TVALID;
  output link_in_13_TREADY;
  input [0:0]link_in_13_TLAST;
  input [63:0]link_in_14_TDATA;
  input link_in_14_TVALID;
  output link_in_14_TREADY;
  input [0:0]link_in_14_TLAST;
  input [63:0]link_in_15_TDATA;
  input link_in_15_TVALID;
  output link_in_15_TREADY;
  input [0:0]link_in_15_TLAST;
  input [63:0]link_in_16_TDATA;
  input link_in_16_TVALID;
  output link_in_16_TREADY;
  input [0:0]link_in_16_TLAST;
  input [63:0]link_in_17_TDATA;
  input link_in_17_TVALID;
  output link_in_17_TREADY;
  input [0:0]link_in_17_TLAST;
  input [63:0]link_in_18_TDATA;
  input link_in_18_TVALID;
  output link_in_18_TREADY;
  input [0:0]link_in_18_TLAST;
  input [63:0]link_in_19_TDATA;
  input link_in_19_TVALID;
  output link_in_19_TREADY;
  input [0:0]link_in_19_TLAST;
  input [63:0]link_in_20_TDATA;
  input link_in_20_TVALID;
  output link_in_20_TREADY;
  input [0:0]link_in_20_TLAST;
  input [63:0]link_in_21_TDATA;
  input link_in_21_TVALID;
  output link_in_21_TREADY;
  input [0:0]link_in_21_TLAST;
  input [63:0]link_in_22_TDATA;
  input link_in_22_TVALID;
  output link_in_22_TREADY;
  input [0:0]link_in_22_TLAST;
  input [63:0]link_in_23_TDATA;
  input link_in_23_TVALID;
  output link_in_23_TREADY;
  input [0:0]link_in_23_TLAST;
  input [63:0]link_in_24_TDATA;
  input link_in_24_TVALID;
  output link_in_24_TREADY;
  input [0:0]link_in_24_TLAST;
  input [63:0]link_in_25_TDATA;
  input link_in_25_TVALID;
  output link_in_25_TREADY;
  input [0:0]link_in_25_TLAST;
  input [63:0]link_in_26_TDATA;
  input link_in_26_TVALID;
  output link_in_26_TREADY;
  input [0:0]link_in_26_TLAST;
  input [63:0]link_in_27_TDATA;
  input link_in_27_TVALID;
  output link_in_27_TREADY;
  input [0:0]link_in_27_TLAST;
  input [63:0]link_in_28_TDATA;
  input link_in_28_TVALID;
  output link_in_28_TREADY;
  input [0:0]link_in_28_TLAST;
  input [63:0]link_in_29_TDATA;
  input link_in_29_TVALID;
  output link_in_29_TREADY;
  input [0:0]link_in_29_TLAST;
  input [63:0]link_in_30_TDATA;
  input link_in_30_TVALID;
  output link_in_30_TREADY;
  input [0:0]link_in_30_TLAST;
  input [63:0]link_in_31_TDATA;
  input link_in_31_TVALID;
  output link_in_31_TREADY;
  input [0:0]link_in_31_TLAST;
  input [63:0]link_in_32_TDATA;
  input link_in_32_TVALID;
  output link_in_32_TREADY;
  input [0:0]link_in_32_TLAST;
  input [63:0]link_in_33_TDATA;
  input link_in_33_TVALID;
  output link_in_33_TREADY;
  input [0:0]link_in_33_TLAST;
  input [63:0]link_in_34_TDATA;
  input link_in_34_TVALID;
  output link_in_34_TREADY;
  input [0:0]link_in_34_TLAST;
  input [63:0]link_in_35_TDATA;
  input link_in_35_TVALID;
  output link_in_35_TREADY;
  input [0:0]link_in_35_TLAST;
  input [63:0]link_in_36_TDATA;
  input link_in_36_TVALID;
  output link_in_36_TREADY;
  input [0:0]link_in_36_TLAST;
  input [63:0]link_in_37_TDATA;
  input link_in_37_TVALID;
  output link_in_37_TREADY;
  input [0:0]link_in_37_TLAST;
  input [63:0]link_in_38_TDATA;
  input link_in_38_TVALID;
  output link_in_38_TREADY;
  input [0:0]link_in_38_TLAST;
  input [63:0]link_in_39_TDATA;
  input link_in_39_TVALID;
  output link_in_39_TREADY;
  input [0:0]link_in_39_TLAST;
  input [63:0]link_in_40_TDATA;
  input link_in_40_TVALID;
  output link_in_40_TREADY;
  input [0:0]link_in_40_TLAST;
  input [63:0]link_in_41_TDATA;
  input link_in_41_TVALID;
  output link_in_41_TREADY;
  input [0:0]link_in_41_TLAST;
  input [63:0]link_in_42_TDATA;
  input link_in_42_TVALID;
  output link_in_42_TREADY;
  input [0:0]link_in_42_TLAST;
  input [63:0]link_in_43_TDATA;
  input link_in_43_TVALID;
  output link_in_43_TREADY;
  input [0:0]link_in_43_TLAST;
  input [63:0]link_in_44_TDATA;
  input link_in_44_TVALID;
  output link_in_44_TREADY;
  input [0:0]link_in_44_TLAST;
  input [63:0]link_in_45_TDATA;
  input link_in_45_TVALID;
  output link_in_45_TREADY;
  input [0:0]link_in_45_TLAST;
  input [63:0]link_in_46_TDATA;
  input link_in_46_TVALID;
  output link_in_46_TREADY;
  input [0:0]link_in_46_TLAST;
  input [63:0]link_in_47_TDATA;
  input link_in_47_TVALID;
  output link_in_47_TREADY;
  input [0:0]link_in_47_TLAST;
  output [63:0]link_out_00_TDATA;
  output link_out_00_TVALID;
  output [0:0]link_out_00_TLAST;
  output [63:0]link_out_01_TDATA;
  output link_out_01_TVALID;
  output [0:0]link_out_01_TLAST;
  output [63:0]link_out_02_TDATA;
  output link_out_02_TVALID;
  output [0:0]link_out_02_TLAST;
  output [63:0]link_out_03_TDATA;
  output link_out_03_TVALID;
  output [0:0]link_out_03_TLAST;
  output [63:0]link_out_04_TDATA;
  output link_out_04_TVALID;
  output [0:0]link_out_04_TLAST;
  output [63:0]link_out_05_TDATA;
  output link_out_05_TVALID;
  output [0:0]link_out_05_TLAST;
  output [63:0]link_out_06_TDATA;
  output link_out_06_TVALID;
  output [0:0]link_out_06_TLAST;
  output [63:0]link_out_07_TDATA;
  output link_out_07_TVALID;
  output [0:0]link_out_07_TLAST;
  output [63:0]link_out_08_TDATA;
  output link_out_08_TVALID;
  output [0:0]link_out_08_TLAST;
  output [63:0]link_out_09_TDATA;
  output link_out_09_TVALID;
  output [0:0]link_out_09_TLAST;
  output [63:0]link_out_10_TDATA;
  output link_out_10_TVALID;
  output [0:0]link_out_10_TLAST;
  output [63:0]link_out_11_TDATA;
  output link_out_11_TVALID;
  output [0:0]link_out_11_TLAST;
  output [63:0]link_out_12_TDATA;
  output link_out_12_TVALID;
  output [0:0]link_out_12_TLAST;
  output [63:0]link_out_13_TDATA;
  output link_out_13_TVALID;
  output [0:0]link_out_13_TLAST;
  output [63:0]link_out_14_TDATA;
  output link_out_14_TVALID;
  output [0:0]link_out_14_TLAST;
  output [63:0]link_out_15_TDATA;
  output link_out_15_TVALID;
  output [0:0]link_out_15_TLAST;
  output [63:0]link_out_16_TDATA;
  output link_out_16_TVALID;
  output [0:0]link_out_16_TLAST;
  output [63:0]link_out_17_TDATA;
  output link_out_17_TVALID;
  output [0:0]link_out_17_TLAST;
  output [63:0]link_out_18_TDATA;
  output link_out_18_TVALID;
  output [0:0]link_out_18_TLAST;
  output [63:0]link_out_19_TDATA;
  output link_out_19_TVALID;
  output [0:0]link_out_19_TLAST;
  output [63:0]link_out_20_TDATA;
  output link_out_20_TVALID;
  output [0:0]link_out_20_TLAST;
  output [63:0]link_out_21_TDATA;
  output link_out_21_TVALID;
  output [0:0]link_out_21_TLAST;
  output [63:0]link_out_22_TDATA;
  output link_out_22_TVALID;
  output [0:0]link_out_22_TLAST;
  output [63:0]link_out_23_TDATA;
  output link_out_23_TVALID;
  output [0:0]link_out_23_TLAST;
  output [63:0]link_out_24_TDATA;
  output link_out_24_TVALID;
  output [0:0]link_out_24_TLAST;
  output [63:0]link_out_25_TDATA;
  output link_out_25_TVALID;
  output [0:0]link_out_25_TLAST;
  output [63:0]link_out_26_TDATA;
  output link_out_26_TVALID;
  output [0:0]link_out_26_TLAST;
  output [63:0]link_out_27_TDATA;
  output link_out_27_TVALID;
  output [0:0]link_out_27_TLAST;
  output [63:0]link_out_28_TDATA;
  output link_out_28_TVALID;
  output [0:0]link_out_28_TLAST;
  output [63:0]link_out_29_TDATA;
  output link_out_29_TVALID;
  output [0:0]link_out_29_TLAST;
  output [63:0]link_out_30_TDATA;
  output link_out_30_TVALID;
  output [0:0]link_out_30_TLAST;
  output [63:0]link_out_31_TDATA;
  output link_out_31_TVALID;
  output [0:0]link_out_31_TLAST;
  output [63:0]link_out_32_TDATA;
  output link_out_32_TVALID;
  output [0:0]link_out_32_TLAST;
  output [63:0]link_out_33_TDATA;
  output link_out_33_TVALID;
  output [0:0]link_out_33_TLAST;
  output [63:0]link_out_34_TDATA;
  output link_out_34_TVALID;
  output [0:0]link_out_34_TLAST;
  output [63:0]link_out_35_TDATA;
  output link_out_35_TVALID;
  output [0:0]link_out_35_TLAST;
  output [63:0]link_out_36_TDATA;
  output link_out_36_TVALID;
  output [0:0]link_out_36_TLAST;
  output [63:0]link_out_37_TDATA;
  output link_out_37_TVALID;
  output [0:0]link_out_37_TLAST;
  output [63:0]link_out_38_TDATA;
  output link_out_38_TVALID;
  output [0:0]link_out_38_TLAST;
  output [63:0]link_out_39_TDATA;
  output link_out_39_TVALID;
  output [0:0]link_out_39_TLAST;
  output [63:0]link_out_40_TDATA;
  output link_out_40_TVALID;
  output [0:0]link_out_40_TLAST;
  output [63:0]link_out_41_TDATA;
  output link_out_41_TVALID;
  output [0:0]link_out_41_TLAST;
  output [63:0]link_out_42_TDATA;
  output link_out_42_TVALID;
  output [0:0]link_out_42_TLAST;
  output [63:0]link_out_43_TDATA;
  output link_out_43_TVALID;
  output [0:0]link_out_43_TLAST;
  output [63:0]link_out_44_TDATA;
  output link_out_44_TVALID;
  output [0:0]link_out_44_TLAST;
  output [63:0]link_out_45_TDATA;
  output link_out_45_TVALID;
  output [0:0]link_out_45_TLAST;
  output [63:0]link_out_46_TDATA;
  output link_out_46_TVALID;
  output [0:0]link_out_46_TLAST;
  output [63:0]link_out_47_TDATA;
  output link_out_47_TVALID;
  output [0:0]link_out_47_TLAST;
endmodule
