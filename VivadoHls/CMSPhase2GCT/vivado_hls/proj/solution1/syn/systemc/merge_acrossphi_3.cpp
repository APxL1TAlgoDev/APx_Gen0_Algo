#include "merge_acrossphi.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void merge_acrossphi::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void merge_acrossphi::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void merge_acrossphi::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void merge_acrossphi::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void merge_acrossphi::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET19647_4_phi_fu_3429_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
         esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1))) {
        ap_phi_mux_outClusterET19647_4_phi_fu_3429_p8 = outClusterET_addr_13_5_reg_25632.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
                 !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3) && 
                 !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
                 esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3)))) {
        ap_phi_mux_outClusterET19647_4_phi_fu_3429_p8 = outClusterET19647_1_reg_2804.read();
    } else {
        ap_phi_mux_outClusterET19647_4_phi_fu_3429_p8 = outClusterET19647_4_reg_3426.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET19649_2_phi_fu_3446_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outClusterET19649_2_phi_fu_3446_p8 = outClusterET_addr_13_5_reg_25632.read();
    } else {
        ap_phi_mux_outClusterET19649_2_phi_fu_3446_p8 = outClusterET19649_2_reg_3442.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET19655_5_phi_fu_5553_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
         esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9))) {
        ap_phi_mux_outClusterET19655_5_phi_fu_5553_p8 = outClusterET_addr_13_7_reg_25968.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)))) {
        ap_phi_mux_outClusterET19655_5_phi_fu_5553_p8 = outClusterET19653_2_reg_3732.read();
    } else {
        ap_phi_mux_outClusterET19655_5_phi_fu_5553_p8 = outClusterET19655_5_reg_5550.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET19659_2_phi_fu_5524_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outClusterET19659_2_phi_fu_5524_p8 = outClusterET_addr_13_7_reg_25968.read();
    } else {
        ap_phi_mux_outClusterET19659_2_phi_fu_5524_p8 = outClusterET19659_2_reg_5520.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET20670_4_phi_fu_3863_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
         esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1))) {
        ap_phi_mux_outClusterET20670_4_phi_fu_3863_p8 = outClusterET_addr_13_9_reg_25736.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
                 !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3) && 
                 !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
                 esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3)))) {
        ap_phi_mux_outClusterET20670_4_phi_fu_3863_p8 = outClusterET20670_1_reg_2888.read();
    } else {
        ap_phi_mux_outClusterET20670_4_phi_fu_3863_p8 = outClusterET20670_4_reg_3860.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET20672_2_phi_fu_3880_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outClusterET20672_2_phi_fu_3880_p8 = outClusterET_addr_13_9_reg_25736.read();
    } else {
        ap_phi_mux_outClusterET20672_2_phi_fu_3880_p8 = outClusterET20672_2_reg_3876.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET20678_5_phi_fu_6751_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
         esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9))) {
        ap_phi_mux_outClusterET20678_5_phi_fu_6751_p8 = outClusterET_addr_13_10_reg_26096.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)))) {
        ap_phi_mux_outClusterET20678_5_phi_fu_6751_p8 = outClusterET20676_2_reg_4166.read();
    } else {
        ap_phi_mux_outClusterET20678_5_phi_fu_6751_p8 = outClusterET20678_5_reg_6748.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET20680_2_phi_fu_6768_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outClusterET20680_2_phi_fu_6768_p8 = outClusterET_addr_13_10_reg_26096.read();
    } else {
        ap_phi_mux_outClusterET20680_2_phi_fu_6768_p8 = outClusterET20680_2_reg_6764.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET624_4_phi_fu_3026_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
         esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1))) {
        ap_phi_mux_outClusterET624_4_phi_fu_3026_p8 = outClusterET_addr_13_1_reg_25528.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
                 !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3) && 
                 !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
                 esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3)))) {
        ap_phi_mux_outClusterET624_4_phi_fu_3026_p8 = outClusterET624_1_reg_2706.read();
    } else {
        ap_phi_mux_outClusterET624_4_phi_fu_3026_p8 = outClusterET624_4_reg_3023.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET628_2_phi_fu_2996_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outClusterET628_2_phi_fu_2996_p8 = outClusterET_addr_13_1_reg_25528.read();
    } else {
        ap_phi_mux_outClusterET628_2_phi_fu_2996_p8 = outClusterET628_2_reg_2992.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET632_5_phi_fu_4295_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
         esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9))) {
        ap_phi_mux_outClusterET632_5_phi_fu_4295_p8 = outClusterET_addr_13_3_reg_25840.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
                 esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)))) {
        ap_phi_mux_outClusterET632_5_phi_fu_4295_p8 = outClusterET630_2_reg_3248.read();
    } else {
        ap_phi_mux_outClusterET632_5_phi_fu_4295_p8 = outClusterET632_5_reg_4292.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET634_2_phi_fu_4312_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outClusterET634_2_phi_fu_4312_p8 = outClusterET_addr_13_3_reg_25840.read();
    } else {
        ap_phi_mux_outClusterET634_2_phi_fu_4312_p8 = outClusterET634_2_reg_4308.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_0_11_s_phi_fu_5111_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
         esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B))) {
        ap_phi_mux_outClusterET_0_11_s_phi_fu_5111_p20 = grp_mergeClusters_fu_7888_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_0_11_s_phi_fu_5111_p20 = ap_phi_mux_outClusterET634_2_phi_fu_4312_p8.read();
    } else {
        ap_phi_mux_outClusterET_0_11_s_phi_fu_5111_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_0_12_s_phi_fu_4327_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outClusterET_0_12_s_phi_fu_4327_p8 = outClusterET_addr32_3_reg_25805.read();
    } else {
        ap_phi_mux_outClusterET_0_12_s_phi_fu_4327_p8 = outClusterET_0_12_s_reg_4323.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_0_13_s_phi_fu_5179_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
         esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D))) {
        ap_phi_mux_outClusterET_0_13_s_phi_fu_5179_p20 = grp_mergeClusters_fu_7888_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_0_13_s_phi_fu_5179_p20 = ap_phi_mux_outClusterET634_2_phi_fu_4312_p8.read();
    } else {
        ap_phi_mux_outClusterET_0_13_s_phi_fu_5179_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_0_17_s_phi_fu_5391_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()) && 
         esl_seteq<1,5,5>(tmp_5_reg_25895.read(), ap_const_lv5_11))) {
        ap_phi_mux_outClusterET_0_17_s_phi_fu_5391_p8 = grp_mergeClusters_fu_7903_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()) && 
                 !esl_seteq<1,5,5>(tmp_5_reg_25895.read(), ap_const_lv5_11) && 
                 !esl_seteq<1,5,5>(tmp_5_reg_25895.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_5_reg_25895.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, demorgan4_fu_16619_p2.read())))) {
        ap_phi_mux_outClusterET_0_17_s_phi_fu_5391_p8 = grp_mergeClusters_fu_7888_ap_return_5.read();
    } else {
        ap_phi_mux_outClusterET_0_17_s_phi_fu_5391_p8 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_0_1_w_phi_fu_5273_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
         esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1))) {
        ap_phi_mux_outClusterET_0_1_w_phi_fu_5273_p20 = grp_mergeClusters_fu_7888_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_0_1_w_phi_fu_5273_p20 = outClusterET624_7_reg_3313.read();
    } else {
        ap_phi_mux_outClusterET_0_1_w_phi_fu_5273_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_0_3_w_phi_fu_5239_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
         esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3))) {
        ap_phi_mux_outClusterET_0_3_w_phi_fu_5239_p20 = grp_mergeClusters_fu_7888_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_0_3_w_phi_fu_5239_p20 = outClusterET626_5_reg_3290.read();
    } else {
        ap_phi_mux_outClusterET_0_3_w_phi_fu_5239_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_0_5_w_phi_fu_5145_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
         esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5))) {
        ap_phi_mux_outClusterET_0_5_w_phi_fu_5145_p20 = grp_mergeClusters_fu_7888_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_0_5_w_phi_fu_5145_p20 = outClusterET628_5_reg_3267.read();
    } else {
        ap_phi_mux_outClusterET_0_5_w_phi_fu_5145_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_0_7_w_phi_fu_5017_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
         esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7))) {
        ap_phi_mux_outClusterET_0_7_w_phi_fu_5017_p20 = grp_mergeClusters_fu_7888_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_0_7_w_phi_fu_5017_p20 = outClusterET630_2_reg_3248.read();
    } else {
        ap_phi_mux_outClusterET_0_7_w_phi_fu_5017_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_0_9_w_phi_fu_5051_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
         esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9))) {
        ap_phi_mux_outClusterET_0_9_w_phi_fu_5051_p20 = grp_mergeClusters_fu_7888_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_0_9_w_phi_fu_5051_p20 = ap_phi_mux_outClusterET632_5_phi_fu_4295_p8.read();
    } else {
        ap_phi_mux_outClusterET_0_9_w_phi_fu_5051_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_1_11_s_phi_fu_6467_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
         esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B))) {
        ap_phi_mux_outClusterET_1_11_s_phi_fu_6467_p20 = grp_mergeClusters_fu_7915_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_1_11_s_phi_fu_6467_p20 = ap_phi_mux_outClusterET19659_2_phi_fu_5524_p8.read();
    } else {
        ap_phi_mux_outClusterET_1_11_s_phi_fu_6467_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_1_12_s_phi_fu_5539_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outClusterET_1_12_s_phi_fu_5539_p8 = outClusterET_addr32_8_reg_25933.read();
    } else {
        ap_phi_mux_outClusterET_1_12_s_phi_fu_5539_p8 = outClusterET_1_12_s_reg_5535.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_1_13_s_phi_fu_6433_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
         esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D))) {
        ap_phi_mux_outClusterET_1_13_s_phi_fu_6433_p20 = grp_mergeClusters_fu_7915_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_1_13_s_phi_fu_6433_p20 = ap_phi_mux_outClusterET19659_2_phi_fu_5524_p8.read();
    } else {
        ap_phi_mux_outClusterET_1_13_s_phi_fu_6433_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_1_17_s_phi_fu_6647_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()) && 
         esl_seteq<1,5,5>(tmp_13_reg_26023.read(), ap_const_lv5_11))) {
        ap_phi_mux_outClusterET_1_17_s_phi_fu_6647_p8 = grp_mergeClusters_fu_7930_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()) && 
                 !esl_seteq<1,5,5>(tmp_13_reg_26023.read(), ap_const_lv5_11) && 
                 !esl_seteq<1,5,5>(tmp_13_reg_26023.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_13_reg_26023.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, demorgan9_fu_18790_p2.read())))) {
        ap_phi_mux_outClusterET_1_17_s_phi_fu_6647_p8 = grp_mergeClusters_fu_7915_ap_return_5.read();
    } else {
        ap_phi_mux_outClusterET_1_17_s_phi_fu_6647_p8 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_1_1_w_phi_fu_6245_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
         esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1))) {
        ap_phi_mux_outClusterET_1_1_w_phi_fu_6245_p20 = grp_mergeClusters_fu_7915_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_1_1_w_phi_fu_6245_p20 = outClusterET19647_7_reg_3663.read();
    } else {
        ap_phi_mux_outClusterET_1_1_w_phi_fu_6245_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_1_3_w_phi_fu_6305_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
         esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3))) {
        ap_phi_mux_outClusterET_1_3_w_phi_fu_6305_p20 = grp_mergeClusters_fu_7915_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_1_3_w_phi_fu_6305_p20 = outClusterET19649_5_reg_3686.read();
    } else {
        ap_phi_mux_outClusterET_1_3_w_phi_fu_6305_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_1_5_w_phi_fu_6339_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
         esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5))) {
        ap_phi_mux_outClusterET_1_5_w_phi_fu_6339_p20 = grp_mergeClusters_fu_7915_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_1_5_w_phi_fu_6339_p20 = outClusterET19651_5_reg_3709.read();
    } else {
        ap_phi_mux_outClusterET_1_5_w_phi_fu_6339_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_1_7_w_phi_fu_6373_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
         esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7))) {
        ap_phi_mux_outClusterET_1_7_w_phi_fu_6373_p20 = grp_mergeClusters_fu_7915_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_1_7_w_phi_fu_6373_p20 = outClusterET19653_2_reg_3732.read();
    } else {
        ap_phi_mux_outClusterET_1_7_w_phi_fu_6373_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_1_9_w_phi_fu_6501_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
         esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9))) {
        ap_phi_mux_outClusterET_1_9_w_phi_fu_6501_p20 = grp_mergeClusters_fu_7915_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_1_9_w_phi_fu_6501_p20 = ap_phi_mux_outClusterET19655_5_phi_fu_5553_p8.read();
    } else {
        ap_phi_mux_outClusterET_1_9_w_phi_fu_6501_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_2_11_s_phi_fu_7669_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
         esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B))) {
        ap_phi_mux_outClusterET_2_11_s_phi_fu_7669_p20 = grp_mergeClusters_fu_7942_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_2_11_s_phi_fu_7669_p20 = ap_phi_mux_outClusterET20680_2_phi_fu_6768_p8.read();
    } else {
        ap_phi_mux_outClusterET_2_11_s_phi_fu_7669_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_2_12_s_phi_fu_6783_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outClusterET_2_12_s_phi_fu_6783_p8 = outClusterET_addr32_12_reg_26061.read();
    } else {
        ap_phi_mux_outClusterET_2_12_s_phi_fu_6783_p8 = outClusterET_2_12_s_reg_6779.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_2_13_s_phi_fu_7703_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
         esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D))) {
        ap_phi_mux_outClusterET_2_13_s_phi_fu_7703_p20 = grp_mergeClusters_fu_7942_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_2_13_s_phi_fu_7703_p20 = ap_phi_mux_outClusterET20680_2_phi_fu_6768_p8.read();
    } else {
        ap_phi_mux_outClusterET_2_13_s_phi_fu_7703_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_2_17_s_phi_fu_7847_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()) && 
         esl_seteq<1,5,5>(tmp_20_reg_26151.read(), ap_const_lv5_11))) {
        ap_phi_mux_outClusterET_2_17_s_phi_fu_7847_p8 = grp_mergeClusters_fu_7957_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()) && 
                 !esl_seteq<1,5,5>(tmp_20_reg_26151.read(), ap_const_lv5_11) && 
                 !esl_seteq<1,5,5>(tmp_20_reg_26151.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_20_reg_26151.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, demorgan14_fu_20961_p2.read())))) {
        ap_phi_mux_outClusterET_2_17_s_phi_fu_7847_p8 = grp_mergeClusters_fu_7942_ap_return_5.read();
    } else {
        ap_phi_mux_outClusterET_2_17_s_phi_fu_7847_p8 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_2_1_w_phi_fu_7473_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
         esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1))) {
        ap_phi_mux_outClusterET_2_1_w_phi_fu_7473_p20 = grp_mergeClusters_fu_7942_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_2_1_w_phi_fu_7473_p20 = outClusterET20670_7_reg_4097.read();
    } else {
        ap_phi_mux_outClusterET_2_1_w_phi_fu_7473_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_2_3_w_phi_fu_7533_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
         esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3))) {
        ap_phi_mux_outClusterET_2_3_w_phi_fu_7533_p20 = grp_mergeClusters_fu_7942_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_2_3_w_phi_fu_7533_p20 = outClusterET20672_5_reg_4120.read();
    } else {
        ap_phi_mux_outClusterET_2_3_w_phi_fu_7533_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_2_5_w_phi_fu_7567_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
         esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5))) {
        ap_phi_mux_outClusterET_2_5_w_phi_fu_7567_p20 = grp_mergeClusters_fu_7942_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_2_5_w_phi_fu_7567_p20 = outClusterET20674_5_reg_4143.read();
    } else {
        ap_phi_mux_outClusterET_2_5_w_phi_fu_7567_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_2_7_w_phi_fu_7601_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
         esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7))) {
        ap_phi_mux_outClusterET_2_7_w_phi_fu_7601_p20 = grp_mergeClusters_fu_7942_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_2_7_w_phi_fu_7601_p20 = outClusterET20676_2_reg_4166.read();
    } else {
        ap_phi_mux_outClusterET_2_7_w_phi_fu_7601_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outClusterET_2_9_w_phi_fu_7635_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
         esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9))) {
        ap_phi_mux_outClusterET_2_9_w_phi_fu_7635_p20 = grp_mergeClusters_fu_7942_ap_return_5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1)))) {
        ap_phi_mux_outClusterET_2_9_w_phi_fu_7635_p20 = ap_phi_mux_outClusterET20678_5_phi_fu_6751_p8.read();
    } else {
        ap_phi_mux_outClusterET_2_9_w_phi_fu_7635_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta11371_4_phi_fu_3339_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outpeakEta11371_4_phi_fu_3339_p8 = outpeakEta11371_3_fu_12217_p34.read();
    } else {
        ap_phi_mux_outpeakEta11371_4_phi_fu_3339_p8 = outpeakEta11371_4_reg_3336.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta11373_2_phi_fu_3354_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outpeakEta11373_2_phi_fu_3354_p8 = outpeakEta_addr_118_5_reg_25616.read();
    } else {
        ap_phi_mux_outpeakEta11373_2_phi_fu_3354_p8 = outpeakEta11373_2_reg_3350.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta11379_5_phi_fu_5465_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakEta11379_5_phi_fu_5465_p8 = outpeakEta11379_4_reg_25947.read();
    } else {
        ap_phi_mux_outpeakEta11379_5_phi_fu_5465_p8 = outpeakEta11379_5_reg_5462.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta11382_1_phi_fu_5451_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakEta11382_1_phi_fu_5451_p8 = outpeakEta_addr16_re_8_reg_25919.read();
    } else {
        ap_phi_mux_outpeakEta11382_1_phi_fu_5451_p8 = outpeakEta11382_1_reg_5447.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta11383_2_phi_fu_5436_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakEta11383_2_phi_fu_5436_p8 = outpeakEta_addr_118_7_reg_25940.read();
    } else {
        ap_phi_mux_outpeakEta11383_2_phi_fu_5436_p8 = outpeakEta11383_2_reg_5432.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta12394_4_phi_fu_3773_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outpeakEta12394_4_phi_fu_3773_p8 = outpeakEta12394_3_fu_13459_p34.read();
    } else {
        ap_phi_mux_outpeakEta12394_4_phi_fu_3773_p8 = outpeakEta12394_4_reg_3770.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta12396_2_phi_fu_3788_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outpeakEta12396_2_phi_fu_3788_p8 = outpeakEta_addr_118_9_reg_25720.read();
    } else {
        ap_phi_mux_outpeakEta12396_2_phi_fu_3788_p8 = outpeakEta12396_2_reg_3784.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta12402_5_phi_fu_6663_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakEta12402_5_phi_fu_6663_p8 = outpeakEta12402_4_reg_26075.read();
    } else {
        ap_phi_mux_outpeakEta12402_5_phi_fu_6663_p8 = outpeakEta12402_5_reg_6660.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta12404_2_phi_fu_6678_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakEta12404_2_phi_fu_6678_p8 = outpeakEta_addr_118_10_reg_26068.read();
    } else {
        ap_phi_mux_outpeakEta12404_2_phi_fu_6678_p8 = outpeakEta12404_2_reg_6674.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta12405_1_phi_fu_6693_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakEta12405_1_phi_fu_6693_p8 = outpeakEta_addr16_re_12_reg_26047.read();
    } else {
        ap_phi_mux_outpeakEta12405_1_phi_fu_6693_p8 = outpeakEta12405_1_reg_6689.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta348_4_phi_fu_2936_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outpeakEta348_4_phi_fu_2936_p8 = outpeakEta348_3_fu_10975_p34.read();
    } else {
        ap_phi_mux_outpeakEta348_4_phi_fu_2936_p8 = outpeakEta348_4_reg_2933.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta352_2_phi_fu_2906_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outpeakEta352_2_phi_fu_2906_p8 = outpeakEta_addr_118_1_reg_25512.read();
    } else {
        ap_phi_mux_outpeakEta352_2_phi_fu_2906_p8 = outpeakEta352_2_reg_2902.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta356_5_phi_fu_4207_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakEta356_5_phi_fu_4207_p8 = outpeakEta356_4_reg_25819.read();
    } else {
        ap_phi_mux_outpeakEta356_5_phi_fu_4207_p8 = outpeakEta356_5_reg_4204.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta358_2_phi_fu_4222_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakEta358_2_phi_fu_4222_p8 = outpeakEta_addr_118_3_reg_25812.read();
    } else {
        ap_phi_mux_outpeakEta358_2_phi_fu_4222_p8 = outpeakEta358_2_reg_4218.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta359_1_phi_fu_4237_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakEta359_1_phi_fu_4237_p8 = outpeakEta_addr16_re_3_reg_25791.read();
    } else {
        ap_phi_mux_outpeakEta359_1_phi_fu_4237_p8 = outpeakEta359_1_reg_4233.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_0_0_wri_phi_fu_4653_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_0_0_wri_phi_fu_4653_p20 = outpeakEta_1_reg_2664.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_0_0_wri_phi_fu_4653_p20 = outpeakEta_3_fu_14705_p34.read();
    } else {
        ap_phi_mux_outpeakEta_0_0_wri_phi_fu_4653_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_0_11_wr_phi_fu_4393_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_0_11_wr_phi_fu_4393_p20 = ap_phi_mux_outpeakEta358_2_phi_fu_4222_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_0_11_wr_phi_fu_4393_p20 = outpeakEta358_4_fu_15485_p34.read();
    } else {
        ap_phi_mux_outpeakEta_0_11_wr_phi_fu_4393_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_0_12_wr_phi_fu_4445_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_0_12_wr_phi_fu_4445_p20 = ap_phi_mux_outpeakEta359_1_phi_fu_4237_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_0_12_wr_phi_fu_4445_p20 = outpeakEta359_3_fu_15329_p34.read();
    } else {
        ap_phi_mux_outpeakEta_0_12_wr_phi_fu_4445_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_0_13_wr_phi_fu_4471_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_0_13_wr_phi_fu_4471_p20 = ap_phi_mux_outpeakEta358_2_phi_fu_4222_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_0_13_wr_phi_fu_4471_p20 = outpeakEta360_4_fu_15251_p34.read();
    } else {
        ap_phi_mux_outpeakEta_0_13_wr_phi_fu_4471_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_0_17_wr_phi_fu_5307_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, demorgan4_fu_16619_p2.read()))) {
        ap_phi_mux_outpeakEta_0_17_wr_phi_fu_5307_p8 = grp_mergeClusters_fu_7888_ap_return_3.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()) && 
                 !esl_seteq<1,5,5>(tmp_5_reg_25895.read(), ap_const_lv5_11) && 
                 !esl_seteq<1,5,5>(tmp_5_reg_25895.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_5_reg_25895.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_5_reg_25895.read(), ap_const_lv5_11)))) {
        ap_phi_mux_outpeakEta_0_17_wr_phi_fu_5307_p8 = outpeakEta364_4_fu_16728_p34.read();
    } else {
        ap_phi_mux_outpeakEta_0_17_wr_phi_fu_5307_p8 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_0_1_wri_phi_fu_4627_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_0_1_wri_phi_fu_4627_p20 = outpeakEta348_7_reg_3115.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_0_1_wri_phi_fu_4627_p20 = outpeakEta348_9_fu_14783_p34.read();
    } else {
        ap_phi_mux_outpeakEta_0_1_wri_phi_fu_4627_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_0_3_wri_phi_fu_4601_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_0_3_wri_phi_fu_4601_p20 = outpeakEta350_5_reg_3096.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_0_3_wri_phi_fu_4601_p20 = outpeakEta350_7_fu_14861_p34.read();
    } else {
        ap_phi_mux_outpeakEta_0_3_wri_phi_fu_4601_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_0_4_wri_phi_fu_4575_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_0_4_wri_phi_fu_4575_p20 = outpeakEta351_1_reg_2917.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_0_4_wri_phi_fu_4575_p20 = outpeakEta351_3_fu_14939_p34.read();
    } else {
        ap_phi_mux_outpeakEta_0_4_wri_phi_fu_4575_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_0_5_wri_phi_fu_4549_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_0_5_wri_phi_fu_4549_p20 = outpeakEta352_5_reg_3077.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_0_5_wri_phi_fu_4549_p20 = outpeakEta352_7_fu_15017_p34.read();
    } else {
        ap_phi_mux_outpeakEta_0_5_wri_phi_fu_4549_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_0_7_wri_phi_fu_4497_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_0_7_wri_phi_fu_4497_p20 = outpeakEta356_2_reg_3039.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_0_7_wri_phi_fu_4497_p20 = outpeakEta354_4_fu_15173_p34.read();
    } else {
        ap_phi_mux_outpeakEta_0_7_wri_phi_fu_4497_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_0_8_wri_phi_fu_4419_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_0_8_wri_phi_fu_4419_p20 = outpeakEta355_1_reg_3058.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_0_8_wri_phi_fu_4419_p20 = outpeakEta355_3_fu_15407_p34.read();
    } else {
        ap_phi_mux_outpeakEta_0_8_wri_phi_fu_4419_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_0_9_wri_phi_fu_4341_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_0_9_wri_phi_fu_4341_p20 = ap_phi_mux_outpeakEta356_5_phi_fu_4207_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_0_9_wri_phi_fu_4341_p20 = outpeakEta356_7_fu_15563_p34.read();
    } else {
        ap_phi_mux_outpeakEta_0_9_wri_phi_fu_4341_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_1_0_wri_phi_fu_5569_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_1_0_wri_phi_fu_5569_p20 = outpeakEta11_1_reg_2734.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_1_0_wri_phi_fu_5569_p20 = outpeakEta11_3_fu_17734_p34.read();
    } else {
        ap_phi_mux_outpeakEta_1_0_wri_phi_fu_5569_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_1_11_wr_phi_fu_5855_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_1_11_wr_phi_fu_5855_p20 = ap_phi_mux_outpeakEta11383_2_phi_fu_5436_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_1_11_wr_phi_fu_5855_p20 = outpeakEta11381_4_fu_16954_p34.read();
    } else {
        ap_phi_mux_outpeakEta_1_11_wr_phi_fu_5855_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_1_12_wr_phi_fu_5829_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_1_12_wr_phi_fu_5829_p20 = ap_phi_mux_outpeakEta11382_1_phi_fu_5451_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_1_12_wr_phi_fu_5829_p20 = outpeakEta11382_3_fu_17032_p34.read();
    } else {
        ap_phi_mux_outpeakEta_1_12_wr_phi_fu_5829_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_1_13_wr_phi_fu_5803_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_1_13_wr_phi_fu_5803_p20 = ap_phi_mux_outpeakEta11383_2_phi_fu_5436_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_1_13_wr_phi_fu_5803_p20 = outpeakEta11383_4_fu_17110_p34.read();
    } else {
        ap_phi_mux_outpeakEta_1_13_wr_phi_fu_5803_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_1_17_wr_phi_fu_6563_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, demorgan9_fu_18790_p2.read()))) {
        ap_phi_mux_outpeakEta_1_17_wr_phi_fu_6563_p8 = grp_mergeClusters_fu_7915_ap_return_3.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()) && 
                 !esl_seteq<1,5,5>(tmp_13_reg_26023.read(), ap_const_lv5_11) && 
                 !esl_seteq<1,5,5>(tmp_13_reg_26023.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_13_reg_26023.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_13_reg_26023.read(), ap_const_lv5_11)))) {
        ap_phi_mux_outpeakEta_1_17_wr_phi_fu_6563_p8 = outpeakEta11387_4_fu_18899_p34.read();
    } else {
        ap_phi_mux_outpeakEta_1_17_wr_phi_fu_6563_p8 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_1_1_wri_phi_fu_5595_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_1_1_wri_phi_fu_5595_p20 = outpeakEta11371_7_reg_3473.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_1_1_wri_phi_fu_5595_p20 = outpeakEta11371_9_fu_17656_p34.read();
    } else {
        ap_phi_mux_outpeakEta_1_1_wri_phi_fu_5595_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_1_3_wri_phi_fu_5647_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_1_3_wri_phi_fu_5647_p20 = outpeakEta11373_5_reg_3492.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_1_3_wri_phi_fu_5647_p20 = outpeakEta11373_7_fu_17578_p34.read();
    } else {
        ap_phi_mux_outpeakEta_1_3_wri_phi_fu_5647_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_1_4_wri_phi_fu_5673_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_1_4_wri_phi_fu_5673_p20 = outpeakEta11374_1_reg_3365.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_1_4_wri_phi_fu_5673_p20 = outpeakEta11374_3_fu_17500_p34.read();
    } else {
        ap_phi_mux_outpeakEta_1_4_wri_phi_fu_5673_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_1_5_wri_phi_fu_5699_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_1_5_wri_phi_fu_5699_p20 = outpeakEta11375_5_reg_3511.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_1_5_wri_phi_fu_5699_p20 = outpeakEta11375_7_fu_17422_p34.read();
    } else {
        ap_phi_mux_outpeakEta_1_5_wri_phi_fu_5699_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_1_7_wri_phi_fu_5725_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_1_7_wri_phi_fu_5725_p20 = outpeakEta11377_2_reg_3530.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_1_7_wri_phi_fu_5725_p20 = outpeakEta11377_4_fu_17344_p34.read();
    } else {
        ap_phi_mux_outpeakEta_1_7_wri_phi_fu_5725_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_1_8_wri_phi_fu_5751_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_1_8_wri_phi_fu_5751_p20 = outpeakEta11378_1_reg_3549.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_1_8_wri_phi_fu_5751_p20 = outpeakEta11378_3_fu_17266_p34.read();
    } else {
        ap_phi_mux_outpeakEta_1_8_wri_phi_fu_5751_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_1_9_wri_phi_fu_5881_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_1_9_wri_phi_fu_5881_p20 = ap_phi_mux_outpeakEta11379_5_phi_fu_5465_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_1_9_wri_phi_fu_5881_p20 = outpeakEta11379_7_fu_16876_p34.read();
    } else {
        ap_phi_mux_outpeakEta_1_9_wri_phi_fu_5881_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_2_0_wri_phi_fu_6797_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_2_0_wri_phi_fu_6797_p20 = outpeakEta12_1_reg_2818.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_2_0_wri_phi_fu_6797_p20 = outpeakEta12_3_fu_19905_p34.read();
    } else {
        ap_phi_mux_outpeakEta_2_0_wri_phi_fu_6797_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_2_11_wr_phi_fu_7031_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_2_11_wr_phi_fu_7031_p20 = ap_phi_mux_outpeakEta12404_2_phi_fu_6678_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_2_11_wr_phi_fu_7031_p20 = outpeakEta12404_4_fu_19281_p34.read();
    } else {
        ap_phi_mux_outpeakEta_2_11_wr_phi_fu_7031_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_2_12_wr_phi_fu_7057_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_2_12_wr_phi_fu_7057_p20 = ap_phi_mux_outpeakEta12405_1_phi_fu_6693_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_2_12_wr_phi_fu_7057_p20 = outpeakEta12405_3_fu_19203_p34.read();
    } else {
        ap_phi_mux_outpeakEta_2_12_wr_phi_fu_7057_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_2_13_wr_phi_fu_7083_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_2_13_wr_phi_fu_7083_p20 = ap_phi_mux_outpeakEta12404_2_phi_fu_6678_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_2_13_wr_phi_fu_7083_p20 = outpeakEta12406_4_fu_19125_p34.read();
    } else {
        ap_phi_mux_outpeakEta_2_13_wr_phi_fu_7083_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_2_17_wr_phi_fu_7763_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, demorgan14_fu_20961_p2.read()))) {
        ap_phi_mux_outpeakEta_2_17_wr_phi_fu_7763_p8 = grp_mergeClusters_fu_7942_ap_return_3.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()) && 
                 !esl_seteq<1,5,5>(tmp_20_reg_26151.read(), ap_const_lv5_11) && 
                 !esl_seteq<1,5,5>(tmp_20_reg_26151.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_20_reg_26151.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_20_reg_26151.read(), ap_const_lv5_11)))) {
        ap_phi_mux_outpeakEta_2_17_wr_phi_fu_7763_p8 = outpeakEta12410_4_fu_21070_p34.read();
    } else {
        ap_phi_mux_outpeakEta_2_17_wr_phi_fu_7763_p8 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_2_1_wri_phi_fu_6823_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_2_1_wri_phi_fu_6823_p20 = outpeakEta12394_7_reg_3907.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_2_1_wri_phi_fu_6823_p20 = outpeakEta12394_9_fu_19827_p34.read();
    } else {
        ap_phi_mux_outpeakEta_2_1_wri_phi_fu_6823_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_2_3_wri_phi_fu_6875_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_2_3_wri_phi_fu_6875_p20 = outpeakEta12396_5_reg_3926.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_2_3_wri_phi_fu_6875_p20 = outpeakEta12396_7_fu_19749_p34.read();
    } else {
        ap_phi_mux_outpeakEta_2_3_wri_phi_fu_6875_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_2_4_wri_phi_fu_6901_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_2_4_wri_phi_fu_6901_p20 = outpeakEta12397_1_reg_3799.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_2_4_wri_phi_fu_6901_p20 = outpeakEta12397_3_fu_19671_p34.read();
    } else {
        ap_phi_mux_outpeakEta_2_4_wri_phi_fu_6901_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_2_5_wri_phi_fu_6927_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_2_5_wri_phi_fu_6927_p20 = outpeakEta12398_5_reg_3945.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_2_5_wri_phi_fu_6927_p20 = outpeakEta12398_7_fu_19593_p34.read();
    } else {
        ap_phi_mux_outpeakEta_2_5_wri_phi_fu_6927_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_2_7_wri_phi_fu_6953_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_2_7_wri_phi_fu_6953_p20 = outpeakEta12400_2_reg_3964.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_2_7_wri_phi_fu_6953_p20 = outpeakEta12400_4_fu_19515_p34.read();
    } else {
        ap_phi_mux_outpeakEta_2_7_wri_phi_fu_6953_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_2_8_wri_phi_fu_6979_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_2_8_wri_phi_fu_6979_p20 = outpeakEta12401_1_reg_3983.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_2_8_wri_phi_fu_6979_p20 = outpeakEta12401_3_fu_19437_p34.read();
    } else {
        ap_phi_mux_outpeakEta_2_8_wri_phi_fu_6979_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakEta_2_9_wri_phi_fu_7005_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakEta_2_9_wri_phi_fu_7005_p20 = ap_phi_mux_outpeakEta12402_5_phi_fu_6663_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakEta_2_9_wri_phi_fu_7005_p20 = outpeakEta12402_7_fu_19359_p34.read();
    } else {
        ap_phi_mux_outpeakEta_2_9_wri_phi_fu_7005_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi13440_4_phi_fu_3384_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outpeakPhi13440_4_phi_fu_3384_p8 = outpeakPhi13440_3_fu_12288_p34.read();
    } else {
        ap_phi_mux_outpeakPhi13440_4_phi_fu_3384_p8 = outpeakPhi13440_4_reg_3381.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi13442_2_phi_fu_3399_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_reg_25591.read()) && 
          esl_seteq<1,4,4>(nPhi_1_1_1_reg_25581.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outpeakPhi13442_2_phi_fu_3399_p8 = outpeakPhi_addr_123_5_reg_25624.read();
    } else {
        ap_phi_mux_outpeakPhi13442_2_phi_fu_3399_p8 = outpeakPhi13442_2_reg_3395.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi13448_5_phi_fu_5479_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakPhi13448_5_phi_fu_5479_p8 = outpeakPhi13448_4_reg_25961.read();
    } else {
        ap_phi_mux_outpeakPhi13448_5_phi_fu_5479_p8 = outpeakPhi13448_5_reg_5476.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi13450_2_phi_fu_5494_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakPhi13450_2_phi_fu_5494_p8 = outpeakPhi_addr_123_7_reg_25954.read();
    } else {
        ap_phi_mux_outpeakPhi13450_2_phi_fu_5494_p8 = outpeakPhi13450_2_reg_5490.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi13451_1_phi_fu_5509_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_reg_25915.read()) && 
          esl_seteq<1,5,5>(nPhi_1_1_3_reg_25911.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakPhi13451_1_phi_fu_5509_p8 = outpeakPhi_addr21_re_8_reg_25926.read();
    } else {
        ap_phi_mux_outpeakPhi13451_1_phi_fu_5509_p8 = outpeakPhi13451_1_reg_5505.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi14463_4_phi_fu_3849_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outpeakPhi14463_4_phi_fu_3849_p8 = outpeakPhi14463_3_fu_13530_p34.read();
    } else {
        ap_phi_mux_outpeakPhi14463_4_phi_fu_3849_p8 = outpeakPhi14463_4_reg_3846.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi14467_2_phi_fu_3819_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_reg_25695.read()) && 
          esl_seteq<1,4,4>(nPhi_1_2_1_reg_25685.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outpeakPhi14467_2_phi_fu_3819_p8 = outpeakPhi_addr_123_9_reg_25728.read();
    } else {
        ap_phi_mux_outpeakPhi14467_2_phi_fu_3819_p8 = outpeakPhi14467_2_reg_3815.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi14471_5_phi_fu_6707_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakPhi14471_5_phi_fu_6707_p8 = outpeakPhi14471_4_reg_26089.read();
    } else {
        ap_phi_mux_outpeakPhi14471_5_phi_fu_6707_p8 = outpeakPhi14471_5_reg_6704.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi14473_2_phi_fu_6722_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakPhi14473_2_phi_fu_6722_p8 = outpeakPhi_addr_123_10_reg_26082.read();
    } else {
        ap_phi_mux_outpeakPhi14473_2_phi_fu_6722_p8 = outpeakPhi14473_2_reg_6718.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi14474_1_phi_fu_6737_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_reg_26043.read()) && 
          esl_seteq<1,5,5>(nPhi_1_2_3_reg_26039.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakPhi14474_1_phi_fu_6737_p8 = outpeakPhi_addr21_re_12_reg_26054.read();
    } else {
        ap_phi_mux_outpeakPhi14474_1_phi_fu_6737_p8 = outpeakPhi14474_1_reg_6733.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi417_4_phi_fu_2981_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outpeakPhi417_4_phi_fu_2981_p8 = outpeakPhi417_3_fu_11046_p34.read();
    } else {
        ap_phi_mux_outpeakPhi417_4_phi_fu_2981_p8 = outpeakPhi417_4_reg_2978.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi421_2_phi_fu_2951_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(demorgan_reg_25487.read(), ap_const_lv1_0) && 
          esl_seteq<1,4,4>(nPhi_1_0_1_reg_25477.read(), ap_const_lv4_1)))) {
        ap_phi_mux_outpeakPhi421_2_phi_fu_2951_p8 = outpeakPhi_addr_123_1_reg_25520.read();
    } else {
        ap_phi_mux_outpeakPhi421_2_phi_fu_2951_p8 = outpeakPhi421_2_reg_2947.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi425_5_phi_fu_4281_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakPhi425_5_phi_fu_4281_p8 = outpeakPhi425_4_reg_25833.read();
    } else {
        ap_phi_mux_outpeakPhi425_5_phi_fu_4281_p8 = outpeakPhi425_5_reg_4278.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi427_2_phi_fu_4252_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakPhi427_2_phi_fu_4252_p8 = outpeakPhi_addr_123_3_reg_25826.read();
    } else {
        ap_phi_mux_outpeakPhi427_2_phi_fu_4252_p8 = outpeakPhi427_2_reg_4248.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi428_1_phi_fu_4267_p8() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_reg_25787.read()) && 
          esl_seteq<1,5,5>(nPhi_1_0_3_reg_25783.read(), ap_const_lv5_9)))) {
        ap_phi_mux_outpeakPhi428_1_phi_fu_4267_p8 = outpeakPhi_addr21_re_3_reg_25798.read();
    } else {
        ap_phi_mux_outpeakPhi428_1_phi_fu_4267_p8 = outpeakPhi428_1_reg_4263.read();
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_0_0_wri_phi_fu_4991_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_0_0_wri_phi_fu_4991_p20 = outpeakPhi_1_reg_2692.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_0_0_wri_phi_fu_4991_p20 = outpeakPhi_3_fu_15641_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_0_0_wri_phi_fu_4991_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_0_11_wr_phi_fu_4679_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_0_11_wr_phi_fu_4679_p20 = ap_phi_mux_outpeakPhi427_2_phi_fu_4252_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_0_11_wr_phi_fu_4679_p20 = outpeakPhi427_4_fu_16499_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_0_11_wr_phi_fu_4679_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_0_12_wr_phi_fu_4705_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_0_12_wr_phi_fu_4705_p20 = ap_phi_mux_outpeakPhi428_1_phi_fu_4267_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_0_12_wr_phi_fu_4705_p20 = outpeakPhi428_3_fu_16421_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_0_12_wr_phi_fu_4705_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_0_13_wr_phi_fu_4757_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_0_13_wr_phi_fu_4757_p20 = ap_phi_mux_outpeakPhi427_2_phi_fu_4252_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_0_13_wr_phi_fu_4757_p20 = outpeakPhi429_4_fu_16343_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_0_13_wr_phi_fu_4757_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_0_17_wr_phi_fu_5349_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, demorgan4_fu_16619_p2.read()))) {
        ap_phi_mux_outpeakPhi_0_17_wr_phi_fu_5349_p8 = grp_mergeClusters_fu_7888_ap_return_4.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()) && 
                 !esl_seteq<1,5,5>(tmp_5_reg_25895.read(), ap_const_lv5_11) && 
                 !esl_seteq<1,5,5>(tmp_5_reg_25895.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_5_reg_25895.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_5_reg_25895.read(), ap_const_lv5_11)))) {
        ap_phi_mux_outpeakPhi_0_17_wr_phi_fu_5349_p8 = outpeakPhi433_4_fu_16800_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_0_17_wr_phi_fu_5349_p8 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_0_1_wri_phi_fu_4965_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_0_1_wri_phi_fu_4965_p20 = outpeakPhi417_7_reg_3210.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_0_1_wri_phi_fu_4965_p20 = outpeakPhi417_9_fu_15719_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_0_1_wri_phi_fu_4965_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_0_3_wri_phi_fu_4939_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_0_3_wri_phi_fu_4939_p20 = outpeakPhi419_5_reg_3191.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_0_3_wri_phi_fu_4939_p20 = outpeakPhi419_7_fu_15797_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_0_3_wri_phi_fu_4939_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_0_4_wri_phi_fu_4913_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_0_4_wri_phi_fu_4913_p20 = outpeakPhi420_1_reg_2962.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_0_4_wri_phi_fu_4913_p20 = outpeakPhi420_3_fu_15875_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_0_4_wri_phi_fu_4913_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_0_5_wri_phi_fu_4887_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_0_5_wri_phi_fu_4887_p20 = outpeakPhi421_5_reg_3172.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_0_5_wri_phi_fu_4887_p20 = outpeakPhi421_7_fu_15953_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_0_5_wri_phi_fu_4887_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_0_7_wri_phi_fu_4861_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_0_7_wri_phi_fu_4861_p20 = outpeakPhi425_2_reg_3134.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_0_7_wri_phi_fu_4861_p20 = outpeakPhi423_4_fu_16031_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_0_7_wri_phi_fu_4861_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_0_8_wri_phi_fu_4835_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_0_8_wri_phi_fu_4835_p20 = outpeakPhi424_1_reg_3153.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_0_8_wri_phi_fu_4835_p20 = outpeakPhi424_3_fu_16109_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_0_8_wri_phi_fu_4835_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_0_9_wri_phi_fu_4783_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan3_reg_25876.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_0_9_wri_phi_fu_4783_p20 = ap_phi_mux_outpeakPhi425_5_phi_fu_4281_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()) && 
                 esl_seteq<1,5,5>(tmp_3_reg_25848.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_0_9_wri_phi_fu_4783_p20 = outpeakPhi425_7_fu_16265_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_0_9_wri_phi_fu_4783_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_1_0_wri_phi_fu_5907_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_1_0_wri_phi_fu_5907_p20 = outpeakPhi13_1_reg_2762.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_1_0_wri_phi_fu_5907_p20 = outpeakPhi13_3_fu_18670_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_1_0_wri_phi_fu_5907_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_1_11_wr_phi_fu_6141_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_1_11_wr_phi_fu_6141_p20 = ap_phi_mux_outpeakPhi13450_2_phi_fu_5494_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_1_11_wr_phi_fu_6141_p20 = outpeakPhi13450_4_fu_18046_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_1_11_wr_phi_fu_6141_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_1_12_wr_phi_fu_6167_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_1_12_wr_phi_fu_6167_p20 = ap_phi_mux_outpeakPhi13451_1_phi_fu_5509_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_1_12_wr_phi_fu_6167_p20 = outpeakPhi13451_3_fu_17968_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_1_12_wr_phi_fu_6167_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_1_13_wr_phi_fu_6219_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_1_13_wr_phi_fu_6219_p20 = ap_phi_mux_outpeakPhi13450_2_phi_fu_5494_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_1_13_wr_phi_fu_6219_p20 = outpeakPhi13452_4_fu_17812_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_1_13_wr_phi_fu_6219_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_1_17_wr_phi_fu_6605_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, demorgan9_fu_18790_p2.read()))) {
        ap_phi_mux_outpeakPhi_1_17_wr_phi_fu_6605_p8 = grp_mergeClusters_fu_7915_ap_return_4.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()) && 
                 !esl_seteq<1,5,5>(tmp_13_reg_26023.read(), ap_const_lv5_11) && 
                 !esl_seteq<1,5,5>(tmp_13_reg_26023.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_13_reg_26023.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_13_reg_26023.read(), ap_const_lv5_11)))) {
        ap_phi_mux_outpeakPhi_1_17_wr_phi_fu_6605_p8 = outpeakPhi13456_4_fu_18971_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_1_17_wr_phi_fu_6605_p8 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_1_1_wri_phi_fu_5933_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_1_1_wri_phi_fu_5933_p20 = outpeakPhi13440_7_reg_3568.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_1_1_wri_phi_fu_5933_p20 = outpeakPhi13440_9_fu_18592_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_1_1_wri_phi_fu_5933_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_1_3_wri_phi_fu_5985_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_1_3_wri_phi_fu_5985_p20 = outpeakPhi13442_5_reg_3587.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_1_3_wri_phi_fu_5985_p20 = outpeakPhi13442_7_fu_18514_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_1_3_wri_phi_fu_5985_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_1_4_wri_phi_fu_6011_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_1_4_wri_phi_fu_6011_p20 = outpeakPhi13443_1_reg_3410.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_1_4_wri_phi_fu_6011_p20 = outpeakPhi13443_3_fu_18436_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_1_4_wri_phi_fu_6011_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_1_5_wri_phi_fu_6037_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_1_5_wri_phi_fu_6037_p20 = outpeakPhi13444_5_reg_3606.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_1_5_wri_phi_fu_6037_p20 = outpeakPhi13444_7_fu_18358_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_1_5_wri_phi_fu_6037_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_1_7_wri_phi_fu_6063_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_1_7_wri_phi_fu_6063_p20 = outpeakPhi13446_2_reg_3625.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_1_7_wri_phi_fu_6063_p20 = outpeakPhi13446_4_fu_18280_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_1_7_wri_phi_fu_6063_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_1_8_wri_phi_fu_6089_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_1_8_wri_phi_fu_6089_p20 = outpeakPhi13447_1_reg_3644.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_1_8_wri_phi_fu_6089_p20 = outpeakPhi13447_3_fu_18202_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_1_8_wri_phi_fu_6089_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_1_9_wri_phi_fu_6115_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan8_reg_26004.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_1_9_wri_phi_fu_6115_p20 = ap_phi_mux_outpeakPhi13448_5_phi_fu_5479_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()) && 
                 esl_seteq<1,5,5>(tmp_11_reg_25976.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_1_9_wri_phi_fu_6115_p20 = outpeakPhi13448_7_fu_18124_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_1_9_wri_phi_fu_6115_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_2_0_wri_phi_fu_7421_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_2_0_wri_phi_fu_7421_p20 = outpeakPhi14_1_reg_2860.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_2_0_wri_phi_fu_7421_p20 = outpeakPhi14_3_fu_20061_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_2_0_wri_phi_fu_7421_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_2_11_wr_phi_fu_7317_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_2_11_wr_phi_fu_7317_p20 = ap_phi_mux_outpeakPhi14473_2_phi_fu_6722_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_2_11_wr_phi_fu_7317_p20 = outpeakPhi14473_4_fu_20373_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_2_11_wr_phi_fu_7317_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_2_12_wr_phi_fu_7369_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_2_12_wr_phi_fu_7369_p20 = ap_phi_mux_outpeakPhi14474_1_phi_fu_6737_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_2_12_wr_phi_fu_7369_p20 = outpeakPhi14474_3_fu_20217_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_2_12_wr_phi_fu_7369_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_2_13_wr_phi_fu_7395_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_2_13_wr_phi_fu_7395_p20 = ap_phi_mux_outpeakPhi14473_2_phi_fu_6722_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_2_13_wr_phi_fu_7395_p20 = outpeakPhi14475_4_fu_20139_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_2_13_wr_phi_fu_7395_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_2_17_wr_phi_fu_7805_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, demorgan14_fu_20961_p2.read()))) {
        ap_phi_mux_outpeakPhi_2_17_wr_phi_fu_7805_p8 = grp_mergeClusters_fu_7942_ap_return_4.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()) && 
                 !esl_seteq<1,5,5>(tmp_20_reg_26151.read(), ap_const_lv5_11) && 
                 !esl_seteq<1,5,5>(tmp_20_reg_26151.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_20_reg_26151.read(), ap_const_lv5_13)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()) && 
                 esl_seteq<1,5,5>(tmp_20_reg_26151.read(), ap_const_lv5_11)))) {
        ap_phi_mux_outpeakPhi_2_17_wr_phi_fu_7805_p8 = outpeakPhi14479_4_fu_21142_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_2_17_wr_phi_fu_7805_p8 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_2_1_wri_phi_fu_7343_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_2_1_wri_phi_fu_7343_p20 = outpeakPhi14463_7_reg_4078.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_2_1_wri_phi_fu_7343_p20 = outpeakPhi14463_9_fu_20295_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_2_1_wri_phi_fu_7343_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_2_3_wri_phi_fu_7239_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_2_3_wri_phi_fu_7239_p20 = outpeakPhi14465_5_reg_4040.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_2_3_wri_phi_fu_7239_p20 = outpeakPhi14465_7_fu_20607_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_2_3_wri_phi_fu_7239_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_2_4_wri_phi_fu_7161_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_2_4_wri_phi_fu_7161_p20 = outpeakPhi14466_1_reg_3830.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_2_4_wri_phi_fu_7161_p20 = outpeakPhi14466_3_fu_20763_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_2_4_wri_phi_fu_7161_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_2_5_wri_phi_fu_7135_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_2_5_wri_phi_fu_7135_p20 = outpeakPhi14467_5_reg_4002.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_2_5_wri_phi_fu_7135_p20 = outpeakPhi14467_7_fu_20841_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_2_5_wri_phi_fu_7135_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_2_7_wri_phi_fu_7213_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_2_7_wri_phi_fu_7213_p20 = outpeakPhi14469_2_reg_4021.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_2_7_wri_phi_fu_7213_p20 = outpeakPhi14469_4_fu_20685_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_2_7_wri_phi_fu_7213_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_2_8_wri_phi_fu_7265_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_2_8_wri_phi_fu_7265_p20 = outpeakPhi14470_1_reg_4059.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_2_8_wri_phi_fu_7265_p20 = outpeakPhi14470_3_fu_20529_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_2_8_wri_phi_fu_7265_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_phi_mux_outpeakPhi_2_9_wri_phi_fu_7291_p20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(demorgan13_reg_26132.read(), ap_const_lv1_1))) {
        ap_phi_mux_outpeakPhi_2_9_wri_phi_fu_7291_p20 = ap_phi_mux_outpeakPhi14471_5_phi_fu_6707_p8.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D) && 
                 !esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_F)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_D)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_B)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_9)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_7)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_5)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_3)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()) && 
                 esl_seteq<1,5,5>(tmp_18_reg_26104.read(), ap_const_lv5_1)))) {
        ap_phi_mux_outpeakPhi_2_9_wri_phi_fu_7291_p20 = outpeakPhi14471_7_fu_20451_p34.read();
    } else {
        ap_phi_mux_outpeakPhi_2_9_wri_phi_fu_7291_p20 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void merge_acrossphi::thread_ap_return_0() {
    ap_return_0 = ap_phi_mux_outpeakEta_0_0_wri_phi_fu_4653_p20.read();
}

void merge_acrossphi::thread_ap_return_1() {
    ap_return_1 = ap_phi_mux_outpeakEta_0_1_wri_phi_fu_4627_p20.read();
}

void merge_acrossphi::thread_ap_return_10() {
    ap_return_10 = grp_mergeClusters_fu_7888_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_100() {
    ap_return_100 = outpeakPhi13455_1_fu_17890_p34.read();
}

void merge_acrossphi::thread_ap_return_101() {
    ap_return_101 = ap_phi_mux_outpeakPhi_1_17_wr_phi_fu_6605_p8.read();
}

void merge_acrossphi::thread_ap_return_102() {
    ap_return_102 = grp_mergeClusters_fu_7930_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_103() {
    ap_return_103 = grp_mergeClusters_fu_7930_ap_return_1.read();
}

void merge_acrossphi::thread_ap_return_104() {
    ap_return_104 = grp_mergeClusters_fu_7930_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_105() {
    ap_return_105 = ap_phi_mux_outpeakPhi_2_0_wri_phi_fu_7421_p20.read();
}

void merge_acrossphi::thread_ap_return_106() {
    ap_return_106 = ap_phi_mux_outpeakPhi_2_1_wri_phi_fu_7343_p20.read();
}

void merge_acrossphi::thread_ap_return_107() {
    ap_return_107 = grp_mergeClusters_fu_7942_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_108() {
    ap_return_108 = ap_phi_mux_outpeakPhi_2_3_wri_phi_fu_7239_p20.read();
}

void merge_acrossphi::thread_ap_return_109() {
    ap_return_109 = ap_phi_mux_outpeakPhi_2_4_wri_phi_fu_7161_p20.read();
}

void merge_acrossphi::thread_ap_return_11() {
    ap_return_11 = ap_phi_mux_outpeakEta_0_11_wr_phi_fu_4393_p20.read();
}

void merge_acrossphi::thread_ap_return_110() {
    ap_return_110 = ap_phi_mux_outpeakPhi_2_5_wri_phi_fu_7135_p20.read();
}

void merge_acrossphi::thread_ap_return_111() {
    ap_return_111 = grp_mergeClusters_fu_7942_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_112() {
    ap_return_112 = ap_phi_mux_outpeakPhi_2_7_wri_phi_fu_7213_p20.read();
}

void merge_acrossphi::thread_ap_return_113() {
    ap_return_113 = ap_phi_mux_outpeakPhi_2_8_wri_phi_fu_7265_p20.read();
}

void merge_acrossphi::thread_ap_return_114() {
    ap_return_114 = ap_phi_mux_outpeakPhi_2_9_wri_phi_fu_7291_p20.read();
}

void merge_acrossphi::thread_ap_return_115() {
    ap_return_115 = grp_mergeClusters_fu_7942_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_116() {
    ap_return_116 = ap_phi_mux_outpeakPhi_2_11_wr_phi_fu_7317_p20.read();
}

void merge_acrossphi::thread_ap_return_117() {
    ap_return_117 = ap_phi_mux_outpeakPhi_2_12_wr_phi_fu_7369_p20.read();
}

void merge_acrossphi::thread_ap_return_118() {
    ap_return_118 = ap_phi_mux_outpeakPhi_2_13_wr_phi_fu_7395_p20.read();
}

void merge_acrossphi::thread_ap_return_119() {
    ap_return_119 = grp_mergeClusters_fu_7942_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_12() {
    ap_return_12 = ap_phi_mux_outpeakEta_0_12_wr_phi_fu_4445_p20.read();
}

void merge_acrossphi::thread_ap_return_120() {
    ap_return_120 = grp_mergeClusters_fu_7942_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_121() {
    ap_return_121 = outpeakPhi14478_1_fu_19983_p34.read();
}

void merge_acrossphi::thread_ap_return_122() {
    ap_return_122 = ap_phi_mux_outpeakPhi_2_17_wr_phi_fu_7805_p8.read();
}

void merge_acrossphi::thread_ap_return_123() {
    ap_return_123 = grp_mergeClusters_fu_7957_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_124() {
    ap_return_124 = grp_mergeClusters_fu_7957_ap_return_1.read();
}

void merge_acrossphi::thread_ap_return_125() {
    ap_return_125 = grp_mergeClusters_fu_7957_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_126() {
    ap_return_126 = towerEta_0_0_read_s_reg_24938.read();
}

void merge_acrossphi::thread_ap_return_127() {
    ap_return_127 = towerEta_0_1_read_s_reg_24932.read();
}

void merge_acrossphi::thread_ap_return_128() {
    ap_return_128 = towerEta_0_2_read_s_reg_24927.read();
}

void merge_acrossphi::thread_ap_return_129() {
    ap_return_129 = towerEta_0_3_read_s_reg_24921.read();
}

void merge_acrossphi::thread_ap_return_13() {
    ap_return_13 = ap_phi_mux_outpeakEta_0_13_wr_phi_fu_4471_p20.read();
}

void merge_acrossphi::thread_ap_return_130() {
    ap_return_130 = towerEta_0_4_read_s_reg_24916.read();
}

void merge_acrossphi::thread_ap_return_131() {
    ap_return_131 = towerEta_0_5_read_s_reg_24910.read();
}

void merge_acrossphi::thread_ap_return_132() {
    ap_return_132 = towerEta_0_6_read_s_reg_24905.read();
}

void merge_acrossphi::thread_ap_return_133() {
    ap_return_133 = towerEta_0_7_read_s_reg_24899.read();
}

void merge_acrossphi::thread_ap_return_134() {
    ap_return_134 = towerEta_0_8_read_s_reg_24894.read();
}

void merge_acrossphi::thread_ap_return_135() {
    ap_return_135 = towerEta_0_9_read_s_reg_24887.read();
}

void merge_acrossphi::thread_ap_return_136() {
    ap_return_136 = towerEta_0_10_read_1_reg_24882.read();
}

void merge_acrossphi::thread_ap_return_137() {
    ap_return_137 = towerEta_0_11_read_1_reg_24875.read();
}

void merge_acrossphi::thread_ap_return_138() {
    ap_return_138 = towerEta_0_12_read_1_reg_24869.read();
}

void merge_acrossphi::thread_ap_return_139() {
    ap_return_139 = towerEta_0_13_read_1_reg_24833.read();
}

void merge_acrossphi::thread_ap_return_14() {
    ap_return_14 = grp_mergeClusters_fu_7888_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_140() {
    ap_return_140 = towerEta_0_14_read_1_reg_24828.read();
}

void merge_acrossphi::thread_ap_return_141() {
    ap_return_141 = towerEta_0_15_read_1_reg_24822.read();
}

void merge_acrossphi::thread_ap_return_142() {
    ap_return_142 = towerEta_0_16_read_1_reg_24816.read();
}

void merge_acrossphi::thread_ap_return_143() {
    ap_return_143 = towerEta_0_17_read_1_reg_24786.read();
}

void merge_acrossphi::thread_ap_return_144() {
    ap_return_144 = towerEta_0_18_read_1_reg_24781.read();
}

void merge_acrossphi::thread_ap_return_145() {
    ap_return_145 = towerEta_0_19_read_1_reg_24775.read();
}

void merge_acrossphi::thread_ap_return_146() {
    ap_return_146 = towerEta_0_20_read_1_reg_24769.read();
}

void merge_acrossphi::thread_ap_return_147() {
    ap_return_147 = towerEta_0_21_read_1_reg_24734.read();
}

void merge_acrossphi::thread_ap_return_148() {
    ap_return_148 = towerEta_0_22_read_1_reg_24729.read();
}

void merge_acrossphi::thread_ap_return_149() {
    ap_return_149 = towerEta_0_23_read_1_reg_24724.read();
}

void merge_acrossphi::thread_ap_return_15() {
    ap_return_15 = grp_mergeClusters_fu_7888_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_150() {
    ap_return_150 = towerEta_1_0_read_s_reg_24719.read();
}

void merge_acrossphi::thread_ap_return_151() {
    ap_return_151 = towerEta_1_1_read_s_reg_24713.read();
}

void merge_acrossphi::thread_ap_return_152() {
    ap_return_152 = towerEta_1_2_read_s_reg_24708.read();
}

void merge_acrossphi::thread_ap_return_153() {
    ap_return_153 = towerEta_1_3_read_s_reg_24702.read();
}

void merge_acrossphi::thread_ap_return_154() {
    ap_return_154 = towerEta_1_4_read_s_reg_24697.read();
}

void merge_acrossphi::thread_ap_return_155() {
    ap_return_155 = towerEta_1_5_read_s_reg_24691.read();
}

void merge_acrossphi::thread_ap_return_156() {
    ap_return_156 = towerEta_1_6_read_s_reg_24686.read();
}

void merge_acrossphi::thread_ap_return_157() {
    ap_return_157 = towerEta_1_7_read_s_reg_24680.read();
}

void merge_acrossphi::thread_ap_return_158() {
    ap_return_158 = towerEta_1_8_read_s_reg_24675.read();
}

void merge_acrossphi::thread_ap_return_159() {
    ap_return_159 = towerEta_1_9_read_s_reg_24668.read();
}

void merge_acrossphi::thread_ap_return_16() {
    ap_return_16 = outpeakEta363_1_fu_15095_p34.read();
}

void merge_acrossphi::thread_ap_return_160() {
    ap_return_160 = towerEta_1_10_read_1_reg_24663.read();
}

void merge_acrossphi::thread_ap_return_161() {
    ap_return_161 = towerEta_1_11_read_1_reg_24656.read();
}

void merge_acrossphi::thread_ap_return_162() {
    ap_return_162 = towerEta_1_12_read_1_reg_24650.read();
}

void merge_acrossphi::thread_ap_return_163() {
    ap_return_163 = towerEta_1_13_read_1_reg_24614.read();
}

void merge_acrossphi::thread_ap_return_164() {
    ap_return_164 = towerEta_1_14_read_1_reg_24609.read();
}

void merge_acrossphi::thread_ap_return_165() {
    ap_return_165 = towerEta_1_15_read_1_reg_24603.read();
}

void merge_acrossphi::thread_ap_return_166() {
    ap_return_166 = towerEta_1_16_read_1_reg_24597.read();
}

void merge_acrossphi::thread_ap_return_167() {
    ap_return_167 = towerEta_1_17_read_1_reg_24567.read();
}

void merge_acrossphi::thread_ap_return_168() {
    ap_return_168 = towerEta_1_18_read_1_reg_24562.read();
}

void merge_acrossphi::thread_ap_return_169() {
    ap_return_169 = towerEta_1_19_read_1_reg_24556.read();
}

void merge_acrossphi::thread_ap_return_17() {
    ap_return_17 = ap_phi_mux_outpeakEta_0_17_wr_phi_fu_5307_p8.read();
}

void merge_acrossphi::thread_ap_return_170() {
    ap_return_170 = towerEta_1_20_read_1_reg_24550.read();
}

void merge_acrossphi::thread_ap_return_171() {
    ap_return_171 = towerEta_1_21_read_1_reg_24515.read();
}

void merge_acrossphi::thread_ap_return_172() {
    ap_return_172 = towerEta_1_22_read_1_reg_24510.read();
}

void merge_acrossphi::thread_ap_return_173() {
    ap_return_173 = towerEta_1_23_read_1_reg_24505.read();
}

void merge_acrossphi::thread_ap_return_174() {
    ap_return_174 = towerEta_2_0_read_s_reg_24500.read();
}

void merge_acrossphi::thread_ap_return_175() {
    ap_return_175 = towerEta_2_1_read_s_reg_24494.read();
}

void merge_acrossphi::thread_ap_return_176() {
    ap_return_176 = towerEta_2_2_read_s_reg_24489.read();
}

void merge_acrossphi::thread_ap_return_177() {
    ap_return_177 = towerEta_2_3_read_s_reg_24483.read();
}

void merge_acrossphi::thread_ap_return_178() {
    ap_return_178 = towerEta_2_4_read_s_reg_24478.read();
}

void merge_acrossphi::thread_ap_return_179() {
    ap_return_179 = towerEta_2_5_read_s_reg_24472.read();
}

void merge_acrossphi::thread_ap_return_18() {
    ap_return_18 = grp_mergeClusters_fu_7903_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_180() {
    ap_return_180 = towerEta_2_6_read_s_reg_24467.read();
}

void merge_acrossphi::thread_ap_return_181() {
    ap_return_181 = towerEta_2_7_read_s_reg_24461.read();
}

void merge_acrossphi::thread_ap_return_182() {
    ap_return_182 = towerEta_2_8_read_s_reg_24456.read();
}

void merge_acrossphi::thread_ap_return_183() {
    ap_return_183 = towerEta_2_9_read_s_reg_24449.read();
}

void merge_acrossphi::thread_ap_return_184() {
    ap_return_184 = towerEta_2_10_read_1_reg_24444.read();
}

void merge_acrossphi::thread_ap_return_185() {
    ap_return_185 = towerEta_2_11_read_1_reg_24437.read();
}

void merge_acrossphi::thread_ap_return_186() {
    ap_return_186 = towerEta_2_12_read_1_reg_24431.read();
}

void merge_acrossphi::thread_ap_return_187() {
    ap_return_187 = towerEta_2_13_read_1_reg_24395.read();
}

void merge_acrossphi::thread_ap_return_188() {
    ap_return_188 = towerEta_2_14_read_1_reg_24390.read();
}

void merge_acrossphi::thread_ap_return_189() {
    ap_return_189 = towerEta_2_15_read_1_reg_24384.read();
}

void merge_acrossphi::thread_ap_return_19() {
    ap_return_19 = grp_mergeClusters_fu_7903_ap_return_0.read();
}

void merge_acrossphi::thread_ap_return_190() {
    ap_return_190 = towerEta_2_16_read_1_reg_24378.read();
}

void merge_acrossphi::thread_ap_return_191() {
    ap_return_191 = towerEta_2_17_read_1_reg_24348.read();
}

void merge_acrossphi::thread_ap_return_192() {
    ap_return_192 = towerEta_2_18_read_1_reg_24343.read();
}

void merge_acrossphi::thread_ap_return_193() {
    ap_return_193 = towerEta_2_19_read_1_reg_24337.read();
}

void merge_acrossphi::thread_ap_return_194() {
    ap_return_194 = towerEta_2_20_read_1_reg_24331.read();
}

void merge_acrossphi::thread_ap_return_195() {
    ap_return_195 = towerEta_2_21_read_1_reg_24296.read();
}

void merge_acrossphi::thread_ap_return_196() {
    ap_return_196 = towerEta_2_22_read_1_reg_24291.read();
}

void merge_acrossphi::thread_ap_return_197() {
    ap_return_197 = towerEta_2_23_read_1_reg_24286.read();
}

void merge_acrossphi::thread_ap_return_198() {
    ap_return_198 = towerPhi_0_0_read_s_reg_24281.read();
}

void merge_acrossphi::thread_ap_return_199() {
    ap_return_199 = towerPhi_0_1_read_s_reg_24276.read();
}

void merge_acrossphi::thread_ap_return_2() {
    ap_return_2 = grp_mergeClusters_fu_7888_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_20() {
    ap_return_20 = grp_mergeClusters_fu_7903_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_200() {
    ap_return_200 = towerPhi_0_2_read_s_reg_24271.read();
}

void merge_acrossphi::thread_ap_return_201() {
    ap_return_201 = towerPhi_0_3_read_s_reg_24266.read();
}

void merge_acrossphi::thread_ap_return_202() {
    ap_return_202 = towerPhi_0_4_read_s_reg_24261.read();
}

void merge_acrossphi::thread_ap_return_203() {
    ap_return_203 = towerPhi_0_5_read_s_reg_24256.read();
}

void merge_acrossphi::thread_ap_return_204() {
    ap_return_204 = towerPhi_0_6_read_s_reg_24251.read();
}

void merge_acrossphi::thread_ap_return_205() {
    ap_return_205 = towerPhi_0_7_read_s_reg_24246.read();
}

void merge_acrossphi::thread_ap_return_206() {
    ap_return_206 = towerPhi_0_8_read_s_reg_24241.read();
}

void merge_acrossphi::thread_ap_return_207() {
    ap_return_207 = towerPhi_0_9_read_s_reg_24236.read();
}

void merge_acrossphi::thread_ap_return_208() {
    ap_return_208 = towerPhi_0_10_read_1_reg_24231.read();
}

void merge_acrossphi::thread_ap_return_209() {
    ap_return_209 = towerPhi_0_11_read_1_reg_24226.read();
}

void merge_acrossphi::thread_ap_return_21() {
    ap_return_21 = ap_phi_mux_outpeakEta_1_0_wri_phi_fu_5569_p20.read();
}

void merge_acrossphi::thread_ap_return_210() {
    ap_return_210 = towerPhi_0_12_read_1_reg_24221.read();
}

void merge_acrossphi::thread_ap_return_211() {
    ap_return_211 = towerPhi_0_13_read_1_reg_24216.read();
}

void merge_acrossphi::thread_ap_return_212() {
    ap_return_212 = towerPhi_0_14_read_1_reg_24211.read();
}

void merge_acrossphi::thread_ap_return_213() {
    ap_return_213 = towerPhi_0_15_read_1_reg_24206.read();
}

void merge_acrossphi::thread_ap_return_214() {
    ap_return_214 = towerPhi_0_16_read_1_reg_24201.read();
}

void merge_acrossphi::thread_ap_return_215() {
    ap_return_215 = towerPhi_0_17_read_1_reg_24196.read();
}

void merge_acrossphi::thread_ap_return_216() {
    ap_return_216 = towerPhi_0_18_read_1_reg_24191.read();
}

void merge_acrossphi::thread_ap_return_217() {
    ap_return_217 = towerPhi_0_19_read_1_reg_24186.read();
}

void merge_acrossphi::thread_ap_return_218() {
    ap_return_218 = towerPhi_0_20_read_1_reg_24181.read();
}

void merge_acrossphi::thread_ap_return_219() {
    ap_return_219 = towerPhi_0_21_read_1_reg_24176.read();
}

void merge_acrossphi::thread_ap_return_22() {
    ap_return_22 = ap_phi_mux_outpeakEta_1_1_wri_phi_fu_5595_p20.read();
}

void merge_acrossphi::thread_ap_return_220() {
    ap_return_220 = towerPhi_0_22_read_1_reg_24171.read();
}

void merge_acrossphi::thread_ap_return_221() {
    ap_return_221 = towerPhi_0_23_read_1_reg_24166.read();
}

void merge_acrossphi::thread_ap_return_222() {
    ap_return_222 = towerPhi_1_0_read_s_reg_24161.read();
}

void merge_acrossphi::thread_ap_return_223() {
    ap_return_223 = towerPhi_1_1_read_s_reg_24156.read();
}

void merge_acrossphi::thread_ap_return_224() {
    ap_return_224 = towerPhi_1_2_read_s_reg_24151.read();
}

void merge_acrossphi::thread_ap_return_225() {
    ap_return_225 = towerPhi_1_3_read_s_reg_24146.read();
}

void merge_acrossphi::thread_ap_return_226() {
    ap_return_226 = towerPhi_1_4_read_s_reg_24141.read();
}

void merge_acrossphi::thread_ap_return_227() {
    ap_return_227 = towerPhi_1_5_read_s_reg_24136.read();
}

void merge_acrossphi::thread_ap_return_228() {
    ap_return_228 = towerPhi_1_6_read_s_reg_24131.read();
}

void merge_acrossphi::thread_ap_return_229() {
    ap_return_229 = towerPhi_1_7_read_s_reg_24126.read();
}

void merge_acrossphi::thread_ap_return_23() {
    ap_return_23 = grp_mergeClusters_fu_7915_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_230() {
    ap_return_230 = towerPhi_1_8_read_s_reg_24121.read();
}

void merge_acrossphi::thread_ap_return_231() {
    ap_return_231 = towerPhi_1_9_read_s_reg_24116.read();
}

void merge_acrossphi::thread_ap_return_232() {
    ap_return_232 = towerPhi_1_10_read_1_reg_24111.read();
}

void merge_acrossphi::thread_ap_return_233() {
    ap_return_233 = towerPhi_1_11_read_1_reg_24106.read();
}

void merge_acrossphi::thread_ap_return_234() {
    ap_return_234 = towerPhi_1_12_read_1_reg_24101.read();
}

void merge_acrossphi::thread_ap_return_235() {
    ap_return_235 = towerPhi_1_13_read_1_reg_24096.read();
}

void merge_acrossphi::thread_ap_return_236() {
    ap_return_236 = towerPhi_1_14_read_1_reg_24091.read();
}

void merge_acrossphi::thread_ap_return_237() {
    ap_return_237 = towerPhi_1_15_read_1_reg_24086.read();
}

void merge_acrossphi::thread_ap_return_238() {
    ap_return_238 = towerPhi_1_16_read_1_reg_24081.read();
}

void merge_acrossphi::thread_ap_return_239() {
    ap_return_239 = towerPhi_1_17_read_1_reg_24076.read();
}

void merge_acrossphi::thread_ap_return_24() {
    ap_return_24 = ap_phi_mux_outpeakEta_1_3_wri_phi_fu_5647_p20.read();
}

void merge_acrossphi::thread_ap_return_240() {
    ap_return_240 = towerPhi_1_18_read_1_reg_24071.read();
}

void merge_acrossphi::thread_ap_return_241() {
    ap_return_241 = towerPhi_1_19_read_1_reg_24066.read();
}

void merge_acrossphi::thread_ap_return_242() {
    ap_return_242 = towerPhi_1_20_read_1_reg_24061.read();
}

void merge_acrossphi::thread_ap_return_243() {
    ap_return_243 = towerPhi_1_21_read_1_reg_24056.read();
}

void merge_acrossphi::thread_ap_return_244() {
    ap_return_244 = towerPhi_1_22_read_1_reg_24051.read();
}

void merge_acrossphi::thread_ap_return_245() {
    ap_return_245 = towerPhi_1_23_read_1_reg_24046.read();
}

void merge_acrossphi::thread_ap_return_246() {
    ap_return_246 = towerPhi_2_0_read_s_reg_24041.read();
}

void merge_acrossphi::thread_ap_return_247() {
    ap_return_247 = towerPhi_2_1_read_s_reg_24036.read();
}

void merge_acrossphi::thread_ap_return_248() {
    ap_return_248 = towerPhi_2_2_read_s_reg_24031.read();
}

void merge_acrossphi::thread_ap_return_249() {
    ap_return_249 = towerPhi_2_3_read_s_reg_24026.read();
}

void merge_acrossphi::thread_ap_return_25() {
    ap_return_25 = ap_phi_mux_outpeakEta_1_4_wri_phi_fu_5673_p20.read();
}

void merge_acrossphi::thread_ap_return_250() {
    ap_return_250 = towerPhi_2_4_read_s_reg_24021.read();
}

void merge_acrossphi::thread_ap_return_251() {
    ap_return_251 = towerPhi_2_5_read_s_reg_24016.read();
}

void merge_acrossphi::thread_ap_return_252() {
    ap_return_252 = towerPhi_2_6_read_s_reg_24011.read();
}

void merge_acrossphi::thread_ap_return_253() {
    ap_return_253 = towerPhi_2_7_read_s_reg_24006.read();
}

void merge_acrossphi::thread_ap_return_254() {
    ap_return_254 = towerPhi_2_8_read_s_reg_24001.read();
}

void merge_acrossphi::thread_ap_return_255() {
    ap_return_255 = towerPhi_2_9_read_s_reg_23996.read();
}

void merge_acrossphi::thread_ap_return_256() {
    ap_return_256 = towerPhi_2_10_read_1_reg_23991.read();
}

void merge_acrossphi::thread_ap_return_257() {
    ap_return_257 = towerPhi_2_11_read_1_reg_23986.read();
}

void merge_acrossphi::thread_ap_return_258() {
    ap_return_258 = towerPhi_2_12_read_1_reg_23981.read();
}

void merge_acrossphi::thread_ap_return_259() {
    ap_return_259 = towerPhi_2_13_read_1_reg_23976.read();
}

void merge_acrossphi::thread_ap_return_26() {
    ap_return_26 = ap_phi_mux_outpeakEta_1_5_wri_phi_fu_5699_p20.read();
}

void merge_acrossphi::thread_ap_return_260() {
    ap_return_260 = towerPhi_2_14_read_1_reg_23971.read();
}

void merge_acrossphi::thread_ap_return_261() {
    ap_return_261 = towerPhi_2_15_read_1_reg_23966.read();
}

void merge_acrossphi::thread_ap_return_262() {
    ap_return_262 = towerPhi_2_16_read_1_reg_23961.read();
}

void merge_acrossphi::thread_ap_return_263() {
    ap_return_263 = towerPhi_2_17_read_1_reg_23956.read();
}

void merge_acrossphi::thread_ap_return_264() {
    ap_return_264 = towerPhi_2_18_read_1_reg_23951.read();
}

void merge_acrossphi::thread_ap_return_265() {
    ap_return_265 = towerPhi_2_19_read_1_reg_23946.read();
}

void merge_acrossphi::thread_ap_return_266() {
    ap_return_266 = towerPhi_2_20_read_1_reg_23941.read();
}

void merge_acrossphi::thread_ap_return_267() {
    ap_return_267 = towerPhi_2_21_read_1_reg_23936.read();
}

void merge_acrossphi::thread_ap_return_268() {
    ap_return_268 = towerPhi_2_22_read_1_reg_23931.read();
}

void merge_acrossphi::thread_ap_return_269() {
    ap_return_269 = towerPhi_2_23_read_1_reg_23926.read();
}

void merge_acrossphi::thread_ap_return_27() {
    ap_return_27 = grp_mergeClusters_fu_7915_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_270() {
    ap_return_270 = outClusterET_0_0_w_reg_2720.read();
}

void merge_acrossphi::thread_ap_return_271() {
    ap_return_271 = ap_phi_mux_outClusterET_0_1_w_phi_fu_5273_p20.read();
}

void merge_acrossphi::thread_ap_return_272() {
    ap_return_272 = grp_mergeClusters_fu_7888_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_273() {
    ap_return_273 = ap_phi_mux_outClusterET_0_3_w_phi_fu_5239_p20.read();
}

void merge_acrossphi::thread_ap_return_274() {
    ap_return_274 = outClusterET_0_4_w_reg_3007.read();
}

void merge_acrossphi::thread_ap_return_275() {
    ap_return_275 = ap_phi_mux_outClusterET_0_5_w_phi_fu_5145_p20.read();
}

void merge_acrossphi::thread_ap_return_276() {
    ap_return_276 = grp_mergeClusters_fu_7888_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_277() {
    ap_return_277 = ap_phi_mux_outClusterET_0_7_w_phi_fu_5017_p20.read();
}

void merge_acrossphi::thread_ap_return_278() {
    ap_return_278 = outClusterET_0_8_w_reg_3229.read();
}

void merge_acrossphi::thread_ap_return_279() {
    ap_return_279 = ap_phi_mux_outClusterET_0_9_w_phi_fu_5051_p20.read();
}

void merge_acrossphi::thread_ap_return_28() {
    ap_return_28 = ap_phi_mux_outpeakEta_1_7_wri_phi_fu_5725_p20.read();
}

void merge_acrossphi::thread_ap_return_280() {
    ap_return_280 = grp_mergeClusters_fu_7888_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_281() {
    ap_return_281 = ap_phi_mux_outClusterET_0_11_s_phi_fu_5111_p20.read();
}

void merge_acrossphi::thread_ap_return_282() {
    ap_return_282 = ap_phi_mux_outClusterET_0_12_s_phi_fu_4327_p8.read();
}

void merge_acrossphi::thread_ap_return_283() {
    ap_return_283 = ap_phi_mux_outClusterET_0_13_s_phi_fu_5179_p20.read();
}

void merge_acrossphi::thread_ap_return_284() {
    ap_return_284 = grp_mergeClusters_fu_7888_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_285() {
    ap_return_285 = grp_mergeClusters_fu_7888_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_286() {
    ap_return_286 = grp_mergeClusters_fu_7888_ap_return_2.read();
}

void merge_acrossphi::thread_ap_return_287() {
    ap_return_287 = ap_phi_mux_outClusterET_0_17_s_phi_fu_5391_p8.read();
}

void merge_acrossphi::thread_ap_return_288() {
    ap_return_288 = grp_mergeClusters_fu_7903_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_289() {
    ap_return_289 = grp_mergeClusters_fu_7903_ap_return_2.read();
}

void merge_acrossphi::thread_ap_return_29() {
    ap_return_29 = ap_phi_mux_outpeakEta_1_8_wri_phi_fu_5751_p20.read();
}

void merge_acrossphi::thread_ap_return_290() {
    ap_return_290 = grp_mergeClusters_fu_7903_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_291() {
    ap_return_291 = outClusterET_1_0_w_reg_2790.read();
}

void merge_acrossphi::thread_ap_return_292() {
    ap_return_292 = ap_phi_mux_outClusterET_1_1_w_phi_fu_6245_p20.read();
}

void merge_acrossphi::thread_ap_return_293() {
    ap_return_293 = grp_mergeClusters_fu_7915_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_294() {
    ap_return_294 = ap_phi_mux_outClusterET_1_3_w_phi_fu_6305_p20.read();
}

void merge_acrossphi::thread_ap_return_295() {
    ap_return_295 = outClusterET_1_4_w_reg_3457.read();
}

void merge_acrossphi::thread_ap_return_296() {
    ap_return_296 = ap_phi_mux_outClusterET_1_5_w_phi_fu_6339_p20.read();
}

void merge_acrossphi::thread_ap_return_297() {
    ap_return_297 = grp_mergeClusters_fu_7915_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_298() {
    ap_return_298 = ap_phi_mux_outClusterET_1_7_w_phi_fu_6373_p20.read();
}

void merge_acrossphi::thread_ap_return_299() {
    ap_return_299 = outClusterET_1_8_w_reg_3751.read();
}

void merge_acrossphi::thread_ap_return_3() {
    ap_return_3 = ap_phi_mux_outpeakEta_0_3_wri_phi_fu_4601_p20.read();
}

void merge_acrossphi::thread_ap_return_30() {
    ap_return_30 = ap_phi_mux_outpeakEta_1_9_wri_phi_fu_5881_p20.read();
}

void merge_acrossphi::thread_ap_return_300() {
    ap_return_300 = ap_phi_mux_outClusterET_1_9_w_phi_fu_6501_p20.read();
}

void merge_acrossphi::thread_ap_return_301() {
    ap_return_301 = grp_mergeClusters_fu_7915_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_302() {
    ap_return_302 = ap_phi_mux_outClusterET_1_11_s_phi_fu_6467_p20.read();
}

void merge_acrossphi::thread_ap_return_303() {
    ap_return_303 = ap_phi_mux_outClusterET_1_12_s_phi_fu_5539_p8.read();
}

void merge_acrossphi::thread_ap_return_304() {
    ap_return_304 = ap_phi_mux_outClusterET_1_13_s_phi_fu_6433_p20.read();
}

void merge_acrossphi::thread_ap_return_305() {
    ap_return_305 = grp_mergeClusters_fu_7915_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_306() {
    ap_return_306 = grp_mergeClusters_fu_7915_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_307() {
    ap_return_307 = grp_mergeClusters_fu_7915_ap_return_2.read();
}

void merge_acrossphi::thread_ap_return_308() {
    ap_return_308 = ap_phi_mux_outClusterET_1_17_s_phi_fu_6647_p8.read();
}

void merge_acrossphi::thread_ap_return_309() {
    ap_return_309 = grp_mergeClusters_fu_7930_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_31() {
    ap_return_31 = grp_mergeClusters_fu_7915_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_310() {
    ap_return_310 = grp_mergeClusters_fu_7930_ap_return_2.read();
}

void merge_acrossphi::thread_ap_return_311() {
    ap_return_311 = grp_mergeClusters_fu_7930_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_312() {
    ap_return_312 = outClusterET_2_0_w_reg_2874.read();
}

void merge_acrossphi::thread_ap_return_313() {
    ap_return_313 = ap_phi_mux_outClusterET_2_1_w_phi_fu_7473_p20.read();
}

void merge_acrossphi::thread_ap_return_314() {
    ap_return_314 = grp_mergeClusters_fu_7942_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_315() {
    ap_return_315 = ap_phi_mux_outClusterET_2_3_w_phi_fu_7533_p20.read();
}

void merge_acrossphi::thread_ap_return_316() {
    ap_return_316 = outClusterET_2_4_w_reg_3891.read();
}

void merge_acrossphi::thread_ap_return_317() {
    ap_return_317 = ap_phi_mux_outClusterET_2_5_w_phi_fu_7567_p20.read();
}

void merge_acrossphi::thread_ap_return_318() {
    ap_return_318 = grp_mergeClusters_fu_7942_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_319() {
    ap_return_319 = ap_phi_mux_outClusterET_2_7_w_phi_fu_7601_p20.read();
}

void merge_acrossphi::thread_ap_return_32() {
    ap_return_32 = ap_phi_mux_outpeakEta_1_11_wr_phi_fu_5855_p20.read();
}

void merge_acrossphi::thread_ap_return_320() {
    ap_return_320 = outClusterET_2_8_w_reg_4185.read();
}

void merge_acrossphi::thread_ap_return_321() {
    ap_return_321 = ap_phi_mux_outClusterET_2_9_w_phi_fu_7635_p20.read();
}

void merge_acrossphi::thread_ap_return_322() {
    ap_return_322 = grp_mergeClusters_fu_7942_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_323() {
    ap_return_323 = ap_phi_mux_outClusterET_2_11_s_phi_fu_7669_p20.read();
}

void merge_acrossphi::thread_ap_return_324() {
    ap_return_324 = ap_phi_mux_outClusterET_2_12_s_phi_fu_6783_p8.read();
}

void merge_acrossphi::thread_ap_return_325() {
    ap_return_325 = ap_phi_mux_outClusterET_2_13_s_phi_fu_7703_p20.read();
}

void merge_acrossphi::thread_ap_return_326() {
    ap_return_326 = grp_mergeClusters_fu_7942_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_327() {
    ap_return_327 = grp_mergeClusters_fu_7942_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_328() {
    ap_return_328 = grp_mergeClusters_fu_7942_ap_return_2.read();
}

void merge_acrossphi::thread_ap_return_329() {
    ap_return_329 = ap_phi_mux_outClusterET_2_17_s_phi_fu_7847_p8.read();
}

void merge_acrossphi::thread_ap_return_33() {
    ap_return_33 = ap_phi_mux_outpeakEta_1_12_wr_phi_fu_5829_p20.read();
}

void merge_acrossphi::thread_ap_return_330() {
    ap_return_330 = grp_mergeClusters_fu_7957_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_331() {
    ap_return_331 = grp_mergeClusters_fu_7957_ap_return_2.read();
}

void merge_acrossphi::thread_ap_return_332() {
    ap_return_332 = grp_mergeClusters_fu_7957_ap_return_5.read();
}

void merge_acrossphi::thread_ap_return_34() {
    ap_return_34 = ap_phi_mux_outpeakEta_1_13_wr_phi_fu_5803_p20.read();
}

void merge_acrossphi::thread_ap_return_35() {
    ap_return_35 = grp_mergeClusters_fu_7915_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_36() {
    ap_return_36 = grp_mergeClusters_fu_7915_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_37() {
    ap_return_37 = outpeakEta11386_1_fu_17188_p34.read();
}

void merge_acrossphi::thread_ap_return_38() {
    ap_return_38 = ap_phi_mux_outpeakEta_1_17_wr_phi_fu_6563_p8.read();
}

void merge_acrossphi::thread_ap_return_39() {
    ap_return_39 = grp_mergeClusters_fu_7930_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_4() {
    ap_return_4 = ap_phi_mux_outpeakEta_0_4_wri_phi_fu_4575_p20.read();
}

void merge_acrossphi::thread_ap_return_40() {
    ap_return_40 = grp_mergeClusters_fu_7930_ap_return_0.read();
}

void merge_acrossphi::thread_ap_return_41() {
    ap_return_41 = grp_mergeClusters_fu_7930_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_42() {
    ap_return_42 = ap_phi_mux_outpeakEta_2_0_wri_phi_fu_6797_p20.read();
}

void merge_acrossphi::thread_ap_return_43() {
    ap_return_43 = ap_phi_mux_outpeakEta_2_1_wri_phi_fu_6823_p20.read();
}

void merge_acrossphi::thread_ap_return_44() {
    ap_return_44 = grp_mergeClusters_fu_7942_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_45() {
    ap_return_45 = ap_phi_mux_outpeakEta_2_3_wri_phi_fu_6875_p20.read();
}

void merge_acrossphi::thread_ap_return_46() {
    ap_return_46 = ap_phi_mux_outpeakEta_2_4_wri_phi_fu_6901_p20.read();
}

void merge_acrossphi::thread_ap_return_47() {
    ap_return_47 = ap_phi_mux_outpeakEta_2_5_wri_phi_fu_6927_p20.read();
}

void merge_acrossphi::thread_ap_return_48() {
    ap_return_48 = grp_mergeClusters_fu_7942_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_49() {
    ap_return_49 = ap_phi_mux_outpeakEta_2_7_wri_phi_fu_6953_p20.read();
}

void merge_acrossphi::thread_ap_return_5() {
    ap_return_5 = ap_phi_mux_outpeakEta_0_5_wri_phi_fu_4549_p20.read();
}

void merge_acrossphi::thread_ap_return_50() {
    ap_return_50 = ap_phi_mux_outpeakEta_2_8_wri_phi_fu_6979_p20.read();
}

void merge_acrossphi::thread_ap_return_51() {
    ap_return_51 = ap_phi_mux_outpeakEta_2_9_wri_phi_fu_7005_p20.read();
}

void merge_acrossphi::thread_ap_return_52() {
    ap_return_52 = grp_mergeClusters_fu_7942_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_53() {
    ap_return_53 = ap_phi_mux_outpeakEta_2_11_wr_phi_fu_7031_p20.read();
}

void merge_acrossphi::thread_ap_return_54() {
    ap_return_54 = ap_phi_mux_outpeakEta_2_12_wr_phi_fu_7057_p20.read();
}

void merge_acrossphi::thread_ap_return_55() {
    ap_return_55 = ap_phi_mux_outpeakEta_2_13_wr_phi_fu_7083_p20.read();
}

void merge_acrossphi::thread_ap_return_56() {
    ap_return_56 = grp_mergeClusters_fu_7942_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_57() {
    ap_return_57 = grp_mergeClusters_fu_7942_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_58() {
    ap_return_58 = outpeakEta12409_1_fu_19047_p34.read();
}

void merge_acrossphi::thread_ap_return_59() {
    ap_return_59 = ap_phi_mux_outpeakEta_2_17_wr_phi_fu_7763_p8.read();
}

void merge_acrossphi::thread_ap_return_6() {
    ap_return_6 = grp_mergeClusters_fu_7888_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_60() {
    ap_return_60 = grp_mergeClusters_fu_7957_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_61() {
    ap_return_61 = grp_mergeClusters_fu_7957_ap_return_0.read();
}

void merge_acrossphi::thread_ap_return_62() {
    ap_return_62 = grp_mergeClusters_fu_7957_ap_return_3.read();
}

void merge_acrossphi::thread_ap_return_63() {
    ap_return_63 = ap_phi_mux_outpeakPhi_0_0_wri_phi_fu_4991_p20.read();
}

void merge_acrossphi::thread_ap_return_64() {
    ap_return_64 = ap_phi_mux_outpeakPhi_0_1_wri_phi_fu_4965_p20.read();
}

void merge_acrossphi::thread_ap_return_65() {
    ap_return_65 = grp_mergeClusters_fu_7888_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_66() {
    ap_return_66 = ap_phi_mux_outpeakPhi_0_3_wri_phi_fu_4939_p20.read();
}

void merge_acrossphi::thread_ap_return_67() {
    ap_return_67 = ap_phi_mux_outpeakPhi_0_4_wri_phi_fu_4913_p20.read();
}

void merge_acrossphi::thread_ap_return_68() {
    ap_return_68 = ap_phi_mux_outpeakPhi_0_5_wri_phi_fu_4887_p20.read();
}

void merge_acrossphi::thread_ap_return_69() {
    ap_return_69 = grp_mergeClusters_fu_7888_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_7() {
    ap_return_7 = ap_phi_mux_outpeakEta_0_7_wri_phi_fu_4497_p20.read();
}

void merge_acrossphi::thread_ap_return_70() {
    ap_return_70 = ap_phi_mux_outpeakPhi_0_7_wri_phi_fu_4861_p20.read();
}

void merge_acrossphi::thread_ap_return_71() {
    ap_return_71 = ap_phi_mux_outpeakPhi_0_8_wri_phi_fu_4835_p20.read();
}

void merge_acrossphi::thread_ap_return_72() {
    ap_return_72 = ap_phi_mux_outpeakPhi_0_9_wri_phi_fu_4783_p20.read();
}

void merge_acrossphi::thread_ap_return_73() {
    ap_return_73 = grp_mergeClusters_fu_7888_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_74() {
    ap_return_74 = ap_phi_mux_outpeakPhi_0_11_wr_phi_fu_4679_p20.read();
}

void merge_acrossphi::thread_ap_return_75() {
    ap_return_75 = ap_phi_mux_outpeakPhi_0_12_wr_phi_fu_4705_p20.read();
}

void merge_acrossphi::thread_ap_return_76() {
    ap_return_76 = ap_phi_mux_outpeakPhi_0_13_wr_phi_fu_4757_p20.read();
}

void merge_acrossphi::thread_ap_return_77() {
    ap_return_77 = grp_mergeClusters_fu_7888_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_78() {
    ap_return_78 = grp_mergeClusters_fu_7888_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_79() {
    ap_return_79 = outpeakPhi432_1_fu_16187_p34.read();
}

void merge_acrossphi::thread_ap_return_8() {
    ap_return_8 = ap_phi_mux_outpeakEta_0_8_wri_phi_fu_4419_p20.read();
}

void merge_acrossphi::thread_ap_return_80() {
    ap_return_80 = ap_phi_mux_outpeakPhi_0_17_wr_phi_fu_5349_p8.read();
}

void merge_acrossphi::thread_ap_return_81() {
    ap_return_81 = grp_mergeClusters_fu_7903_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_82() {
    ap_return_82 = grp_mergeClusters_fu_7903_ap_return_1.read();
}

void merge_acrossphi::thread_ap_return_83() {
    ap_return_83 = grp_mergeClusters_fu_7903_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_84() {
    ap_return_84 = ap_phi_mux_outpeakPhi_1_0_wri_phi_fu_5907_p20.read();
}

void merge_acrossphi::thread_ap_return_85() {
    ap_return_85 = ap_phi_mux_outpeakPhi_1_1_wri_phi_fu_5933_p20.read();
}

void merge_acrossphi::thread_ap_return_86() {
    ap_return_86 = grp_mergeClusters_fu_7915_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_87() {
    ap_return_87 = ap_phi_mux_outpeakPhi_1_3_wri_phi_fu_5985_p20.read();
}

void merge_acrossphi::thread_ap_return_88() {
    ap_return_88 = ap_phi_mux_outpeakPhi_1_4_wri_phi_fu_6011_p20.read();
}

void merge_acrossphi::thread_ap_return_89() {
    ap_return_89 = ap_phi_mux_outpeakPhi_1_5_wri_phi_fu_6037_p20.read();
}

void merge_acrossphi::thread_ap_return_9() {
    ap_return_9 = ap_phi_mux_outpeakEta_0_9_wri_phi_fu_4341_p20.read();
}

void merge_acrossphi::thread_ap_return_90() {
    ap_return_90 = grp_mergeClusters_fu_7915_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_91() {
    ap_return_91 = ap_phi_mux_outpeakPhi_1_7_wri_phi_fu_6063_p20.read();
}

void merge_acrossphi::thread_ap_return_92() {
    ap_return_92 = ap_phi_mux_outpeakPhi_1_8_wri_phi_fu_6089_p20.read();
}

void merge_acrossphi::thread_ap_return_93() {
    ap_return_93 = ap_phi_mux_outpeakPhi_1_9_wri_phi_fu_6115_p20.read();
}

void merge_acrossphi::thread_ap_return_94() {
    ap_return_94 = grp_mergeClusters_fu_7915_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_95() {
    ap_return_95 = ap_phi_mux_outpeakPhi_1_11_wr_phi_fu_6141_p20.read();
}

void merge_acrossphi::thread_ap_return_96() {
    ap_return_96 = ap_phi_mux_outpeakPhi_1_12_wr_phi_fu_6167_p20.read();
}

void merge_acrossphi::thread_ap_return_97() {
    ap_return_97 = ap_phi_mux_outpeakPhi_1_13_wr_phi_fu_6219_p20.read();
}

void merge_acrossphi::thread_ap_return_98() {
    ap_return_98 = grp_mergeClusters_fu_7915_ap_return_4.read();
}

void merge_acrossphi::thread_ap_return_99() {
    ap_return_99 = grp_mergeClusters_fu_7915_ap_return_4.read();
}

void merge_acrossphi::thread_demorgan10_fu_10523_p2() {
    demorgan10_fu_10523_p2 = (tmp_15_fu_10515_p3.read() | tmp_9_2_1_fu_10509_p2.read());
}

void merge_acrossphi::thread_demorgan11_fu_10803_p2() {
    demorgan11_fu_10803_p2 = (tmp_16_fu_10795_p3.read() | tmp_9_2_2_fu_10789_p2.read());
}

void merge_acrossphi::thread_demorgan12_fu_14114_p2() {
    demorgan12_fu_14114_p2 = (tmp_17_fu_14106_p3.read() | tmp_9_2_3_fu_14101_p2.read());
}

void merge_acrossphi::thread_demorgan13_fu_14436_p2() {
    demorgan13_fu_14436_p2 = (tmp_19_fu_14428_p3.read() | tmp_9_2_4_fu_14423_p2.read());
}

void merge_acrossphi::thread_demorgan14_fu_20961_p2() {
    demorgan14_fu_20961_p2 = (tmp_21_reg_26162.read() | tmp_9_2_5_fu_20956_p2.read());
}

void merge_acrossphi::thread_demorgan1_fu_9643_p2() {
    demorgan1_fu_9643_p2 = (tmp_1_fu_9635_p3.read() | tmp_9_0_2_fu_9629_p2.read());
}

void merge_acrossphi::thread_demorgan2_fu_11630_p2() {
    demorgan2_fu_11630_p2 = (tmp_2_fu_11622_p3.read() | tmp_9_0_3_fu_11617_p2.read());
}

void merge_acrossphi::thread_demorgan3_fu_11952_p2() {
    demorgan3_fu_11952_p2 = (tmp_4_fu_11944_p3.read() | tmp_9_0_4_fu_11939_p2.read());
}

void merge_acrossphi::thread_demorgan4_fu_16619_p2() {
    demorgan4_fu_16619_p2 = (tmp_6_reg_25906.read() | tmp_9_0_5_fu_16614_p2.read());
}

void merge_acrossphi::thread_demorgan5_fu_9943_p2() {
    demorgan5_fu_9943_p2 = (tmp_7_fu_9935_p3.read() | tmp_9_1_1_fu_9929_p2.read());
}

void merge_acrossphi::thread_demorgan6_fu_10223_p2() {
    demorgan6_fu_10223_p2 = (tmp_8_fu_10215_p3.read() | tmp_9_1_2_fu_10209_p2.read());
}

void merge_acrossphi::thread_demorgan7_fu_12872_p2() {
    demorgan7_fu_12872_p2 = (tmp_10_fu_12864_p3.read() | tmp_9_1_3_fu_12859_p2.read());
}

void merge_acrossphi::thread_demorgan8_fu_13194_p2() {
    demorgan8_fu_13194_p2 = (tmp_12_fu_13186_p3.read() | tmp_9_1_4_fu_13181_p2.read());
}

void merge_acrossphi::thread_demorgan9_fu_18790_p2() {
    demorgan9_fu_18790_p2 = (tmp_14_reg_26034.read() | tmp_9_1_5_fu_18785_p2.read());
}

void merge_acrossphi::thread_demorgan_fu_9363_p2() {
    demorgan_fu_9363_p2 = (tmp_fu_9355_p3.read() | tmp_9_0_1_fu_9349_p2.read());
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7888_icet1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()))) {
        grp_mergeClusters_fu_7888_icet1 = ClusterET_0_16_rea_1_reg_23500.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()))) {
        grp_mergeClusters_fu_7888_icet1 = ClusterET_0_8_read_1_reg_23574.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(tmp_9_fu_9241_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_9235_p2.read()))) {
        grp_mergeClusters_fu_7888_icet1 = ClusterET_0_0_read.read();
    } else {
        grp_mergeClusters_fu_7888_icet1 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7888_icet2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()))) {
        grp_mergeClusters_fu_7888_icet2 = preMergeclusterET_lo_3_reg_25890.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()))) {
        grp_mergeClusters_fu_7888_icet2 = preMergeclusterET_lo_1_reg_25560.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(tmp_9_fu_9241_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_9235_p2.read()))) {
        grp_mergeClusters_fu_7888_icet2 = ClusterET_0_1_read.read();
    } else {
        grp_mergeClusters_fu_7888_icet2 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7888_ieta1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()))) {
        grp_mergeClusters_fu_7888_ieta1 = peakEta_0_16_read_1_reg_23869.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()))) {
        grp_mergeClusters_fu_7888_ieta1 = peakEta_0_8_read_1_reg_23901.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(tmp_9_fu_9241_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_9235_p2.read()))) {
        grp_mergeClusters_fu_7888_ieta1 = peakEta_0_0_read.read();
    } else {
        grp_mergeClusters_fu_7888_ieta1 =  (sc_lv<3>) ("XXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7888_ieta2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()))) {
        grp_mergeClusters_fu_7888_ieta2 = newSel8_reg_25880.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()))) {
        grp_mergeClusters_fu_7888_ieta2 = newSel_reg_25550.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(tmp_9_fu_9241_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_9235_p2.read()))) {
        grp_mergeClusters_fu_7888_ieta2 = peakEta_0_1_read.read();
    } else {
        grp_mergeClusters_fu_7888_ieta2 =  (sc_lv<3>) ("XXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7888_iphi1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()))) {
        grp_mergeClusters_fu_7888_iphi1 = peakPhi_0_16_read_1_5_fu_14701_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()))) {
        grp_mergeClusters_fu_7888_iphi1 = peakPhi_0_8_read_c_1_fu_11117_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(tmp_9_fu_9241_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_9235_p2.read()))) {
        grp_mergeClusters_fu_7888_iphi1 = ap_const_lv4_4;
    } else {
        grp_mergeClusters_fu_7888_iphi1 =  (sc_lv<4>) ("XXXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7888_iphi2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan3_reg_25876.read()))) {
        grp_mergeClusters_fu_7888_iphi2 = preMergepeakPhi_load_3_reg_25885.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan1_reg_25546.read()))) {
        grp_mergeClusters_fu_7888_iphi2 = preMergepeakPhi_load_1_reg_25555.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(tmp_9_fu_9241_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_9235_p2.read()))) {
        grp_mergeClusters_fu_7888_iphi2 = peakPhi_0_1_read_c_fu_9226_p1.read();
    } else {
        grp_mergeClusters_fu_7888_iphi2 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7903_icet1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()))) {
        grp_mergeClusters_fu_7903_icet1 = ClusterET_0_20_rea_1_reg_23470.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_fu_11630_p2.read()))) {
        grp_mergeClusters_fu_7903_icet1 = ClusterET_0_12_rea_1_reg_23551.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(demorgan_fu_9363_p2.read(), ap_const_lv1_0))) {
        grp_mergeClusters_fu_7903_icet1 = ClusterET_0_4_read.read();
    } else {
        grp_mergeClusters_fu_7903_icet1 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7903_icet2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()))) {
        grp_mergeClusters_fu_7903_icet2 = preMergeclusterET_lo_4_fu_16686_p34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_fu_11630_p2.read()))) {
        grp_mergeClusters_fu_7903_icet2 = preMergeclusterET_lo_2_fu_11688_p34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(demorgan_fu_9363_p2.read(), ap_const_lv1_0))) {
        grp_mergeClusters_fu_7903_icet2 = preMergeclusterET_lo_fu_9455_p34.read();
    } else {
        grp_mergeClusters_fu_7903_icet2 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7903_ieta1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()))) {
        grp_mergeClusters_fu_7903_ieta1 = peakEta_0_20_read_1_reg_23853.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_fu_11630_p2.read()))) {
        grp_mergeClusters_fu_7903_ieta1 = peakEta_0_12_read_1_reg_23885.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(demorgan_fu_9363_p2.read(), ap_const_lv1_0))) {
        grp_mergeClusters_fu_7903_ieta1 = peakEta_0_4_read.read();
    } else {
        grp_mergeClusters_fu_7903_ieta1 =  (sc_lv<3>) ("XXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7903_ieta2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()))) {
        grp_mergeClusters_fu_7903_ieta2 = preMergepeakEta_load_fu_16640_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_fu_11630_p2.read()))) {
        grp_mergeClusters_fu_7903_ieta2 = sel_tmp3_fu_11642_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(demorgan_fu_9363_p2.read(), ap_const_lv1_0))) {
        grp_mergeClusters_fu_7903_ieta2 = sel_tmp1_fu_9375_p3.read();
    } else {
        grp_mergeClusters_fu_7903_ieta2 =  (sc_lv<3>) ("XXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7903_iphi1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()))) {
        grp_mergeClusters_fu_7903_iphi1 = peakPhi_0_20_read_s_fu_16724_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_fu_11630_p2.read()))) {
        grp_mergeClusters_fu_7903_iphi1 = peakPhi_0_12_read_1_4_fu_11727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(demorgan_fu_9363_p2.read(), ap_const_lv1_0))) {
        grp_mergeClusters_fu_7903_iphi1 = peakPhi_0_4_read_c_1_fu_9526_p1.read();
    } else {
        grp_mergeClusters_fu_7903_iphi1 =  (sc_lv<4>) ("XXXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7903_iphi2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan4_fu_16619_p2.read()))) {
        grp_mergeClusters_fu_7903_iphi2 = preMergepeakPhi_load_4_fu_16648_p34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan2_fu_11630_p2.read()))) {
        grp_mergeClusters_fu_7903_iphi2 = preMergepeakPhi_load_2_fu_11649_p34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(demorgan_fu_9363_p2.read(), ap_const_lv1_0))) {
        grp_mergeClusters_fu_7903_iphi2 = preMergepeakPhi_load_fu_9384_p34.read();
    } else {
        grp_mergeClusters_fu_7903_iphi2 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7915_icet1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()))) {
        grp_mergeClusters_fu_7915_icet1 = ClusterET_1_16_rea_1_reg_23316.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()))) {
        grp_mergeClusters_fu_7915_icet1 = ClusterET_1_8_read_1_reg_23390.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_1_fu_9821_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_1_6_fu_9815_p2.read()))) {
        grp_mergeClusters_fu_7915_icet1 = ClusterET_1_0_read.read();
    } else {
        grp_mergeClusters_fu_7915_icet1 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7915_icet2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()))) {
        grp_mergeClusters_fu_7915_icet2 = preMergeclusterET_lo_8_reg_26018.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()))) {
        grp_mergeClusters_fu_7915_icet2 = preMergeclusterET_lo_6_reg_25664.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_1_fu_9821_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_1_6_fu_9815_p2.read()))) {
        grp_mergeClusters_fu_7915_icet2 = ClusterET_1_1_read.read();
    } else {
        grp_mergeClusters_fu_7915_icet2 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7915_ieta1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()))) {
        grp_mergeClusters_fu_7915_ieta1 = peakEta_1_16_read_1_reg_23791.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()))) {
        grp_mergeClusters_fu_7915_ieta1 = peakEta_1_8_read_1_reg_23823.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_1_fu_9821_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_1_6_fu_9815_p2.read()))) {
        grp_mergeClusters_fu_7915_ieta1 = peakEta_1_0_read.read();
    } else {
        grp_mergeClusters_fu_7915_ieta1 =  (sc_lv<3>) ("XXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7915_ieta2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()))) {
        grp_mergeClusters_fu_7915_ieta2 = newSel17_reg_26008.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()))) {
        grp_mergeClusters_fu_7915_ieta2 = newSel9_reg_25654.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_1_fu_9821_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_1_6_fu_9815_p2.read()))) {
        grp_mergeClusters_fu_7915_ieta2 = peakEta_1_1_read.read();
    } else {
        grp_mergeClusters_fu_7915_ieta2 =  (sc_lv<3>) ("XXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7915_iphi1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()))) {
        grp_mergeClusters_fu_7915_iphi1 = peakPhi_1_16_read_1_8_fu_16872_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()))) {
        grp_mergeClusters_fu_7915_iphi1 = peakPhi_1_8_read_c_1_fu_12359_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_1_fu_9821_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_1_6_fu_9815_p2.read()))) {
        grp_mergeClusters_fu_7915_iphi1 = ap_const_lv4_4;
    } else {
        grp_mergeClusters_fu_7915_iphi1 =  (sc_lv<4>) ("XXXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7915_iphi2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan8_reg_26004.read()))) {
        grp_mergeClusters_fu_7915_iphi2 = preMergepeakPhi_load_8_reg_26013.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan6_reg_25650.read()))) {
        grp_mergeClusters_fu_7915_iphi2 = preMergepeakPhi_load_6_reg_25659.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_1_fu_9821_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_1_6_fu_9815_p2.read()))) {
        grp_mergeClusters_fu_7915_iphi2 = peakPhi_1_1_read_c_fu_9145_p1.read();
    } else {
        grp_mergeClusters_fu_7915_iphi2 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7930_icet1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()))) {
        grp_mergeClusters_fu_7930_icet1 = ClusterET_1_20_rea_1_reg_23286.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_fu_12872_p2.read()))) {
        grp_mergeClusters_fu_7930_icet1 = ClusterET_1_12_rea_1_reg_23367.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_fu_9943_p2.read()))) {
        grp_mergeClusters_fu_7930_icet1 = ClusterET_1_4_read.read();
    } else {
        grp_mergeClusters_fu_7930_icet1 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7930_icet2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()))) {
        grp_mergeClusters_fu_7930_icet2 = preMergeclusterET_lo_9_fu_18857_p34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_fu_12872_p2.read()))) {
        grp_mergeClusters_fu_7930_icet2 = preMergeclusterET_lo_7_fu_12930_p34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_fu_9943_p2.read()))) {
        grp_mergeClusters_fu_7930_icet2 = preMergeclusterET_lo_5_fu_10035_p34.read();
    } else {
        grp_mergeClusters_fu_7930_icet2 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7930_ieta1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()))) {
        grp_mergeClusters_fu_7930_ieta1 = peakEta_1_20_read_1_reg_23775.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_fu_12872_p2.read()))) {
        grp_mergeClusters_fu_7930_ieta1 = peakEta_1_12_read_1_reg_23807.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_fu_9943_p2.read()))) {
        grp_mergeClusters_fu_7930_ieta1 = peakEta_1_4_read.read();
    } else {
        grp_mergeClusters_fu_7930_ieta1 =  (sc_lv<3>) ("XXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7930_ieta2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()))) {
        grp_mergeClusters_fu_7930_ieta2 = preMergepeakEta_load_1_fu_18811_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_fu_12872_p2.read()))) {
        grp_mergeClusters_fu_7930_ieta2 = sel_tmp20_fu_12884_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_fu_9943_p2.read()))) {
        grp_mergeClusters_fu_7930_ieta2 = sel_tmp17_fu_9955_p3.read();
    } else {
        grp_mergeClusters_fu_7930_ieta2 =  (sc_lv<3>) ("XXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7930_iphi1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()))) {
        grp_mergeClusters_fu_7930_iphi1 = peakPhi_1_20_read_s_fu_18895_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_fu_12872_p2.read()))) {
        grp_mergeClusters_fu_7930_iphi1 = peakPhi_1_12_read_1_7_fu_12969_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_fu_9943_p2.read()))) {
        grp_mergeClusters_fu_7930_iphi1 = peakPhi_1_4_read_c_1_fu_10106_p1.read();
    } else {
        grp_mergeClusters_fu_7930_iphi1 =  (sc_lv<4>) ("XXXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7930_iphi2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan9_fu_18790_p2.read()))) {
        grp_mergeClusters_fu_7930_iphi2 = preMergepeakPhi_load_9_fu_18819_p34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan7_fu_12872_p2.read()))) {
        grp_mergeClusters_fu_7930_iphi2 = preMergepeakPhi_load_7_fu_12891_p34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan5_fu_9943_p2.read()))) {
        grp_mergeClusters_fu_7930_iphi2 = preMergepeakPhi_load_5_fu_9964_p34.read();
    } else {
        grp_mergeClusters_fu_7930_iphi2 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7942_icet1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()))) {
        grp_mergeClusters_fu_7942_icet1 = ClusterET_2_16_rea_1_reg_23132.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()))) {
        grp_mergeClusters_fu_7942_icet1 = ClusterET_2_8_read_1_reg_23206.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_2_fu_10401_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_9_fu_10395_p2.read()))) {
        grp_mergeClusters_fu_7942_icet1 = ClusterET_2_0_read.read();
    } else {
        grp_mergeClusters_fu_7942_icet1 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7942_icet2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()))) {
        grp_mergeClusters_fu_7942_icet2 = preMergeclusterET_lo_12_reg_26146.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()))) {
        grp_mergeClusters_fu_7942_icet2 = preMergeclusterET_lo_10_reg_25768.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_2_fu_10401_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_9_fu_10395_p2.read()))) {
        grp_mergeClusters_fu_7942_icet2 = ClusterET_2_1_read.read();
    } else {
        grp_mergeClusters_fu_7942_icet2 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7942_ieta1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()))) {
        grp_mergeClusters_fu_7942_ieta1 = peakEta_2_16_read_1_reg_23713.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()))) {
        grp_mergeClusters_fu_7942_ieta1 = peakEta_2_8_read_1_reg_23745.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_2_fu_10401_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_9_fu_10395_p2.read()))) {
        grp_mergeClusters_fu_7942_ieta1 = peakEta_2_0_read.read();
    } else {
        grp_mergeClusters_fu_7942_ieta1 =  (sc_lv<3>) ("XXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7942_ieta2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()))) {
        grp_mergeClusters_fu_7942_ieta2 = newSel26_reg_26136.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()))) {
        grp_mergeClusters_fu_7942_ieta2 = newSel18_reg_25758.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_2_fu_10401_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_9_fu_10395_p2.read()))) {
        grp_mergeClusters_fu_7942_ieta2 = peakEta_2_1_read.read();
    } else {
        grp_mergeClusters_fu_7942_ieta2 =  (sc_lv<3>) ("XXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7942_iphi1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()))) {
        grp_mergeClusters_fu_7942_iphi1 = peakPhi_2_16_read_1_11_fu_19043_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()))) {
        grp_mergeClusters_fu_7942_iphi1 = peakPhi_2_8_read_c_1_fu_13601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_2_fu_10401_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_9_fu_10395_p2.read()))) {
        grp_mergeClusters_fu_7942_iphi1 = ap_const_lv4_4;
    } else {
        grp_mergeClusters_fu_7942_iphi1 =  (sc_lv<4>) ("XXXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7942_iphi2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan13_reg_26132.read()))) {
        grp_mergeClusters_fu_7942_iphi2 = preMergepeakPhi_load_12_reg_26141.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan11_reg_25754.read()))) {
        grp_mergeClusters_fu_7942_iphi2 = preMergepeakPhi_load_10_reg_25763.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_2_fu_10401_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_9_fu_10395_p2.read()))) {
        grp_mergeClusters_fu_7942_iphi2 = peakPhi_2_1_read_c_fu_9064_p1.read();
    } else {
        grp_mergeClusters_fu_7942_iphi2 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7957_icet1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()))) {
        grp_mergeClusters_fu_7957_icet1 = ClusterET_2_20_rea_1_reg_23102.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_fu_14114_p2.read()))) {
        grp_mergeClusters_fu_7957_icet1 = ClusterET_2_12_rea_1_reg_23183.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_fu_10523_p2.read()))) {
        grp_mergeClusters_fu_7957_icet1 = ClusterET_2_4_read.read();
    } else {
        grp_mergeClusters_fu_7957_icet1 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7957_icet2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()))) {
        grp_mergeClusters_fu_7957_icet2 = preMergeclusterET_lo_13_fu_21028_p34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_fu_14114_p2.read()))) {
        grp_mergeClusters_fu_7957_icet2 = preMergeclusterET_lo_11_fu_14172_p34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_fu_10523_p2.read()))) {
        grp_mergeClusters_fu_7957_icet2 = preMergeclusterET_lo_14_fu_10615_p34.read();
    } else {
        grp_mergeClusters_fu_7957_icet2 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7957_ieta1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()))) {
        grp_mergeClusters_fu_7957_ieta1 = peakEta_2_20_read_1_reg_23697.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_fu_14114_p2.read()))) {
        grp_mergeClusters_fu_7957_ieta1 = peakEta_2_12_read_1_reg_23729.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_fu_10523_p2.read()))) {
        grp_mergeClusters_fu_7957_ieta1 = peakEta_2_4_read.read();
    } else {
        grp_mergeClusters_fu_7957_ieta1 =  (sc_lv<3>) ("XXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7957_ieta2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()))) {
        grp_mergeClusters_fu_7957_ieta2 = preMergepeakEta_load_2_fu_20982_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_fu_14114_p2.read()))) {
        grp_mergeClusters_fu_7957_ieta2 = sel_tmp36_fu_14126_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_fu_10523_p2.read()))) {
        grp_mergeClusters_fu_7957_ieta2 = sel_tmp33_fu_10535_p3.read();
    } else {
        grp_mergeClusters_fu_7957_ieta2 =  (sc_lv<3>) ("XXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7957_iphi1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()))) {
        grp_mergeClusters_fu_7957_iphi1 = peakPhi_2_20_read_s_fu_21066_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_fu_14114_p2.read()))) {
        grp_mergeClusters_fu_7957_iphi1 = peakPhi_2_12_read_1_10_fu_14211_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_fu_10523_p2.read()))) {
        grp_mergeClusters_fu_7957_iphi1 = peakPhi_2_4_read_c_1_fu_10686_p1.read();
    } else {
        grp_mergeClusters_fu_7957_iphi1 =  (sc_lv<4>) ("XXXX");
    }
}

