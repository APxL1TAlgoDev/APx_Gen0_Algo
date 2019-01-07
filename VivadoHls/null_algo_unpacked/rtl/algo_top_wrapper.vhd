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

  type t_cyc_3_arr is array(integer range <>) of integer range 0 to 2;
  type t_slv_64_arr is array(integer range <>) of std_logic_vector(63 downto 0);

  component algo_unpacked
    port (
      ap_clk             : in  std_logic;
      ap_rst             : in  std_logic;
      ap_start           : in  std_logic;
      ap_done            : out std_logic;
      ap_idle            : out std_logic;
      ap_ready           : out std_logic;
      link_in_2d_0_0_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_0_1_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_0_2_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_1_0_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_1_1_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_1_2_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_2_0_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_2_1_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_2_2_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_3_0_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_3_1_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_3_2_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_4_0_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_4_1_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_4_2_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_5_0_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_5_1_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_5_2_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_6_0_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_6_1_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_6_2_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_7_0_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_7_1_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_7_2_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_8_0_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_8_1_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_8_2_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_9_0_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_9_1_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_9_2_V   : in  std_logic_vector (63 downto 0);
      link_in_2d_10_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_10_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_10_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_11_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_11_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_11_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_12_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_12_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_12_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_13_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_13_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_13_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_14_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_14_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_14_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_15_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_15_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_15_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_16_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_16_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_16_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_17_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_17_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_17_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_18_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_18_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_18_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_19_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_19_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_19_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_20_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_20_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_20_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_21_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_21_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_21_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_22_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_22_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_22_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_23_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_23_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_23_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_24_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_24_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_24_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_25_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_25_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_25_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_26_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_26_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_26_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_27_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_27_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_27_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_28_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_28_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_28_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_29_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_29_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_29_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_30_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_30_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_30_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_31_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_31_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_31_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_32_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_32_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_32_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_33_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_33_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_33_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_34_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_34_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_34_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_35_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_35_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_35_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_36_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_36_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_36_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_37_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_37_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_37_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_38_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_38_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_38_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_39_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_39_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_39_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_40_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_40_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_40_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_41_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_41_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_41_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_42_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_42_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_42_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_43_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_43_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_43_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_44_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_44_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_44_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_45_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_45_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_45_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_46_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_46_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_46_2_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_47_0_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_47_1_V  : in  std_logic_vector (63 downto 0);
      link_in_2d_47_2_V  : in  std_logic_vector (63 downto 0);
      link_out_2d_0_0_V  : out std_logic_vector (63 downto 0);
      link_out_2d_0_1_V  : out std_logic_vector (63 downto 0);
      link_out_2d_0_2_V  : out std_logic_vector (63 downto 0);
      link_out_2d_1_0_V  : out std_logic_vector (63 downto 0);
      link_out_2d_1_1_V  : out std_logic_vector (63 downto 0);
      link_out_2d_1_2_V  : out std_logic_vector (63 downto 0);
      link_out_2d_2_0_V  : out std_logic_vector (63 downto 0);
      link_out_2d_2_1_V  : out std_logic_vector (63 downto 0);
      link_out_2d_2_2_V  : out std_logic_vector (63 downto 0);
      link_out_2d_3_0_V  : out std_logic_vector (63 downto 0);
      link_out_2d_3_1_V  : out std_logic_vector (63 downto 0);
      link_out_2d_3_2_V  : out std_logic_vector (63 downto 0);
      link_out_2d_4_0_V  : out std_logic_vector (63 downto 0);
      link_out_2d_4_1_V  : out std_logic_vector (63 downto 0);
      link_out_2d_4_2_V  : out std_logic_vector (63 downto 0);
      link_out_2d_5_0_V  : out std_logic_vector (63 downto 0);
      link_out_2d_5_1_V  : out std_logic_vector (63 downto 0);
      link_out_2d_5_2_V  : out std_logic_vector (63 downto 0);
      link_out_2d_6_0_V  : out std_logic_vector (63 downto 0);
      link_out_2d_6_1_V  : out std_logic_vector (63 downto 0);
      link_out_2d_6_2_V  : out std_logic_vector (63 downto 0);
      link_out_2d_7_0_V  : out std_logic_vector (63 downto 0);
      link_out_2d_7_1_V  : out std_logic_vector (63 downto 0);
      link_out_2d_7_2_V  : out std_logic_vector (63 downto 0);
      link_out_2d_8_0_V  : out std_logic_vector (63 downto 0);
      link_out_2d_8_1_V  : out std_logic_vector (63 downto 0);
      link_out_2d_8_2_V  : out std_logic_vector (63 downto 0);
      link_out_2d_9_0_V  : out std_logic_vector (63 downto 0);
      link_out_2d_9_1_V  : out std_logic_vector (63 downto 0);
      link_out_2d_9_2_V  : out std_logic_vector (63 downto 0);
      link_out_2d_10_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_10_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_10_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_11_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_11_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_11_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_12_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_12_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_12_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_13_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_13_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_13_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_14_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_14_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_14_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_15_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_15_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_15_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_16_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_16_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_16_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_17_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_17_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_17_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_18_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_18_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_18_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_19_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_19_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_19_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_20_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_20_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_20_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_21_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_21_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_21_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_22_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_22_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_22_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_23_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_23_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_23_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_24_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_24_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_24_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_25_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_25_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_25_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_26_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_26_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_26_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_27_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_27_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_27_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_28_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_28_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_28_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_29_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_29_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_29_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_30_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_30_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_30_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_31_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_31_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_31_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_32_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_32_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_32_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_33_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_33_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_33_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_34_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_34_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_34_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_35_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_35_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_35_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_36_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_36_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_36_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_37_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_37_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_37_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_38_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_38_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_38_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_39_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_39_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_39_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_40_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_40_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_40_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_41_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_41_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_41_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_42_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_42_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_42_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_43_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_43_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_43_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_44_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_44_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_44_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_45_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_45_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_45_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_46_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_46_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_46_2_V : out std_logic_vector (63 downto 0);
      link_out_2d_47_0_V : out std_logic_vector (63 downto 0);
      link_out_2d_47_1_V : out std_logic_vector (63 downto 0);
      link_out_2d_47_2_V : out std_logic_vector (63 downto 0));
  end component algo_unpacked;

  signal ap_rst_d1 : std_logic;
  signal ap_rst_d2 : std_logic;
  signal ap_rst_d3 : std_logic;

  signal ap_clk_unp   : std_logic;
  signal ap_rst_unp   : std_logic;
  signal ap_start_unp : std_logic;
  signal ap_done_unp  : std_logic;
  signal ap_idle_unp  : std_logic;
  signal ap_ready_unp : std_logic;
  
    signal ap_done_latched  : std_logic;


  signal link_in_0 : t_slv_64_arr(47 downto 0);
  signal link_in_1 : t_slv_64_arr(47 downto 0);
  signal link_in_2 : t_slv_64_arr(47 downto 0);

  signal link_out_0 : t_slv_64_arr(47 downto 0);
  signal link_out_1 : t_slv_64_arr(47 downto 0);
  signal link_out_2 : t_slv_64_arr(47 downto 0);

  signal in_cyc  : t_cyc_3_arr(47 downto 0);
  signal out_cyc : t_cyc_3_arr(47 downto 0);

