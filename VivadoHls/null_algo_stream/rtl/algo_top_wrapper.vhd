library IEEE;
use IEEE.STD_LOGIC_1164.all;

use work.algo_pkg.all;

entity algo_top_wrapper is
  port (
    ap_clk   : in  std_logic;
    ap_rst   : in  std_logic;
    ap_start : in  std_logic;
    ap_done  : out std_logic;
    ap_idle  : out std_logic;
    ap_ready : out std_logic;

    -- Input Links 
    link_in_master : in  LinkMasterArrType(47 downto 0);
    link_in_slave  : out LinkSlaveArrType(47 downto 0);

    -- Output Links 
    link_out_master : out LinkMasterArrType(47 downto 0);
    link_out_slave  : in  LinkSlaveArrType(47 downto 0)
    );

end algo_top_wrapper;

architecture rtl of algo_top_wrapper is

  component algo_top
    port (
      ap_clk             : in  std_logic;
      ap_rst_n           : in  std_logic;
      ap_start           : in  std_logic;
      ap_done            : out std_logic;
      ap_idle            : out std_logic;
      ap_ready           : out std_logic;
      link_in_00_TVALID  : in  std_logic;
      link_in_01_TVALID  : in  std_logic;
      link_in_02_TVALID  : in  std_logic;
      link_in_03_TVALID  : in  std_logic;
      link_in_04_TVALID  : in  std_logic;
      link_in_05_TVALID  : in  std_logic;
      link_in_06_TVALID  : in  std_logic;
      link_in_07_TVALID  : in  std_logic;
      link_in_08_TVALID  : in  std_logic;
      link_in_09_TVALID  : in  std_logic;
      link_in_10_TVALID  : in  std_logic;
      link_in_11_TVALID  : in  std_logic;
      link_in_12_TVALID  : in  std_logic;
      link_in_13_TVALID  : in  std_logic;
      link_in_14_TVALID  : in  std_logic;
      link_in_15_TVALID  : in  std_logic;
      link_in_16_TVALID  : in  std_logic;
      link_in_17_TVALID  : in  std_logic;
      link_in_18_TVALID  : in  std_logic;
      link_in_19_TVALID  : in  std_logic;
      link_in_20_TVALID  : in  std_logic;
      link_in_21_TVALID  : in  std_logic;
      link_in_22_TVALID  : in  std_logic;
      link_in_23_TVALID  : in  std_logic;
      link_in_24_TVALID  : in  std_logic;
      link_in_25_TVALID  : in  std_logic;
      link_in_26_TVALID  : in  std_logic;
      link_in_27_TVALID  : in  std_logic;
      link_in_28_TVALID  : in  std_logic;
      link_in_29_TVALID  : in  std_logic;
      link_in_30_TVALID  : in  std_logic;
      link_in_31_TVALID  : in  std_logic;
      link_in_32_TVALID  : in  std_logic;
      link_in_33_TVALID  : in  std_logic;
      link_in_34_TVALID  : in  std_logic;
      link_in_35_TVALID  : in  std_logic;
      link_in_36_TVALID  : in  std_logic;
      link_in_37_TVALID  : in  std_logic;
      link_in_38_TVALID  : in  std_logic;
      link_in_39_TVALID  : in  std_logic;
      link_in_40_TVALID  : in  std_logic;
      link_in_41_TVALID  : in  std_logic;
      link_in_42_TVALID  : in  std_logic;
      link_in_43_TVALID  : in  std_logic;
      link_in_44_TVALID  : in  std_logic;
      link_in_45_TVALID  : in  std_logic;
      link_in_46_TVALID  : in  std_logic;
      link_in_47_TVALID  : in  std_logic;
      link_out_00_TREADY : in  std_logic;
      link_out_01_TREADY : in  std_logic;
      link_out_02_TREADY : in  std_logic;
      link_out_03_TREADY : in  std_logic;
      link_out_04_TREADY : in  std_logic;
      link_out_05_TREADY : in  std_logic;
      link_out_06_TREADY : in  std_logic;
      link_out_07_TREADY : in  std_logic;
      link_out_08_TREADY : in  std_logic;
      link_out_09_TREADY : in  std_logic;
      link_out_10_TREADY : in  std_logic;
      link_out_11_TREADY : in  std_logic;
      link_out_12_TREADY : in  std_logic;
      link_out_13_TREADY : in  std_logic;
      link_out_14_TREADY : in  std_logic;
      link_out_15_TREADY : in  std_logic;
      link_out_16_TREADY : in  std_logic;
      link_out_17_TREADY : in  std_logic;
      link_out_18_TREADY : in  std_logic;
      link_out_19_TREADY : in  std_logic;
      link_out_20_TREADY : in  std_logic;
      link_out_21_TREADY : in  std_logic;
      link_out_22_TREADY : in  std_logic;
      link_out_23_TREADY : in  std_logic;
      link_out_24_TREADY : in  std_logic;
      link_out_25_TREADY : in  std_logic;
      link_out_26_TREADY : in  std_logic;
      link_out_27_TREADY : in  std_logic;
      link_out_28_TREADY : in  std_logic;
      link_out_29_TREADY : in  std_logic;
      link_out_30_TREADY : in  std_logic;
      link_out_31_TREADY : in  std_logic;
      link_out_32_TREADY : in  std_logic;
      link_out_33_TREADY : in  std_logic;
      link_out_34_TREADY : in  std_logic;
      link_out_35_TREADY : in  std_logic;
      link_out_36_TREADY : in  std_logic;
      link_out_37_TREADY : in  std_logic;
      link_out_38_TREADY : in  std_logic;
      link_out_39_TREADY : in  std_logic;
      link_out_40_TREADY : in  std_logic;
      link_out_41_TREADY : in  std_logic;
      link_out_42_TREADY : in  std_logic;
      link_out_43_TREADY : in  std_logic;
      link_out_44_TREADY : in  std_logic;
      link_out_45_TREADY : in  std_logic;
      link_out_46_TREADY : in  std_logic;
      link_out_47_TREADY : in  std_logic;
      link_in_00_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_00_TREADY  : out std_logic;
      link_in_00_TLAST   : in  std_logic_vector (0 to 0);
      link_in_01_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_01_TREADY  : out std_logic;
      link_in_01_TLAST   : in  std_logic_vector (0 to 0);
      link_in_02_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_02_TREADY  : out std_logic;
      link_in_02_TLAST   : in  std_logic_vector (0 to 0);
      link_in_03_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_03_TREADY  : out std_logic;
      link_in_03_TLAST   : in  std_logic_vector (0 to 0);
      link_in_04_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_04_TREADY  : out std_logic;
      link_in_04_TLAST   : in  std_logic_vector (0 to 0);
      link_in_05_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_05_TREADY  : out std_logic;
      link_in_05_TLAST   : in  std_logic_vector (0 to 0);
      link_in_06_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_06_TREADY  : out std_logic;
      link_in_06_TLAST   : in  std_logic_vector (0 to 0);
      link_in_07_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_07_TREADY  : out std_logic;
      link_in_07_TLAST   : in  std_logic_vector (0 to 0);
      link_in_08_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_08_TREADY  : out std_logic;
      link_in_08_TLAST   : in  std_logic_vector (0 to 0);
      link_in_09_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_09_TREADY  : out std_logic;
      link_in_09_TLAST   : in  std_logic_vector (0 to 0);
      link_in_10_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_10_TREADY  : out std_logic;
      link_in_10_TLAST   : in  std_logic_vector (0 to 0);
      link_in_11_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_11_TREADY  : out std_logic;
      link_in_11_TLAST   : in  std_logic_vector (0 to 0);
      link_in_12_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_12_TREADY  : out std_logic;
      link_in_12_TLAST   : in  std_logic_vector (0 to 0);
      link_in_13_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_13_TREADY  : out std_logic;
      link_in_13_TLAST   : in  std_logic_vector (0 to 0);
      link_in_14_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_14_TREADY  : out std_logic;
      link_in_14_TLAST   : in  std_logic_vector (0 to 0);
      link_in_15_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_15_TREADY  : out std_logic;
      link_in_15_TLAST   : in  std_logic_vector (0 to 0);
      link_in_16_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_16_TREADY  : out std_logic;
      link_in_16_TLAST   : in  std_logic_vector (0 to 0);
      link_in_17_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_17_TREADY  : out std_logic;
      link_in_17_TLAST   : in  std_logic_vector (0 to 0);
      link_in_18_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_18_TREADY  : out std_logic;
      link_in_18_TLAST   : in  std_logic_vector (0 to 0);
      link_in_19_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_19_TREADY  : out std_logic;
      link_in_19_TLAST   : in  std_logic_vector (0 to 0);
      link_in_20_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_20_TREADY  : out std_logic;
      link_in_20_TLAST   : in  std_logic_vector (0 to 0);
      link_in_21_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_21_TREADY  : out std_logic;
      link_in_21_TLAST   : in  std_logic_vector (0 to 0);
      link_in_22_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_22_TREADY  : out std_logic;
      link_in_22_TLAST   : in  std_logic_vector (0 to 0);
      link_in_23_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_23_TREADY  : out std_logic;
      link_in_23_TLAST   : in  std_logic_vector (0 to 0);
      link_in_24_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_24_TREADY  : out std_logic;
      link_in_24_TLAST   : in  std_logic_vector (0 to 0);
      link_in_25_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_25_TREADY  : out std_logic;
      link_in_25_TLAST   : in  std_logic_vector (0 to 0);
      link_in_26_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_26_TREADY  : out std_logic;
      link_in_26_TLAST   : in  std_logic_vector (0 to 0);
      link_in_27_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_27_TREADY  : out std_logic;
      link_in_27_TLAST   : in  std_logic_vector (0 to 0);
      link_in_28_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_28_TREADY  : out std_logic;
      link_in_28_TLAST   : in  std_logic_vector (0 to 0);
      link_in_29_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_29_TREADY  : out std_logic;
      link_in_29_TLAST   : in  std_logic_vector (0 to 0);
      link_in_30_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_30_TREADY  : out std_logic;
      link_in_30_TLAST   : in  std_logic_vector (0 to 0);
      link_in_31_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_31_TREADY  : out std_logic;
      link_in_31_TLAST   : in  std_logic_vector (0 to 0);
      link_in_32_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_32_TREADY  : out std_logic;
      link_in_32_TLAST   : in  std_logic_vector (0 to 0);
      link_in_33_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_33_TREADY  : out std_logic;
      link_in_33_TLAST   : in  std_logic_vector (0 to 0);
      link_in_34_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_34_TREADY  : out std_logic;
      link_in_34_TLAST   : in  std_logic_vector (0 to 0);
      link_in_35_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_35_TREADY  : out std_logic;
      link_in_35_TLAST   : in  std_logic_vector (0 to 0);
      link_in_36_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_36_TREADY  : out std_logic;
      link_in_36_TLAST   : in  std_logic_vector (0 to 0);
      link_in_37_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_37_TREADY  : out std_logic;
      link_in_37_TLAST   : in  std_logic_vector (0 to 0);
      link_in_38_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_38_TREADY  : out std_logic;
      link_in_38_TLAST   : in  std_logic_vector (0 to 0);
      link_in_39_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_39_TREADY  : out std_logic;
      link_in_39_TLAST   : in  std_logic_vector (0 to 0);
      link_in_40_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_40_TREADY  : out std_logic;
      link_in_40_TLAST   : in  std_logic_vector (0 to 0);
      link_in_41_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_41_TREADY  : out std_logic;
      link_in_41_TLAST   : in  std_logic_vector (0 to 0);
      link_in_42_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_42_TREADY  : out std_logic;
      link_in_42_TLAST   : in  std_logic_vector (0 to 0);
      link_in_43_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_43_TREADY  : out std_logic;
      link_in_43_TLAST   : in  std_logic_vector (0 to 0);
      link_in_44_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_44_TREADY  : out std_logic;
      link_in_44_TLAST   : in  std_logic_vector (0 to 0);
      link_in_45_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_45_TREADY  : out std_logic;
      link_in_45_TLAST   : in  std_logic_vector (0 to 0);
      link_in_46_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_46_TREADY  : out std_logic;
      link_in_46_TLAST   : in  std_logic_vector (0 to 0);
      link_in_47_TDATA   : in  std_logic_vector (63 downto 0);
      link_in_47_TREADY  : out std_logic;
      link_in_47_TLAST   : in  std_logic_vector (0 to 0);
      link_out_00_TDATA  : out std_logic_vector (63 downto 0);
      link_out_00_TVALID : out std_logic;
      link_out_00_TLAST  : out std_logic_vector (0 to 0);
      link_out_01_TDATA  : out std_logic_vector (63 downto 0);
      link_out_01_TVALID : out std_logic;
      link_out_01_TLAST  : out std_logic_vector (0 to 0);
      link_out_02_TDATA  : out std_logic_vector (63 downto 0);
      link_out_02_TVALID : out std_logic;
      link_out_02_TLAST  : out std_logic_vector (0 to 0);
      link_out_03_TDATA  : out std_logic_vector (63 downto 0);
      link_out_03_TVALID : out std_logic;
      link_out_03_TLAST  : out std_logic_vector (0 to 0);
      link_out_04_TDATA  : out std_logic_vector (63 downto 0);
      link_out_04_TVALID : out std_logic;
      link_out_04_TLAST  : out std_logic_vector (0 to 0);
      link_out_05_TDATA  : out std_logic_vector (63 downto 0);
      link_out_05_TVALID : out std_logic;
      link_out_05_TLAST  : out std_logic_vector (0 to 0);
      link_out_06_TDATA  : out std_logic_vector (63 downto 0);
      link_out_06_TVALID : out std_logic;
      link_out_06_TLAST  : out std_logic_vector (0 to 0);
      link_out_07_TDATA  : out std_logic_vector (63 downto 0);
      link_out_07_TVALID : out std_logic;
      link_out_07_TLAST  : out std_logic_vector (0 to 0);
      link_out_08_TDATA  : out std_logic_vector (63 downto 0);
      link_out_08_TVALID : out std_logic;
      link_out_08_TLAST  : out std_logic_vector (0 to 0);
      link_out_09_TDATA  : out std_logic_vector (63 downto 0);
      link_out_09_TVALID : out std_logic;
      link_out_09_TLAST  : out std_logic_vector (0 to 0);
      link_out_10_TDATA  : out std_logic_vector (63 downto 0);
      link_out_10_TVALID : out std_logic;
      link_out_10_TLAST  : out std_logic_vector (0 to 0);
      link_out_11_TDATA  : out std_logic_vector (63 downto 0);
      link_out_11_TVALID : out std_logic;
      link_out_11_TLAST  : out std_logic_vector (0 to 0);
      link_out_12_TDATA  : out std_logic_vector (63 downto 0);
      link_out_12_TVALID : out std_logic;
      link_out_12_TLAST  : out std_logic_vector (0 to 0);
      link_out_13_TDATA  : out std_logic_vector (63 downto 0);
      link_out_13_TVALID : out std_logic;
      link_out_13_TLAST  : out std_logic_vector (0 to 0);
      link_out_14_TDATA  : out std_logic_vector (63 downto 0);
      link_out_14_TVALID : out std_logic;
      link_out_14_TLAST  : out std_logic_vector (0 to 0);
      link_out_15_TDATA  : out std_logic_vector (63 downto 0);
      link_out_15_TVALID : out std_logic;
      link_out_15_TLAST  : out std_logic_vector (0 to 0);
      link_out_16_TDATA  : out std_logic_vector (63 downto 0);
      link_out_16_TVALID : out std_logic;
      link_out_16_TLAST  : out std_logic_vector (0 to 0);
      link_out_17_TDATA  : out std_logic_vector (63 downto 0);
      link_out_17_TVALID : out std_logic;
      link_out_17_TLAST  : out std_logic_vector (0 to 0);
      link_out_18_TDATA  : out std_logic_vector (63 downto 0);
      link_out_18_TVALID : out std_logic;
      link_out_18_TLAST  : out std_logic_vector (0 to 0);
      link_out_19_TDATA  : out std_logic_vector (63 downto 0);
      link_out_19_TVALID : out std_logic;
      link_out_19_TLAST  : out std_logic_vector (0 to 0);
      link_out_20_TDATA  : out std_logic_vector (63 downto 0);
      link_out_20_TVALID : out std_logic;
      link_out_20_TLAST  : out std_logic_vector (0 to 0);
      link_out_21_TDATA  : out std_logic_vector (63 downto 0);
      link_out_21_TVALID : out std_logic;
      link_out_21_TLAST  : out std_logic_vector (0 to 0);
      link_out_22_TDATA  : out std_logic_vector (63 downto 0);
      link_out_22_TVALID : out std_logic;
      link_out_22_TLAST  : out std_logic_vector (0 to 0);
      link_out_23_TDATA  : out std_logic_vector (63 downto 0);
      link_out_23_TVALID : out std_logic;
      link_out_23_TLAST  : out std_logic_vector (0 to 0);
      link_out_24_TDATA  : out std_logic_vector (63 downto 0);
      link_out_24_TVALID : out std_logic;
      link_out_24_TLAST  : out std_logic_vector (0 to 0);
      link_out_25_TDATA  : out std_logic_vector (63 downto 0);
      link_out_25_TVALID : out std_logic;
      link_out_25_TLAST  : out std_logic_vector (0 to 0);
      link_out_26_TDATA  : out std_logic_vector (63 downto 0);
      link_out_26_TVALID : out std_logic;
      link_out_26_TLAST  : out std_logic_vector (0 to 0);
      link_out_27_TDATA  : out std_logic_vector (63 downto 0);
      link_out_27_TVALID : out std_logic;
      link_out_27_TLAST  : out std_logic_vector (0 to 0);
      link_out_28_TDATA  : out std_logic_vector (63 downto 0);
      link_out_28_TVALID : out std_logic;
      link_out_28_TLAST  : out std_logic_vector (0 to 0);
      link_out_29_TDATA  : out std_logic_vector (63 downto 0);
      link_out_29_TVALID : out std_logic;
      link_out_29_TLAST  : out std_logic_vector (0 to 0);
      link_out_30_TDATA  : out std_logic_vector (63 downto 0);
      link_out_30_TVALID : out std_logic;
      link_out_30_TLAST  : out std_logic_vector (0 to 0);
      link_out_31_TDATA  : out std_logic_vector (63 downto 0);
      link_out_31_TVALID : out std_logic;
      link_out_31_TLAST  : out std_logic_vector (0 to 0);
      link_out_32_TDATA  : out std_logic_vector (63 downto 0);
      link_out_32_TVALID : out std_logic;
      link_out_32_TLAST  : out std_logic_vector (0 to 0);
      link_out_33_TDATA  : out std_logic_vector (63 downto 0);
      link_out_33_TVALID : out std_logic;
      link_out_33_TLAST  : out std_logic_vector (0 to 0);
      link_out_34_TDATA  : out std_logic_vector (63 downto 0);
      link_out_34_TVALID : out std_logic;
      link_out_34_TLAST  : out std_logic_vector (0 to 0);
      link_out_35_TDATA  : out std_logic_vector (63 downto 0);
      link_out_35_TVALID : out std_logic;
      link_out_35_TLAST  : out std_logic_vector (0 to 0);
      link_out_36_TDATA  : out std_logic_vector (63 downto 0);
      link_out_36_TVALID : out std_logic;
      link_out_36_TLAST  : out std_logic_vector (0 to 0);
      link_out_37_TDATA  : out std_logic_vector (63 downto 0);
      link_out_37_TVALID : out std_logic;
      link_out_37_TLAST  : out std_logic_vector (0 to 0);
      link_out_38_TDATA  : out std_logic_vector (63 downto 0);
      link_out_38_TVALID : out std_logic;
      link_out_38_TLAST  : out std_logic_vector (0 to 0);
      link_out_39_TDATA  : out std_logic_vector (63 downto 0);
      link_out_39_TVALID : out std_logic;
      link_out_39_TLAST  : out std_logic_vector (0 to 0);
      link_out_40_TDATA  : out std_logic_vector (63 downto 0);
      link_out_40_TVALID : out std_logic;
      link_out_40_TLAST  : out std_logic_vector (0 to 0);
      link_out_41_TDATA  : out std_logic_vector (63 downto 0);
      link_out_41_TVALID : out std_logic;
      link_out_41_TLAST  : out std_logic_vector (0 to 0);
      link_out_42_TDATA  : out std_logic_vector (63 downto 0);
      link_out_42_TVALID : out std_logic;
      link_out_42_TLAST  : out std_logic_vector (0 to 0);
      link_out_43_TDATA  : out std_logic_vector (63 downto 0);
      link_out_43_TVALID : out std_logic;
      link_out_43_TLAST  : out std_logic_vector (0 to 0);
      link_out_44_TDATA  : out std_logic_vector (63 downto 0);
      link_out_44_TVALID : out std_logic;
      link_out_44_TLAST  : out std_logic_vector (0 to 0);
      link_out_45_TDATA  : out std_logic_vector (63 downto 0);
      link_out_45_TVALID : out std_logic;
      link_out_45_TLAST  : out std_logic_vector (0 to 0);
      link_out_46_TDATA  : out std_logic_vector (63 downto 0);
      link_out_46_TVALID : out std_logic;
      link_out_46_TLAST  : out std_logic_vector (0 to 0);
      link_out_47_TDATA  : out std_logic_vector (63 downto 0);
      link_out_47_TVALID : out std_logic;
      link_out_47_TLAST  : out std_logic_vector (0 to 0)
      );
      end component;

    signal ap_rst_n : std_logic;

    begin
    
    ap_rst_n <= not ap_rst;

      i_algo_top : algo_top
        port map (
          ap_clk   => ap_clk,
          ap_rst_n => ap_rst_n,
          ap_start => ap_start,
          ap_done  => ap_done,
          ap_idle  => ap_idle,
          ap_ready => ap_ready,

          link_in_00_TDATA  => link_in_master(0).tdata,
          link_in_00_TLAST(0)  => link_in_master(0).tlast,
          link_in_00_TVALID => link_in_master(0).tvalid,
          link_in_00_TREADY => link_in_slave(0).tready,
          link_in_01_TDATA  => link_in_master(1).tdata,
          link_in_01_TLAST(0)  => link_in_master(1).tlast,
          link_in_01_TVALID => link_in_master(1).tvalid,
          link_in_01_TREADY => link_in_slave(1).tready,
          link_in_02_TDATA  => link_in_master(2).tdata,
          link_in_02_TLAST(0)  => link_in_master(2).tlast,
          link_in_02_TVALID => link_in_master(2).tvalid,
          link_in_02_TREADY => link_in_slave(2).tready,
          link_in_03_TDATA  => link_in_master(3).tdata,
          link_in_03_TLAST(0)  => link_in_master(3).tlast,
          link_in_03_TVALID => link_in_master(3).tvalid,
          link_in_03_TREADY => link_in_slave(3).tready,
          link_in_04_TDATA  => link_in_master(4).tdata,
          link_in_04_TLAST(0)  => link_in_master(4).tlast,
          link_in_04_TVALID => link_in_master(4).tvalid,
          link_in_04_TREADY => link_in_slave(4).tready,
          link_in_05_TDATA  => link_in_master(5).tdata,
          link_in_05_TLAST(0)  => link_in_master(5).tlast,
          link_in_05_TVALID => link_in_master(5).tvalid,
          link_in_05_TREADY => link_in_slave(5).tready,
          link_in_06_TDATA  => link_in_master(6).tdata,
          link_in_06_TLAST(0)  => link_in_master(6).tlast,
          link_in_06_TVALID => link_in_master(6).tvalid,
          link_in_06_TREADY => link_in_slave(6).tready,
          link_in_07_TDATA  => link_in_master(7).tdata,
          link_in_07_TLAST(0)  => link_in_master(7).tlast,
          link_in_07_TVALID => link_in_master(7).tvalid,
          link_in_07_TREADY => link_in_slave(7).tready,
          link_in_08_TDATA  => link_in_master(8).tdata,
          link_in_08_TLAST(0)  => link_in_master(8).tlast,
          link_in_08_TVALID => link_in_master(8).tvalid,
          link_in_08_TREADY => link_in_slave(8).tready,
          link_in_09_TDATA  => link_in_master(9).tdata,
          link_in_09_TLAST(0)  => link_in_master(9).tlast,
          link_in_09_TVALID => link_in_master(9).tvalid,
          link_in_09_TREADY => link_in_slave(9).tready,

          link_in_10_TDATA  => link_in_master(10).tdata,
          link_in_10_TLAST(0)  => link_in_master(10).tlast,
          link_in_10_TVALID => link_in_master(10).tvalid,
          link_in_10_TREADY => link_in_slave(10).tready,
          link_in_11_TDATA  => link_in_master(11).tdata,
          link_in_11_TLAST(0)  => link_in_master(11).tlast,
          link_in_11_TVALID => link_in_master(11).tvalid,
          link_in_11_TREADY => link_in_slave(11).tready,
          link_in_12_TDATA  => link_in_master(12).tdata,
          link_in_12_TLAST(0)  => link_in_master(12).tlast,
          link_in_12_TVALID => link_in_master(12).tvalid,
          link_in_12_TREADY => link_in_slave(12).tready,
          link_in_13_TDATA  => link_in_master(13).tdata,
          link_in_13_TLAST(0)  => link_in_master(13).tlast,
          link_in_13_TVALID => link_in_master(13).tvalid,
          link_in_13_TREADY => link_in_slave(13).tready,
          link_in_14_TDATA  => link_in_master(14).tdata,
          link_in_14_TLAST(0)  => link_in_master(14).tlast,
          link_in_14_TVALID => link_in_master(14).tvalid,
          link_in_14_TREADY => link_in_slave(14).tready,
          link_in_15_TDATA  => link_in_master(15).tdata,
          link_in_15_TLAST(0)  => link_in_master(15).tlast,
          link_in_15_TVALID => link_in_master(15).tvalid,
          link_in_15_TREADY => link_in_slave(15).tready,
          link_in_16_TDATA  => link_in_master(16).tdata,
          link_in_16_TLAST(0)  => link_in_master(16).tlast,
          link_in_16_TVALID => link_in_master(16).tvalid,
          link_in_16_TREADY => link_in_slave(16).tready,
          link_in_17_TDATA  => link_in_master(17).tdata,
          link_in_17_TLAST(0)  => link_in_master(17).tlast,
          link_in_17_TVALID => link_in_master(17).tvalid,
          link_in_17_TREADY => link_in_slave(17).tready,
          link_in_18_TDATA  => link_in_master(18).tdata,
          link_in_18_TLAST(0)  => link_in_master(18).tlast,
          link_in_18_TVALID => link_in_master(18).tvalid,
          link_in_18_TREADY => link_in_slave(18).tready,
          link_in_19_TDATA  => link_in_master(19).tdata,
          link_in_19_TLAST(0)  => link_in_master(19).tlast,
          link_in_19_TVALID => link_in_master(19).tvalid,
          link_in_19_TREADY => link_in_slave(19).tready,

          link_in_20_TDATA  => link_in_master(20).tdata,
          link_in_20_TLAST(0)  => link_in_master(20).tlast,
          link_in_20_TVALID => link_in_master(20).tvalid,
          link_in_20_TREADY => link_in_slave(20).tready,
          link_in_21_TDATA  => link_in_master(21).tdata,
          link_in_21_TLAST(0)  => link_in_master(21).tlast,
          link_in_21_TVALID => link_in_master(21).tvalid,
          link_in_21_TREADY => link_in_slave(21).tready,
          link_in_22_TDATA  => link_in_master(22).tdata,
          link_in_22_TLAST(0)  => link_in_master(22).tlast,
          link_in_22_TVALID => link_in_master(22).tvalid,
          link_in_22_TREADY => link_in_slave(22).tready,
          link_in_23_TDATA  => link_in_master(23).tdata,
          link_in_23_TLAST(0)  => link_in_master(23).tlast,
          link_in_23_TVALID => link_in_master(23).tvalid,
          link_in_23_TREADY => link_in_slave(23).tready,
          link_in_24_TDATA  => link_in_master(24).tdata,
          link_in_24_TLAST(0)  => link_in_master(24).tlast,
          link_in_24_TVALID => link_in_master(24).tvalid,
          link_in_24_TREADY => link_in_slave(24).tready,
          link_in_25_TDATA  => link_in_master(25).tdata,
          link_in_25_TLAST(0)  => link_in_master(25).tlast,
          link_in_25_TVALID => link_in_master(25).tvalid,
          link_in_25_TREADY => link_in_slave(25).tready,
          link_in_26_TDATA  => link_in_master(26).tdata,
          link_in_26_TLAST(0)  => link_in_master(26).tlast,
          link_in_26_TVALID => link_in_master(26).tvalid,
          link_in_26_TREADY => link_in_slave(26).tready,
          link_in_27_TDATA  => link_in_master(27).tdata,
          link_in_27_TLAST(0)  => link_in_master(27).tlast,
          link_in_27_TVALID => link_in_master(27).tvalid,
          link_in_27_TREADY => link_in_slave(27).tready,
          link_in_28_TDATA  => link_in_master(28).tdata,
          link_in_28_TLAST(0)  => link_in_master(28).tlast,
          link_in_28_TVALID => link_in_master(28).tvalid,
          link_in_28_TREADY => link_in_slave(28).tready,
          link_in_29_TDATA  => link_in_master(29).tdata,
          link_in_29_TLAST(0)  => link_in_master(29).tlast,
          link_in_29_TVALID => link_in_master(29).tvalid,
          link_in_29_TREADY => link_in_slave(29).tready,

          link_in_30_TDATA  => link_in_master(30).tdata,
          link_in_30_TLAST(0)  => link_in_master(30).tlast,
          link_in_30_TVALID => link_in_master(30).tvalid,
          link_in_30_TREADY => link_in_slave(30).tready,
          link_in_31_TDATA  => link_in_master(31).tdata,
          link_in_31_TLAST(0)  => link_in_master(31).tlast,
          link_in_31_TVALID => link_in_master(31).tvalid,
          link_in_31_TREADY => link_in_slave(31).tready,
          link_in_32_TDATA  => link_in_master(32).tdata,
          link_in_32_TLAST(0)  => link_in_master(32).tlast,
          link_in_32_TVALID => link_in_master(32).tvalid,
          link_in_32_TREADY => link_in_slave(32).tready,
          link_in_33_TDATA  => link_in_master(33).tdata,
          link_in_33_TLAST(0)  => link_in_master(33).tlast,
          link_in_33_TVALID => link_in_master(33).tvalid,
          link_in_33_TREADY => link_in_slave(33).tready,
          link_in_34_TDATA  => link_in_master(34).tdata,
          link_in_34_TLAST(0)  => link_in_master(34).tlast,
          link_in_34_TVALID => link_in_master(34).tvalid,
          link_in_34_TREADY => link_in_slave(34).tready,
          link_in_35_TDATA  => link_in_master(35).tdata,
          link_in_35_TLAST(0)  => link_in_master(35).tlast,
          link_in_35_TVALID => link_in_master(35).tvalid,
          link_in_35_TREADY => link_in_slave(35).tready,
          link_in_36_TDATA  => link_in_master(36).tdata,
          link_in_36_TLAST(0)  => link_in_master(36).tlast,
          link_in_36_TVALID => link_in_master(36).tvalid,
          link_in_36_TREADY => link_in_slave(36).tready,
          link_in_37_TDATA  => link_in_master(37).tdata,
          link_in_37_TLAST(0)  => link_in_master(37).tlast,
          link_in_37_TVALID => link_in_master(37).tvalid,
          link_in_37_TREADY => link_in_slave(37).tready,
          link_in_38_TDATA  => link_in_master(38).tdata,
          link_in_38_TLAST(0)  => link_in_master(38).tlast,
          link_in_38_TVALID => link_in_master(38).tvalid,
          link_in_38_TREADY => link_in_slave(38).tready,
          link_in_39_TDATA  => link_in_master(39).tdata,
          link_in_39_TLAST(0)  => link_in_master(39).tlast,
          link_in_39_TVALID => link_in_master(39).tvalid,
          link_in_39_TREADY => link_in_slave(39).tready,

          link_in_40_TDATA  => link_in_master(40).tdata,
          link_in_40_TLAST(0)  => link_in_master(40).tlast,
          link_in_40_TVALID => link_in_master(40).tvalid,
          link_in_40_TREADY => link_in_slave(40).tready,
          link_in_41_TDATA  => link_in_master(41).tdata,
          link_in_41_TLAST(0)  => link_in_master(41).tlast,
          link_in_41_TVALID => link_in_master(41).tvalid,
          link_in_41_TREADY => link_in_slave(41).tready,
          link_in_42_TDATA  => link_in_master(42).tdata,
          link_in_42_TLAST(0)  => link_in_master(42).tlast,
          link_in_42_TVALID => link_in_master(42).tvalid,
          link_in_42_TREADY => link_in_slave(42).tready,
          link_in_43_TDATA  => link_in_master(43).tdata,
          link_in_43_TLAST(0)  => link_in_master(43).tlast,
          link_in_43_TVALID => link_in_master(43).tvalid,
          link_in_43_TREADY => link_in_slave(43).tready,
          link_in_44_TDATA  => link_in_master(44).tdata,
          link_in_44_TLAST(0)  => link_in_master(44).tlast,
          link_in_44_TVALID => link_in_master(44).tvalid,
          link_in_44_TREADY => link_in_slave(44).tready,
          link_in_45_TDATA  => link_in_master(45).tdata,
          link_in_45_TLAST(0)  => link_in_master(45).tlast,
          link_in_45_TVALID => link_in_master(45).tvalid,
          link_in_45_TREADY => link_in_slave(45).tready,
          link_in_46_TDATA  => link_in_master(46).tdata,
          link_in_46_TLAST(0)  => link_in_master(46).tlast,
          link_in_46_TVALID => link_in_master(46).tvalid,
          link_in_46_TREADY => link_in_slave(46).tready,
          link_in_47_TDATA  => link_in_master(47).tdata,
          link_in_47_TLAST(0)  => link_in_master(47).tlast,
          link_in_47_TVALID => link_in_master(47).tvalid,
          link_in_47_TREADY => link_in_slave(47).tready,

          ---

          link_out_00_TDATA  => link_out_master(0).tdata,
          link_out_00_TLAST(0)  => link_out_master(0).tlast,
          link_out_00_TVALID => link_out_master(0).tvalid,
          link_out_00_TREADY => link_out_slave(0).tready,
          link_out_01_TDATA  => link_out_master(1).tdata,
          link_out_01_TLAST(0)  => link_out_master(1).tlast,
          link_out_01_TVALID => link_out_master(1).tvalid,
          link_out_01_TREADY => link_out_slave(1).tready,
          link_out_02_TDATA  => link_out_master(2).tdata,
          link_out_02_TLAST(0)  => link_out_master(2).tlast,
          link_out_02_TVALID => link_out_master(2).tvalid,
          link_out_02_TREADY => link_out_slave(2).tready,
          link_out_03_TDATA  => link_out_master(3).tdata,
          link_out_03_TLAST(0)  => link_out_master(3).tlast,
          link_out_03_TVALID => link_out_master(3).tvalid,
          link_out_03_TREADY => link_out_slave(3).tready,
          link_out_04_TDATA  => link_out_master(4).tdata,
          link_out_04_TLAST(0)  => link_out_master(4).tlast,
          link_out_04_TVALID => link_out_master(4).tvalid,
          link_out_04_TREADY => link_out_slave(4).tready,
          link_out_05_TDATA  => link_out_master(5).tdata,
          link_out_05_TLAST(0)  => link_out_master(5).tlast,
          link_out_05_TVALID => link_out_master(5).tvalid,
          link_out_05_TREADY => link_out_slave(5).tready,
          link_out_06_TDATA  => link_out_master(6).tdata,
          link_out_06_TLAST(0)  => link_out_master(6).tlast,
          link_out_06_TVALID => link_out_master(6).tvalid,
          link_out_06_TREADY => link_out_slave(6).tready,
          link_out_07_TDATA  => link_out_master(7).tdata,
          link_out_07_TLAST(0)  => link_out_master(7).tlast,
          link_out_07_TVALID => link_out_master(7).tvalid,
          link_out_07_TREADY => link_out_slave(7).tready,
          link_out_08_TDATA  => link_out_master(8).tdata,
          link_out_08_TLAST(0)  => link_out_master(8).tlast,
          link_out_08_TVALID => link_out_master(8).tvalid,
          link_out_08_TREADY => link_out_slave(8).tready,
          link_out_09_TDATA  => link_out_master(9).tdata,
          link_out_09_TLAST(0)  => link_out_master(9).tlast,
          link_out_09_TVALID => link_out_master(9).tvalid,
          link_out_09_TREADY => link_out_slave(9).tready,

          link_out_10_TDATA  => link_out_master(10).tdata,
          link_out_10_TLAST(0)  => link_out_master(10).tlast,
          link_out_10_TVALID => link_out_master(10).tvalid,
          link_out_10_TREADY => link_out_slave(10).tready,
          link_out_11_TDATA  => link_out_master(11).tdata,
          link_out_11_TLAST(0)  => link_out_master(11).tlast,
          link_out_11_TVALID => link_out_master(11).tvalid,
          link_out_11_TREADY => link_out_slave(11).tready,
          link_out_12_TDATA  => link_out_master(12).tdata,
          link_out_12_TLAST(0)  => link_out_master(12).tlast,
          link_out_12_TVALID => link_out_master(12).tvalid,
          link_out_12_TREADY => link_out_slave(12).tready,
          link_out_13_TDATA  => link_out_master(13).tdata,
          link_out_13_TLAST(0)  => link_out_master(13).tlast,
          link_out_13_TVALID => link_out_master(13).tvalid,
          link_out_13_TREADY => link_out_slave(13).tready,
          link_out_14_TDATA  => link_out_master(14).tdata,
          link_out_14_TLAST(0)  => link_out_master(14).tlast,
          link_out_14_TVALID => link_out_master(14).tvalid,
          link_out_14_TREADY => link_out_slave(14).tready,
          link_out_15_TDATA  => link_out_master(15).tdata,
          link_out_15_TLAST(0)  => link_out_master(15).tlast,
          link_out_15_TVALID => link_out_master(15).tvalid,
          link_out_15_TREADY => link_out_slave(15).tready,
          link_out_16_TDATA  => link_out_master(16).tdata,
          link_out_16_TLAST(0)  => link_out_master(16).tlast,
          link_out_16_TVALID => link_out_master(16).tvalid,
          link_out_16_TREADY => link_out_slave(16).tready,
          link_out_17_TDATA  => link_out_master(17).tdata,
          link_out_17_TLAST(0)  => link_out_master(17).tlast,
          link_out_17_TVALID => link_out_master(17).tvalid,
          link_out_17_TREADY => link_out_slave(17).tready,
          link_out_18_TDATA  => link_out_master(18).tdata,
          link_out_18_TLAST(0)  => link_out_master(18).tlast,
          link_out_18_TVALID => link_out_master(18).tvalid,
          link_out_18_TREADY => link_out_slave(18).tready,
          link_out_19_TDATA  => link_out_master(19).tdata,
          link_out_19_TLAST(0)  => link_out_master(19).tlast,
          link_out_19_TVALID => link_out_master(19).tvalid,
          link_out_19_TREADY => link_out_slave(19).tready,

          link_out_20_TDATA  => link_out_master(20).tdata,
          link_out_20_TLAST(0)  => link_out_master(20).tlast,
          link_out_20_TVALID => link_out_master(20).tvalid,
          link_out_20_TREADY => link_out_slave(20).tready,
          link_out_21_TDATA  => link_out_master(21).tdata,
          link_out_21_TLAST(0)  => link_out_master(21).tlast,
          link_out_21_TVALID => link_out_master(21).tvalid,
          link_out_21_TREADY => link_out_slave(21).tready,
          link_out_22_TDATA  => link_out_master(22).tdata,
          link_out_22_TLAST(0)  => link_out_master(22).tlast,
          link_out_22_TVALID => link_out_master(22).tvalid,
          link_out_22_TREADY => link_out_slave(22).tready,
          link_out_23_TDATA  => link_out_master(23).tdata,
          link_out_23_TLAST(0)  => link_out_master(23).tlast,
          link_out_23_TVALID => link_out_master(23).tvalid,
          link_out_23_TREADY => link_out_slave(23).tready,
          link_out_24_TDATA  => link_out_master(24).tdata,
          link_out_24_TLAST(0)  => link_out_master(24).tlast,
          link_out_24_TVALID => link_out_master(24).tvalid,
          link_out_24_TREADY => link_out_slave(24).tready,
          link_out_25_TDATA  => link_out_master(25).tdata,
          link_out_25_TLAST(0)  => link_out_master(25).tlast,
          link_out_25_TVALID => link_out_master(25).tvalid,
          link_out_25_TREADY => link_out_slave(25).tready,
          link_out_26_TDATA  => link_out_master(26).tdata,
          link_out_26_TLAST(0)  => link_out_master(26).tlast,
          link_out_26_TVALID => link_out_master(26).tvalid,
          link_out_26_TREADY => link_out_slave(26).tready,
          link_out_27_TDATA  => link_out_master(27).tdata,
          link_out_27_TLAST(0)  => link_out_master(27).tlast,
          link_out_27_TVALID => link_out_master(27).tvalid,
          link_out_27_TREADY => link_out_slave(27).tready,
          link_out_28_TDATA  => link_out_master(28).tdata,
          link_out_28_TLAST(0)  => link_out_master(28).tlast,
          link_out_28_TVALID => link_out_master(28).tvalid,
          link_out_28_TREADY => link_out_slave(28).tready,
          link_out_29_TDATA  => link_out_master(29).tdata,
          link_out_29_TLAST(0)  => link_out_master(29).tlast,
          link_out_29_TVALID => link_out_master(29).tvalid,
          link_out_29_TREADY => link_out_slave(29).tready,

          link_out_30_TDATA  => link_out_master(30).tdata,
          link_out_30_TLAST(0)  => link_out_master(30).tlast,
          link_out_30_TVALID => link_out_master(30).tvalid,
          link_out_30_TREADY => link_out_slave(30).tready,
          link_out_31_TDATA  => link_out_master(31).tdata,
          link_out_31_TLAST(0)  => link_out_master(31).tlast,
          link_out_31_TVALID => link_out_master(31).tvalid,
          link_out_31_TREADY => link_out_slave(31).tready,
          link_out_32_TDATA  => link_out_master(32).tdata,
          link_out_32_TLAST(0)  => link_out_master(32).tlast,
          link_out_32_TVALID => link_out_master(32).tvalid,
          link_out_32_TREADY => link_out_slave(32).tready,
          link_out_33_TDATA  => link_out_master(33).tdata,
          link_out_33_TLAST(0)  => link_out_master(33).tlast,
          link_out_33_TVALID => link_out_master(33).tvalid,
          link_out_33_TREADY => link_out_slave(33).tready,
          link_out_34_TDATA  => link_out_master(34).tdata,
          link_out_34_TLAST(0)  => link_out_master(34).tlast,
          link_out_34_TVALID => link_out_master(34).tvalid,
          link_out_34_TREADY => link_out_slave(34).tready,
          link_out_35_TDATA  => link_out_master(35).tdata,
          link_out_35_TLAST(0)  => link_out_master(35).tlast,
          link_out_35_TVALID => link_out_master(35).tvalid,
          link_out_35_TREADY => link_out_slave(35).tready,
          link_out_36_TDATA  => link_out_master(36).tdata,
          link_out_36_TLAST(0)  => link_out_master(36).tlast,
          link_out_36_TVALID => link_out_master(36).tvalid,
          link_out_36_TREADY => link_out_slave(36).tready,
          link_out_37_TDATA  => link_out_master(37).tdata,
          link_out_37_TLAST(0)  => link_out_master(37).tlast,
          link_out_37_TVALID => link_out_master(37).tvalid,
          link_out_37_TREADY => link_out_slave(37).tready,
          link_out_38_TDATA  => link_out_master(38).tdata,
          link_out_38_TLAST(0)  => link_out_master(38).tlast,
          link_out_38_TVALID => link_out_master(38).tvalid,
          link_out_38_TREADY => link_out_slave(38).tready,
          link_out_39_TDATA  => link_out_master(39).tdata,
          link_out_39_TLAST(0)  => link_out_master(39).tlast,
          link_out_39_TVALID => link_out_master(39).tvalid,
          link_out_39_TREADY => link_out_slave(39).tready,

          link_out_40_TDATA  => link_out_master(40).tdata,
          link_out_40_TLAST(0)  => link_out_master(40).tlast,
          link_out_40_TVALID => link_out_master(40).tvalid,
          link_out_40_TREADY => link_out_slave(40).tready,
          link_out_41_TDATA  => link_out_master(41).tdata,
          link_out_41_TLAST(0)  => link_out_master(41).tlast,
          link_out_41_TVALID => link_out_master(41).tvalid,
          link_out_41_TREADY => link_out_slave(41).tready,
          link_out_42_TDATA  => link_out_master(42).tdata,
          link_out_42_TLAST(0)  => link_out_master(42).tlast,
          link_out_42_TVALID => link_out_master(42).tvalid,
          link_out_42_TREADY => link_out_slave(42).tready,
          link_out_43_TDATA  => link_out_master(43).tdata,
          link_out_43_TLAST(0)  => link_out_master(43).tlast,
          link_out_43_TVALID => link_out_master(43).tvalid,
          link_out_43_TREADY => link_out_slave(43).tready,
          link_out_44_TDATA  => link_out_master(44).tdata,
          link_out_44_TLAST(0)  => link_out_master(44).tlast,
          link_out_44_TVALID => link_out_master(44).tvalid,
          link_out_44_TREADY => link_out_slave(44).tready,
          link_out_45_TDATA  => link_out_master(45).tdata,
          link_out_45_TLAST(0)  => link_out_master(45).tlast,
          link_out_45_TVALID => link_out_master(45).tvalid,
          link_out_45_TREADY => link_out_slave(45).tready,
          link_out_46_TDATA  => link_out_master(46).tdata,
          link_out_46_TLAST(0)  => link_out_master(46).tlast,
          link_out_46_TVALID => link_out_master(46).tvalid,
          link_out_46_TREADY => link_out_slave(46).tready,
          link_out_47_TDATA  => link_out_master(47).tdata,
          link_out_47_TLAST(0)  => link_out_master(47).tlast,
          link_out_47_TVALID => link_out_master(47).tvalid,
          link_out_47_TREADY => link_out_slave(47).tready
          );
          
    end architecture rtl;