void merge_acrossphi::thread_grp_mergeClusters_fu_7957_iphi2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, demorgan14_fu_20961_p2.read()))) {
        grp_mergeClusters_fu_7957_iphi2 = preMergepeakPhi_load_13_fu_20990_p34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan12_fu_14114_p2.read()))) {
        grp_mergeClusters_fu_7957_iphi2 = preMergepeakPhi_load_11_fu_14133_p34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, demorgan10_fu_10523_p2.read()))) {
        grp_mergeClusters_fu_7957_iphi2 = preMergepeakPhi_load_14_fu_10544_p34.read();
    } else {
        grp_mergeClusters_fu_7957_iphi2 = "XXXXXXXXXXXXXXXX";
    }
}

void merge_acrossphi::thread_nPhi_1_0_1_fu_9267_p3() {
    nPhi_1_0_1_fu_9267_p3 = (!tmp_0_1_fu_9261_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_0_1_fu_9261_p2.read()[0].to_bool())? nPhi_2_0_1_cast_cast_fu_9253_p3.read(): ap_const_lv4_5);
}

void merge_acrossphi::thread_nPhi_1_0_1_t_fu_9275_p1() {
    nPhi_1_0_1_t_fu_9275_p1 = esl_sext<5,4>(nPhi_1_0_1_fu_9267_p3.read());
}