begin


  gen_cyc : for idx in 0 to 47 generate
    process(ap_clk) is
    begin
      if rising_edge(ap_clk) then

        ap_rst_d1 <= ap_rst;
        ap_rst_d2 <= ap_rst_d1;
        ap_rst_d3 <= ap_rst_d2;

        if (ap_rst_d2 = '1') then
          in_cyc(idx) <= 0;
        else
          in_cyc(idx) <= in_cyc(idx) + 1;
          if (in_cyc(idx) = 2) then
            in_cyc(idx) <= 0;
          end if;
        end if;
        
        if (ap_rst_d2 = '1' ) then
           ap_done_latched <= '0';
        elsif (ap_done_unp = '1') then
            ap_done_latched <= '1';
        end if;

        if (ap_done_latched = '0') then
          out_cyc(idx)                <= 0;
          link_out_master(idx).tvalid <= '0';
        else
          link_out_master(idx).tvalid <= '1';
          out_cyc(idx)                <= out_cyc(idx) + 1;
          if (out_cyc(idx) = 2) then
            out_cyc(idx) <= 0;
          end if;
        end if;

        if (in_cyc(idx) = 0) then link_in_0(idx) <= link_in_master(idx).tdata; end if;
        if (in_cyc(idx) = 1) then link_in_1(idx) <= link_in_master(idx).tdata; end if;
        if (in_cyc(idx) = 2) then link_in_2(idx) <= link_in_master(idx).tdata; end if;

        if (out_cyc(idx) = 0) then link_out_master(idx).tdata <= link_out_0(idx); end if;
        if (out_cyc(idx) = 1) then link_out_master(idx).tdata <= link_out_1(idx); end if;
        if (out_cyc(idx) = 2) then link_out_master(idx).tdata <= link_out_2(idx); end if;

      end if;
    end process;
  end generate;

  ap_clk_unp   <= ap_clk;
  ap_rst_unp   <= ap_rst_d3;
  ap_start_unp <= not ap_rst;
  ap_idle      <= ap_idle_unp;
  ap_ready     <= ap_ready_unp;

  i_algo_unpacked : algo_unpacked
    port map (
      ap_clk   => ap_clk_unp,
      ap_rst   => ap_rst_unp,
      ap_start => ap_start_unp,
      ap_done  => ap_done_unp,
      ap_idle  => ap_idle_unp,
      ap_ready => ap_ready_unp,

      link_in_2d_0_0_V  => link_in_0(0),
      link_in_2d_1_0_V  => link_in_0(1),
      link_in_2d_2_0_V  => link_in_0(2),
      link_in_2d_3_0_V  => link_in_0(3),
      link_in_2d_4_0_V  => link_in_0(4),
      link_in_2d_5_0_V  => link_in_0(5),
      link_in_2d_6_0_V  => link_in_0(6),
      link_in_2d_7_0_V  => link_in_0(7),
      link_in_2d_8_0_V  => link_in_0(8),
      link_in_2d_9_0_V  => link_in_0(9),
      link_in_2d_10_0_V => link_in_0(10),
      link_in_2d_11_0_V => link_in_0(11),
      link_in_2d_12_0_V => link_in_0(12),
      link_in_2d_13_0_V => link_in_0(13),
      link_in_2d_14_0_V => link_in_0(14),
      link_in_2d_15_0_V => link_in_0(15),
      link_in_2d_16_0_V => link_in_0(16),
      link_in_2d_17_0_V => link_in_0(17),
      link_in_2d_18_0_V => link_in_0(18),
      link_in_2d_19_0_V => link_in_0(19),
      link_in_2d_20_0_V => link_in_0(20),
      link_in_2d_21_0_V => link_in_0(21),
      link_in_2d_22_0_V => link_in_0(22),
      link_in_2d_23_0_V => link_in_0(23),
      link_in_2d_24_0_V => link_in_0(24),
      link_in_2d_25_0_V => link_in_0(25),
      link_in_2d_26_0_V => link_in_0(26),
      link_in_2d_27_0_V => link_in_0(27),
      link_in_2d_28_0_V => link_in_0(28),
      link_in_2d_29_0_V => link_in_0(29),
      link_in_2d_30_0_V => link_in_0(30),
      link_in_2d_31_0_V => link_in_0(31),
      link_in_2d_32_0_V => link_in_0(32),
      link_in_2d_33_0_V => link_in_0(33),
      link_in_2d_34_0_V => link_in_0(34),
      link_in_2d_35_0_V => link_in_0(35),
      link_in_2d_36_0_V => link_in_0(36),
      link_in_2d_37_0_V => link_in_0(37),
      link_in_2d_38_0_V => link_in_0(38),
      link_in_2d_39_0_V => link_in_0(39),
      link_in_2d_40_0_V => link_in_0(40),
      link_in_2d_41_0_V => link_in_0(41),
      link_in_2d_42_0_V => link_in_0(42),
      link_in_2d_43_0_V => link_in_0(43),
      link_in_2d_44_0_V => link_in_0(44),
      link_in_2d_45_0_V => link_in_0(45),
      link_in_2d_46_0_V => link_in_0(46),
      link_in_2d_47_0_V => link_in_0(47),
      link_in_2d_0_1_V  => link_in_1(0),
      link_in_2d_1_1_V  => link_in_1(1),
      link_in_2d_2_1_V  => link_in_1(2),
      link_in_2d_3_1_V  => link_in_1(3),
      link_in_2d_4_1_V  => link_in_1(4),
      link_in_2d_5_1_V  => link_in_1(5),
      link_in_2d_6_1_V  => link_in_1(6),
      link_in_2d_7_1_V  => link_in_1(7),
      link_in_2d_8_1_V  => link_in_1(8),
      link_in_2d_9_1_V  => link_in_1(9),
      link_in_2d_10_1_V => link_in_1(10),
      link_in_2d_11_1_V => link_in_1(11),
      link_in_2d_12_1_V => link_in_1(12),
      link_in_2d_13_1_V => link_in_1(13),
      link_in_2d_14_1_V => link_in_1(14),
      link_in_2d_15_1_V => link_in_1(15),
      link_in_2d_16_1_V => link_in_1(16),
      link_in_2d_17_1_V => link_in_1(17),
      link_in_2d_18_1_V => link_in_1(18),
      link_in_2d_19_1_V => link_in_1(19),
      link_in_2d_20_1_V => link_in_1(20),
      link_in_2d_21_1_V => link_in_1(21),
      link_in_2d_22_1_V => link_in_1(22),
      link_in_2d_23_1_V => link_in_1(23),
      link_in_2d_24_1_V => link_in_1(24),
      link_in_2d_25_1_V => link_in_1(25),
      link_in_2d_26_1_V => link_in_1(26),
      link_in_2d_27_1_V => link_in_1(27),
      link_in_2d_28_1_V => link_in_1(28),
      link_in_2d_29_1_V => link_in_1(29),
      link_in_2d_30_1_V => link_in_1(30),
      link_in_2d_31_1_V => link_in_1(31),
      link_in_2d_32_1_V => link_in_1(32),
      link_in_2d_33_1_V => link_in_1(33),
      link_in_2d_34_1_V => link_in_1(34),
      link_in_2d_35_1_V => link_in_1(35),
      link_in_2d_36_1_V => link_in_1(36),
      link_in_2d_37_1_V => link_in_1(37),
      link_in_2d_38_1_V => link_in_1(38),
      link_in_2d_39_1_V => link_in_1(39),
      link_in_2d_40_1_V => link_in_1(40),
      link_in_2d_41_1_V => link_in_1(41),
      link_in_2d_42_1_V => link_in_1(42),
      link_in_2d_43_1_V => link_in_1(43),
      link_in_2d_44_1_V => link_in_1(44),
      link_in_2d_45_1_V => link_in_1(45),
      link_in_2d_46_1_V => link_in_1(46),
      link_in_2d_47_1_V => link_in_1(47),
      link_in_2d_0_2_V  => link_in_2(0),
      link_in_2d_1_2_V  => link_in_2(1),
      link_in_2d_2_2_V  => link_in_2(2),
      link_in_2d_3_2_V  => link_in_2(3),
      link_in_2d_4_2_V  => link_in_2(4),
      link_in_2d_5_2_V  => link_in_2(5),
      link_in_2d_6_2_V  => link_in_2(6),
      link_in_2d_7_2_V  => link_in_2(7),
      link_in_2d_8_2_V  => link_in_2(8),
      link_in_2d_9_2_V  => link_in_2(9),
      link_in_2d_10_2_V => link_in_2(10),
      link_in_2d_11_2_V => link_in_2(11),
      link_in_2d_12_2_V => link_in_2(12),
      link_in_2d_13_2_V => link_in_2(13),
      link_in_2d_14_2_V => link_in_2(14),
      link_in_2d_15_2_V => link_in_2(15),
      link_in_2d_16_2_V => link_in_2(16),
      link_in_2d_17_2_V => link_in_2(17),
      link_in_2d_18_2_V => link_in_2(18),
      link_in_2d_19_2_V => link_in_2(19),
      link_in_2d_20_2_V => link_in_2(20),
      link_in_2d_21_2_V => link_in_2(21),
      link_in_2d_22_2_V => link_in_2(22),
      link_in_2d_23_2_V => link_in_2(23),
      link_in_2d_24_2_V => link_in_2(24),
      link_in_2d_25_2_V => link_in_2(25),
      link_in_2d_26_2_V => link_in_2(26),
      link_in_2d_27_2_V => link_in_2(27),
      link_in_2d_28_2_V => link_in_2(28),
      link_in_2d_29_2_V => link_in_2(29),
      link_in_2d_30_2_V => link_in_2(30),
      link_in_2d_31_2_V => link_in_2(31),
      link_in_2d_32_2_V => link_in_2(32),
      link_in_2d_33_2_V => link_in_2(33),
      link_in_2d_34_2_V => link_in_2(34),
      link_in_2d_35_2_V => link_in_2(35),
      link_in_2d_36_2_V => link_in_2(36),
      link_in_2d_37_2_V => link_in_2(37),
      link_in_2d_38_2_V => link_in_2(38),
      link_in_2d_39_2_V => link_in_2(39),
      link_in_2d_40_2_V => link_in_2(40),
      link_in_2d_41_2_V => link_in_2(41),
      link_in_2d_42_2_V => link_in_2(42),
      link_in_2d_43_2_V => link_in_2(43),
      link_in_2d_44_2_V => link_in_2(44),
      link_in_2d_45_2_V => link_in_2(45),
      link_in_2d_46_2_V => link_in_2(46),
      link_in_2d_47_2_V => link_in_2(47),

      link_out_2d_0_0_V  => link_out_0(0),
      link_out_2d_1_0_V  => link_out_0(1),
      link_out_2d_2_0_V  => link_out_0(2),
      link_out_2d_3_0_V  => link_out_0(3),
      link_out_2d_4_0_V  => link_out_0(4),
      link_out_2d_5_0_V  => link_out_0(5),
      link_out_2d_6_0_V  => link_out_0(6),
      link_out_2d_7_0_V  => link_out_0(7),
      link_out_2d_8_0_V  => link_out_0(8),
      link_out_2d_9_0_V  => link_out_0(9),
      link_out_2d_10_0_V => link_out_0(10),
      link_out_2d_11_0_V => link_out_0(11),
      link_out_2d_12_0_V => link_out_0(12),
      link_out_2d_13_0_V => link_out_0(13),
      link_out_2d_14_0_V => link_out_0(14),
      link_out_2d_15_0_V => link_out_0(15),
      link_out_2d_16_0_V => link_out_0(16),
      link_out_2d_17_0_V => link_out_0(17),
      link_out_2d_18_0_V => link_out_0(18),
      link_out_2d_19_0_V => link_out_0(19),
      link_out_2d_20_0_V => link_out_0(20),
      link_out_2d_21_0_V => link_out_0(21),
      link_out_2d_22_0_V => link_out_0(22),
      link_out_2d_23_0_V => link_out_0(23),
      link_out_2d_24_0_V => link_out_0(24),
      link_out_2d_25_0_V => link_out_0(25),
      link_out_2d_26_0_V => link_out_0(26),
      link_out_2d_27_0_V => link_out_0(27),
      link_out_2d_28_0_V => link_out_0(28),
      link_out_2d_29_0_V => link_out_0(29),
      link_out_2d_30_0_V => link_out_0(30),
      link_out_2d_31_0_V => link_out_0(31),
      link_out_2d_32_0_V => link_out_0(32),
      link_out_2d_33_0_V => link_out_0(33),
      link_out_2d_34_0_V => link_out_0(34),
      link_out_2d_35_0_V => link_out_0(35),
      link_out_2d_36_0_V => link_out_0(36),
      link_out_2d_37_0_V => link_out_0(37),
      link_out_2d_38_0_V => link_out_0(38),
      link_out_2d_39_0_V => link_out_0(39),
      link_out_2d_40_0_V => link_out_0(40),
      link_out_2d_41_0_V => link_out_0(41),
      link_out_2d_42_0_V => link_out_0(42),
      link_out_2d_43_0_V => link_out_0(43),
      link_out_2d_44_0_V => link_out_0(44),
      link_out_2d_45_0_V => link_out_0(45),
      link_out_2d_46_0_V => link_out_0(46),
      link_out_2d_47_0_V => link_out_0(47),
      link_out_2d_0_1_V  => link_out_1(0),
      link_out_2d_1_1_V  => link_out_1(1),
      link_out_2d_2_1_V  => link_out_1(2),
      link_out_2d_3_1_V  => link_out_1(3),
      link_out_2d_4_1_V  => link_out_1(4),
      link_out_2d_5_1_V  => link_out_1(5),
      link_out_2d_6_1_V  => link_out_1(6),
      link_out_2d_7_1_V  => link_out_1(7),
      link_out_2d_8_1_V  => link_out_1(8),
      link_out_2d_9_1_V  => link_out_1(9),
      link_out_2d_10_1_V => link_out_1(10),
      link_out_2d_11_1_V => link_out_1(11),
      link_out_2d_12_1_V => link_out_1(12),
      link_out_2d_13_1_V => link_out_1(13),
      link_out_2d_14_1_V => link_out_1(14),
      link_out_2d_15_1_V => link_out_1(15),
      link_out_2d_16_1_V => link_out_1(16),
      link_out_2d_17_1_V => link_out_1(17),
      link_out_2d_18_1_V => link_out_1(18),
      link_out_2d_19_1_V => link_out_1(19),
      link_out_2d_20_1_V => link_out_1(20),
      link_out_2d_21_1_V => link_out_1(21),
      link_out_2d_22_1_V => link_out_1(22),
      link_out_2d_23_1_V => link_out_1(23),
      link_out_2d_24_1_V => link_out_1(24),
      link_out_2d_25_1_V => link_out_1(25),
      link_out_2d_26_1_V => link_out_1(26),
      link_out_2d_27_1_V => link_out_1(27),
      link_out_2d_28_1_V => link_out_1(28),
      link_out_2d_29_1_V => link_out_1(29),
      link_out_2d_30_1_V => link_out_1(30),
      link_out_2d_31_1_V => link_out_1(31),
      link_out_2d_32_1_V => link_out_1(32),
      link_out_2d_33_1_V => link_out_1(33),
      link_out_2d_34_1_V => link_out_1(34),
      link_out_2d_35_1_V => link_out_1(35),
      link_out_2d_36_1_V => link_out_1(36),
      link_out_2d_37_1_V => link_out_1(37),
      link_out_2d_38_1_V => link_out_1(38),
      link_out_2d_39_1_V => link_out_1(39),
      link_out_2d_40_1_V => link_out_1(40),
      link_out_2d_41_1_V => link_out_1(41),
      link_out_2d_42_1_V => link_out_1(42),
      link_out_2d_43_1_V => link_out_1(43),
      link_out_2d_44_1_V => link_out_1(44),
      link_out_2d_45_1_V => link_out_1(45),
      link_out_2d_46_1_V => link_out_1(46),
      link_out_2d_47_1_V => link_out_1(47),
      link_out_2d_0_2_V  => link_out_2(0),
      link_out_2d_1_2_V  => link_out_2(1),
      link_out_2d_2_2_V  => link_out_2(2),
      link_out_2d_3_2_V  => link_out_2(3),
      link_out_2d_4_2_V  => link_out_2(4),
      link_out_2d_5_2_V  => link_out_2(5),
      link_out_2d_6_2_V  => link_out_2(6),
      link_out_2d_7_2_V  => link_out_2(7),
      link_out_2d_8_2_V  => link_out_2(8),
      link_out_2d_9_2_V  => link_out_2(9),
      link_out_2d_10_2_V => link_out_2(10),
      link_out_2d_11_2_V => link_out_2(11),
      link_out_2d_12_2_V => link_out_2(12),
      link_out_2d_13_2_V => link_out_2(13),
      link_out_2d_14_2_V => link_out_2(14),
      link_out_2d_15_2_V => link_out_2(15),
      link_out_2d_16_2_V => link_out_2(16),
      link_out_2d_17_2_V => link_out_2(17),
      link_out_2d_18_2_V => link_out_2(18),
      link_out_2d_19_2_V => link_out_2(19),
      link_out_2d_20_2_V => link_out_2(20),
      link_out_2d_21_2_V => link_out_2(21),
      link_out_2d_22_2_V => link_out_2(22),
      link_out_2d_23_2_V => link_out_2(23),
      link_out_2d_24_2_V => link_out_2(24),
      link_out_2d_25_2_V => link_out_2(25),
      link_out_2d_26_2_V => link_out_2(26),
      link_out_2d_27_2_V => link_out_2(27),
      link_out_2d_28_2_V => link_out_2(28),
      link_out_2d_29_2_V => link_out_2(29),
      link_out_2d_30_2_V => link_out_2(30),
      link_out_2d_31_2_V => link_out_2(31),
      link_out_2d_32_2_V => link_out_2(32),
      link_out_2d_33_2_V => link_out_2(33),
      link_out_2d_34_2_V => link_out_2(34),
      link_out_2d_35_2_V => link_out_2(35),
      link_out_2d_36_2_V => link_out_2(36),
      link_out_2d_37_2_V => link_out_2(37),
      link_out_2d_38_2_V => link_out_2(38),
      link_out_2d_39_2_V => link_out_2(39),
      link_out_2d_40_2_V => link_out_2(40),
      link_out_2d_41_2_V => link_out_2(41),
      link_out_2d_42_2_V => link_out_2(42),
      link_out_2d_43_2_V => link_out_2(43),
      link_out_2d_44_2_V => link_out_2(44),
      link_out_2d_45_2_V => link_out_2(45),
      link_out_2d_46_2_V => link_out_2(46),
      link_out_2d_47_2_V => link_out_2(47)

      );

end architecture rtl;

