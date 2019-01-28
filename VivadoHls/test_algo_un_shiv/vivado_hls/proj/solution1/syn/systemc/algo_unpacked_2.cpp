#include "algo_unpacked.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void algo_unpacked::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
            ap_enable_reg_pp0_iter0_reg = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage2_subdone.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read()) && 
                    esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        p_Result_16_10_reg_7765 = link_in_11_V.read().range(63, 24);
        p_Result_16_11_reg_7795 = link_in_12_V.read().range(63, 24);
        p_Result_16_12_reg_7825 = link_in_13_V.read().range(63, 24);
        p_Result_16_13_reg_7855 = link_in_14_V.read().range(63, 24);
        p_Result_16_14_reg_7885 = link_in_15_V.read().range(63, 24);
        p_Result_16_1_reg_7465 = link_in_1_V.read().range(63, 24);
        p_Result_16_2_reg_7495 = link_in_2_V.read().range(63, 24);
        p_Result_16_3_reg_7525 = link_in_3_V.read().range(63, 24);
        p_Result_16_4_reg_7555 = link_in_4_V.read().range(63, 24);
        p_Result_16_5_reg_7585 = link_in_5_V.read().range(63, 24);
        p_Result_16_6_reg_7615 = link_in_6_V.read().range(63, 24);
        p_Result_16_7_reg_7645 = link_in_7_V.read().range(63, 24);
        p_Result_16_8_reg_7675 = link_in_8_V.read().range(63, 24);
        p_Result_16_9_reg_7705 = link_in_9_V.read().range(63, 24);
        p_Result_16_reg_7435 = link_in_0_V.read().range(63, 24);
        p_Result_16_s_reg_7735 = link_in_10_V.read().range(63, 24);
        p_Result_20_10_reg_7775 = link_in_11_V.read().range(127, 80);
        p_Result_20_11_reg_7805 = link_in_12_V.read().range(127, 80);
        p_Result_20_12_reg_7835 = link_in_13_V.read().range(127, 80);
        p_Result_20_13_reg_7865 = link_in_14_V.read().range(127, 80);
        p_Result_20_14_reg_7895 = link_in_15_V.read().range(127, 80);
        p_Result_20_1_reg_7475 = link_in_1_V.read().range(127, 80);
        p_Result_20_2_reg_7505 = link_in_2_V.read().range(127, 80);
        p_Result_20_3_reg_7535 = link_in_3_V.read().range(127, 80);
        p_Result_20_4_reg_7565 = link_in_4_V.read().range(127, 80);
        p_Result_20_5_reg_7595 = link_in_5_V.read().range(127, 80);
        p_Result_20_6_reg_7625 = link_in_6_V.read().range(127, 80);
        p_Result_20_7_reg_7655 = link_in_7_V.read().range(127, 80);
        p_Result_20_8_reg_7685 = link_in_8_V.read().range(127, 80);
        p_Result_20_9_reg_7715 = link_in_9_V.read().range(127, 80);
        p_Result_20_reg_7445 = link_in_0_V.read().range(127, 80);
        p_Result_20_s_reg_7745 = link_in_10_V.read().range(127, 80);
        p_Result_24_10_reg_7785 = link_in_11_V.read().range(191, 144);
        p_Result_24_11_reg_7815 = link_in_12_V.read().range(191, 144);
        p_Result_24_12_reg_7845 = link_in_13_V.read().range(191, 144);
        p_Result_24_13_reg_7875 = link_in_14_V.read().range(191, 144);
        p_Result_24_14_reg_7905 = link_in_15_V.read().range(191, 144);
        p_Result_24_1_reg_7485 = link_in_1_V.read().range(191, 144);
        p_Result_24_2_reg_7515 = link_in_2_V.read().range(191, 144);
        p_Result_24_3_reg_7545 = link_in_3_V.read().range(191, 144);
        p_Result_24_4_reg_7575 = link_in_4_V.read().range(191, 144);
        p_Result_24_5_reg_7605 = link_in_5_V.read().range(191, 144);
        p_Result_24_6_reg_7635 = link_in_6_V.read().range(191, 144);
        p_Result_24_7_reg_7665 = link_in_7_V.read().range(191, 144);
        p_Result_24_8_reg_7695 = link_in_8_V.read().range(191, 144);
        p_Result_24_9_reg_7725 = link_in_9_V.read().range(191, 144);
        p_Result_24_reg_7455 = link_in_0_V.read().range(191, 144);
        p_Result_24_s_reg_7755 = link_in_10_V.read().range(191, 144);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        p_Result_16_15_reg_7915 = link_in_16_V.read().range(63, 24);
        p_Result_16_16_reg_7945 = link_in_17_V.read().range(63, 24);
        p_Result_16_17_reg_7975 = link_in_18_V.read().range(63, 24);
        p_Result_16_18_reg_8005 = link_in_19_V.read().range(63, 24);
        p_Result_16_19_reg_8035 = link_in_20_V.read().range(63, 24);
        p_Result_16_20_reg_8065 = link_in_21_V.read().range(63, 24);
        p_Result_16_21_reg_8095 = link_in_22_V.read().range(63, 24);
        p_Result_16_22_reg_8125 = link_in_23_V.read().range(63, 24);
        p_Result_16_23_reg_8155 = link_in_24_V.read().range(63, 24);
        p_Result_16_24_reg_8185 = link_in_25_V.read().range(63, 24);
        p_Result_16_25_reg_8215 = link_in_26_V.read().range(63, 24);
        p_Result_16_26_reg_8245 = link_in_27_V.read().range(63, 24);
        p_Result_16_27_reg_8275 = link_in_28_V.read().range(63, 24);
        p_Result_16_28_reg_8305 = link_in_29_V.read().range(63, 24);
        p_Result_16_29_reg_8335 = link_in_30_V.read().range(63, 24);
        p_Result_16_30_reg_8365 = link_in_31_V.read().range(63, 24);
        p_Result_20_15_reg_7925 = link_in_16_V.read().range(127, 80);
        p_Result_20_16_reg_7955 = link_in_17_V.read().range(127, 80);
        p_Result_20_17_reg_7985 = link_in_18_V.read().range(127, 80);
        p_Result_20_18_reg_8015 = link_in_19_V.read().range(127, 80);
        p_Result_20_19_reg_8045 = link_in_20_V.read().range(127, 80);
        p_Result_20_20_reg_8075 = link_in_21_V.read().range(127, 80);
        p_Result_20_21_reg_8105 = link_in_22_V.read().range(127, 80);
        p_Result_20_22_reg_8135 = link_in_23_V.read().range(127, 80);
        p_Result_20_23_reg_8165 = link_in_24_V.read().range(127, 80);
        p_Result_20_24_reg_8195 = link_in_25_V.read().range(127, 80);
        p_Result_20_25_reg_8225 = link_in_26_V.read().range(127, 80);
        p_Result_20_26_reg_8255 = link_in_27_V.read().range(127, 80);
        p_Result_20_27_reg_8285 = link_in_28_V.read().range(127, 80);
        p_Result_20_28_reg_8315 = link_in_29_V.read().range(127, 80);
        p_Result_20_29_reg_8345 = link_in_30_V.read().range(127, 80);
        p_Result_20_30_reg_8375 = link_in_31_V.read().range(127, 80);
        p_Result_24_15_reg_7935 = link_in_16_V.read().range(191, 144);
        p_Result_24_16_reg_7965 = link_in_17_V.read().range(191, 144);
        p_Result_24_17_reg_7995 = link_in_18_V.read().range(191, 144);
        p_Result_24_18_reg_8025 = link_in_19_V.read().range(191, 144);
        p_Result_24_19_reg_8055 = link_in_20_V.read().range(191, 144);
        p_Result_24_20_reg_8085 = link_in_21_V.read().range(191, 144);
        p_Result_24_21_reg_8115 = link_in_22_V.read().range(191, 144);
        p_Result_24_22_reg_8145 = link_in_23_V.read().range(191, 144);
        p_Result_24_23_reg_8175 = link_in_24_V.read().range(191, 144);
        p_Result_24_24_reg_8205 = link_in_25_V.read().range(191, 144);
        p_Result_24_25_reg_8235 = link_in_26_V.read().range(191, 144);
        p_Result_24_26_reg_8265 = link_in_27_V.read().range(191, 144);
        p_Result_24_27_reg_8295 = link_in_28_V.read().range(191, 144);
        p_Result_24_28_reg_8325 = link_in_29_V.read().range(191, 144);
        p_Result_24_29_reg_8355 = link_in_30_V.read().range(191, 144);
        p_Result_24_30_reg_8385 = link_in_31_V.read().range(191, 144);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        p_Result_16_31_reg_8395 = link_in_32_V.read().range(63, 24);
        p_Result_16_32_reg_8425 = link_in_33_V.read().range(63, 24);
        p_Result_16_33_reg_8455 = link_in_34_V.read().range(63, 24);
        p_Result_16_34_reg_8485 = link_in_35_V.read().range(63, 24);
        p_Result_16_35_reg_8515 = link_in_36_V.read().range(63, 24);
        p_Result_16_36_reg_8545 = link_in_37_V.read().range(63, 24);
        p_Result_16_37_reg_8575 = link_in_38_V.read().range(63, 24);
        p_Result_16_38_reg_8605 = link_in_39_V.read().range(63, 24);
        p_Result_16_39_reg_8635 = link_in_40_V.read().range(63, 24);
        p_Result_16_40_reg_8665 = link_in_41_V.read().range(63, 24);
        p_Result_16_41_reg_8695 = link_in_42_V.read().range(63, 24);
        p_Result_16_42_reg_8725 = link_in_43_V.read().range(63, 24);
        p_Result_16_43_reg_8755 = link_in_44_V.read().range(63, 24);
        p_Result_16_44_reg_8785 = link_in_45_V.read().range(63, 24);
        p_Result_16_45_reg_8815 = link_in_46_V.read().range(63, 24);
        p_Result_16_46_reg_8845 = link_in_47_V.read().range(63, 24);
        p_Result_20_31_reg_8405 = link_in_32_V.read().range(127, 80);
        p_Result_20_32_reg_8435 = link_in_33_V.read().range(127, 80);
        p_Result_20_33_reg_8465 = link_in_34_V.read().range(127, 80);
        p_Result_20_34_reg_8495 = link_in_35_V.read().range(127, 80);
        p_Result_20_35_reg_8525 = link_in_36_V.read().range(127, 80);
        p_Result_20_36_reg_8555 = link_in_37_V.read().range(127, 80);
        p_Result_20_37_reg_8585 = link_in_38_V.read().range(127, 80);
        p_Result_20_38_reg_8615 = link_in_39_V.read().range(127, 80);
        p_Result_20_39_reg_8645 = link_in_40_V.read().range(127, 80);
        p_Result_20_40_reg_8675 = link_in_41_V.read().range(127, 80);
        p_Result_20_41_reg_8705 = link_in_42_V.read().range(127, 80);
        p_Result_20_42_reg_8735 = link_in_43_V.read().range(127, 80);
        p_Result_20_43_reg_8765 = link_in_44_V.read().range(127, 80);
        p_Result_20_44_reg_8795 = link_in_45_V.read().range(127, 80);
        p_Result_20_45_reg_8825 = link_in_46_V.read().range(127, 80);
        p_Result_20_46_reg_8855 = link_in_47_V.read().range(127, 80);
        p_Result_24_31_reg_8415 = link_in_32_V.read().range(191, 144);
        p_Result_24_32_reg_8445 = link_in_33_V.read().range(191, 144);
        p_Result_24_33_reg_8475 = link_in_34_V.read().range(191, 144);
        p_Result_24_34_reg_8505 = link_in_35_V.read().range(191, 144);
        p_Result_24_35_reg_8535 = link_in_36_V.read().range(191, 144);
        p_Result_24_36_reg_8565 = link_in_37_V.read().range(191, 144);
        p_Result_24_37_reg_8595 = link_in_38_V.read().range(191, 144);
        p_Result_24_38_reg_8625 = link_in_39_V.read().range(191, 144);
        p_Result_24_39_reg_8655 = link_in_40_V.read().range(191, 144);
        p_Result_24_40_reg_8685 = link_in_41_V.read().range(191, 144);
        p_Result_24_41_reg_8715 = link_in_42_V.read().range(191, 144);
        p_Result_24_42_reg_8745 = link_in_43_V.read().range(191, 144);
        p_Result_24_43_reg_8775 = link_in_44_V.read().range(191, 144);
        p_Result_24_44_reg_8805 = link_in_45_V.read().range(191, 144);
        p_Result_24_45_reg_8835 = link_in_46_V.read().range(191, 144);
        p_Result_24_46_reg_8865 = link_in_47_V.read().range(191, 144);
    }
}

void algo_unpacked::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_idle_pp0_1to1.read(), ap_const_logic_1)) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read()) && esl_seteq<1,1,1>(ap_reset_idle_pp0.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read()) && esl_seteq<1,1,1>(ap_reset_idle_pp0.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 2 : 
            if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_subdone.read())) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 4 : 
            if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage2_subdone.read())) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            }
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