void merge_acrossphi::thread_nPhi_1_0_2_fu_9551_p3() {
    nPhi_1_0_2_fu_9551_p3 = (!tmp_0_2_fu_9545_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_0_2_fu_9545_p2.read()[0].to_bool())? nPhi_2_0_2_cast_cast_fu_9537_p3.read(): ap_const_lv5_9);
}

void merge_acrossphi::thread_nPhi_1_0_3_fu_11572_p3() {
    nPhi_1_0_3_fu_11572_p3 = (!tmp_0_3_reg_25570.read()[0].is_01())? sc_lv<5>(): ((tmp_0_3_reg_25570.read()[0].to_bool())? nPhi_2_0_3_fu_11565_p3.read(): ap_const_lv5_D);
}

void merge_acrossphi::thread_nPhi_1_0_4_fu_11889_p3() {
    nPhi_1_0_4_fu_11889_p3 = (!tmp_0_4_fu_11884_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_0_4_fu_11884_p2.read()[0].to_bool())? nPhi_2_0_4_cast_cast_fu_11876_p3.read(): ap_const_lv6_11);
}

void merge_acrossphi::thread_nPhi_1_0_5_fu_12197_p3() {
    nPhi_1_0_5_fu_12197_p3 = (!tmp_0_5_fu_12192_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_0_5_fu_12192_p2.read()[0].to_bool())? nPhi_2_0_5_fu_12184_p3.read(): ap_const_lv6_15);
}

