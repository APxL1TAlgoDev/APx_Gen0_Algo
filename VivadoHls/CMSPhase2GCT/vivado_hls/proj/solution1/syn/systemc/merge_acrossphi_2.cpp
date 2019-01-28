#include "merge_acrossphi.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void merge_acrossphi::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(demorgan5_fu_9943_p2.read(), ap_const_lv1_1))) {
        outClusterET19647_4_reg_3426 = grp_mergeClusters_fu_7915_ap_return_5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
                esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1))) {
        outClusterET19647_4_reg_3426 = outClusterET_addr_13_5_reg_25632.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
                 !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3) && 
                 !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
                 esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3)))) {
        outClusterET19647_4_reg_3426 = outClusterET19647_1_reg_2804.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
         esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1))) {
        outClusterET19647_7_reg_3663 = grp_mergeClusters_fu_7915_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan6_reg_25650.read(), ap_const_lv1_1)))) {
        outClusterET19647_7_reg_3663 = ap_phi_mux_outClusterET19647_4_phi_fu_3429_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
         esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3))) {
        outClusterET19649_5_reg_3686 = grp_mergeClusters_fu_7915_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan6_reg_25650.read(), ap_const_lv1_1)))) {
        outClusterET19649_5_reg_3686 = ap_phi_mux_outClusterET19649_2_phi_fu_3446_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
         esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5))) {
        outClusterET19651_5_reg_3709 = grp_mergeClusters_fu_7915_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan6_reg_25650.read(), ap_const_lv1_1)))) {
        outClusterET19651_5_reg_3709 = ap_phi_mux_outClusterET19649_2_phi_fu_3446_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan7_fu_12872_p2.read(), ap_const_lv1_1))) {
        outClusterET19655_5_reg_5550 = grp_mergeClusters_fu_7915_ap_return_5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
                esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9))) {
        outClusterET19655_5_reg_5550 = outClusterET_addr_13_7_reg_25968.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)))) {
        outClusterET19655_5_reg_5550 = outClusterET19653_2_reg_3732.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(demorgan10_fu_10523_p2.read(), ap_const_lv1_1))) {
        outClusterET20670_4_reg_3860 = grp_mergeClusters_fu_7942_ap_return_5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
                esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1))) {
        outClusterET20670_4_reg_3860 = outClusterET_addr_13_9_reg_25736.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
                 !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3) && 
                 !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
                 esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3)))) {
        outClusterET20670_4_reg_3860 = outClusterET20670_1_reg_2888.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
         esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1))) {
        outClusterET20670_7_reg_4097 = grp_mergeClusters_fu_7942_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan11_reg_25754.read(), ap_const_lv1_1)))) {
        outClusterET20670_7_reg_4097 = ap_phi_mux_outClusterET20670_4_phi_fu_3863_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
         esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3))) {
        outClusterET20672_5_reg_4120 = grp_mergeClusters_fu_7942_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan11_reg_25754.read(), ap_const_lv1_1)))) {
        outClusterET20672_5_reg_4120 = ap_phi_mux_outClusterET20672_2_phi_fu_3880_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
         esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5))) {
        outClusterET20674_5_reg_4143 = grp_mergeClusters_fu_7942_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan11_reg_25754.read(), ap_const_lv1_1)))) {
        outClusterET20674_5_reg_4143 = ap_phi_mux_outClusterET20672_2_phi_fu_3880_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan12_fu_14114_p2.read(), ap_const_lv1_1))) {
        outClusterET20678_5_reg_6748 = grp_mergeClusters_fu_7942_ap_return_5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
                esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9))) {
        outClusterET20678_5_reg_6748 = outClusterET_addr_13_10_reg_26096.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)))) {
        outClusterET20678_5_reg_6748 = outClusterET20676_2_reg_4166.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(demorgan_fu_9363_p2.read(), ap_const_lv1_1))) {
        outClusterET624_4_reg_3023 = grp_mergeClusters_fu_7888_ap_return_5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
                esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1))) {
        outClusterET624_4_reg_3023 = outClusterET_addr_13_1_reg_25528.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
                 !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3) && 
                 !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
                 esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3)))) {
        outClusterET624_4_reg_3023 = outClusterET624_1_reg_2706.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
         esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1))) {
        outClusterET624_7_reg_3313 = grp_mergeClusters_fu_7888_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan1_reg_25546.read(), ap_const_lv1_1)))) {
        outClusterET624_7_reg_3313 = ap_phi_mux_outClusterET624_4_phi_fu_3026_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
         esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3))) {
        outClusterET626_5_reg_3290 = grp_mergeClusters_fu_7888_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan1_reg_25546.read(), ap_const_lv1_1)))) {
        outClusterET626_5_reg_3290 = ap_phi_mux_outClusterET628_2_phi_fu_2996_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
         esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5))) {
        outClusterET628_5_reg_3267 = grp_mergeClusters_fu_7888_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan1_reg_25546.read(), ap_const_lv1_1)))) {
        outClusterET628_5_reg_3267 = ap_phi_mux_outClusterET628_2_phi_fu_2996_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan2_fu_11630_p2.read(), ap_const_lv1_1))) {
        outClusterET632_5_reg_4292 = grp_mergeClusters_fu_7888_ap_return_5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
                esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9))) {
        outClusterET632_5_reg_4292 = outClusterET_addr_13_3_reg_25840.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)))) {
        outClusterET632_5_reg_4292 = outClusterET630_2_reg_3248.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(demorgan5_fu_9943_p2.read(), ap_const_lv1_1))) {
        outpeakEta11371_4_reg_3336 = grp_mergeClusters_fu_7915_ap_return_3.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
                 !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3) && 
                 !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
                 esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
                 esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)))) {
        outpeakEta11371_4_reg_3336 = outpeakEta11371_3_fu_12217_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan6_reg_25650.read(), ap_const_lv1_1))) {
        outpeakEta11371_7_reg_3473 = ap_phi_mux_outpeakEta11371_4_phi_fu_3339_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1)))) {
        outpeakEta11371_7_reg_3473 = outpeakEta11371_6_fu_12511_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan6_reg_25650.read(), ap_const_lv1_1))) {
        outpeakEta11373_5_reg_3492 = ap_phi_mux_outpeakEta11373_2_phi_fu_3354_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1)))) {
        outpeakEta11373_5_reg_3492 = outpeakEta11373_4_fu_12437_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan6_reg_25650.read(), ap_const_lv1_1))) {
        outpeakEta11375_5_reg_3511 = ap_phi_mux_outpeakEta11373_2_phi_fu_3354_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1)))) {
        outpeakEta11375_5_reg_3511 = outpeakEta11375_4_fu_12363_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan7_fu_12872_p2.read(), ap_const_lv1_1))) {
        outpeakEta11379_5_reg_5462 = grp_mergeClusters_fu_7915_ap_return_3.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9)))) {
        outpeakEta11379_5_reg_5462 = outpeakEta11379_4_reg_25947.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(demorgan10_fu_10523_p2.read(), ap_const_lv1_1))) {
        outpeakEta12394_4_reg_3770 = grp_mergeClusters_fu_7942_ap_return_3.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
                 !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3) && 
                 !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
                 esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
                 esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)))) {
        outpeakEta12394_4_reg_3770 = outpeakEta12394_3_fu_13459_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan11_reg_25754.read(), ap_const_lv1_1))) {
        outpeakEta12394_7_reg_3907 = ap_phi_mux_outpeakEta12394_4_phi_fu_3773_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1)))) {
        outpeakEta12394_7_reg_3907 = outpeakEta12394_6_fu_13753_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan11_reg_25754.read(), ap_const_lv1_1))) {
        outpeakEta12396_5_reg_3926 = ap_phi_mux_outpeakEta12396_2_phi_fu_3788_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1)))) {
        outpeakEta12396_5_reg_3926 = outpeakEta12396_4_fu_13679_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan11_reg_25754.read(), ap_const_lv1_1))) {
        outpeakEta12398_5_reg_3945 = ap_phi_mux_outpeakEta12396_2_phi_fu_3788_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1)))) {
        outpeakEta12398_5_reg_3945 = outpeakEta12398_4_fu_13605_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan12_fu_14114_p2.read(), ap_const_lv1_1))) {
        outpeakEta12402_5_reg_6660 = grp_mergeClusters_fu_7942_ap_return_3.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9)))) {
        outpeakEta12402_5_reg_6660 = outpeakEta12402_4_reg_26075.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(demorgan_fu_9363_p2.read(), ap_const_lv1_1))) {
        outpeakEta348_4_reg_2933 = grp_mergeClusters_fu_7888_ap_return_3.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
                 !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3) && 
                 !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
                 esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
                 esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)))) {
        outpeakEta348_4_reg_2933 = outpeakEta348_3_fu_10975_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan1_reg_25546.read(), ap_const_lv1_1))) {
        outpeakEta348_7_reg_3115 = ap_phi_mux_outpeakEta348_4_phi_fu_2936_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1)))) {
        outpeakEta348_7_reg_3115 = outpeakEta348_6_fu_11121_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan1_reg_25546.read(), ap_const_lv1_1))) {
        outpeakEta350_5_reg_3096 = ap_phi_mux_outpeakEta352_2_phi_fu_2906_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1)))) {
        outpeakEta350_5_reg_3096 = outpeakEta350_4_fu_11195_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan1_reg_25546.read(), ap_const_lv1_1))) {
        outpeakEta352_5_reg_3077 = ap_phi_mux_outpeakEta352_2_phi_fu_2906_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1)))) {
        outpeakEta352_5_reg_3077 = outpeakEta352_4_fu_11269_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan2_fu_11630_p2.read(), ap_const_lv1_1))) {
        outpeakEta356_5_reg_4204 = grp_mergeClusters_fu_7888_ap_return_3.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9)))) {
        outpeakEta356_5_reg_4204 = outpeakEta356_4_reg_25819.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(demorgan5_fu_9943_p2.read(), ap_const_lv1_1))) {
        outpeakPhi13440_4_reg_3381 = grp_mergeClusters_fu_7915_ap_return_4.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
                 !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3) && 
                 !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
                 esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
                 esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)))) {
        outpeakPhi13440_4_reg_3381 = outpeakPhi13440_3_fu_12288_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan6_reg_25650.read(), ap_const_lv1_1))) {
        outpeakPhi13440_7_reg_3568 = ap_phi_mux_outpeakPhi13440_4_phi_fu_3384_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1)))) {
        outpeakPhi13440_7_reg_3568 = outpeakPhi13440_6_fu_12733_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan6_reg_25650.read(), ap_const_lv1_1))) {
        outpeakPhi13442_5_reg_3587 = ap_phi_mux_outpeakPhi13442_2_phi_fu_3399_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1)))) {
        outpeakPhi13442_5_reg_3587 = outpeakPhi13442_4_fu_12659_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan6_reg_25650.read(), ap_const_lv1_1))) {
        outpeakPhi13444_5_reg_3606 = ap_phi_mux_outpeakPhi13442_2_phi_fu_3399_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1)))) {
        outpeakPhi13444_5_reg_3606 = outpeakPhi13444_4_fu_12585_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan7_fu_12872_p2.read(), ap_const_lv1_1))) {
        outpeakPhi13448_5_reg_5476 = grp_mergeClusters_fu_7915_ap_return_4.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9)))) {
        outpeakPhi13448_5_reg_5476 = outpeakPhi13448_4_reg_25961.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(demorgan10_fu_10523_p2.read(), ap_const_lv1_1))) {
        outpeakPhi14463_4_reg_3846 = grp_mergeClusters_fu_7942_ap_return_4.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
                 !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3) && 
                 !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
                 esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
                 esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)))) {
        outpeakPhi14463_4_reg_3846 = outpeakPhi14463_3_fu_13530_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan11_reg_25754.read(), ap_const_lv1_1))) {
        outpeakPhi14463_7_reg_4078 = ap_phi_mux_outpeakPhi14463_4_phi_fu_3849_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1)))) {
        outpeakPhi14463_7_reg_4078 = outpeakPhi14463_6_fu_13827_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan11_reg_25754.read(), ap_const_lv1_1))) {
        outpeakPhi14465_5_reg_4040 = ap_phi_mux_outpeakPhi14467_2_phi_fu_3819_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1)))) {
        outpeakPhi14465_5_reg_4040 = outpeakPhi14465_4_fu_13901_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan11_reg_25754.read(), ap_const_lv1_1))) {
        outpeakPhi14467_5_reg_4002 = ap_phi_mux_outpeakPhi14467_2_phi_fu_3819_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1)))) {
        outpeakPhi14467_5_reg_4002 = outpeakPhi14467_4_fu_13975_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan12_fu_14114_p2.read(), ap_const_lv1_1))) {
        outpeakPhi14471_5_reg_6704 = grp_mergeClusters_fu_7942_ap_return_4.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9)))) {
        outpeakPhi14471_5_reg_6704 = outpeakPhi14471_4_reg_26089.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(demorgan_fu_9363_p2.read(), ap_const_lv1_1))) {
        outpeakPhi417_4_reg_2978 = grp_mergeClusters_fu_7888_ap_return_4.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
                 !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3) && 
                 !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
                 esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
                 esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)))) {
        outpeakPhi417_4_reg_2978 = outpeakPhi417_3_fu_11046_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan1_reg_25546.read(), ap_const_lv1_1))) {
        outpeakPhi417_7_reg_3210 = ap_phi_mux_outpeakPhi417_4_phi_fu_2981_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1)))) {
        outpeakPhi417_7_reg_3210 = outpeakPhi417_6_fu_11343_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan1_reg_25546.read(), ap_const_lv1_1))) {
        outpeakPhi419_5_reg_3191 = ap_phi_mux_outpeakPhi421_2_phi_fu_2951_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1)))) {
        outpeakPhi419_5_reg_3191 = outpeakPhi419_4_fu_11417_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan1_reg_25546.read(), ap_const_lv1_1))) {
        outpeakPhi421_5_reg_3172 = ap_phi_mux_outpeakPhi421_2_phi_fu_2951_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1)))) {
        outpeakPhi421_5_reg_3172 = outpeakPhi421_4_fu_11491_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan2_fu_11630_p2.read(), ap_const_lv1_1))) {
        outpeakPhi425_5_reg_4278 = grp_mergeClusters_fu_7888_ap_return_4.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9)))) {
        outpeakPhi425_5_reg_4278 = outpeakPhi425_4_reg_25833.read();
    }
    if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ClusterET_0_0_read_1_reg_23615 = ClusterET_0_0_read.read();
        ClusterET_0_10_rea_1_reg_23563 = ClusterET_0_10_rea.read();
        ClusterET_0_11_rea_1_reg_23557 = ClusterET_0_11_rea.read();
        ClusterET_0_12_rea_1_reg_23551 = ClusterET_0_12_rea.read();
        ClusterET_0_13_rea_1_reg_23516 = ClusterET_0_13_rea.read();
        ClusterET_0_14_rea_1_reg_23511 = ClusterET_0_14_rea.read();
        ClusterET_0_15_rea_1_reg_23506 = ClusterET_0_15_rea.read();
        ClusterET_0_16_rea_1_reg_23500 = ClusterET_0_16_rea.read();
        ClusterET_0_17_rea_1_reg_23480 = ClusterET_0_17_rea.read();
        ClusterET_0_19_rea_1_reg_23475 = ClusterET_0_19_rea.read();
        ClusterET_0_1_read_1_reg_23610 = ClusterET_0_1_read.read();
        ClusterET_0_20_rea_1_reg_23470 = ClusterET_0_20_rea.read();
        ClusterET_0_21_rea_1_reg_23436 = ClusterET_0_21_rea.read();
        ClusterET_0_2_read_1_reg_23605 = ClusterET_0_2_read.read();
        ClusterET_0_3_read_1_reg_23600 = ClusterET_0_3_read.read();
        ClusterET_0_4_read_1_reg_23595 = ClusterET_0_4_read.read();
        ClusterET_0_5_read_1_reg_23590 = ClusterET_0_5_read.read();
        ClusterET_0_6_read_1_reg_23585 = ClusterET_0_6_read.read();
        ClusterET_0_7_read_1_reg_23580 = ClusterET_0_7_read.read();
        ClusterET_0_8_read_1_reg_23574 = ClusterET_0_8_read.read();
        ClusterET_0_9_read_1_reg_23568 = ClusterET_0_9_read.read();
        ClusterET_1_0_read_1_reg_23431 = ClusterET_1_0_read.read();
        ClusterET_1_10_rea_1_reg_23379 = ClusterET_1_10_rea.read();
        ClusterET_1_11_rea_1_reg_23373 = ClusterET_1_11_rea.read();
        ClusterET_1_12_rea_1_reg_23367 = ClusterET_1_12_rea.read();
        ClusterET_1_13_rea_1_reg_23332 = ClusterET_1_13_rea.read();
        ClusterET_1_14_rea_1_reg_23327 = ClusterET_1_14_rea.read();
        ClusterET_1_15_rea_1_reg_23322 = ClusterET_1_15_rea.read();
        ClusterET_1_16_rea_1_reg_23316 = ClusterET_1_16_rea.read();
        ClusterET_1_17_rea_1_reg_23296 = ClusterET_1_17_rea.read();
        ClusterET_1_19_rea_1_reg_23291 = ClusterET_1_19_rea.read();
        ClusterET_1_1_read_1_reg_23426 = ClusterET_1_1_read.read();
        ClusterET_1_20_rea_1_reg_23286 = ClusterET_1_20_rea.read();
        ClusterET_1_21_rea_1_reg_23252 = ClusterET_1_21_rea.read();
        ClusterET_1_2_read_1_reg_23421 = ClusterET_1_2_read.read();
        ClusterET_1_3_read_1_reg_23416 = ClusterET_1_3_read.read();
        ClusterET_1_4_read_1_reg_23411 = ClusterET_1_4_read.read();
        ClusterET_1_5_read_1_reg_23406 = ClusterET_1_5_read.read();
        ClusterET_1_6_read_1_reg_23401 = ClusterET_1_6_read.read();
        ClusterET_1_7_read_1_reg_23396 = ClusterET_1_7_read.read();
        ClusterET_1_8_read_1_reg_23390 = ClusterET_1_8_read.read();
        ClusterET_1_9_read_1_reg_23384 = ClusterET_1_9_read.read();
        ClusterET_2_0_read_1_reg_23247 = ClusterET_2_0_read.read();
        ClusterET_2_10_rea_1_reg_23195 = ClusterET_2_10_rea.read();
        ClusterET_2_11_rea_1_reg_23189 = ClusterET_2_11_rea.read();
        ClusterET_2_12_rea_1_reg_23183 = ClusterET_2_12_rea.read();
        ClusterET_2_13_rea_1_reg_23148 = ClusterET_2_13_rea.read();
        ClusterET_2_14_rea_1_reg_23143 = ClusterET_2_14_rea.read();
        ClusterET_2_15_rea_1_reg_23138 = ClusterET_2_15_rea.read();
        ClusterET_2_16_rea_1_reg_23132 = ClusterET_2_16_rea.read();
        ClusterET_2_17_rea_1_reg_23112 = ClusterET_2_17_rea.read();
        ClusterET_2_19_rea_1_reg_23107 = ClusterET_2_19_rea.read();
        ClusterET_2_1_read_1_reg_23242 = ClusterET_2_1_read.read();
        ClusterET_2_20_rea_1_reg_23102 = ClusterET_2_20_rea.read();
        ClusterET_2_21_rea_1_reg_23068 = ClusterET_2_21_rea.read();
        ClusterET_2_2_read_1_reg_23237 = ClusterET_2_2_read.read();
        ClusterET_2_3_read_1_reg_23232 = ClusterET_2_3_read.read();
        ClusterET_2_4_read_1_reg_23227 = ClusterET_2_4_read.read();
        ClusterET_2_5_read_1_reg_23222 = ClusterET_2_5_read.read();
        ClusterET_2_6_read_1_reg_23217 = ClusterET_2_6_read.read();
        ClusterET_2_7_read_1_reg_23212 = ClusterET_2_7_read.read();
        ClusterET_2_8_read_1_reg_23206 = ClusterET_2_8_read.read();
        ClusterET_2_9_read_1_reg_23200 = ClusterET_2_9_read.read();
        demorgan10_reg_25695 = demorgan10_fu_10523_p2.read();
        demorgan11_reg_25754 = demorgan11_fu_10803_p2.read();
        demorgan1_reg_25546 = demorgan1_fu_9643_p2.read();
        demorgan5_reg_25591 = demorgan5_fu_9943_p2.read();
        demorgan6_reg_25650 = demorgan6_fu_10223_p2.read();
        demorgan_reg_25487 = demorgan_fu_9363_p2.read();
        nPhi_1_0_1_reg_25477 = nPhi_1_0_1_fu_9267_p3.read();
        nPhi_1_0_1_t_reg_25481 = nPhi_1_0_1_t_fu_9275_p1.read();
        nPhi_1_0_2_reg_25536 = nPhi_1_0_2_fu_9551_p3.read();
        nPhi_1_1_1_reg_25581 = nPhi_1_1_1_fu_9847_p3.read();
        nPhi_1_1_1_t_reg_25585 = nPhi_1_1_1_t_fu_9855_p1.read();
        nPhi_1_1_2_reg_25640 = nPhi_1_1_2_fu_10131_p3.read();
        nPhi_1_2_1_reg_25685 = nPhi_1_2_1_fu_10427_p3.read();
        nPhi_1_2_1_t_reg_25689 = nPhi_1_2_1_t_fu_10435_p1.read();
        nPhi_1_2_2_reg_25744 = nPhi_1_2_2_fu_10711_p3.read();
        peakEta_0_11_read_1_reg_23890 = peakEta_0_11_read.read();
        peakEta_0_12_read_1_reg_23885 = peakEta_0_12_read.read();
        peakEta_0_13_read_1_reg_23879 = peakEta_0_13_read.read();
        peakEta_0_15_read_1_reg_23874 = peakEta_0_15_read.read();
        peakEta_0_16_read_1_reg_23869 = peakEta_0_16_read.read();
        peakEta_0_17_read_1_reg_23863 = peakEta_0_17_read.read();
        peakEta_0_19_read_1_reg_23858 = peakEta_0_19_read.read();
        peakEta_0_1_read_1_reg_23921 = peakEta_0_1_read.read();
        peakEta_0_20_read_1_reg_23853 = peakEta_0_20_read.read();
        peakEta_0_21_read_1_reg_23848 = peakEta_0_21_read.read();
        peakEta_0_3_read_1_reg_23916 = peakEta_0_3_read.read();
        peakEta_0_5_read_1_reg_23911 = peakEta_0_5_read.read();
        peakEta_0_7_read_1_reg_23906 = peakEta_0_7_read.read();
        peakEta_0_8_read_1_reg_23901 = peakEta_0_8_read.read();
        peakEta_0_9_read_1_reg_23896 = peakEta_0_9_read.read();
        peakEta_1_11_read_1_reg_23812 = peakEta_1_11_read.read();
        peakEta_1_12_read_1_reg_23807 = peakEta_1_12_read.read();
        peakEta_1_13_read_1_reg_23801 = peakEta_1_13_read.read();
        peakEta_1_15_read_1_reg_23796 = peakEta_1_15_read.read();
        peakEta_1_16_read_1_reg_23791 = peakEta_1_16_read.read();
        peakEta_1_17_read_1_reg_23785 = peakEta_1_17_read.read();
        peakEta_1_19_read_1_reg_23780 = peakEta_1_19_read.read();
        peakEta_1_1_read_1_reg_23843 = peakEta_1_1_read.read();
        peakEta_1_20_read_1_reg_23775 = peakEta_1_20_read.read();
        peakEta_1_21_read_1_reg_23770 = peakEta_1_21_read.read();
        peakEta_1_3_read_1_reg_23838 = peakEta_1_3_read.read();
        peakEta_1_5_read_1_reg_23833 = peakEta_1_5_read.read();
        peakEta_1_7_read_1_reg_23828 = peakEta_1_7_read.read();
        peakEta_1_8_read_1_reg_23823 = peakEta_1_8_read.read();
        peakEta_1_9_read_1_reg_23818 = peakEta_1_9_read.read();
        peakEta_2_11_read_1_reg_23734 = peakEta_2_11_read.read();
        peakEta_2_12_read_1_reg_23729 = peakEta_2_12_read.read();
        peakEta_2_13_read_1_reg_23723 = peakEta_2_13_read.read();
        peakEta_2_15_read_1_reg_23718 = peakEta_2_15_read.read();
        peakEta_2_16_read_1_reg_23713 = peakEta_2_16_read.read();
        peakEta_2_17_read_1_reg_23707 = peakEta_2_17_read.read();
        peakEta_2_19_read_1_reg_23702 = peakEta_2_19_read.read();
        peakEta_2_1_read_1_reg_23765 = peakEta_2_1_read.read();
        peakEta_2_20_read_1_reg_23697 = peakEta_2_20_read.read();
        peakEta_2_21_read_1_reg_23692 = peakEta_2_21_read.read();
        peakEta_2_3_read_1_reg_23760 = peakEta_2_3_read.read();
        peakEta_2_5_read_1_reg_23755 = peakEta_2_5_read.read();
        peakEta_2_7_read_1_reg_23750 = peakEta_2_7_read.read();
        peakEta_2_8_read_1_reg_23745 = peakEta_2_8_read.read();
        peakEta_2_9_read_1_reg_23740 = peakEta_2_9_read.read();
        peakPhi_0_0_read_c_reg_25466 = peakPhi_0_0_read_c_fu_9231_p1.read();
        peakPhi_0_10_read_s_reg_25415 = peakPhi_0_10_read_s_fu_9190_p1.read();
        peakPhi_0_11_read_s_reg_25409 = peakPhi_0_11_read_s_fu_9186_p1.read();
        peakPhi_0_12_read_1_reg_23682 = peakPhi_0_12_read.read();
        peakPhi_0_12_read_s_reg_25404 = peakPhi_0_12_read_s_fu_9182_p1.read();
        peakPhi_0_13_read_s_reg_25369 = peakPhi_0_13_read_s_fu_9178_p1.read();
        peakPhi_0_14_read_s_reg_25364 = peakPhi_0_14_read_s_fu_9174_p1.read();
        peakPhi_0_15_read_s_reg_25359 = peakPhi_0_15_read_s_fu_9170_p1.read();
        peakPhi_0_16_read_1_reg_23675 = peakPhi_0_16_read.read();
        peakPhi_0_16_read_s_reg_25354 = peakPhi_0_16_read_s_fu_9166_p1.read();
        peakPhi_0_17_read_s_reg_25334 = peakPhi_0_17_read_s_fu_9162_p1.read();
        peakPhi_0_19_read_s_reg_25329 = peakPhi_0_19_read_s_fu_9158_p1.read();
        peakPhi_0_1_read_c_reg_25461 = peakPhi_0_1_read_c_fu_9226_p1.read();
        peakPhi_0_20_read_1_reg_23668 = peakPhi_0_20_read.read();
        peakPhi_0_21_read_s_reg_25295 = peakPhi_0_21_read_s_fu_9154_p1.read();
        peakPhi_0_2_read_c_reg_25456 = peakPhi_0_2_read_c_fu_9222_p1.read();
        peakPhi_0_3_read_c_reg_25451 = peakPhi_0_3_read_c_fu_9218_p1.read();
        peakPhi_0_4_read_c_reg_25446 = peakPhi_0_4_read_c_fu_9214_p1.read();
        peakPhi_0_5_read_c_reg_25441 = peakPhi_0_5_read_c_fu_9210_p1.read();
        peakPhi_0_6_read_c_reg_25436 = peakPhi_0_6_read_c_fu_9206_p1.read();
        peakPhi_0_7_read_c_reg_25431 = peakPhi_0_7_read_c_fu_9202_p1.read();
        peakPhi_0_8_read_1_reg_23687 = peakPhi_0_8_read.read();
        peakPhi_0_8_read_c_reg_25426 = peakPhi_0_8_read_c_fu_9198_p1.read();
        peakPhi_0_9_read_c_reg_25420 = peakPhi_0_9_read_c_fu_9194_p1.read();
        peakPhi_1_0_read_c_reg_25290 = peakPhi_1_0_read_c_fu_9150_p1.read();
        peakPhi_1_10_read_s_reg_25239 = peakPhi_1_10_read_s_fu_9109_p1.read();
        peakPhi_1_11_read_s_reg_25233 = peakPhi_1_11_read_s_fu_9105_p1.read();
        peakPhi_1_12_read_1_reg_23658 = peakPhi_1_12_read.read();
        peakPhi_1_12_read_s_reg_25228 = peakPhi_1_12_read_s_fu_9101_p1.read();
        peakPhi_1_13_read_s_reg_25193 = peakPhi_1_13_read_s_fu_9097_p1.read();
        peakPhi_1_14_read_s_reg_25188 = peakPhi_1_14_read_s_fu_9093_p1.read();
        peakPhi_1_15_read_s_reg_25183 = peakPhi_1_15_read_s_fu_9089_p1.read();
        peakPhi_1_16_read_1_reg_23651 = peakPhi_1_16_read.read();
        peakPhi_1_16_read_s_reg_25178 = peakPhi_1_16_read_s_fu_9085_p1.read();
        peakPhi_1_17_read_s_reg_25158 = peakPhi_1_17_read_s_fu_9081_p1.read();
        peakPhi_1_19_read_s_reg_25153 = peakPhi_1_19_read_s_fu_9077_p1.read();
        peakPhi_1_1_read_c_reg_25285 = peakPhi_1_1_read_c_fu_9145_p1.read();
        peakPhi_1_20_read_1_reg_23644 = peakPhi_1_20_read.read();
        peakPhi_1_21_read_s_reg_25119 = peakPhi_1_21_read_s_fu_9073_p1.read();
        peakPhi_1_2_read_c_reg_25280 = peakPhi_1_2_read_c_fu_9141_p1.read();
        peakPhi_1_3_read_c_reg_25275 = peakPhi_1_3_read_c_fu_9137_p1.read();
        peakPhi_1_4_read_c_reg_25270 = peakPhi_1_4_read_c_fu_9133_p1.read();
        peakPhi_1_5_read_c_reg_25265 = peakPhi_1_5_read_c_fu_9129_p1.read();
        peakPhi_1_6_read_c_reg_25260 = peakPhi_1_6_read_c_fu_9125_p1.read();
        peakPhi_1_7_read_c_reg_25255 = peakPhi_1_7_read_c_fu_9121_p1.read();
        peakPhi_1_8_read_1_reg_23663 = peakPhi_1_8_read.read();
        peakPhi_1_8_read_c_reg_25250 = peakPhi_1_8_read_c_fu_9117_p1.read();
        peakPhi_1_9_read_c_reg_25244 = peakPhi_1_9_read_c_fu_9113_p1.read();
        peakPhi_2_0_read_c_reg_25114 = peakPhi_2_0_read_c_fu_9069_p1.read();
        peakPhi_2_10_read_s_reg_25063 = peakPhi_2_10_read_s_fu_9028_p1.read();
        peakPhi_2_11_read_s_reg_25057 = peakPhi_2_11_read_s_fu_9024_p1.read();
        peakPhi_2_12_read_1_reg_23634 = peakPhi_2_12_read.read();
        peakPhi_2_12_read_s_reg_25052 = peakPhi_2_12_read_s_fu_9020_p1.read();
        peakPhi_2_13_read_s_reg_25017 = peakPhi_2_13_read_s_fu_9016_p1.read();
        peakPhi_2_14_read_s_reg_25012 = peakPhi_2_14_read_s_fu_9012_p1.read();
        peakPhi_2_15_read_s_reg_25007 = peakPhi_2_15_read_s_fu_9008_p1.read();
        peakPhi_2_16_read_1_reg_23627 = peakPhi_2_16_read.read();
        peakPhi_2_16_read_s_reg_25002 = peakPhi_2_16_read_s_fu_9004_p1.read();
        peakPhi_2_17_read_s_reg_24982 = peakPhi_2_17_read_s_fu_9000_p1.read();
        peakPhi_2_19_read_s_reg_24977 = peakPhi_2_19_read_s_fu_8996_p1.read();
        peakPhi_2_1_read_c_reg_25109 = peakPhi_2_1_read_c_fu_9064_p1.read();
        peakPhi_2_20_read_1_reg_23620 = peakPhi_2_20_read.read();
        peakPhi_2_21_read_s_reg_24943 = peakPhi_2_21_read_s_fu_8992_p1.read();
        peakPhi_2_2_read_c_reg_25104 = peakPhi_2_2_read_c_fu_9060_p1.read();
        peakPhi_2_3_read_c_reg_25099 = peakPhi_2_3_read_c_fu_9056_p1.read();
        peakPhi_2_4_read_c_reg_25094 = peakPhi_2_4_read_c_fu_9052_p1.read();
        peakPhi_2_5_read_c_reg_25089 = peakPhi_2_5_read_c_fu_9048_p1.read();
        peakPhi_2_6_read_c_reg_25084 = peakPhi_2_6_read_c_fu_9044_p1.read();
        peakPhi_2_7_read_c_reg_25079 = peakPhi_2_7_read_c_fu_9040_p1.read();
        peakPhi_2_8_read_1_reg_23639 = peakPhi_2_8_read.read();
        peakPhi_2_8_read_c_reg_25074 = peakPhi_2_8_read_c_fu_9036_p1.read();
        peakPhi_2_9_read_c_reg_25068 = peakPhi_2_9_read_c_fu_9032_p1.read();
        tmp_0_3_reg_25570 = tmp_0_3_fu_9809_p2.read();
        tmp_1_3_reg_25674 = tmp_1_3_fu_10389_p2.read();
        tmp_2_3_reg_25778 = tmp_2_3_fu_10969_p2.read();
        tmp_7_0_3_reg_25565 = tmp_7_0_3_fu_9803_p2.read();
        tmp_7_1_3_reg_25669 = tmp_7_1_3_fu_10383_p2.read();
        tmp_7_2_3_reg_25773 = tmp_7_2_3_fu_10963_p2.read();
        towerEta_0_0_read_s_reg_24938 = towerEta_0_0_read_s_fu_8988_p1.read();
        towerEta_0_10_read_1_reg_24882 = towerEta_0_10_read_1_fu_8948_p1.read();
        towerEta_0_11_read_1_reg_24875 = towerEta_0_11_read_1_fu_8944_p1.read();
        towerEta_0_12_read_1_reg_24869 = towerEta_0_12_read_1_fu_8940_p1.read();
        towerEta_0_13_read_1_reg_24833 = towerEta_0_13_read_1_fu_8936_p1.read();
        towerEta_0_14_read_1_reg_24828 = towerEta_0_14_read_1_fu_8932_p1.read();
        towerEta_0_15_read_1_reg_24822 = towerEta_0_15_read_1_fu_8928_p1.read();
        towerEta_0_16_read_1_reg_24816 = towerEta_0_16_read_1_fu_8924_p1.read();
        towerEta_0_17_read_1_reg_24786 = towerEta_0_17_read_1_fu_8920_p1.read();
        towerEta_0_18_read_1_reg_24781 = towerEta_0_18_read_1_fu_8916_p1.read();
        towerEta_0_19_read_1_reg_24775 = towerEta_0_19_read_1_fu_8912_p1.read();
        towerEta_0_1_read_s_reg_24932 = towerEta_0_1_read_s_fu_8984_p1.read();
        towerEta_0_20_read_1_reg_24769 = towerEta_0_20_read_1_fu_8908_p1.read();
        towerEta_0_21_read_1_reg_24734 = towerEta_0_21_read_1_fu_8904_p1.read();
        towerEta_0_22_read_1_reg_24729 = towerEta_0_22_read_1_fu_8900_p1.read();
        towerEta_0_23_read_1_reg_24724 = towerEta_0_23_read_1_fu_8896_p1.read();
        towerEta_0_2_read_s_reg_24927 = towerEta_0_2_read_s_fu_8980_p1.read();
        towerEta_0_3_read_s_reg_24921 = towerEta_0_3_read_s_fu_8976_p1.read();
        towerEta_0_4_read_s_reg_24916 = towerEta_0_4_read_s_fu_8972_p1.read();
        towerEta_0_5_read_s_reg_24910 = towerEta_0_5_read_s_fu_8968_p1.read();
        towerEta_0_6_read_s_reg_24905 = towerEta_0_6_read_s_fu_8964_p1.read();
        towerEta_0_7_read_s_reg_24899 = towerEta_0_7_read_s_fu_8960_p1.read();
        towerEta_0_8_read_s_reg_24894 = towerEta_0_8_read_s_fu_8956_p1.read();
        towerEta_0_9_read_s_reg_24887 = towerEta_0_9_read_s_fu_8952_p1.read();
        towerEta_1_0_read_s_reg_24719 = towerEta_1_0_read_s_fu_8892_p1.read();
        towerEta_1_10_read_1_reg_24663 = towerEta_1_10_read_1_fu_8852_p1.read();
        towerEta_1_11_read_1_reg_24656 = towerEta_1_11_read_1_fu_8848_p1.read();
        towerEta_1_12_read_1_reg_24650 = towerEta_1_12_read_1_fu_8844_p1.read();
        towerEta_1_13_read_1_reg_24614 = towerEta_1_13_read_1_fu_8840_p1.read();
        towerEta_1_14_read_1_reg_24609 = towerEta_1_14_read_1_fu_8836_p1.read();
        towerEta_1_15_read_1_reg_24603 = towerEta_1_15_read_1_fu_8832_p1.read();
        towerEta_1_16_read_1_reg_24597 = towerEta_1_16_read_1_fu_8828_p1.read();
        towerEta_1_17_read_1_reg_24567 = towerEta_1_17_read_1_fu_8824_p1.read();
        towerEta_1_18_read_1_reg_24562 = towerEta_1_18_read_1_fu_8820_p1.read();
        towerEta_1_19_read_1_reg_24556 = towerEta_1_19_read_1_fu_8816_p1.read();
        towerEta_1_1_read_s_reg_24713 = towerEta_1_1_read_s_fu_8888_p1.read();
        towerEta_1_20_read_1_reg_24550 = towerEta_1_20_read_1_fu_8812_p1.read();
        towerEta_1_21_read_1_reg_24515 = towerEta_1_21_read_1_fu_8808_p1.read();
        towerEta_1_22_read_1_reg_24510 = towerEta_1_22_read_1_fu_8804_p1.read();
        towerEta_1_23_read_1_reg_24505 = towerEta_1_23_read_1_fu_8800_p1.read();
        towerEta_1_2_read_s_reg_24708 = towerEta_1_2_read_s_fu_8884_p1.read();
        towerEta_1_3_read_s_reg_24702 = towerEta_1_3_read_s_fu_8880_p1.read();
        towerEta_1_4_read_s_reg_24697 = towerEta_1_4_read_s_fu_8876_p1.read();
        towerEta_1_5_read_s_reg_24691 = towerEta_1_5_read_s_fu_8872_p1.read();
        towerEta_1_6_read_s_reg_24686 = towerEta_1_6_read_s_fu_8868_p1.read();
        towerEta_1_7_read_s_reg_24680 = towerEta_1_7_read_s_fu_8864_p1.read();
        towerEta_1_8_read_s_reg_24675 = towerEta_1_8_read_s_fu_8860_p1.read();
        towerEta_1_9_read_s_reg_24668 = towerEta_1_9_read_s_fu_8856_p1.read();
        towerEta_2_0_read_s_reg_24500 = towerEta_2_0_read_s_fu_8796_p1.read();
        towerEta_2_10_read_1_reg_24444 = towerEta_2_10_read_1_fu_8756_p1.read();
        towerEta_2_11_read_1_reg_24437 = towerEta_2_11_read_1_fu_8752_p1.read();
        towerEta_2_12_read_1_reg_24431 = towerEta_2_12_read_1_fu_8748_p1.read();
        towerEta_2_13_read_1_reg_24395 = towerEta_2_13_read_1_fu_8744_p1.read();
        towerEta_2_14_read_1_reg_24390 = towerEta_2_14_read_1_fu_8740_p1.read();
        towerEta_2_15_read_1_reg_24384 = towerEta_2_15_read_1_fu_8736_p1.read();
        towerEta_2_16_read_1_reg_24378 = towerEta_2_16_read_1_fu_8732_p1.read();
        towerEta_2_17_read_1_reg_24348 = towerEta_2_17_read_1_fu_8728_p1.read();
        towerEta_2_18_read_1_reg_24343 = towerEta_2_18_read_1_fu_8724_p1.read();
        towerEta_2_19_read_1_reg_24337 = towerEta_2_19_read_1_fu_8720_p1.read();
        towerEta_2_1_read_s_reg_24494 = towerEta_2_1_read_s_fu_8792_p1.read();
        towerEta_2_20_read_1_reg_24331 = towerEta_2_20_read_1_fu_8716_p1.read();
        towerEta_2_21_read_1_reg_24296 = towerEta_2_21_read_1_fu_8712_p1.read();
        towerEta_2_22_read_1_reg_24291 = towerEta_2_22_read_1_fu_8708_p1.read();
        towerEta_2_23_read_1_reg_24286 = towerEta_2_23_read_1_fu_8704_p1.read();
        towerEta_2_2_read_s_reg_24489 = towerEta_2_2_read_s_fu_8788_p1.read();
        towerEta_2_3_read_s_reg_24483 = towerEta_2_3_read_s_fu_8784_p1.read();
        towerEta_2_4_read_s_reg_24478 = towerEta_2_4_read_s_fu_8780_p1.read();
        towerEta_2_5_read_s_reg_24472 = towerEta_2_5_read_s_fu_8776_p1.read();
        towerEta_2_6_read_s_reg_24467 = towerEta_2_6_read_s_fu_8772_p1.read();
        towerEta_2_7_read_s_reg_24461 = towerEta_2_7_read_s_fu_8768_p1.read();
        towerEta_2_8_read_s_reg_24456 = towerEta_2_8_read_s_fu_8764_p1.read();
        towerEta_2_9_read_s_reg_24449 = towerEta_2_9_read_s_fu_8760_p1.read();
        towerPhi_0_0_read_s_reg_24281 = towerPhi_0_0_read_s_fu_8700_p1.read();
        towerPhi_0_10_read_1_reg_24231 = towerPhi_0_10_read_1_fu_8660_p1.read();
        towerPhi_0_11_read_1_reg_24226 = towerPhi_0_11_read_1_fu_8656_p1.read();
        towerPhi_0_12_read_1_reg_24221 = towerPhi_0_12_read_1_fu_8652_p1.read();
        towerPhi_0_13_read_1_reg_24216 = towerPhi_0_13_read_1_fu_8648_p1.read();
        towerPhi_0_14_read_1_reg_24211 = towerPhi_0_14_read_1_fu_8644_p1.read();
        towerPhi_0_15_read_1_reg_24206 = towerPhi_0_15_read_1_fu_8640_p1.read();
        towerPhi_0_16_read_1_reg_24201 = towerPhi_0_16_read_1_fu_8636_p1.read();
        towerPhi_0_17_read_1_reg_24196 = towerPhi_0_17_read_1_fu_8632_p1.read();
        towerPhi_0_18_read_1_reg_24191 = towerPhi_0_18_read_1_fu_8628_p1.read();
        towerPhi_0_19_read_1_reg_24186 = towerPhi_0_19_read_1_fu_8624_p1.read();
        towerPhi_0_1_read_s_reg_24276 = towerPhi_0_1_read_s_fu_8696_p1.read();
        towerPhi_0_20_read_1_reg_24181 = towerPhi_0_20_read_1_fu_8620_p1.read();
        towerPhi_0_21_read_1_reg_24176 = towerPhi_0_21_read_1_fu_8616_p1.read();
        towerPhi_0_22_read_1_reg_24171 = towerPhi_0_22_read_1_fu_8612_p1.read();
        towerPhi_0_23_read_1_reg_24166 = towerPhi_0_23_read_1_fu_8608_p1.read();
        towerPhi_0_2_read_s_reg_24271 = towerPhi_0_2_read_s_fu_8692_p1.read();
        towerPhi_0_3_read_s_reg_24266 = towerPhi_0_3_read_s_fu_8688_p1.read();
        towerPhi_0_4_read_s_reg_24261 = towerPhi_0_4_read_s_fu_8684_p1.read();
        towerPhi_0_5_read_s_reg_24256 = towerPhi_0_5_read_s_fu_8680_p1.read();
        towerPhi_0_6_read_s_reg_24251 = towerPhi_0_6_read_s_fu_8676_p1.read();
        towerPhi_0_7_read_s_reg_24246 = towerPhi_0_7_read_s_fu_8672_p1.read();
        towerPhi_0_8_read_s_reg_24241 = towerPhi_0_8_read_s_fu_8668_p1.read();
        towerPhi_0_9_read_s_reg_24236 = towerPhi_0_9_read_s_fu_8664_p1.read();
        towerPhi_1_0_read_s_reg_24161 = towerPhi_1_0_read_s_fu_8604_p1.read();
        towerPhi_1_10_read_1_reg_24111 = towerPhi_1_10_read_1_fu_8564_p1.read();
        towerPhi_1_11_read_1_reg_24106 = towerPhi_1_11_read_1_fu_8560_p1.read();
        towerPhi_1_12_read_1_reg_24101 = towerPhi_1_12_read_1_fu_8556_p1.read();
        towerPhi_1_13_read_1_reg_24096 = towerPhi_1_13_read_1_fu_8552_p1.read();
        towerPhi_1_14_read_1_reg_24091 = towerPhi_1_14_read_1_fu_8548_p1.read();
        towerPhi_1_15_read_1_reg_24086 = towerPhi_1_15_read_1_fu_8544_p1.read();
        towerPhi_1_16_read_1_reg_24081 = towerPhi_1_16_read_1_fu_8540_p1.read();
        towerPhi_1_17_read_1_reg_24076 = towerPhi_1_17_read_1_fu_8536_p1.read();
        towerPhi_1_18_read_1_reg_24071 = towerPhi_1_18_read_1_fu_8532_p1.read();
        towerPhi_1_19_read_1_reg_24066 = towerPhi_1_19_read_1_fu_8528_p1.read();
        towerPhi_1_1_read_s_reg_24156 = towerPhi_1_1_read_s_fu_8600_p1.read();
        towerPhi_1_20_read_1_reg_24061 = towerPhi_1_20_read_1_fu_8524_p1.read();
        towerPhi_1_21_read_1_reg_24056 = towerPhi_1_21_read_1_fu_8520_p1.read();
        towerPhi_1_22_read_1_reg_24051 = towerPhi_1_22_read_1_fu_8516_p1.read();
        towerPhi_1_23_read_1_reg_24046 = towerPhi_1_23_read_1_fu_8512_p1.read();
        towerPhi_1_2_read_s_reg_24151 = towerPhi_1_2_read_s_fu_8596_p1.read();
        towerPhi_1_3_read_s_reg_24146 = towerPhi_1_3_read_s_fu_8592_p1.read();
        towerPhi_1_4_read_s_reg_24141 = towerPhi_1_4_read_s_fu_8588_p1.read();
        towerPhi_1_5_read_s_reg_24136 = towerPhi_1_5_read_s_fu_8584_p1.read();
        towerPhi_1_6_read_s_reg_24131 = towerPhi_1_6_read_s_fu_8580_p1.read();
        towerPhi_1_7_read_s_reg_24126 = towerPhi_1_7_read_s_fu_8576_p1.read();
        towerPhi_1_8_read_s_reg_24121 = towerPhi_1_8_read_s_fu_8572_p1.read();
        towerPhi_1_9_read_s_reg_24116 = towerPhi_1_9_read_s_fu_8568_p1.read();
        towerPhi_2_0_read_s_reg_24041 = towerPhi_2_0_read_s_fu_8508_p1.read();
        towerPhi_2_10_read_1_reg_23991 = towerPhi_2_10_read_1_fu_8468_p1.read();
        towerPhi_2_11_read_1_reg_23986 = towerPhi_2_11_read_1_fu_8464_p1.read();
        towerPhi_2_12_read_1_reg_23981 = towerPhi_2_12_read_1_fu_8460_p1.read();
        towerPhi_2_13_read_1_reg_23976 = towerPhi_2_13_read_1_fu_8456_p1.read();
        towerPhi_2_14_read_1_reg_23971 = towerPhi_2_14_read_1_fu_8452_p1.read();
        towerPhi_2_15_read_1_reg_23966 = towerPhi_2_15_read_1_fu_8448_p1.read();
        towerPhi_2_16_read_1_reg_23961 = towerPhi_2_16_read_1_fu_8444_p1.read();
        towerPhi_2_17_read_1_reg_23956 = towerPhi_2_17_read_1_fu_8440_p1.read();
        towerPhi_2_18_read_1_reg_23951 = towerPhi_2_18_read_1_fu_8436_p1.read();
        towerPhi_2_19_read_1_reg_23946 = towerPhi_2_19_read_1_fu_8432_p1.read();
        towerPhi_2_1_read_s_reg_24036 = towerPhi_2_1_read_s_fu_8504_p1.read();
        towerPhi_2_20_read_1_reg_23941 = towerPhi_2_20_read_1_fu_8428_p1.read();
        towerPhi_2_21_read_1_reg_23936 = towerPhi_2_21_read_1_fu_8424_p1.read();
        towerPhi_2_22_read_1_reg_23931 = towerPhi_2_22_read_1_fu_8420_p1.read();
        towerPhi_2_23_read_1_reg_23926 = towerPhi_2_23_read_1_fu_8416_p1.read();
        towerPhi_2_2_read_s_reg_24031 = towerPhi_2_2_read_s_fu_8500_p1.read();
        towerPhi_2_3_read_s_reg_24026 = towerPhi_2_3_read_s_fu_8496_p1.read();
        towerPhi_2_4_read_s_reg_24021 = towerPhi_2_4_read_s_fu_8492_p1.read();
        towerPhi_2_5_read_s_reg_24016 = towerPhi_2_5_read_s_fu_8488_p1.read();
        towerPhi_2_6_read_s_reg_24011 = towerPhi_2_6_read_s_fu_8484_p1.read();
        towerPhi_2_7_read_s_reg_24006 = towerPhi_2_7_read_s_fu_8480_p1.read();
        towerPhi_2_8_read_s_reg_24001 = towerPhi_2_8_read_s_fu_8476_p1.read();
        towerPhi_2_9_read_s_reg_23996 = towerPhi_2_9_read_s_fu_8472_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        demorgan12_reg_26043 = demorgan12_fu_14114_p2.read();
        demorgan13_reg_26132 = demorgan13_fu_14436_p2.read();
        demorgan2_reg_25787 = demorgan2_fu_11630_p2.read();
        demorgan3_reg_25876 = demorgan3_fu_11952_p2.read();
        demorgan7_reg_25915 = demorgan7_fu_12872_p2.read();
        demorgan8_reg_26004 = demorgan8_fu_13194_p2.read();
        nPhi_1_0_3_reg_25783 = nPhi_1_0_3_fu_11572_p3.read();
        nPhi_1_1_3_reg_25911 = nPhi_1_1_3_fu_12814_p3.read();
        nPhi_1_2_3_reg_26039 = nPhi_1_2_3_fu_14056_p3.read();
        tmp_11_reg_25976 = tmp_11_fu_13139_p1.read();
        tmp_13_reg_26023 = tmp_13_fu_13447_p1.read();
        tmp_14_reg_26034 = nPhi_1_1_5_fu_13439_p3.read().range(5, 5);
        tmp_18_reg_26104 = tmp_18_fu_14381_p1.read();
        tmp_20_reg_26151 = tmp_20_fu_14689_p1.read();
        tmp_21_reg_26162 = nPhi_1_2_5_fu_14681_p3.read().range(5, 5);
        tmp_3_reg_25848 = tmp_3_fu_11897_p1.read();
        tmp_5_reg_25895 = tmp_5_fu_12205_p1.read();
        tmp_6_reg_25906 = nPhi_1_0_5_fu_12197_p3.read().range(5, 5);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_fu_13194_p2.read()))) {
        newSel17_reg_26008 = newSel17_fu_13338_p3.read();
        preMergeclusterET_lo_8_reg_26018 = preMergeclusterET_lo_8_fu_13383_p34.read();
        preMergepeakPhi_load_8_reg_26013 = preMergepeakPhi_load_8_fu_13345_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_fu_10803_p2.read()))) {
        newSel18_reg_25758 = newSel18_fu_10815_p3.read();
        preMergeclusterET_lo_10_reg_25768 = preMergeclusterET_lo_10_fu_10893_p34.read();
        preMergepeakPhi_load_10_reg_25763 = preMergepeakPhi_load_10_fu_10823_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_fu_14436_p2.read()))) {
        newSel26_reg_26136 = newSel26_fu_14580_p3.read();
        preMergeclusterET_lo_12_reg_26146 = preMergeclusterET_lo_12_fu_14625_p34.read();
        preMergepeakPhi_load_12_reg_26141 = preMergepeakPhi_load_12_fu_14587_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_fu_11952_p2.read()))) {
        newSel8_reg_25880 = newSel8_fu_12096_p3.read();
        preMergeclusterET_lo_3_reg_25890 = preMergeclusterET_lo_3_fu_12141_p34.read();
        preMergepeakPhi_load_3_reg_25885 = preMergepeakPhi_load_3_fu_12103_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_fu_10223_p2.read()))) {
        newSel9_reg_25654 = newSel9_fu_10235_p3.read();
        preMergeclusterET_lo_6_reg_25664 = preMergeclusterET_lo_6_fu_10313_p34.read();
        preMergepeakPhi_load_6_reg_25659 = preMergepeakPhi_load_6_fu_10243_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_fu_9643_p2.read()))) {
        newSel_reg_25550 = newSel_fu_9655_p3.read();
        preMergeclusterET_lo_1_reg_25560 = preMergeclusterET_lo_1_fu_9733_p34.read();
        preMergepeakPhi_load_1_reg_25555 = preMergepeakPhi_load_1_fu_9663_p34.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_1_fu_9821_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_1_6_fu_9815_p2.read()))) {
        outClusterET19647_1_reg_2804 = grp_mergeClusters_fu_7915_ap_return_5.read();
        outClusterET_1_0_w_reg_2790 = grp_mergeClusters_fu_7915_ap_return_2.read();
        outpeakEta11371_1_reg_2748 = grp_mergeClusters_fu_7915_ap_return_3.read();
        outpeakEta11_1_reg_2734 = grp_mergeClusters_fu_7915_ap_return_0.read();
        outpeakPhi13440_1_reg_2776 = grp_mergeClusters_fu_7915_ap_return_4.read();
        outpeakPhi13_1_reg_2762 = grp_mergeClusters_fu_7915_ap_return_1.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
  !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3) && 
  !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
  esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
  esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)))) {
        outClusterET19649_2_reg_3442 = outClusterET_addr_13_5_reg_25632.read();
        outClusterET_1_4_w_reg_3457 = outClusterET_addr32_6_reg_25609.read();
        outpeakEta11373_2_reg_3350 = outpeakEta_addr_118_5_reg_25616.read();
        outpeakEta11374_1_reg_3365 = outpeakEta_addr16_re_6_reg_25595.read();
        outpeakPhi13442_2_reg_3395 = outpeakPhi_addr_123_5_reg_25624.read();
        outpeakPhi13443_1_reg_3410 = outpeakPhi_addr21_re_6_reg_25602.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
  !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5) && 
  !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1) && 
  !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7) && 
  !esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
  esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_7)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
  esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_5)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
  esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_3)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()) && 
  esl_seteq<1,5,5>(nPhi_1_1_2_reg_25640.read(), ap_const_lv5_1)))) {
        outClusterET19653_2_reg_3732 = grp_mergeClusters_fu_7915_ap_return_5.read();
        outClusterET_1_8_w_reg_3751 = grp_mergeClusters_fu_7915_ap_return_2.read();
        outpeakEta11377_2_reg_3530 = grp_mergeClusters_fu_7915_ap_return_3.read();
        outpeakEta11378_1_reg_3549 = grp_mergeClusters_fu_7915_ap_return_0.read();
        outpeakPhi13446_2_reg_3625 = grp_mergeClusters_fu_7915_ap_return_4.read();
        outpeakPhi13447_1_reg_3644 = grp_mergeClusters_fu_7915_ap_return_1.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
  !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9) && 
  !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
  esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
  esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9)))) {
        outClusterET19659_2_reg_5520 = outClusterET_addr_13_7_reg_25968.read();
        outClusterET_1_12_s_reg_5535 = outClusterET_addr32_8_reg_25933.read();
        outpeakEta11382_1_reg_5447 = outpeakEta_addr16_re_8_reg_25919.read();
        outpeakEta11383_2_reg_5432 = outpeakEta_addr_118_7_reg_25940.read();
        outpeakPhi13450_2_reg_5490 = outpeakPhi_addr_123_7_reg_25954.read();
        outpeakPhi13451_1_reg_5505 = outpeakPhi_addr21_re_8_reg_25926.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_2_fu_10401_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_9_fu_10395_p2.read()))) {
        outClusterET20670_1_reg_2888 = grp_mergeClusters_fu_7942_ap_return_5.read();
        outClusterET_2_0_w_reg_2874 = grp_mergeClusters_fu_7942_ap_return_2.read();
        outpeakEta12394_1_reg_2832 = grp_mergeClusters_fu_7942_ap_return_3.read();
        outpeakEta12_1_reg_2818 = grp_mergeClusters_fu_7942_ap_return_0.read();
        outpeakPhi14463_1_reg_2846 = grp_mergeClusters_fu_7942_ap_return_4.read();
        outpeakPhi14_1_reg_2860 = grp_mergeClusters_fu_7942_ap_return_1.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
  !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3) && 
  !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
  esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
  esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)))) {
        outClusterET20672_2_reg_3876 = outClusterET_addr_13_9_reg_25736.read();
        outClusterET_2_4_w_reg_3891 = outClusterET_addr32_10_reg_25713.read();
        outpeakEta12396_2_reg_3784 = outpeakEta_addr_118_9_reg_25720.read();
        outpeakEta12397_1_reg_3799 = outpeakEta_addr16_re_10_reg_25699.read();
        outpeakPhi14466_1_reg_3830 = outpeakPhi_addr21_re_10_reg_25706.read();
        outpeakPhi14467_2_reg_3815 = outpeakPhi_addr_123_9_reg_25728.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
  !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5) && 
  !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1) && 
  !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7) && 
  !esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
  esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_7)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
  esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_5)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
  esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_3)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()) && 
  esl_seteq<1,5,5>(nPhi_1_2_2_reg_25744.read(), ap_const_lv5_1)))) {
        outClusterET20676_2_reg_4166 = grp_mergeClusters_fu_7942_ap_return_5.read();
        outClusterET_2_8_w_reg_4185 = grp_mergeClusters_fu_7942_ap_return_2.read();
        outpeakEta12400_2_reg_3964 = grp_mergeClusters_fu_7942_ap_return_3.read();
        outpeakEta12401_1_reg_3983 = grp_mergeClusters_fu_7942_ap_return_0.read();
        outpeakPhi14469_2_reg_4021 = grp_mergeClusters_fu_7942_ap_return_4.read();
        outpeakPhi14470_1_reg_4059 = grp_mergeClusters_fu_7942_ap_return_1.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
  !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9) && 
  !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
  esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
  esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9)))) {
        outClusterET20680_2_reg_6764 = outClusterET_addr_13_10_reg_26096.read();
        outClusterET_2_12_s_reg_6779 = outClusterET_addr32_12_reg_26061.read();
        outpeakEta12404_2_reg_6674 = outpeakEta_addr_118_10_reg_26068.read();
        outpeakEta12405_1_reg_6689 = outpeakEta_addr16_re_12_reg_26047.read();
        outpeakPhi14473_2_reg_6718 = outpeakPhi_addr_123_10_reg_26082.read();
        outpeakPhi14474_1_reg_6733 = outpeakPhi_addr21_re_12_reg_26054.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(tmp_9_fu_9241_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_9235_p2.read()))) {
        outClusterET624_1_reg_2706 = grp_mergeClusters_fu_7888_ap_return_5.read();
        outClusterET_0_0_w_reg_2720 = grp_mergeClusters_fu_7888_ap_return_2.read();
        outpeakEta348_1_reg_2650 = grp_mergeClusters_fu_7888_ap_return_3.read();
        outpeakEta_1_reg_2664 = grp_mergeClusters_fu_7888_ap_return_0.read();
        outpeakPhi417_1_reg_2678 = grp_mergeClusters_fu_7888_ap_return_4.read();
        outpeakPhi_1_reg_2692 = grp_mergeClusters_fu_7888_ap_return_1.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
  !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3) && 
  !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
  esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
  esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)))) {
        outClusterET628_2_reg_2992 = outClusterET_addr_13_1_reg_25528.read();
        outClusterET_0_4_w_reg_3007 = outClusterET_addr32_1_reg_25505.read();
        outpeakEta351_1_reg_2917 = outpeakEta_addr16_re_1_reg_25491.read();
        outpeakEta352_2_reg_2902 = outpeakEta_addr_118_1_reg_25512.read();
        outpeakPhi420_1_reg_2962 = outpeakPhi_addr21_re_1_reg_25498.read();
        outpeakPhi421_2_reg_2947 = outpeakPhi_addr_123_1_reg_25520.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
  !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5) && 
  !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1) && 
  !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7) && 
  !esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
  esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_7)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
  esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_5)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
  esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_3)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()) && 
  esl_seteq<1,5,5>(nPhi_1_0_2_reg_25536.read(), ap_const_lv5_1)))) {
        outClusterET630_2_reg_3248 = grp_mergeClusters_fu_7888_ap_return_5.read();
        outClusterET_0_8_w_reg_3229 = grp_mergeClusters_fu_7888_ap_return_2.read();
        outpeakEta355_1_reg_3058 = grp_mergeClusters_fu_7888_ap_return_0.read();
        outpeakEta356_2_reg_3039 = grp_mergeClusters_fu_7888_ap_return_3.read();
        outpeakPhi424_1_reg_3153 = grp_mergeClusters_fu_7888_ap_return_1.read();
        outpeakPhi425_2_reg_3134 = grp_mergeClusters_fu_7888_ap_return_4.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
  !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9) && 
  !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
  esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
  esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9)))) {
        outClusterET634_2_reg_4308 = outClusterET_addr_13_3_reg_25840.read();
        outClusterET_0_12_s_reg_4323 = outClusterET_addr32_3_reg_25805.read();
        outpeakEta358_2_reg_4218 = outpeakEta_addr_118_3_reg_25812.read();
        outpeakEta359_1_reg_4233 = outpeakEta_addr16_re_3_reg_25791.read();
        outpeakPhi427_2_reg_4248 = outpeakPhi_addr_123_3_reg_25826.read();
        outpeakPhi428_1_reg_4263 = outpeakPhi_addr21_re_3_reg_25798.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_fu_10523_p2.read()))) {
        outClusterET_addr32_10_reg_25713 = grp_mergeClusters_fu_7957_ap_return_2.read();
        outClusterET_addr_13_9_reg_25736 = grp_mergeClusters_fu_7957_ap_return_5.read();
        outpeakEta_addr16_re_10_reg_25699 = grp_mergeClusters_fu_7957_ap_return_0.read();
        outpeakEta_addr_118_9_reg_25720 = grp_mergeClusters_fu_7957_ap_return_3.read();
        outpeakPhi_addr21_re_10_reg_25706 = grp_mergeClusters_fu_7957_ap_return_1.read();
        outpeakPhi_addr_123_9_reg_25728 = grp_mergeClusters_fu_7957_ap_return_4.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_fu_14114_p2.read()))) {
        outClusterET_addr32_12_reg_26061 = grp_mergeClusters_fu_7957_ap_return_2.read();
        outClusterET_addr_13_10_reg_26096 = grp_mergeClusters_fu_7957_ap_return_5.read();
        outpeakEta12402_4_reg_26075 = outpeakEta12402_4_fu_14215_p34.read();
        outpeakEta_addr16_re_12_reg_26047 = grp_mergeClusters_fu_7957_ap_return_0.read();
        outpeakEta_addr_118_10_reg_26068 = grp_mergeClusters_fu_7957_ap_return_3.read();
        outpeakPhi14471_4_reg_26089 = outpeakPhi14471_4_fu_14285_p34.read();
        outpeakPhi_addr21_re_12_reg_26054 = grp_mergeClusters_fu_7957_ap_return_1.read();
        outpeakPhi_addr_123_10_reg_26082 = grp_mergeClusters_fu_7957_ap_return_4.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(demorgan_fu_9363_p2.read(), ap_const_lv1_0))) {
        outClusterET_addr32_1_reg_25505 = grp_mergeClusters_fu_7903_ap_return_2.read();
        outClusterET_addr_13_1_reg_25528 = grp_mergeClusters_fu_7903_ap_return_5.read();
        outpeakEta_addr16_re_1_reg_25491 = grp_mergeClusters_fu_7903_ap_return_0.read();
        outpeakEta_addr_118_1_reg_25512 = grp_mergeClusters_fu_7903_ap_return_3.read();
        outpeakPhi_addr21_re_1_reg_25498 = grp_mergeClusters_fu_7903_ap_return_1.read();
        outpeakPhi_addr_123_1_reg_25520 = grp_mergeClusters_fu_7903_ap_return_4.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_fu_11630_p2.read()))) {
        outClusterET_addr32_3_reg_25805 = grp_mergeClusters_fu_7903_ap_return_2.read();
        outClusterET_addr_13_3_reg_25840 = grp_mergeClusters_fu_7903_ap_return_5.read();
        outpeakEta356_4_reg_25819 = outpeakEta356_4_fu_11731_p34.read();
        outpeakEta_addr16_re_3_reg_25791 = grp_mergeClusters_fu_7903_ap_return_0.read();
        outpeakEta_addr_118_3_reg_25812 = grp_mergeClusters_fu_7903_ap_return_3.read();
        outpeakPhi425_4_reg_25833 = outpeakPhi425_4_fu_11801_p34.read();
        outpeakPhi_addr21_re_3_reg_25798 = grp_mergeClusters_fu_7903_ap_return_1.read();
        outpeakPhi_addr_123_3_reg_25826 = grp_mergeClusters_fu_7903_ap_return_4.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_fu_9943_p2.read()))) {
        outClusterET_addr32_6_reg_25609 = grp_mergeClusters_fu_7930_ap_return_2.read();
        outClusterET_addr_13_5_reg_25632 = grp_mergeClusters_fu_7930_ap_return_5.read();
        outpeakEta_addr16_re_6_reg_25595 = grp_mergeClusters_fu_7930_ap_return_0.read();
        outpeakEta_addr_118_5_reg_25616 = grp_mergeClusters_fu_7930_ap_return_3.read();
        outpeakPhi_addr21_re_6_reg_25602 = grp_mergeClusters_fu_7930_ap_return_1.read();
        outpeakPhi_addr_123_5_reg_25624 = grp_mergeClusters_fu_7930_ap_return_4.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_fu_12872_p2.read()))) {
        outClusterET_addr32_8_reg_25933 = grp_mergeClusters_fu_7930_ap_return_2.read();
        outClusterET_addr_13_7_reg_25968 = grp_mergeClusters_fu_7930_ap_return_5.read();
        outpeakEta11379_4_reg_25947 = outpeakEta11379_4_fu_12973_p34.read();
        outpeakEta_addr16_re_8_reg_25919 = grp_mergeClusters_fu_7930_ap_return_0.read();
        outpeakEta_addr_118_7_reg_25940 = grp_mergeClusters_fu_7930_ap_return_3.read();
        outpeakPhi13448_4_reg_25961 = outpeakPhi13448_4_fu_13043_p34.read();
        outpeakPhi_addr21_re_8_reg_25926 = grp_mergeClusters_fu_7930_ap_return_1.read();
        outpeakPhi_addr_123_7_reg_25954 = grp_mergeClusters_fu_7930_ap_return_4.read();
    }
}

void merge_acrossphi::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<3>) ("XXX");
            break;
    }
}

}