void merge_acrossphi::thread_nPhi_1_1_1_fu_9847_p3() {
    nPhi_1_1_1_fu_9847_p3 = (!tmp_1_1_fu_9841_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_1_1_fu_9841_p2.read()[0].to_bool())? nPhi_2_1_1_cast_cast_fu_9833_p3.read(): ap_const_lv4_5);
}

void merge_acrossphi::thread_nPhi_1_1_1_t_fu_9855_p1() {
    nPhi_1_1_1_t_fu_9855_p1 = esl_sext<5,4>(nPhi_1_1_1_fu_9847_p3.read());
}

void merge_acrossphi::thread_nPhi_1_1_2_fu_10131_p3() {
    nPhi_1_1_2_fu_10131_p3 = (!tmp_1_2_fu_10125_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_1_2_fu_10125_p2.read()[0].to_bool())? nPhi_2_1_2_cast_cast_fu_10117_p3.read(): ap_const_lv5_9);
}

void merge_acrossphi::thread_nPhi_1_1_3_fu_12814_p3() {
    nPhi_1_1_3_fu_12814_p3 = (!tmp_1_3_reg_25674.read()[0].is_01())? sc_lv<5>(): ((tmp_1_3_reg_25674.read()[0].to_bool())? nPhi_2_1_3_fu_12807_p3.read(): ap_const_lv5_D);
}

void merge_acrossphi::thread_nPhi_1_1_4_fu_13131_p3() {
    nPhi_1_1_4_fu_13131_p3 = (!tmp_1_4_fu_13126_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_1_4_fu_13126_p2.read()[0].to_bool())? nPhi_2_1_4_cast_cast_fu_13118_p3.read(): ap_const_lv6_11);
}

void merge_acrossphi::thread_nPhi_1_1_5_fu_13439_p3() {
    nPhi_1_1_5_fu_13439_p3 = (!tmp_1_5_fu_13434_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_1_5_fu_13434_p2.read()[0].to_bool())? nPhi_2_1_5_fu_13426_p3.read(): ap_const_lv6_15);
}

void merge_acrossphi::thread_nPhi_1_2_1_fu_10427_p3() {
    nPhi_1_2_1_fu_10427_p3 = (!tmp_2_1_fu_10421_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_2_1_fu_10421_p2.read()[0].to_bool())? nPhi_2_2_1_cast_cast_fu_10413_p3.read(): ap_const_lv4_5);
}

void merge_acrossphi::thread_nPhi_1_2_1_t_fu_10435_p1() {
    nPhi_1_2_1_t_fu_10435_p1 = esl_sext<5,4>(nPhi_1_2_1_fu_10427_p3.read());
}

void merge_acrossphi::thread_nPhi_1_2_2_fu_10711_p3() {
    nPhi_1_2_2_fu_10711_p3 = (!tmp_2_2_fu_10705_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_2_2_fu_10705_p2.read()[0].to_bool())? nPhi_2_2_2_cast_cast_fu_10697_p3.read(): ap_const_lv5_9);
}

void merge_acrossphi::thread_nPhi_1_2_3_fu_14056_p3() {
    nPhi_1_2_3_fu_14056_p3 = (!tmp_2_3_reg_25778.read()[0].is_01())? sc_lv<5>(): ((tmp_2_3_reg_25778.read()[0].to_bool())? nPhi_2_2_3_fu_14049_p3.read(): ap_const_lv5_D);
}

void merge_acrossphi::thread_nPhi_1_2_4_fu_14373_p3() {
    nPhi_1_2_4_fu_14373_p3 = (!tmp_2_4_fu_14368_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_2_4_fu_14368_p2.read()[0].to_bool())? nPhi_2_2_4_cast_cast_fu_14360_p3.read(): ap_const_lv6_11);
}

void merge_acrossphi::thread_nPhi_1_2_5_fu_14681_p3() {
    nPhi_1_2_5_fu_14681_p3 = (!tmp_2_5_fu_14676_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_2_5_fu_14676_p2.read()[0].to_bool())? nPhi_2_2_5_fu_14668_p3.read(): ap_const_lv6_15);
}

void merge_acrossphi::thread_nPhi_2_0_1_cast_cast_fu_9253_p3() {
    nPhi_2_0_1_cast_cast_fu_9253_p3 = (!tmp_7_0_1_fu_9247_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_7_0_1_fu_9247_p2.read()[0].to_bool())? ap_const_lv4_F: ap_const_lv4_3);
}

void merge_acrossphi::thread_nPhi_2_0_2_cast_cast_fu_9537_p3() {
    nPhi_2_0_2_cast_cast_fu_9537_p3 = (!tmp_7_0_2_fu_9531_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_7_0_2_fu_9531_p2.read()[0].to_bool())? ap_const_lv5_1F: ap_const_lv5_7);
}

void merge_acrossphi::thread_nPhi_2_0_3_fu_11565_p3() {
    nPhi_2_0_3_fu_11565_p3 = (!tmp_7_0_3_reg_25565.read()[0].is_01())? sc_lv<5>(): ((tmp_7_0_3_reg_25565.read()[0].to_bool())? ap_const_lv5_1F: ap_const_lv5_B);
}

void merge_acrossphi::thread_nPhi_2_0_4_cast_cast_fu_11876_p3() {
    nPhi_2_0_4_cast_cast_fu_11876_p3 = (!tmp_7_0_4_fu_11871_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_7_0_4_fu_11871_p2.read()[0].to_bool())? ap_const_lv6_3F: ap_const_lv6_F);
}

void merge_acrossphi::thread_nPhi_2_0_5_fu_12184_p3() {
    nPhi_2_0_5_fu_12184_p3 = (!tmp_7_0_5_fu_12179_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_7_0_5_fu_12179_p2.read()[0].to_bool())? ap_const_lv6_3F: ap_const_lv6_13);
}

void merge_acrossphi::thread_nPhi_2_1_1_cast_cast_fu_9833_p3() {
    nPhi_2_1_1_cast_cast_fu_9833_p3 = (!tmp_7_1_1_fu_9827_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_7_1_1_fu_9827_p2.read()[0].to_bool())? ap_const_lv4_F: ap_const_lv4_3);
}

void merge_acrossphi::thread_nPhi_2_1_2_cast_cast_fu_10117_p3() {
    nPhi_2_1_2_cast_cast_fu_10117_p3 = (!tmp_7_1_2_fu_10111_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_7_1_2_fu_10111_p2.read()[0].to_bool())? ap_const_lv5_1F: ap_const_lv5_7);
}

void merge_acrossphi::thread_nPhi_2_1_3_fu_12807_p3() {
    nPhi_2_1_3_fu_12807_p3 = (!tmp_7_1_3_reg_25669.read()[0].is_01())? sc_lv<5>(): ((tmp_7_1_3_reg_25669.read()[0].to_bool())? ap_const_lv5_1F: ap_const_lv5_B);
}

void merge_acrossphi::thread_nPhi_2_1_4_cast_cast_fu_13118_p3() {
    nPhi_2_1_4_cast_cast_fu_13118_p3 = (!tmp_7_1_4_fu_13113_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_7_1_4_fu_13113_p2.read()[0].to_bool())? ap_const_lv6_3F: ap_const_lv6_F);
}

void merge_acrossphi::thread_nPhi_2_1_5_fu_13426_p3() {
    nPhi_2_1_5_fu_13426_p3 = (!tmp_7_1_5_fu_13421_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_7_1_5_fu_13421_p2.read()[0].to_bool())? ap_const_lv6_3F: ap_const_lv6_13);
}

void merge_acrossphi::thread_nPhi_2_2_1_cast_cast_fu_10413_p3() {
    nPhi_2_2_1_cast_cast_fu_10413_p3 = (!tmp_7_2_1_fu_10407_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_7_2_1_fu_10407_p2.read()[0].to_bool())? ap_const_lv4_F: ap_const_lv4_3);
}

void merge_acrossphi::thread_nPhi_2_2_2_cast_cast_fu_10697_p3() {
    nPhi_2_2_2_cast_cast_fu_10697_p3 = (!tmp_7_2_2_fu_10691_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_7_2_2_fu_10691_p2.read()[0].to_bool())? ap_const_lv5_1F: ap_const_lv5_7);
}

void merge_acrossphi::thread_nPhi_2_2_3_fu_14049_p3() {
    nPhi_2_2_3_fu_14049_p3 = (!tmp_7_2_3_reg_25773.read()[0].is_01())? sc_lv<5>(): ((tmp_7_2_3_reg_25773.read()[0].to_bool())? ap_const_lv5_1F: ap_const_lv5_B);
}

void merge_acrossphi::thread_nPhi_2_2_4_cast_cast_fu_14360_p3() {
    nPhi_2_2_4_cast_cast_fu_14360_p3 = (!tmp_7_2_4_fu_14355_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_7_2_4_fu_14355_p2.read()[0].to_bool())? ap_const_lv6_3F: ap_const_lv6_F);
}

void merge_acrossphi::thread_nPhi_2_2_5_fu_14668_p3() {
    nPhi_2_2_5_fu_14668_p3 = (!tmp_7_2_5_fu_14663_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_7_2_5_fu_14663_p2.read()[0].to_bool())? ap_const_lv6_3F: ap_const_lv6_13);
}

void merge_acrossphi::thread_newSel10_fu_13248_p3() {
    newSel10_fu_13248_p3 = (!sel_tmp28_fu_13242_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp28_fu_13242_p2.read()[0].to_bool())? peakEta_1_1_read_1_reg_23843.read(): peakEta_1_15_read_1_reg_23796.read());
}

void merge_acrossphi::thread_newSel11_fu_13260_p3() {
    newSel11_fu_13260_p3 = (!sel_tmp26_fu_13230_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp26_fu_13230_p2.read()[0].to_bool())? peakEta_1_13_read_1_reg_23801.read(): peakEta_1_11_read_1_reg_23812.read());
}

void merge_acrossphi::thread_newSel12_fu_13272_p3() {
    newSel12_fu_13272_p3 = (!sel_tmp24_fu_13218_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp24_fu_13218_p2.read()[0].to_bool())? peakEta_1_9_read_1_reg_23818.read(): peakEta_1_7_read_1_reg_23828.read());
}

void merge_acrossphi::thread_newSel13_fu_13284_p3() {
    newSel13_fu_13284_p3 = (!sel_tmp22_fu_13206_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp22_fu_13206_p2.read()[0].to_bool())? peakEta_1_5_read_1_reg_23833.read(): peakEta_1_3_read_1_reg_23838.read());
}

void merge_acrossphi::thread_newSel14_fu_13296_p3() {
    newSel14_fu_13296_p3 = (!or_cond7_fu_13254_p2.read()[0].is_01())? sc_lv<3>(): ((or_cond7_fu_13254_p2.read()[0].to_bool())? newSel10_fu_13248_p3.read(): newSel11_fu_13260_p3.read());
}

void merge_acrossphi::thread_newSel15_fu_13310_p3() {
    newSel15_fu_13310_p3 = (!or_cond9_fu_13278_p2.read()[0].is_01())? sc_lv<3>(): ((or_cond9_fu_13278_p2.read()[0].to_bool())? newSel12_fu_13272_p3.read(): newSel13_fu_13284_p3.read());
}

void merge_acrossphi::thread_newSel16_fu_13324_p3() {
    newSel16_fu_13324_p3 = (!or_cond11_fu_13304_p2.read()[0].is_01())? sc_lv<3>(): ((or_cond11_fu_13304_p2.read()[0].to_bool())? newSel14_fu_13296_p3.read(): newSel15_fu_13310_p3.read());
}

void merge_acrossphi::thread_newSel17_fu_13338_p3() {
    newSel17_fu_13338_p3 = (!or_cond13_fu_13332_p2.read()[0].is_01())? sc_lv<3>(): ((or_cond13_fu_13332_p2.read()[0].to_bool())? newSel16_fu_13324_p3.read(): peakEta_1_17_read_1_reg_23785.read());
}

void merge_acrossphi::thread_newSel18_fu_10815_p3() {
    newSel18_fu_10815_p3 = (!sel_tmp34_fu_10809_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp34_fu_10809_p2.read()[0].to_bool())? peakEta_2_7_read.read(): peakEta_2_9_read.read());
}

void merge_acrossphi::thread_newSel19_fu_14490_p3() {
    newSel19_fu_14490_p3 = (!sel_tmp44_fu_14484_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp44_fu_14484_p2.read()[0].to_bool())? peakEta_2_1_read_1_reg_23765.read(): peakEta_2_15_read_1_reg_23718.read());
}

void merge_acrossphi::thread_newSel1_fu_12006_p3() {
    newSel1_fu_12006_p3 = (!sel_tmp12_fu_12000_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp12_fu_12000_p2.read()[0].to_bool())? peakEta_0_1_read_1_reg_23921.read(): peakEta_0_15_read_1_reg_23874.read());
}

void merge_acrossphi::thread_newSel20_fu_14502_p3() {
    newSel20_fu_14502_p3 = (!sel_tmp42_fu_14472_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp42_fu_14472_p2.read()[0].to_bool())? peakEta_2_13_read_1_reg_23723.read(): peakEta_2_11_read_1_reg_23734.read());
}

void merge_acrossphi::thread_newSel21_fu_14514_p3() {
    newSel21_fu_14514_p3 = (!sel_tmp40_fu_14460_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp40_fu_14460_p2.read()[0].to_bool())? peakEta_2_9_read_1_reg_23740.read(): peakEta_2_7_read_1_reg_23750.read());
}

void merge_acrossphi::thread_newSel22_fu_14526_p3() {
    newSel22_fu_14526_p3 = (!sel_tmp38_fu_14448_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp38_fu_14448_p2.read()[0].to_bool())? peakEta_2_5_read_1_reg_23755.read(): peakEta_2_3_read_1_reg_23760.read());
}

void merge_acrossphi::thread_newSel23_fu_14538_p3() {
    newSel23_fu_14538_p3 = (!or_cond14_fu_14496_p2.read()[0].is_01())? sc_lv<3>(): ((or_cond14_fu_14496_p2.read()[0].to_bool())? newSel19_fu_14490_p3.read(): newSel20_fu_14502_p3.read());
}

void merge_acrossphi::thread_newSel24_fu_14552_p3() {
    newSel24_fu_14552_p3 = (!or_cond16_fu_14520_p2.read()[0].is_01())? sc_lv<3>(): ((or_cond16_fu_14520_p2.read()[0].to_bool())? newSel21_fu_14514_p3.read(): newSel22_fu_14526_p3.read());
}

void merge_acrossphi::thread_newSel25_fu_14566_p3() {
    newSel25_fu_14566_p3 = (!or_cond18_fu_14546_p2.read()[0].is_01())? sc_lv<3>(): ((or_cond18_fu_14546_p2.read()[0].to_bool())? newSel23_fu_14538_p3.read(): newSel24_fu_14552_p3.read());
}

void merge_acrossphi::thread_newSel26_fu_14580_p3() {
    newSel26_fu_14580_p3 = (!or_cond20_fu_14574_p2.read()[0].is_01())? sc_lv<3>(): ((or_cond20_fu_14574_p2.read()[0].to_bool())? newSel25_fu_14566_p3.read(): peakEta_2_17_read_1_reg_23707.read());
}

void merge_acrossphi::thread_newSel2_fu_12018_p3() {
    newSel2_fu_12018_p3 = (!sel_tmp10_fu_11988_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp10_fu_11988_p2.read()[0].to_bool())? peakEta_0_13_read_1_reg_23879.read(): peakEta_0_11_read_1_reg_23890.read());
}

void merge_acrossphi::thread_newSel3_fu_12030_p3() {
    newSel3_fu_12030_p3 = (!sel_tmp7_fu_11976_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp7_fu_11976_p2.read()[0].to_bool())? peakEta_0_9_read_1_reg_23896.read(): peakEta_0_7_read_1_reg_23906.read());
}

void merge_acrossphi::thread_newSel4_fu_12042_p3() {
    newSel4_fu_12042_p3 = (!sel_tmp5_fu_11964_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp5_fu_11964_p2.read()[0].to_bool())? peakEta_0_5_read_1_reg_23911.read(): peakEta_0_3_read_1_reg_23916.read());
}

void merge_acrossphi::thread_newSel5_fu_12054_p3() {
    newSel5_fu_12054_p3 = (!or_cond_fu_12012_p2.read()[0].is_01())? sc_lv<3>(): ((or_cond_fu_12012_p2.read()[0].to_bool())? newSel1_fu_12006_p3.read(): newSel2_fu_12018_p3.read());
}

void merge_acrossphi::thread_newSel6_fu_12068_p3() {
    newSel6_fu_12068_p3 = (!or_cond2_fu_12036_p2.read()[0].is_01())? sc_lv<3>(): ((or_cond2_fu_12036_p2.read()[0].to_bool())? newSel3_fu_12030_p3.read(): newSel4_fu_12042_p3.read());
}

void merge_acrossphi::thread_newSel7_fu_12082_p3() {
    newSel7_fu_12082_p3 = (!or_cond4_fu_12062_p2.read()[0].is_01())? sc_lv<3>(): ((or_cond4_fu_12062_p2.read()[0].to_bool())? newSel5_fu_12054_p3.read(): newSel6_fu_12068_p3.read());
}

void merge_acrossphi::thread_newSel8_fu_12096_p3() {
    newSel8_fu_12096_p3 = (!or_cond6_fu_12090_p2.read()[0].is_01())? sc_lv<3>(): ((or_cond6_fu_12090_p2.read()[0].to_bool())? newSel7_fu_12082_p3.read(): peakEta_0_17_read_1_reg_23863.read());
}

void merge_acrossphi::thread_newSel9_fu_10235_p3() {
    newSel9_fu_10235_p3 = (!sel_tmp18_fu_10229_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp18_fu_10229_p2.read()[0].to_bool())? peakEta_1_7_read.read(): peakEta_1_9_read.read());
}

void merge_acrossphi::thread_newSel_fu_9655_p3() {
    newSel_fu_9655_p3 = (!sel_tmp9_fu_9649_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp9_fu_9649_p2.read()[0].to_bool())? peakEta_0_7_read.read(): peakEta_0_9_read.read());
}

void merge_acrossphi::thread_or_cond10_fu_13290_p2() {
    or_cond10_fu_13290_p2 = (sel_tmp22_fu_13206_p2.read() | sel_tmp21_fu_13200_p2.read());
}

void merge_acrossphi::thread_or_cond11_fu_13304_p2() {
    or_cond11_fu_13304_p2 = (or_cond7_fu_13254_p2.read() | or_cond8_fu_13266_p2.read());
}

void merge_acrossphi::thread_or_cond12_fu_13318_p2() {
    or_cond12_fu_13318_p2 = (or_cond9_fu_13278_p2.read() | or_cond10_fu_13290_p2.read());
}

void merge_acrossphi::thread_or_cond13_fu_13332_p2() {
    or_cond13_fu_13332_p2 = (or_cond11_fu_13304_p2.read() | or_cond12_fu_13318_p2.read());
}

void merge_acrossphi::thread_or_cond14_fu_14496_p2() {
    or_cond14_fu_14496_p2 = (sel_tmp44_fu_14484_p2.read() | sel_tmp43_fu_14478_p2.read());
}

void merge_acrossphi::thread_or_cond15_fu_14508_p2() {
    or_cond15_fu_14508_p2 = (sel_tmp42_fu_14472_p2.read() | sel_tmp41_fu_14466_p2.read());
}

void merge_acrossphi::thread_or_cond16_fu_14520_p2() {
    or_cond16_fu_14520_p2 = (sel_tmp40_fu_14460_p2.read() | sel_tmp39_fu_14454_p2.read());
}

void merge_acrossphi::thread_or_cond17_fu_14532_p2() {
    or_cond17_fu_14532_p2 = (sel_tmp38_fu_14448_p2.read() | sel_tmp37_fu_14442_p2.read());
}

void merge_acrossphi::thread_or_cond18_fu_14546_p2() {
    or_cond18_fu_14546_p2 = (or_cond14_fu_14496_p2.read() | or_cond15_fu_14508_p2.read());
}

void merge_acrossphi::thread_or_cond19_fu_14560_p2() {
    or_cond19_fu_14560_p2 = (or_cond16_fu_14520_p2.read() | or_cond17_fu_14532_p2.read());
}

void merge_acrossphi::thread_or_cond1_fu_12024_p2() {
    or_cond1_fu_12024_p2 = (sel_tmp10_fu_11988_p2.read() | sel_tmp8_fu_11982_p2.read());
}

void merge_acrossphi::thread_or_cond20_fu_14574_p2() {
    or_cond20_fu_14574_p2 = (or_cond18_fu_14546_p2.read() | or_cond19_fu_14560_p2.read());
}

void merge_acrossphi::thread_or_cond2_fu_12036_p2() {
    or_cond2_fu_12036_p2 = (sel_tmp7_fu_11976_p2.read() | sel_tmp6_fu_11970_p2.read());
}

void merge_acrossphi::thread_or_cond3_fu_12048_p2() {
    or_cond3_fu_12048_p2 = (sel_tmp5_fu_11964_p2.read() | sel_tmp4_fu_11958_p2.read());
}

void merge_acrossphi::thread_or_cond4_fu_12062_p2() {
    or_cond4_fu_12062_p2 = (or_cond_fu_12012_p2.read() | or_cond1_fu_12024_p2.read());
}

void merge_acrossphi::thread_or_cond5_fu_12076_p2() {
    or_cond5_fu_12076_p2 = (or_cond2_fu_12036_p2.read() | or_cond3_fu_12048_p2.read());
}

void merge_acrossphi::thread_or_cond6_fu_12090_p2() {
    or_cond6_fu_12090_p2 = (or_cond4_fu_12062_p2.read() | or_cond5_fu_12076_p2.read());
}

void merge_acrossphi::thread_or_cond7_fu_13254_p2() {
    or_cond7_fu_13254_p2 = (sel_tmp28_fu_13242_p2.read() | sel_tmp27_fu_13236_p2.read());
}

void merge_acrossphi::thread_or_cond8_fu_13266_p2() {
    or_cond8_fu_13266_p2 = (sel_tmp26_fu_13230_p2.read() | sel_tmp25_fu_13224_p2.read());
}

void merge_acrossphi::thread_or_cond9_fu_13278_p2() {
    or_cond9_fu_13278_p2 = (sel_tmp24_fu_13218_p2.read() | sel_tmp23_fu_13212_p2.read());
}

void merge_acrossphi::thread_or_cond_fu_12012_p2() {
    or_cond_fu_12012_p2 = (sel_tmp12_fu_12000_p2.read() | sel_tmp11_fu_11994_p2.read());
}

void merge_acrossphi::thread_peakPhi_0_0_read_c_fu_9231_p1() {
    peakPhi_0_0_read_c_fu_9231_p1 = esl_zext<16,3>(peakPhi_0_0_read.read());
}

void merge_acrossphi::thread_peakPhi_0_10_read_s_fu_9190_p1() {
    peakPhi_0_10_read_s_fu_9190_p1 = esl_zext<16,3>(peakPhi_0_10_read.read());
}

void merge_acrossphi::thread_peakPhi_0_11_read_s_fu_9186_p1() {
    peakPhi_0_11_read_s_fu_9186_p1 = esl_zext<16,3>(peakPhi_0_11_read.read());
}

void merge_acrossphi::thread_peakPhi_0_12_read_1_4_fu_11727_p1() {
    peakPhi_0_12_read_1_4_fu_11727_p1 = esl_zext<4,3>(peakPhi_0_12_read_1_reg_23682.read());
}

void merge_acrossphi::thread_peakPhi_0_12_read_s_fu_9182_p1() {
    peakPhi_0_12_read_s_fu_9182_p1 = esl_zext<16,3>(peakPhi_0_12_read.read());
}

void merge_acrossphi::thread_peakPhi_0_13_read_s_fu_9178_p1() {
    peakPhi_0_13_read_s_fu_9178_p1 = esl_zext<16,3>(peakPhi_0_13_read.read());
}

void merge_acrossphi::thread_peakPhi_0_14_read_s_fu_9174_p1() {
    peakPhi_0_14_read_s_fu_9174_p1 = esl_zext<16,3>(peakPhi_0_14_read.read());
}

void merge_acrossphi::thread_peakPhi_0_15_read_s_fu_9170_p1() {
    peakPhi_0_15_read_s_fu_9170_p1 = esl_zext<16,3>(peakPhi_0_15_read.read());
}

void merge_acrossphi::thread_peakPhi_0_16_read_1_5_fu_14701_p1() {
    peakPhi_0_16_read_1_5_fu_14701_p1 = esl_zext<4,3>(peakPhi_0_16_read_1_reg_23675.read());
}

void merge_acrossphi::thread_peakPhi_0_16_read_s_fu_9166_p1() {
    peakPhi_0_16_read_s_fu_9166_p1 = esl_zext<16,3>(peakPhi_0_16_read.read());
}

void merge_acrossphi::thread_peakPhi_0_17_read_s_fu_9162_p1() {
    peakPhi_0_17_read_s_fu_9162_p1 = esl_zext<16,3>(peakPhi_0_17_read.read());
}

void merge_acrossphi::thread_peakPhi_0_19_read_s_fu_9158_p1() {
    peakPhi_0_19_read_s_fu_9158_p1 = esl_zext<16,3>(peakPhi_0_19_read.read());
}

void merge_acrossphi::thread_peakPhi_0_1_read_c_fu_9226_p1() {
    peakPhi_0_1_read_c_fu_9226_p1 = esl_zext<16,3>(peakPhi_0_1_read.read());
}

void merge_acrossphi::thread_peakPhi_0_20_read_s_fu_16724_p1() {
    peakPhi_0_20_read_s_fu_16724_p1 = esl_zext<4,3>(peakPhi_0_20_read_1_reg_23668.read());
}

void merge_acrossphi::thread_peakPhi_0_21_read_s_fu_9154_p1() {
    peakPhi_0_21_read_s_fu_9154_p1 = esl_zext<16,3>(peakPhi_0_21_read.read());
}

void merge_acrossphi::thread_peakPhi_0_2_read_c_fu_9222_p1() {
    peakPhi_0_2_read_c_fu_9222_p1 = esl_zext<16,3>(peakPhi_0_2_read.read());
}

void merge_acrossphi::thread_peakPhi_0_3_read_c_fu_9218_p1() {
    peakPhi_0_3_read_c_fu_9218_p1 = esl_zext<16,3>(peakPhi_0_3_read.read());
}

void merge_acrossphi::thread_peakPhi_0_4_read_c_1_fu_9526_p1() {
    peakPhi_0_4_read_c_1_fu_9526_p1 = esl_zext<4,3>(peakPhi_0_4_read.read());
}

void merge_acrossphi::thread_peakPhi_0_4_read_c_fu_9214_p1() {
    peakPhi_0_4_read_c_fu_9214_p1 = esl_zext<16,3>(peakPhi_0_4_read.read());
}

void merge_acrossphi::thread_peakPhi_0_5_read_c_fu_9210_p1() {
    peakPhi_0_5_read_c_fu_9210_p1 = esl_zext<16,3>(peakPhi_0_5_read.read());
}

void merge_acrossphi::thread_peakPhi_0_6_read_c_fu_9206_p1() {
    peakPhi_0_6_read_c_fu_9206_p1 = esl_zext<16,3>(peakPhi_0_6_read.read());
}

void merge_acrossphi::thread_peakPhi_0_7_read_c_fu_9202_p1() {
    peakPhi_0_7_read_c_fu_9202_p1 = esl_zext<16,3>(peakPhi_0_7_read.read());
}

void merge_acrossphi::thread_peakPhi_0_8_read_c_1_fu_11117_p1() {
    peakPhi_0_8_read_c_1_fu_11117_p1 = esl_zext<4,3>(peakPhi_0_8_read_1_reg_23687.read());
}

void merge_acrossphi::thread_peakPhi_0_8_read_c_fu_9198_p1() {
    peakPhi_0_8_read_c_fu_9198_p1 = esl_zext<16,3>(peakPhi_0_8_read.read());
}

void merge_acrossphi::thread_peakPhi_0_9_read_c_fu_9194_p1() {
    peakPhi_0_9_read_c_fu_9194_p1 = esl_zext<16,3>(peakPhi_0_9_read.read());
}

void merge_acrossphi::thread_peakPhi_1_0_read_c_fu_9150_p1() {
    peakPhi_1_0_read_c_fu_9150_p1 = esl_zext<16,3>(peakPhi_1_0_read.read());
}

void merge_acrossphi::thread_peakPhi_1_10_read_s_fu_9109_p1() {
    peakPhi_1_10_read_s_fu_9109_p1 = esl_zext<16,3>(peakPhi_1_10_read.read());
}

void merge_acrossphi::thread_peakPhi_1_11_read_s_fu_9105_p1() {
    peakPhi_1_11_read_s_fu_9105_p1 = esl_zext<16,3>(peakPhi_1_11_read.read());
}

void merge_acrossphi::thread_peakPhi_1_12_read_1_7_fu_12969_p1() {
    peakPhi_1_12_read_1_7_fu_12969_p1 = esl_zext<4,3>(peakPhi_1_12_read_1_reg_23658.read());
}

void merge_acrossphi::thread_peakPhi_1_12_read_s_fu_9101_p1() {
    peakPhi_1_12_read_s_fu_9101_p1 = esl_zext<16,3>(peakPhi_1_12_read.read());
}

void merge_acrossphi::thread_peakPhi_1_13_read_s_fu_9097_p1() {
    peakPhi_1_13_read_s_fu_9097_p1 = esl_zext<16,3>(peakPhi_1_13_read.read());
}

void merge_acrossphi::thread_peakPhi_1_14_read_s_fu_9093_p1() {
    peakPhi_1_14_read_s_fu_9093_p1 = esl_zext<16,3>(peakPhi_1_14_read.read());
}

void merge_acrossphi::thread_peakPhi_1_15_read_s_fu_9089_p1() {
    peakPhi_1_15_read_s_fu_9089_p1 = esl_zext<16,3>(peakPhi_1_15_read.read());
}

void merge_acrossphi::thread_peakPhi_1_16_read_1_8_fu_16872_p1() {
    peakPhi_1_16_read_1_8_fu_16872_p1 = esl_zext<4,3>(peakPhi_1_16_read_1_reg_23651.read());
}

void merge_acrossphi::thread_peakPhi_1_16_read_s_fu_9085_p1() {
    peakPhi_1_16_read_s_fu_9085_p1 = esl_zext<16,3>(peakPhi_1_16_read.read());
}

void merge_acrossphi::thread_peakPhi_1_17_read_s_fu_9081_p1() {
    peakPhi_1_17_read_s_fu_9081_p1 = esl_zext<16,3>(peakPhi_1_17_read.read());
}

void merge_acrossphi::thread_peakPhi_1_19_read_s_fu_9077_p1() {
    peakPhi_1_19_read_s_fu_9077_p1 = esl_zext<16,3>(peakPhi_1_19_read.read());
}

void merge_acrossphi::thread_peakPhi_1_1_read_c_fu_9145_p1() {
    peakPhi_1_1_read_c_fu_9145_p1 = esl_zext<16,3>(peakPhi_1_1_read.read());
}

void merge_acrossphi::thread_peakPhi_1_20_read_s_fu_18895_p1() {
    peakPhi_1_20_read_s_fu_18895_p1 = esl_zext<4,3>(peakPhi_1_20_read_1_reg_23644.read());
}

void merge_acrossphi::thread_peakPhi_1_21_read_s_fu_9073_p1() {
    peakPhi_1_21_read_s_fu_9073_p1 = esl_zext<16,3>(peakPhi_1_21_read.read());
}

void merge_acrossphi::thread_peakPhi_1_2_read_c_fu_9141_p1() {
    peakPhi_1_2_read_c_fu_9141_p1 = esl_zext<16,3>(peakPhi_1_2_read.read());
}

void merge_acrossphi::thread_peakPhi_1_3_read_c_fu_9137_p1() {
    peakPhi_1_3_read_c_fu_9137_p1 = esl_zext<16,3>(peakPhi_1_3_read.read());
}

void merge_acrossphi::thread_peakPhi_1_4_read_c_1_fu_10106_p1() {
    peakPhi_1_4_read_c_1_fu_10106_p1 = esl_zext<4,3>(peakPhi_1_4_read.read());
}

void merge_acrossphi::thread_peakPhi_1_4_read_c_fu_9133_p1() {
    peakPhi_1_4_read_c_fu_9133_p1 = esl_zext<16,3>(peakPhi_1_4_read.read());
}

void merge_acrossphi::thread_peakPhi_1_5_read_c_fu_9129_p1() {
    peakPhi_1_5_read_c_fu_9129_p1 = esl_zext<16,3>(peakPhi_1_5_read.read());
}

void merge_acrossphi::thread_peakPhi_1_6_read_c_fu_9125_p1() {
    peakPhi_1_6_read_c_fu_9125_p1 = esl_zext<16,3>(peakPhi_1_6_read.read());
}

void merge_acrossphi::thread_peakPhi_1_7_read_c_fu_9121_p1() {
    peakPhi_1_7_read_c_fu_9121_p1 = esl_zext<16,3>(peakPhi_1_7_read.read());
}

void merge_acrossphi::thread_peakPhi_1_8_read_c_1_fu_12359_p1() {
    peakPhi_1_8_read_c_1_fu_12359_p1 = esl_zext<4,3>(peakPhi_1_8_read_1_reg_23663.read());
}

void merge_acrossphi::thread_peakPhi_1_8_read_c_fu_9117_p1() {
    peakPhi_1_8_read_c_fu_9117_p1 = esl_zext<16,3>(peakPhi_1_8_read.read());
}

void merge_acrossphi::thread_peakPhi_1_9_read_c_fu_9113_p1() {
    peakPhi_1_9_read_c_fu_9113_p1 = esl_zext<16,3>(peakPhi_1_9_read.read());
}

void merge_acrossphi::thread_peakPhi_2_0_read_c_fu_9069_p1() {
    peakPhi_2_0_read_c_fu_9069_p1 = esl_zext<16,3>(peakPhi_2_0_read.read());
}

void merge_acrossphi::thread_peakPhi_2_10_read_s_fu_9028_p1() {
    peakPhi_2_10_read_s_fu_9028_p1 = esl_zext<16,3>(peakPhi_2_10_read.read());
}

void merge_acrossphi::thread_peakPhi_2_11_read_s_fu_9024_p1() {
    peakPhi_2_11_read_s_fu_9024_p1 = esl_zext<16,3>(peakPhi_2_11_read.read());
}

void merge_acrossphi::thread_peakPhi_2_12_read_1_10_fu_14211_p1() {
    peakPhi_2_12_read_1_10_fu_14211_p1 = esl_zext<4,3>(peakPhi_2_12_read_1_reg_23634.read());
}

void merge_acrossphi::thread_peakPhi_2_12_read_s_fu_9020_p1() {
    peakPhi_2_12_read_s_fu_9020_p1 = esl_zext<16,3>(peakPhi_2_12_read.read());
}

void merge_acrossphi::thread_peakPhi_2_13_read_s_fu_9016_p1() {
    peakPhi_2_13_read_s_fu_9016_p1 = esl_zext<16,3>(peakPhi_2_13_read.read());
}

void merge_acrossphi::thread_peakPhi_2_14_read_s_fu_9012_p1() {
    peakPhi_2_14_read_s_fu_9012_p1 = esl_zext<16,3>(peakPhi_2_14_read.read());
}

void merge_acrossphi::thread_peakPhi_2_15_read_s_fu_9008_p1() {
    peakPhi_2_15_read_s_fu_9008_p1 = esl_zext<16,3>(peakPhi_2_15_read.read());
}

void merge_acrossphi::thread_peakPhi_2_16_read_1_11_fu_19043_p1() {
    peakPhi_2_16_read_1_11_fu_19043_p1 = esl_zext<4,3>(peakPhi_2_16_read_1_reg_23627.read());
}

void merge_acrossphi::thread_peakPhi_2_16_read_s_fu_9004_p1() {
    peakPhi_2_16_read_s_fu_9004_p1 = esl_zext<16,3>(peakPhi_2_16_read.read());
}

void merge_acrossphi::thread_peakPhi_2_17_read_s_fu_9000_p1() {
    peakPhi_2_17_read_s_fu_9000_p1 = esl_zext<16,3>(peakPhi_2_17_read.read());
}

void merge_acrossphi::thread_peakPhi_2_19_read_s_fu_8996_p1() {
    peakPhi_2_19_read_s_fu_8996_p1 = esl_zext<16,3>(peakPhi_2_19_read.read());
}

void merge_acrossphi::thread_peakPhi_2_1_read_c_fu_9064_p1() {
    peakPhi_2_1_read_c_fu_9064_p1 = esl_zext<16,3>(peakPhi_2_1_read.read());
}

void merge_acrossphi::thread_peakPhi_2_20_read_s_fu_21066_p1() {
    peakPhi_2_20_read_s_fu_21066_p1 = esl_zext<4,3>(peakPhi_2_20_read_1_reg_23620.read());
}

void merge_acrossphi::thread_peakPhi_2_21_read_s_fu_8992_p1() {
    peakPhi_2_21_read_s_fu_8992_p1 = esl_zext<16,3>(peakPhi_2_21_read.read());
}

void merge_acrossphi::thread_peakPhi_2_2_read_c_fu_9060_p1() {
    peakPhi_2_2_read_c_fu_9060_p1 = esl_zext<16,3>(peakPhi_2_2_read.read());
}

void merge_acrossphi::thread_peakPhi_2_3_read_c_fu_9056_p1() {
    peakPhi_2_3_read_c_fu_9056_p1 = esl_zext<16,3>(peakPhi_2_3_read.read());
}

void merge_acrossphi::thread_peakPhi_2_4_read_c_1_fu_10686_p1() {
    peakPhi_2_4_read_c_1_fu_10686_p1 = esl_zext<4,3>(peakPhi_2_4_read.read());
}

void merge_acrossphi::thread_peakPhi_2_4_read_c_fu_9052_p1() {
    peakPhi_2_4_read_c_fu_9052_p1 = esl_zext<16,3>(peakPhi_2_4_read.read());
}

void merge_acrossphi::thread_peakPhi_2_5_read_c_fu_9048_p1() {
    peakPhi_2_5_read_c_fu_9048_p1 = esl_zext<16,3>(peakPhi_2_5_read.read());
}

void merge_acrossphi::thread_peakPhi_2_6_read_c_fu_9044_p1() {
    peakPhi_2_6_read_c_fu_9044_p1 = esl_zext<16,3>(peakPhi_2_6_read.read());
}

void merge_acrossphi::thread_peakPhi_2_7_read_c_fu_9040_p1() {
    peakPhi_2_7_read_c_fu_9040_p1 = esl_zext<16,3>(peakPhi_2_7_read.read());
}

void merge_acrossphi::thread_peakPhi_2_8_read_c_1_fu_13601_p1() {
    peakPhi_2_8_read_c_1_fu_13601_p1 = esl_zext<4,3>(peakPhi_2_8_read_1_reg_23639.read());
}

void merge_acrossphi::thread_peakPhi_2_8_read_c_fu_9036_p1() {
    peakPhi_2_8_read_c_fu_9036_p1 = esl_zext<16,3>(peakPhi_2_8_read.read());
}

void merge_acrossphi::thread_peakPhi_2_9_read_c_fu_9032_p1() {
    peakPhi_2_9_read_c_fu_9032_p1 = esl_zext<16,3>(peakPhi_2_9_read.read());
}

void merge_acrossphi::thread_preMergepeakEta_load_1_fu_18811_p3() {
    preMergepeakEta_load_1_fu_18811_p3 = (!sel_tmp31_fu_18806_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp31_fu_18806_p2.read()[0].to_bool())? peakEta_1_17_read_1_reg_23785.read(): sel_tmp30_fu_18800_p3.read());
}

void merge_acrossphi::thread_preMergepeakEta_load_2_fu_20982_p3() {
    preMergepeakEta_load_2_fu_20982_p3 = (!sel_tmp47_fu_20977_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp47_fu_20977_p2.read()[0].to_bool())? peakEta_2_17_read_1_reg_23707.read(): sel_tmp46_fu_20971_p3.read());
}

void merge_acrossphi::thread_preMergepeakEta_load_fu_16640_p3() {
    preMergepeakEta_load_fu_16640_p3 = (!sel_tmp15_fu_16635_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp15_fu_16635_p2.read()[0].to_bool())? peakEta_0_17_read_1_reg_23863.read(): sel_tmp14_fu_16629_p3.read());
}

void merge_acrossphi::thread_sel_tmp10_fu_11988_p2() {
    sel_tmp10_fu_11988_p2 = (!tmp_3_fu_11897_p1.read().is_01() || !ap_const_lv5_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3_fu_11897_p1.read() == ap_const_lv5_D);
}

void merge_acrossphi::thread_sel_tmp11_fu_11994_p2() {
    sel_tmp11_fu_11994_p2 = (!tmp_3_fu_11897_p1.read().is_01() || !ap_const_lv5_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3_fu_11897_p1.read() == ap_const_lv5_F);
}

void merge_acrossphi::thread_sel_tmp12_fu_12000_p2() {
    sel_tmp12_fu_12000_p2 = (!tmp_3_fu_11897_p1.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3_fu_11897_p1.read() == ap_const_lv5_1);
}

void merge_acrossphi::thread_sel_tmp13_fu_16624_p2() {
    sel_tmp13_fu_16624_p2 = (!tmp_5_reg_25895.read().is_01() || !ap_const_lv5_13.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5_reg_25895.read() == ap_const_lv5_13);
}

void merge_acrossphi::thread_sel_tmp14_fu_16629_p3() {
    sel_tmp14_fu_16629_p3 = (!sel_tmp13_fu_16624_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp13_fu_16624_p2.read()[0].to_bool())? peakEta_0_19_read_1_reg_23858.read(): peakEta_0_21_read_1_reg_23848.read());
}

void merge_acrossphi::thread_sel_tmp15_fu_16635_p2() {
    sel_tmp15_fu_16635_p2 = (!tmp_5_reg_25895.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5_reg_25895.read() == ap_const_lv5_11);
}

void merge_acrossphi::thread_sel_tmp16_fu_9949_p2() {
    sel_tmp16_fu_9949_p2 = (!nPhi_1_1_1_fu_9847_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(nPhi_1_1_1_fu_9847_p3.read() == ap_const_lv4_3);
}

void merge_acrossphi::thread_sel_tmp17_fu_9955_p3() {
    sel_tmp17_fu_9955_p3 = (!sel_tmp16_fu_9949_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp16_fu_9949_p2.read()[0].to_bool())? peakEta_1_3_read.read(): peakEta_1_5_read.read());
}

void merge_acrossphi::thread_sel_tmp18_fu_10229_p2() {
    sel_tmp18_fu_10229_p2 = (!nPhi_1_1_2_fu_10131_p3.read().is_01() || !ap_const_lv5_7.is_01())? sc_lv<1>(): sc_lv<1>(nPhi_1_1_2_fu_10131_p3.read() == ap_const_lv5_7);
}

void merge_acrossphi::thread_sel_tmp19_fu_12878_p2() {
    sel_tmp19_fu_12878_p2 = (!nPhi_1_1_3_fu_12814_p3.read().is_01() || !ap_const_lv5_B.is_01())? sc_lv<1>(): sc_lv<1>(nPhi_1_1_3_fu_12814_p3.read() == ap_const_lv5_B);
}

void merge_acrossphi::thread_sel_tmp1_fu_9375_p3() {
    sel_tmp1_fu_9375_p3 = (!sel_tmp_fu_9369_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp_fu_9369_p2.read()[0].to_bool())? peakEta_0_3_read.read(): peakEta_0_5_read.read());
}

void merge_acrossphi::thread_sel_tmp20_fu_12884_p3() {
    sel_tmp20_fu_12884_p3 = (!sel_tmp19_fu_12878_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp19_fu_12878_p2.read()[0].to_bool())? peakEta_1_11_read_1_reg_23812.read(): peakEta_1_13_read_1_reg_23801.read());
}

void merge_acrossphi::thread_sel_tmp21_fu_13200_p2() {
    sel_tmp21_fu_13200_p2 = (!tmp_11_fu_13139_p1.read().is_01() || !ap_const_lv5_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_11_fu_13139_p1.read() == ap_const_lv5_3);
}

void merge_acrossphi::thread_sel_tmp22_fu_13206_p2() {
    sel_tmp22_fu_13206_p2 = (!tmp_11_fu_13139_p1.read().is_01() || !ap_const_lv5_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_11_fu_13139_p1.read() == ap_const_lv5_5);
}

void merge_acrossphi::thread_sel_tmp23_fu_13212_p2() {
    sel_tmp23_fu_13212_p2 = (!tmp_11_fu_13139_p1.read().is_01() || !ap_const_lv5_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_11_fu_13139_p1.read() == ap_const_lv5_7);
}

void merge_acrossphi::thread_sel_tmp24_fu_13218_p2() {
    sel_tmp24_fu_13218_p2 = (!tmp_11_fu_13139_p1.read().is_01() || !ap_const_lv5_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_11_fu_13139_p1.read() == ap_const_lv5_9);
}

void merge_acrossphi::thread_sel_tmp25_fu_13224_p2() {
    sel_tmp25_fu_13224_p2 = (!tmp_11_fu_13139_p1.read().is_01() || !ap_const_lv5_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_11_fu_13139_p1.read() == ap_const_lv5_B);
}

void merge_acrossphi::thread_sel_tmp26_fu_13230_p2() {
    sel_tmp26_fu_13230_p2 = (!tmp_11_fu_13139_p1.read().is_01() || !ap_const_lv5_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_11_fu_13139_p1.read() == ap_const_lv5_D);
}

void merge_acrossphi::thread_sel_tmp27_fu_13236_p2() {
    sel_tmp27_fu_13236_p2 = (!tmp_11_fu_13139_p1.read().is_01() || !ap_const_lv5_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_11_fu_13139_p1.read() == ap_const_lv5_F);
}

void merge_acrossphi::thread_sel_tmp28_fu_13242_p2() {
    sel_tmp28_fu_13242_p2 = (!tmp_11_fu_13139_p1.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_11_fu_13139_p1.read() == ap_const_lv5_1);
}

void merge_acrossphi::thread_sel_tmp29_fu_18795_p2() {
    sel_tmp29_fu_18795_p2 = (!tmp_13_reg_26023.read().is_01() || !ap_const_lv5_13.is_01())? sc_lv<1>(): sc_lv<1>(tmp_13_reg_26023.read() == ap_const_lv5_13);
}

void merge_acrossphi::thread_sel_tmp2_fu_11636_p2() {
    sel_tmp2_fu_11636_p2 = (!nPhi_1_0_3_fu_11572_p3.read().is_01() || !ap_const_lv5_B.is_01())? sc_lv<1>(): sc_lv<1>(nPhi_1_0_3_fu_11572_p3.read() == ap_const_lv5_B);
}

void merge_acrossphi::thread_sel_tmp30_fu_18800_p3() {
    sel_tmp30_fu_18800_p3 = (!sel_tmp29_fu_18795_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp29_fu_18795_p2.read()[0].to_bool())? peakEta_1_19_read_1_reg_23780.read(): peakEta_1_21_read_1_reg_23770.read());
}

void merge_acrossphi::thread_sel_tmp31_fu_18806_p2() {
    sel_tmp31_fu_18806_p2 = (!tmp_13_reg_26023.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(tmp_13_reg_26023.read() == ap_const_lv5_11);
}

void merge_acrossphi::thread_sel_tmp32_fu_10529_p2() {
    sel_tmp32_fu_10529_p2 = (!nPhi_1_2_1_fu_10427_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(nPhi_1_2_1_fu_10427_p3.read() == ap_const_lv4_3);
}

void merge_acrossphi::thread_sel_tmp33_fu_10535_p3() {
    sel_tmp33_fu_10535_p3 = (!sel_tmp32_fu_10529_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp32_fu_10529_p2.read()[0].to_bool())? peakEta_2_3_read.read(): peakEta_2_5_read.read());
}

void merge_acrossphi::thread_sel_tmp34_fu_10809_p2() {
    sel_tmp34_fu_10809_p2 = (!nPhi_1_2_2_fu_10711_p3.read().is_01() || !ap_const_lv5_7.is_01())? sc_lv<1>(): sc_lv<1>(nPhi_1_2_2_fu_10711_p3.read() == ap_const_lv5_7);
}

void merge_acrossphi::thread_sel_tmp35_fu_14120_p2() {
    sel_tmp35_fu_14120_p2 = (!nPhi_1_2_3_fu_14056_p3.read().is_01() || !ap_const_lv5_B.is_01())? sc_lv<1>(): sc_lv<1>(nPhi_1_2_3_fu_14056_p3.read() == ap_const_lv5_B);
}

void merge_acrossphi::thread_sel_tmp36_fu_14126_p3() {
    sel_tmp36_fu_14126_p3 = (!sel_tmp35_fu_14120_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp35_fu_14120_p2.read()[0].to_bool())? peakEta_2_11_read_1_reg_23734.read(): peakEta_2_13_read_1_reg_23723.read());
}

void merge_acrossphi::thread_sel_tmp37_fu_14442_p2() {
    sel_tmp37_fu_14442_p2 = (!tmp_18_fu_14381_p1.read().is_01() || !ap_const_lv5_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_18_fu_14381_p1.read() == ap_const_lv5_3);
}

void merge_acrossphi::thread_sel_tmp38_fu_14448_p2() {
    sel_tmp38_fu_14448_p2 = (!tmp_18_fu_14381_p1.read().is_01() || !ap_const_lv5_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_18_fu_14381_p1.read() == ap_const_lv5_5);
}

void merge_acrossphi::thread_sel_tmp39_fu_14454_p2() {
    sel_tmp39_fu_14454_p2 = (!tmp_18_fu_14381_p1.read().is_01() || !ap_const_lv5_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_18_fu_14381_p1.read() == ap_const_lv5_7);
}

void merge_acrossphi::thread_sel_tmp3_fu_11642_p3() {
    sel_tmp3_fu_11642_p3 = (!sel_tmp2_fu_11636_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp2_fu_11636_p2.read()[0].to_bool())? peakEta_0_11_read_1_reg_23890.read(): peakEta_0_13_read_1_reg_23879.read());
}

void merge_acrossphi::thread_sel_tmp40_fu_14460_p2() {
    sel_tmp40_fu_14460_p2 = (!tmp_18_fu_14381_p1.read().is_01() || !ap_const_lv5_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_18_fu_14381_p1.read() == ap_const_lv5_9);
}

void merge_acrossphi::thread_sel_tmp41_fu_14466_p2() {
    sel_tmp41_fu_14466_p2 = (!tmp_18_fu_14381_p1.read().is_01() || !ap_const_lv5_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_18_fu_14381_p1.read() == ap_const_lv5_B);
}

void merge_acrossphi::thread_sel_tmp42_fu_14472_p2() {
    sel_tmp42_fu_14472_p2 = (!tmp_18_fu_14381_p1.read().is_01() || !ap_const_lv5_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_18_fu_14381_p1.read() == ap_const_lv5_D);
}

void merge_acrossphi::thread_sel_tmp43_fu_14478_p2() {
    sel_tmp43_fu_14478_p2 = (!tmp_18_fu_14381_p1.read().is_01() || !ap_const_lv5_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_18_fu_14381_p1.read() == ap_const_lv5_F);
}

void merge_acrossphi::thread_sel_tmp44_fu_14484_p2() {
    sel_tmp44_fu_14484_p2 = (!tmp_18_fu_14381_p1.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_18_fu_14381_p1.read() == ap_const_lv5_1);
}

void merge_acrossphi::thread_sel_tmp45_fu_20966_p2() {
    sel_tmp45_fu_20966_p2 = (!tmp_20_reg_26151.read().is_01() || !ap_const_lv5_13.is_01())? sc_lv<1>(): sc_lv<1>(tmp_20_reg_26151.read() == ap_const_lv5_13);
}

void merge_acrossphi::thread_sel_tmp46_fu_20971_p3() {
    sel_tmp46_fu_20971_p3 = (!sel_tmp45_fu_20966_p2.read()[0].is_01())? sc_lv<3>(): ((sel_tmp45_fu_20966_p2.read()[0].to_bool())? peakEta_2_19_read_1_reg_23702.read(): peakEta_2_21_read_1_reg_23692.read());
}

void merge_acrossphi::thread_sel_tmp47_fu_20977_p2() {
    sel_tmp47_fu_20977_p2 = (!tmp_20_reg_26151.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(tmp_20_reg_26151.read() == ap_const_lv5_11);
}

void merge_acrossphi::thread_sel_tmp4_fu_11958_p2() {
    sel_tmp4_fu_11958_p2 = (!tmp_3_fu_11897_p1.read().is_01() || !ap_const_lv5_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3_fu_11897_p1.read() == ap_const_lv5_3);
}

void merge_acrossphi::thread_sel_tmp5_fu_11964_p2() {
    sel_tmp5_fu_11964_p2 = (!tmp_3_fu_11897_p1.read().is_01() || !ap_const_lv5_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3_fu_11897_p1.read() == ap_const_lv5_5);
}

void merge_acrossphi::thread_sel_tmp6_fu_11970_p2() {
    sel_tmp6_fu_11970_p2 = (!tmp_3_fu_11897_p1.read().is_01() || !ap_const_lv5_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3_fu_11897_p1.read() == ap_const_lv5_7);
}

void merge_acrossphi::thread_sel_tmp7_fu_11976_p2() {
    sel_tmp7_fu_11976_p2 = (!tmp_3_fu_11897_p1.read().is_01() || !ap_const_lv5_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3_fu_11897_p1.read() == ap_const_lv5_9);
}

void merge_acrossphi::thread_sel_tmp8_fu_11982_p2() {
    sel_tmp8_fu_11982_p2 = (!tmp_3_fu_11897_p1.read().is_01() || !ap_const_lv5_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3_fu_11897_p1.read() == ap_const_lv5_B);
}

void merge_acrossphi::thread_sel_tmp9_fu_9649_p2() {
    sel_tmp9_fu_9649_p2 = (!nPhi_1_0_2_fu_9551_p3.read().is_01() || !ap_const_lv5_7.is_01())? sc_lv<1>(): sc_lv<1>(nPhi_1_0_2_fu_9551_p3.read() == ap_const_lv5_7);
}

void merge_acrossphi::thread_sel_tmp_fu_9369_p2() {
    sel_tmp_fu_9369_p2 = (!nPhi_1_0_1_fu_9267_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(nPhi_1_0_1_fu_9267_p3.read() == ap_const_lv4_3);
}

void merge_acrossphi::thread_tmp_0_1_fu_9261_p2() {
    tmp_0_1_fu_9261_p2 = (!peakPhi_0_4_read.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_0_4_read.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_0_2_fu_9545_p2() {
    tmp_0_2_fu_9545_p2 = (!peakPhi_0_8_read.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_0_8_read.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_0_3_fu_9809_p2() {
    tmp_0_3_fu_9809_p2 = (!peakPhi_0_12_read.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_0_12_read.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_0_4_fu_11884_p2() {
    tmp_0_4_fu_11884_p2 = (!peakPhi_0_16_read_1_reg_23675.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_0_16_read_1_reg_23675.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_0_5_fu_12192_p2() {
    tmp_0_5_fu_12192_p2 = (!peakPhi_0_20_read_1_reg_23668.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_0_20_read_1_reg_23668.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_10_fu_12864_p3() {
    tmp_10_fu_12864_p3 = nPhi_1_1_3_fu_12814_p3.read().range(4, 4);
}

void merge_acrossphi::thread_tmp_11_fu_13139_p1() {
    tmp_11_fu_13139_p1 = nPhi_1_1_4_fu_13131_p3.read().range(5-1, 0);
}

void merge_acrossphi::thread_tmp_12_fu_13186_p3() {
    tmp_12_fu_13186_p3 = nPhi_1_1_4_fu_13131_p3.read().range(5, 5);
}

void merge_acrossphi::thread_tmp_13_fu_13447_p1() {
    tmp_13_fu_13447_p1 = nPhi_1_1_5_fu_13439_p3.read().range(5-1, 0);
}

void merge_acrossphi::thread_tmp_15_fu_10515_p3() {
    tmp_15_fu_10515_p3 = nPhi_1_2_1_fu_10427_p3.read().range(3, 3);
}

void merge_acrossphi::thread_tmp_16_fu_10795_p3() {
    tmp_16_fu_10795_p3 = nPhi_1_2_2_fu_10711_p3.read().range(4, 4);
}

void merge_acrossphi::thread_tmp_17_fu_14106_p3() {
    tmp_17_fu_14106_p3 = nPhi_1_2_3_fu_14056_p3.read().range(4, 4);
}

void merge_acrossphi::thread_tmp_18_fu_14381_p1() {
    tmp_18_fu_14381_p1 = nPhi_1_2_4_fu_14373_p3.read().range(5-1, 0);
}

void merge_acrossphi::thread_tmp_19_fu_14428_p3() {
    tmp_19_fu_14428_p3 = nPhi_1_2_4_fu_14373_p3.read().range(5, 5);
}

void merge_acrossphi::thread_tmp_1_1_fu_9841_p2() {
    tmp_1_1_fu_9841_p2 = (!peakPhi_1_4_read.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_1_4_read.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_1_2_fu_10125_p2() {
    tmp_1_2_fu_10125_p2 = (!peakPhi_1_8_read.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_1_8_read.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_1_3_fu_10389_p2() {
    tmp_1_3_fu_10389_p2 = (!peakPhi_1_12_read.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_1_12_read.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_1_4_fu_13126_p2() {
    tmp_1_4_fu_13126_p2 = (!peakPhi_1_16_read_1_reg_23651.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_1_16_read_1_reg_23651.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_1_5_fu_13434_p2() {
    tmp_1_5_fu_13434_p2 = (!peakPhi_1_20_read_1_reg_23644.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_1_20_read_1_reg_23644.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_1_6_fu_9815_p2() {
    tmp_1_6_fu_9815_p2 = (!peakPhi_1_0_read.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_1_0_read.read() == ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_1_fu_9635_p3() {
    tmp_1_fu_9635_p3 = nPhi_1_0_2_fu_9551_p3.read().range(4, 4);
}

void merge_acrossphi::thread_tmp_20_fu_14689_p1() {
    tmp_20_fu_14689_p1 = nPhi_1_2_5_fu_14681_p3.read().range(5-1, 0);
}

void merge_acrossphi::thread_tmp_2_1_fu_10421_p2() {
    tmp_2_1_fu_10421_p2 = (!peakPhi_2_4_read.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_2_4_read.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_2_2_fu_10705_p2() {
    tmp_2_2_fu_10705_p2 = (!peakPhi_2_8_read.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_2_8_read.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_2_3_fu_10969_p2() {
    tmp_2_3_fu_10969_p2 = (!peakPhi_2_12_read.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_2_12_read.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_2_4_fu_14368_p2() {
    tmp_2_4_fu_14368_p2 = (!peakPhi_2_16_read_1_reg_23627.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_2_16_read_1_reg_23627.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_2_5_fu_14676_p2() {
    tmp_2_5_fu_14676_p2 = (!peakPhi_2_20_read_1_reg_23620.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_2_20_read_1_reg_23620.read() != ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_2_9_fu_10395_p2() {
    tmp_2_9_fu_10395_p2 = (!peakPhi_2_0_read.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_2_0_read.read() == ap_const_lv3_4);
}

void merge_acrossphi::thread_tmp_2_fu_11622_p3() {
    tmp_2_fu_11622_p3 = nPhi_1_0_3_fu_11572_p3.read().range(4, 4);
}

void merge_acrossphi::thread_tmp_3_fu_11897_p1() {
    tmp_3_fu_11897_p1 = nPhi_1_0_4_fu_11889_p3.read().range(5-1, 0);
}

void merge_acrossphi::thread_tmp_4_fu_11944_p3() {
    tmp_4_fu_11944_p3 = nPhi_1_0_4_fu_11889_p3.read().range(5, 5);
}

void merge_acrossphi::thread_tmp_5_fu_12205_p1() {
    tmp_5_fu_12205_p1 = nPhi_1_0_5_fu_12197_p3.read().range(5-1, 0);
}

void merge_acrossphi::thread_tmp_7_0_1_fu_9247_p2() {
    tmp_7_0_1_fu_9247_p2 = (!peakPhi_0_4_read.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_0_4_read.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_0_2_fu_9531_p2() {
    tmp_7_0_2_fu_9531_p2 = (!peakPhi_0_8_read.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_0_8_read.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_0_3_fu_9803_p2() {
    tmp_7_0_3_fu_9803_p2 = (!peakPhi_0_12_read.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_0_12_read.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_0_4_fu_11871_p2() {
    tmp_7_0_4_fu_11871_p2 = (!peakPhi_0_16_read_1_reg_23675.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_0_16_read_1_reg_23675.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_0_5_fu_12179_p2() {
    tmp_7_0_5_fu_12179_p2 = (!peakPhi_0_20_read_1_reg_23668.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_0_20_read_1_reg_23668.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_1_1_fu_9827_p2() {
    tmp_7_1_1_fu_9827_p2 = (!peakPhi_1_4_read.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_1_4_read.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_1_2_fu_10111_p2() {
    tmp_7_1_2_fu_10111_p2 = (!peakPhi_1_8_read.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_1_8_read.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_1_3_fu_10383_p2() {
    tmp_7_1_3_fu_10383_p2 = (!peakPhi_1_12_read.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_1_12_read.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_1_4_fu_13113_p2() {
    tmp_7_1_4_fu_13113_p2 = (!peakPhi_1_16_read_1_reg_23651.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_1_16_read_1_reg_23651.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_1_5_fu_13421_p2() {
    tmp_7_1_5_fu_13421_p2 = (!peakPhi_1_20_read_1_reg_23644.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_1_20_read_1_reg_23644.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_2_1_fu_10407_p2() {
    tmp_7_2_1_fu_10407_p2 = (!peakPhi_2_4_read.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_2_4_read.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_2_2_fu_10691_p2() {
    tmp_7_2_2_fu_10691_p2 = (!peakPhi_2_8_read.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_2_8_read.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_2_3_fu_10963_p2() {
    tmp_7_2_3_fu_10963_p2 = (!peakPhi_2_12_read.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_2_12_read.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_2_4_fu_14355_p2() {
    tmp_7_2_4_fu_14355_p2 = (!peakPhi_2_16_read_1_reg_23627.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_2_16_read_1_reg_23627.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_2_5_fu_14663_p2() {
    tmp_7_2_5_fu_14663_p2 = (!peakPhi_2_20_read_1_reg_23620.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_2_20_read_1_reg_23620.read() != ap_const_lv3_0);
}

void merge_acrossphi::thread_tmp_7_fu_9935_p3() {
    tmp_7_fu_9935_p3 = nPhi_1_1_1_fu_9847_p3.read().range(3, 3);
}

void merge_acrossphi::thread_tmp_8_fu_10215_p3() {
    tmp_8_fu_10215_p3 = nPhi_1_1_2_fu_10131_p3.read().range(4, 4);
}

void merge_acrossphi::thread_tmp_9_0_1_fu_9349_p2() {
    tmp_9_0_1_fu_9349_p2 = (!preMergetowerEta_loa_fu_9279_p34.read().is_01() || !towerEta_0_4_read_s_fu_8972_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_fu_9279_p34.read() != towerEta_0_4_read_s_fu_8972_p1.read());
}

void merge_acrossphi::thread_tmp_9_0_2_fu_9629_p2() {
    tmp_9_0_2_fu_9629_p2 = (!preMergetowerEta_loa_1_fu_9559_p34.read().is_01() || !towerEta_0_8_read_s_fu_8956_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_1_fu_9559_p34.read() != towerEta_0_8_read_s_fu_8956_p1.read());
}

void merge_acrossphi::thread_tmp_9_0_3_fu_11617_p2() {
    tmp_9_0_3_fu_11617_p2 = (!preMergetowerEta_loa_2_fu_11579_p34.read().is_01() || !towerEta_0_12_read_1_reg_24869.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_2_fu_11579_p34.read() != towerEta_0_12_read_1_reg_24869.read());
}

void merge_acrossphi::thread_tmp_9_0_4_fu_11939_p2() {
    tmp_9_0_4_fu_11939_p2 = (!preMergetowerEta_loa_3_fu_11901_p34.read().is_01() || !towerEta_0_16_read_1_reg_24816.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_3_fu_11901_p34.read() != towerEta_0_16_read_1_reg_24816.read());
}

void merge_acrossphi::thread_tmp_9_0_5_fu_16614_p2() {
    tmp_9_0_5_fu_16614_p2 = (!preMergetowerEta_loa_4_fu_16577_p34.read().is_01() || !towerEta_0_20_read_1_reg_24769.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_4_fu_16577_p34.read() != towerEta_0_20_read_1_reg_24769.read());
}

void merge_acrossphi::thread_tmp_9_1_1_fu_9929_p2() {
    tmp_9_1_1_fu_9929_p2 = (!preMergetowerEta_loa_5_fu_9859_p34.read().is_01() || !towerEta_1_4_read_s_fu_8876_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_5_fu_9859_p34.read() != towerEta_1_4_read_s_fu_8876_p1.read());
}

void merge_acrossphi::thread_tmp_9_1_2_fu_10209_p2() {
    tmp_9_1_2_fu_10209_p2 = (!preMergetowerEta_loa_6_fu_10139_p34.read().is_01() || !towerEta_1_8_read_s_fu_8860_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_6_fu_10139_p34.read() != towerEta_1_8_read_s_fu_8860_p1.read());
}

void merge_acrossphi::thread_tmp_9_1_3_fu_12859_p2() {
    tmp_9_1_3_fu_12859_p2 = (!preMergetowerEta_loa_7_fu_12821_p34.read().is_01() || !towerEta_1_12_read_1_reg_24650.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_7_fu_12821_p34.read() != towerEta_1_12_read_1_reg_24650.read());
}

void merge_acrossphi::thread_tmp_9_1_4_fu_13181_p2() {
    tmp_9_1_4_fu_13181_p2 = (!preMergetowerEta_loa_8_fu_13143_p34.read().is_01() || !towerEta_1_16_read_1_reg_24597.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_8_fu_13143_p34.read() != towerEta_1_16_read_1_reg_24597.read());
}

void merge_acrossphi::thread_tmp_9_1_5_fu_18785_p2() {
    tmp_9_1_5_fu_18785_p2 = (!preMergetowerEta_loa_9_fu_18748_p34.read().is_01() || !towerEta_1_20_read_1_reg_24550.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_9_fu_18748_p34.read() != towerEta_1_20_read_1_reg_24550.read());
}

void merge_acrossphi::thread_tmp_9_1_fu_9821_p2() {
    tmp_9_1_fu_9821_p2 = (!towerEta_1_0_read.read().is_01() || !towerEta_1_1_read.read().is_01())? sc_lv<1>(): sc_lv<1>(towerEta_1_0_read.read() == towerEta_1_1_read.read());
}

void merge_acrossphi::thread_tmp_9_2_1_fu_10509_p2() {
    tmp_9_2_1_fu_10509_p2 = (!preMergetowerEta_loa_14_fu_10439_p34.read().is_01() || !towerEta_2_4_read_s_fu_8780_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_14_fu_10439_p34.read() != towerEta_2_4_read_s_fu_8780_p1.read());
}

void merge_acrossphi::thread_tmp_9_2_2_fu_10789_p2() {
    tmp_9_2_2_fu_10789_p2 = (!preMergetowerEta_loa_10_fu_10719_p34.read().is_01() || !towerEta_2_8_read_s_fu_8764_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_10_fu_10719_p34.read() != towerEta_2_8_read_s_fu_8764_p1.read());
}

void merge_acrossphi::thread_tmp_9_2_3_fu_14101_p2() {
    tmp_9_2_3_fu_14101_p2 = (!preMergetowerEta_loa_11_fu_14063_p34.read().is_01() || !towerEta_2_12_read_1_reg_24431.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_11_fu_14063_p34.read() != towerEta_2_12_read_1_reg_24431.read());
}

void merge_acrossphi::thread_tmp_9_2_4_fu_14423_p2() {
    tmp_9_2_4_fu_14423_p2 = (!preMergetowerEta_loa_12_fu_14385_p34.read().is_01() || !towerEta_2_16_read_1_reg_24378.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_12_fu_14385_p34.read() != towerEta_2_16_read_1_reg_24378.read());
}

void merge_acrossphi::thread_tmp_9_2_5_fu_20956_p2() {
    tmp_9_2_5_fu_20956_p2 = (!preMergetowerEta_loa_13_fu_20919_p34.read().is_01() || !towerEta_2_20_read_1_reg_24331.read().is_01())? sc_lv<1>(): sc_lv<1>(preMergetowerEta_loa_13_fu_20919_p34.read() != towerEta_2_20_read_1_reg_24331.read());
}

void merge_acrossphi::thread_tmp_9_2_fu_10401_p2() {
    tmp_9_2_fu_10401_p2 = (!towerEta_2_0_read.read().is_01() || !towerEta_2_1_read.read().is_01())? sc_lv<1>(): sc_lv<1>(towerEta_2_0_read.read() == towerEta_2_1_read.read());
}

void merge_acrossphi::thread_tmp_9_fu_9241_p2() {
    tmp_9_fu_9241_p2 = (!towerEta_0_0_read.read().is_01() || !towerEta_0_1_read.read().is_01())? sc_lv<1>(): sc_lv<1>(towerEta_0_0_read.read() == towerEta_0_1_read.read());
}

void merge_acrossphi::thread_tmp_fu_9355_p3() {
    tmp_fu_9355_p3 = nPhi_1_0_1_fu_9267_p3.read().range(3, 3);
}

void merge_acrossphi::thread_tmp_s_fu_9235_p2() {
    tmp_s_fu_9235_p2 = (!peakPhi_0_0_read.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(peakPhi_0_0_read.read() == ap_const_lv3_4);
}

void merge_acrossphi::thread_towerEta_0_0_read_s_fu_8988_p1() {
    towerEta_0_0_read_s_fu_8988_p1 = esl_zext<16,6>(towerEta_0_0_read.read());
}

void merge_acrossphi::thread_towerEta_0_10_read_1_fu_8948_p1() {
    towerEta_0_10_read_1_fu_8948_p1 = esl_zext<16,6>(towerEta_0_10_read.read());
}

void merge_acrossphi::thread_towerEta_0_11_read_1_fu_8944_p1() {
    towerEta_0_11_read_1_fu_8944_p1 = esl_zext<16,6>(towerEta_0_11_read.read());
}

void merge_acrossphi::thread_towerEta_0_12_read_1_fu_8940_p1() {
    towerEta_0_12_read_1_fu_8940_p1 = esl_zext<16,6>(towerEta_0_12_read.read());
}

void merge_acrossphi::thread_towerEta_0_13_read_1_fu_8936_p1() {
    towerEta_0_13_read_1_fu_8936_p1 = esl_zext<16,6>(towerEta_0_13_read.read());
}

void merge_acrossphi::thread_towerEta_0_14_read_1_fu_8932_p1() {
    towerEta_0_14_read_1_fu_8932_p1 = esl_zext<16,6>(towerEta_0_14_read.read());
}

void merge_acrossphi::thread_towerEta_0_15_read_1_fu_8928_p1() {
    towerEta_0_15_read_1_fu_8928_p1 = esl_zext<16,6>(towerEta_0_15_read.read());
}

void merge_acrossphi::thread_towerEta_0_16_read_1_fu_8924_p1() {
    towerEta_0_16_read_1_fu_8924_p1 = esl_zext<16,6>(towerEta_0_16_read.read());
}

void merge_acrossphi::thread_towerEta_0_17_read_1_fu_8920_p1() {
    towerEta_0_17_read_1_fu_8920_p1 = esl_zext<16,6>(towerEta_0_17_read.read());
}

void merge_acrossphi::thread_towerEta_0_18_read_1_fu_8916_p1() {
    towerEta_0_18_read_1_fu_8916_p1 = esl_zext<16,6>(towerEta_0_18_read.read());
}

void merge_acrossphi::thread_towerEta_0_19_read_1_fu_8912_p1() {
    towerEta_0_19_read_1_fu_8912_p1 = esl_zext<16,6>(towerEta_0_19_read.read());
}

void merge_acrossphi::thread_towerEta_0_1_read_s_fu_8984_p1() {
    towerEta_0_1_read_s_fu_8984_p1 = esl_zext<16,6>(towerEta_0_1_read.read());
}

void merge_acrossphi::thread_towerEta_0_20_read_1_fu_8908_p1() {
    towerEta_0_20_read_1_fu_8908_p1 = esl_zext<16,6>(towerEta_0_20_read.read());
}

void merge_acrossphi::thread_towerEta_0_21_read_1_fu_8904_p1() {
    towerEta_0_21_read_1_fu_8904_p1 = esl_zext<16,6>(towerEta_0_21_read.read());
}

void merge_acrossphi::thread_towerEta_0_22_read_1_fu_8900_p1() {
    towerEta_0_22_read_1_fu_8900_p1 = esl_zext<16,6>(towerEta_0_22_read.read());
}

void merge_acrossphi::thread_towerEta_0_23_read_1_fu_8896_p1() {
    towerEta_0_23_read_1_fu_8896_p1 = esl_zext<16,6>(towerEta_0_23_read.read());
}

void merge_acrossphi::thread_towerEta_0_2_read_s_fu_8980_p1() {
    towerEta_0_2_read_s_fu_8980_p1 = esl_zext<16,6>(towerEta_0_2_read.read());
}

void merge_acrossphi::thread_towerEta_0_3_read_s_fu_8976_p1() {
    towerEta_0_3_read_s_fu_8976_p1 = esl_zext<16,6>(towerEta_0_3_read.read());
}

void merge_acrossphi::thread_towerEta_0_4_read_s_fu_8972_p1() {
    towerEta_0_4_read_s_fu_8972_p1 = esl_zext<16,6>(towerEta_0_4_read.read());
}

void merge_acrossphi::thread_towerEta_0_5_read_s_fu_8968_p1() {
    towerEta_0_5_read_s_fu_8968_p1 = esl_zext<16,6>(towerEta_0_5_read.read());
}

void merge_acrossphi::thread_towerEta_0_6_read_s_fu_8964_p1() {
    towerEta_0_6_read_s_fu_8964_p1 = esl_zext<16,6>(towerEta_0_6_read.read());
}

void merge_acrossphi::thread_towerEta_0_7_read_s_fu_8960_p1() {
    towerEta_0_7_read_s_fu_8960_p1 = esl_zext<16,6>(towerEta_0_7_read.read());
}

void merge_acrossphi::thread_towerEta_0_8_read_s_fu_8956_p1() {
    towerEta_0_8_read_s_fu_8956_p1 = esl_zext<16,6>(towerEta_0_8_read.read());
}

void merge_acrossphi::thread_towerEta_0_9_read_s_fu_8952_p1() {
    towerEta_0_9_read_s_fu_8952_p1 = esl_zext<16,6>(towerEta_0_9_read.read());
}

void merge_acrossphi::thread_towerEta_1_0_read_s_fu_8892_p1() {
    towerEta_1_0_read_s_fu_8892_p1 = esl_zext<16,6>(towerEta_1_0_read.read());
}

void merge_acrossphi::thread_towerEta_1_10_read_1_fu_8852_p1() {
    towerEta_1_10_read_1_fu_8852_p1 = esl_zext<16,6>(towerEta_1_10_read.read());
}

void merge_acrossphi::thread_towerEta_1_11_read_1_fu_8848_p1() {
    towerEta_1_11_read_1_fu_8848_p1 = esl_zext<16,6>(towerEta_1_11_read.read());
}

void merge_acrossphi::thread_towerEta_1_12_read_1_fu_8844_p1() {
    towerEta_1_12_read_1_fu_8844_p1 = esl_zext<16,6>(towerEta_1_12_read.read());
}

void merge_acrossphi::thread_towerEta_1_13_read_1_fu_8840_p1() {
    towerEta_1_13_read_1_fu_8840_p1 = esl_zext<16,6>(towerEta_1_13_read.read());
}

void merge_acrossphi::thread_towerEta_1_14_read_1_fu_8836_p1() {
    towerEta_1_14_read_1_fu_8836_p1 = esl_zext<16,6>(towerEta_1_14_read.read());
}

void merge_acrossphi::thread_towerEta_1_15_read_1_fu_8832_p1() {
    towerEta_1_15_read_1_fu_8832_p1 = esl_zext<16,6>(towerEta_1_15_read.read());
}

void merge_acrossphi::thread_towerEta_1_16_read_1_fu_8828_p1() {
    towerEta_1_16_read_1_fu_8828_p1 = esl_zext<16,6>(towerEta_1_16_read.read());
}

void merge_acrossphi::thread_towerEta_1_17_read_1_fu_8824_p1() {
    towerEta_1_17_read_1_fu_8824_p1 = esl_zext<16,6>(towerEta_1_17_read.read());
}

void merge_acrossphi::thread_towerEta_1_18_read_1_fu_8820_p1() {
    towerEta_1_18_read_1_fu_8820_p1 = esl_zext<16,6>(towerEta_1_18_read.read());
}

void merge_acrossphi::thread_towerEta_1_19_read_1_fu_8816_p1() {
    towerEta_1_19_read_1_fu_8816_p1 = esl_zext<16,6>(towerEta_1_19_read.read());
}

void merge_acrossphi::thread_towerEta_1_1_read_s_fu_8888_p1() {
    towerEta_1_1_read_s_fu_8888_p1 = esl_zext<16,6>(towerEta_1_1_read.read());
}

void merge_acrossphi::thread_towerEta_1_20_read_1_fu_8812_p1() {
    towerEta_1_20_read_1_fu_8812_p1 = esl_zext<16,6>(towerEta_1_20_read.read());
}

void merge_acrossphi::thread_towerEta_1_21_read_1_fu_8808_p1() {
    towerEta_1_21_read_1_fu_8808_p1 = esl_zext<16,6>(towerEta_1_21_read.read());
}

void merge_acrossphi::thread_towerEta_1_22_read_1_fu_8804_p1() {
    towerEta_1_22_read_1_fu_8804_p1 = esl_zext<16,6>(towerEta_1_22_read.read());
}

void merge_acrossphi::thread_towerEta_1_23_read_1_fu_8800_p1() {
    towerEta_1_23_read_1_fu_8800_p1 = esl_zext<16,6>(towerEta_1_23_read.read());
}

void merge_acrossphi::thread_towerEta_1_2_read_s_fu_8884_p1() {
    towerEta_1_2_read_s_fu_8884_p1 = esl_zext<16,6>(towerEta_1_2_read.read());
}

void merge_acrossphi::thread_towerEta_1_3_read_s_fu_8880_p1() {
    towerEta_1_3_read_s_fu_8880_p1 = esl_zext<16,6>(towerEta_1_3_read.read());
}

void merge_acrossphi::thread_towerEta_1_4_read_s_fu_8876_p1() {
    towerEta_1_4_read_s_fu_8876_p1 = esl_zext<16,6>(towerEta_1_4_read.read());
}

void merge_acrossphi::thread_towerEta_1_5_read_s_fu_8872_p1() {
    towerEta_1_5_read_s_fu_8872_p1 = esl_zext<16,6>(towerEta_1_5_read.read());
}

void merge_acrossphi::thread_towerEta_1_6_read_s_fu_8868_p1() {
    towerEta_1_6_read_s_fu_8868_p1 = esl_zext<16,6>(towerEta_1_6_read.read());
}

void merge_acrossphi::thread_towerEta_1_7_read_s_fu_8864_p1() {
    towerEta_1_7_read_s_fu_8864_p1 = esl_zext<16,6>(towerEta_1_7_read.read());
}

void merge_acrossphi::thread_towerEta_1_8_read_s_fu_8860_p1() {
    towerEta_1_8_read_s_fu_8860_p1 = esl_zext<16,6>(towerEta_1_8_read.read());
}

void merge_acrossphi::thread_towerEta_1_9_read_s_fu_8856_p1() {
    towerEta_1_9_read_s_fu_8856_p1 = esl_zext<16,6>(towerEta_1_9_read.read());
}

void merge_acrossphi::thread_towerEta_2_0_read_s_fu_8796_p1() {
    towerEta_2_0_read_s_fu_8796_p1 = esl_zext<16,6>(towerEta_2_0_read.read());
}

void merge_acrossphi::thread_towerEta_2_10_read_1_fu_8756_p1() {
    towerEta_2_10_read_1_fu_8756_p1 = esl_zext<16,6>(towerEta_2_10_read.read());
}

void merge_acrossphi::thread_towerEta_2_11_read_1_fu_8752_p1() {
    towerEta_2_11_read_1_fu_8752_p1 = esl_zext<16,6>(towerEta_2_11_read.read());
}

void merge_acrossphi::thread_towerEta_2_12_read_1_fu_8748_p1() {
    towerEta_2_12_read_1_fu_8748_p1 = esl_zext<16,6>(towerEta_2_12_read.read());
}

void merge_acrossphi::thread_towerEta_2_13_read_1_fu_8744_p1() {
    towerEta_2_13_read_1_fu_8744_p1 = esl_zext<16,6>(towerEta_2_13_read.read());
}

void merge_acrossphi::thread_towerEta_2_14_read_1_fu_8740_p1() {
    towerEta_2_14_read_1_fu_8740_p1 = esl_zext<16,6>(towerEta_2_14_read.read());
}

void merge_acrossphi::thread_towerEta_2_15_read_1_fu_8736_p1() {
    towerEta_2_15_read_1_fu_8736_p1 = esl_zext<16,6>(towerEta_2_15_read.read());
}

void merge_acrossphi::thread_towerEta_2_16_read_1_fu_8732_p1() {
    towerEta_2_16_read_1_fu_8732_p1 = esl_zext<16,6>(towerEta_2_16_read.read());
}

void merge_acrossphi::thread_towerEta_2_17_read_1_fu_8728_p1() {
    towerEta_2_17_read_1_fu_8728_p1 = esl_zext<16,6>(towerEta_2_17_read.read());
}

void merge_acrossphi::thread_towerEta_2_18_read_1_fu_8724_p1() {
    towerEta_2_18_read_1_fu_8724_p1 = esl_zext<16,6>(towerEta_2_18_read.read());
}

void merge_acrossphi::thread_towerEta_2_19_read_1_fu_8720_p1() {
    towerEta_2_19_read_1_fu_8720_p1 = esl_zext<16,6>(towerEta_2_19_read.read());
}

void merge_acrossphi::thread_towerEta_2_1_read_s_fu_8792_p1() {
    towerEta_2_1_read_s_fu_8792_p1 = esl_zext<16,6>(towerEta_2_1_read.read());
}

void merge_acrossphi::thread_towerEta_2_20_read_1_fu_8716_p1() {
    towerEta_2_20_read_1_fu_8716_p1 = esl_zext<16,6>(towerEta_2_20_read.read());
}

void merge_acrossphi::thread_towerEta_2_21_read_1_fu_8712_p1() {
    towerEta_2_21_read_1_fu_8712_p1 = esl_zext<16,6>(towerEta_2_21_read.read());
}

void merge_acrossphi::thread_towerEta_2_22_read_1_fu_8708_p1() {
    towerEta_2_22_read_1_fu_8708_p1 = esl_zext<16,6>(towerEta_2_22_read.read());
}

void merge_acrossphi::thread_towerEta_2_23_read_1_fu_8704_p1() {
    towerEta_2_23_read_1_fu_8704_p1 = esl_zext<16,6>(towerEta_2_23_read.read());
}

void merge_acrossphi::thread_towerEta_2_2_read_s_fu_8788_p1() {
    towerEta_2_2_read_s_fu_8788_p1 = esl_zext<16,6>(towerEta_2_2_read.read());
}

void merge_acrossphi::thread_towerEta_2_3_read_s_fu_8784_p1() {
    towerEta_2_3_read_s_fu_8784_p1 = esl_zext<16,6>(towerEta_2_3_read.read());
}

void merge_acrossphi::thread_towerEta_2_4_read_s_fu_8780_p1() {
    towerEta_2_4_read_s_fu_8780_p1 = esl_zext<16,6>(towerEta_2_4_read.read());
}

void merge_acrossphi::thread_towerEta_2_5_read_s_fu_8776_p1() {
    towerEta_2_5_read_s_fu_8776_p1 = esl_zext<16,6>(towerEta_2_5_read.read());
}

void merge_acrossphi::thread_towerEta_2_6_read_s_fu_8772_p1() {
    towerEta_2_6_read_s_fu_8772_p1 = esl_zext<16,6>(towerEta_2_6_read.read());
}

void merge_acrossphi::thread_towerEta_2_7_read_s_fu_8768_p1() {
    towerEta_2_7_read_s_fu_8768_p1 = esl_zext<16,6>(towerEta_2_7_read.read());
}

void merge_acrossphi::thread_towerEta_2_8_read_s_fu_8764_p1() {
    towerEta_2_8_read_s_fu_8764_p1 = esl_zext<16,6>(towerEta_2_8_read.read());
}

void merge_acrossphi::thread_towerEta_2_9_read_s_fu_8760_p1() {
    towerEta_2_9_read_s_fu_8760_p1 = esl_zext<16,6>(towerEta_2_9_read.read());
}

void merge_acrossphi::thread_towerPhi_0_0_read_s_fu_8700_p1() {
    towerPhi_0_0_read_s_fu_8700_p1 = esl_zext<16,4>(towerPhi_0_0_read.read());
}

void merge_acrossphi::thread_towerPhi_0_10_read_1_fu_8660_p1() {
    towerPhi_0_10_read_1_fu_8660_p1 = esl_zext<16,4>(towerPhi_0_10_read.read());
}

void merge_acrossphi::thread_towerPhi_0_11_read_1_fu_8656_p1() {
    towerPhi_0_11_read_1_fu_8656_p1 = esl_zext<16,4>(towerPhi_0_11_read.read());
}

void merge_acrossphi::thread_towerPhi_0_12_read_1_fu_8652_p1() {
    towerPhi_0_12_read_1_fu_8652_p1 = esl_zext<16,4>(towerPhi_0_12_read.read());
}

void merge_acrossphi::thread_towerPhi_0_13_read_1_fu_8648_p1() {
    towerPhi_0_13_read_1_fu_8648_p1 = esl_zext<16,4>(towerPhi_0_13_read.read());
}

void merge_acrossphi::thread_towerPhi_0_14_read_1_fu_8644_p1() {
    towerPhi_0_14_read_1_fu_8644_p1 = esl_zext<16,4>(towerPhi_0_14_read.read());
}

void merge_acrossphi::thread_towerPhi_0_15_read_1_fu_8640_p1() {
    towerPhi_0_15_read_1_fu_8640_p1 = esl_zext<16,4>(towerPhi_0_15_read.read());
}

void merge_acrossphi::thread_towerPhi_0_16_read_1_fu_8636_p1() {
    towerPhi_0_16_read_1_fu_8636_p1 = esl_zext<16,4>(towerPhi_0_16_read.read());
}

void merge_acrossphi::thread_towerPhi_0_17_read_1_fu_8632_p1() {
    towerPhi_0_17_read_1_fu_8632_p1 = esl_zext<16,4>(towerPhi_0_17_read.read());
}

void merge_acrossphi::thread_towerPhi_0_18_read_1_fu_8628_p1() {
    towerPhi_0_18_read_1_fu_8628_p1 = esl_zext<16,4>(towerPhi_0_18_read.read());
}

void merge_acrossphi::thread_towerPhi_0_19_read_1_fu_8624_p1() {
    towerPhi_0_19_read_1_fu_8624_p1 = esl_zext<16,4>(towerPhi_0_19_read.read());
}

void merge_acrossphi::thread_towerPhi_0_1_read_s_fu_8696_p1() {
    towerPhi_0_1_read_s_fu_8696_p1 = esl_zext<16,4>(towerPhi_0_1_read.read());
}

void merge_acrossphi::thread_towerPhi_0_20_read_1_fu_8620_p1() {
    towerPhi_0_20_read_1_fu_8620_p1 = esl_zext<16,4>(towerPhi_0_20_read.read());
}

void merge_acrossphi::thread_towerPhi_0_21_read_1_fu_8616_p1() {
    towerPhi_0_21_read_1_fu_8616_p1 = esl_zext<16,4>(towerPhi_0_21_read.read());
}

void merge_acrossphi::thread_towerPhi_0_22_read_1_fu_8612_p1() {
    towerPhi_0_22_read_1_fu_8612_p1 = esl_zext<16,4>(towerPhi_0_22_read.read());
}

void merge_acrossphi::thread_towerPhi_0_23_read_1_fu_8608_p1() {
    towerPhi_0_23_read_1_fu_8608_p1 = esl_zext<16,4>(towerPhi_0_23_read.read());
}

void merge_acrossphi::thread_towerPhi_0_2_read_s_fu_8692_p1() {
    towerPhi_0_2_read_s_fu_8692_p1 = esl_zext<16,4>(towerPhi_0_2_read.read());
}

void merge_acrossphi::thread_towerPhi_0_3_read_s_fu_8688_p1() {
    towerPhi_0_3_read_s_fu_8688_p1 = esl_zext<16,4>(towerPhi_0_3_read.read());
}

void merge_acrossphi::thread_towerPhi_0_4_read_s_fu_8684_p1() {
    towerPhi_0_4_read_s_fu_8684_p1 = esl_zext<16,4>(towerPhi_0_4_read.read());
}

void merge_acrossphi::thread_towerPhi_0_5_read_s_fu_8680_p1() {
    towerPhi_0_5_read_s_fu_8680_p1 = esl_zext<16,4>(towerPhi_0_5_read.read());
}

void merge_acrossphi::thread_towerPhi_0_6_read_s_fu_8676_p1() {
    towerPhi_0_6_read_s_fu_8676_p1 = esl_zext<16,4>(towerPhi_0_6_read.read());
}

void merge_acrossphi::thread_towerPhi_0_7_read_s_fu_8672_p1() {
    towerPhi_0_7_read_s_fu_8672_p1 = esl_zext<16,4>(towerPhi_0_7_read.read());
}

void merge_acrossphi::thread_towerPhi_0_8_read_s_fu_8668_p1() {
    towerPhi_0_8_read_s_fu_8668_p1 = esl_zext<16,4>(towerPhi_0_8_read.read());
}

void merge_acrossphi::thread_towerPhi_0_9_read_s_fu_8664_p1() {
    towerPhi_0_9_read_s_fu_8664_p1 = esl_zext<16,4>(towerPhi_0_9_read.read());
}

void merge_acrossphi::thread_towerPhi_1_0_read_s_fu_8604_p1() {
    towerPhi_1_0_read_s_fu_8604_p1 = esl_zext<16,4>(towerPhi_1_0_read.read());
}

void merge_acrossphi::thread_towerPhi_1_10_read_1_fu_8564_p1() {
    towerPhi_1_10_read_1_fu_8564_p1 = esl_zext<16,4>(towerPhi_1_10_read.read());
}

void merge_acrossphi::thread_towerPhi_1_11_read_1_fu_8560_p1() {
    towerPhi_1_11_read_1_fu_8560_p1 = esl_zext<16,4>(towerPhi_1_11_read.read());
}

void merge_acrossphi::thread_towerPhi_1_12_read_1_fu_8556_p1() {
    towerPhi_1_12_read_1_fu_8556_p1 = esl_zext<16,4>(towerPhi_1_12_read.read());
}

void merge_acrossphi::thread_towerPhi_1_13_read_1_fu_8552_p1() {
    towerPhi_1_13_read_1_fu_8552_p1 = esl_zext<16,4>(towerPhi_1_13_read.read());
}

void merge_acrossphi::thread_towerPhi_1_14_read_1_fu_8548_p1() {
    towerPhi_1_14_read_1_fu_8548_p1 = esl_zext<16,4>(towerPhi_1_14_read.read());
}

void merge_acrossphi::thread_towerPhi_1_15_read_1_fu_8544_p1() {
    towerPhi_1_15_read_1_fu_8544_p1 = esl_zext<16,4>(towerPhi_1_15_read.read());
}

void merge_acrossphi::thread_towerPhi_1_16_read_1_fu_8540_p1() {
    towerPhi_1_16_read_1_fu_8540_p1 = esl_zext<16,4>(towerPhi_1_16_read.read());
}

void merge_acrossphi::thread_towerPhi_1_17_read_1_fu_8536_p1() {
    towerPhi_1_17_read_1_fu_8536_p1 = esl_zext<16,4>(towerPhi_1_17_read.read());
}

void merge_acrossphi::thread_towerPhi_1_18_read_1_fu_8532_p1() {
    towerPhi_1_18_read_1_fu_8532_p1 = esl_zext<16,4>(towerPhi_1_18_read.read());
}

void merge_acrossphi::thread_towerPhi_1_19_read_1_fu_8528_p1() {
    towerPhi_1_19_read_1_fu_8528_p1 = esl_zext<16,4>(towerPhi_1_19_read.read());
}

void merge_acrossphi::thread_towerPhi_1_1_read_s_fu_8600_p1() {
    towerPhi_1_1_read_s_fu_8600_p1 = esl_zext<16,4>(towerPhi_1_1_read.read());
}

void merge_acrossphi::thread_towerPhi_1_20_read_1_fu_8524_p1() {
    towerPhi_1_20_read_1_fu_8524_p1 = esl_zext<16,4>(towerPhi_1_20_read.read());
}

void merge_acrossphi::thread_towerPhi_1_21_read_1_fu_8520_p1() {
    towerPhi_1_21_read_1_fu_8520_p1 = esl_zext<16,4>(towerPhi_1_21_read.read());
}

void merge_acrossphi::thread_towerPhi_1_22_read_1_fu_8516_p1() {
    towerPhi_1_22_read_1_fu_8516_p1 = esl_zext<16,4>(towerPhi_1_22_read.read());
}

void merge_acrossphi::thread_towerPhi_1_23_read_1_fu_8512_p1() {
    towerPhi_1_23_read_1_fu_8512_p1 = esl_zext<16,4>(towerPhi_1_23_read.read());
}

void merge_acrossphi::thread_towerPhi_1_2_read_s_fu_8596_p1() {
    towerPhi_1_2_read_s_fu_8596_p1 = esl_zext<16,4>(towerPhi_1_2_read.read());
}

void merge_acrossphi::thread_towerPhi_1_3_read_s_fu_8592_p1() {
    towerPhi_1_3_read_s_fu_8592_p1 = esl_zext<16,4>(towerPhi_1_3_read.read());
}

void merge_acrossphi::thread_towerPhi_1_4_read_s_fu_8588_p1() {
    towerPhi_1_4_read_s_fu_8588_p1 = esl_zext<16,4>(towerPhi_1_4_read.read());
}

void merge_acrossphi::thread_towerPhi_1_5_read_s_fu_8584_p1() {
    towerPhi_1_5_read_s_fu_8584_p1 = esl_zext<16,4>(towerPhi_1_5_read.read());
}

void merge_acrossphi::thread_towerPhi_1_6_read_s_fu_8580_p1() {
    towerPhi_1_6_read_s_fu_8580_p1 = esl_zext<16,4>(towerPhi_1_6_read.read());
}

void merge_acrossphi::thread_towerPhi_1_7_read_s_fu_8576_p1() {
    towerPhi_1_7_read_s_fu_8576_p1 = esl_zext<16,4>(towerPhi_1_7_read.read());
}

void merge_acrossphi::thread_towerPhi_1_8_read_s_fu_8572_p1() {
    towerPhi_1_8_read_s_fu_8572_p1 = esl_zext<16,4>(towerPhi_1_8_read.read());
}

void merge_acrossphi::thread_towerPhi_1_9_read_s_fu_8568_p1() {
    towerPhi_1_9_read_s_fu_8568_p1 = esl_zext<16,4>(towerPhi_1_9_read.read());
}

void merge_acrossphi::thread_towerPhi_2_0_read_s_fu_8508_p1() {
    towerPhi_2_0_read_s_fu_8508_p1 = esl_zext<16,4>(towerPhi_2_0_read.read());
}

void merge_acrossphi::thread_towerPhi_2_10_read_1_fu_8468_p1() {
    towerPhi_2_10_read_1_fu_8468_p1 = esl_zext<16,4>(towerPhi_2_10_read.read());
}

void merge_acrossphi::thread_towerPhi_2_11_read_1_fu_8464_p1() {
    towerPhi_2_11_read_1_fu_8464_p1 = esl_zext<16,4>(towerPhi_2_11_read.read());
}

void merge_acrossphi::thread_towerPhi_2_12_read_1_fu_8460_p1() {
    towerPhi_2_12_read_1_fu_8460_p1 = esl_zext<16,4>(towerPhi_2_12_read.read());
}

void merge_acrossphi::thread_towerPhi_2_13_read_1_fu_8456_p1() {
    towerPhi_2_13_read_1_fu_8456_p1 = esl_zext<16,4>(towerPhi_2_13_read.read());
}

void merge_acrossphi::thread_towerPhi_2_14_read_1_fu_8452_p1() {
    towerPhi_2_14_read_1_fu_8452_p1 = esl_zext<16,4>(towerPhi_2_14_read.read());
}

void merge_acrossphi::thread_towerPhi_2_15_read_1_fu_8448_p1() {
    towerPhi_2_15_read_1_fu_8448_p1 = esl_zext<16,4>(towerPhi_2_15_read.read());
}

void merge_acrossphi::thread_towerPhi_2_16_read_1_fu_8444_p1() {
    towerPhi_2_16_read_1_fu_8444_p1 = esl_zext<16,4>(towerPhi_2_16_read.read());
}

void merge_acrossphi::thread_towerPhi_2_17_read_1_fu_8440_p1() {
    towerPhi_2_17_read_1_fu_8440_p1 = esl_zext<16,4>(towerPhi_2_17_read.read());
}

void merge_acrossphi::thread_towerPhi_2_18_read_1_fu_8436_p1() {
    towerPhi_2_18_read_1_fu_8436_p1 = esl_zext<16,4>(towerPhi_2_18_read.read());
}

void merge_acrossphi::thread_towerPhi_2_19_read_1_fu_8432_p1() {
    towerPhi_2_19_read_1_fu_8432_p1 = esl_zext<16,4>(towerPhi_2_19_read.read());
}

void merge_acrossphi::thread_towerPhi_2_1_read_s_fu_8504_p1() {
    towerPhi_2_1_read_s_fu_8504_p1 = esl_zext<16,4>(towerPhi_2_1_read.read());
}

void merge_acrossphi::thread_towerPhi_2_20_read_1_fu_8428_p1() {
    towerPhi_2_20_read_1_fu_8428_p1 = esl_zext<16,4>(towerPhi_2_20_read.read());
}

void merge_acrossphi::thread_towerPhi_2_21_read_1_fu_8424_p1() {
    towerPhi_2_21_read_1_fu_8424_p1 = esl_zext<16,4>(towerPhi_2_21_read.read());
}

void merge_acrossphi::thread_towerPhi_2_22_read_1_fu_8420_p1() {
    towerPhi_2_22_read_1_fu_8420_p1 = esl_zext<16,4>(towerPhi_2_22_read.read());
}

void merge_acrossphi::thread_towerPhi_2_23_read_1_fu_8416_p1() {
    towerPhi_2_23_read_1_fu_8416_p1 = esl_zext<16,4>(towerPhi_2_23_read.read());
}

void merge_acrossphi::thread_towerPhi_2_2_read_s_fu_8500_p1() {
    towerPhi_2_2_read_s_fu_8500_p1 = esl_zext<16,4>(towerPhi_2_2_read.read());
}

void merge_acrossphi::thread_towerPhi_2_3_read_s_fu_8496_p1() {
    towerPhi_2_3_read_s_fu_8496_p1 = esl_zext<16,4>(towerPhi_2_3_read.read());
}

void merge_acrossphi::thread_towerPhi_2_4_read_s_fu_8492_p1() {
    towerPhi_2_4_read_s_fu_8492_p1 = esl_zext<16,4>(towerPhi_2_4_read.read());
}

void merge_acrossphi::thread_towerPhi_2_5_read_s_fu_8488_p1() {
    towerPhi_2_5_read_s_fu_8488_p1 = esl_zext<16,4>(towerPhi_2_5_read.read());
}

void merge_acrossphi::thread_towerPhi_2_6_read_s_fu_8484_p1() {
    towerPhi_2_6_read_s_fu_8484_p1 = esl_zext<16,4>(towerPhi_2_6_read.read());
}

void merge_acrossphi::thread_towerPhi_2_7_read_s_fu_8480_p1() {
    towerPhi_2_7_read_s_fu_8480_p1 = esl_zext<16,4>(towerPhi_2_7_read.read());
}

void merge_acrossphi::thread_towerPhi_2_8_read_s_fu_8476_p1() {
    towerPhi_2_8_read_s_fu_8476_p1 = esl_zext<16,4>(towerPhi_2_8_read.read());
}

void merge_acrossphi::thread_towerPhi_2_9_read_s_fu_8472_p1() {
    towerPhi_2_9_read_s_fu_8472_p1 = esl_zext<16,4>(towerPhi_2_9_read.read());
}

}

