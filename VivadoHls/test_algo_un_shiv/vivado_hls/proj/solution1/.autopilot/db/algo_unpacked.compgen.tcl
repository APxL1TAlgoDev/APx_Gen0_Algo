# This script segment is generated automatically by AutoPilot

set id 1
set name algo_unpacked_mulbkb
set corename simcore_mul
set op mul
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 16
set in0_signed 0
set in1_width 5
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 21
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 146 \
    name link_in_0_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_0_V \
    op interface \
    ports { link_in_0_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 147 \
    name link_in_1_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_1_V \
    op interface \
    ports { link_in_1_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 148 \
    name link_in_2_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_2_V \
    op interface \
    ports { link_in_2_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 149 \
    name link_in_3_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_3_V \
    op interface \
    ports { link_in_3_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 150 \
    name link_in_4_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_4_V \
    op interface \
    ports { link_in_4_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 151 \
    name link_in_5_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_5_V \
    op interface \
    ports { link_in_5_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 152 \
    name link_in_6_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_6_V \
    op interface \
    ports { link_in_6_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 153 \
    name link_in_7_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_7_V \
    op interface \
    ports { link_in_7_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 154 \
    name link_in_8_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_8_V \
    op interface \
    ports { link_in_8_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 155 \
    name link_in_9_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_9_V \
    op interface \
    ports { link_in_9_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 156 \
    name link_in_10_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_10_V \
    op interface \
    ports { link_in_10_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 157 \
    name link_in_11_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_11_V \
    op interface \
    ports { link_in_11_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 158 \
    name link_in_12_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_12_V \
    op interface \
    ports { link_in_12_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 159 \
    name link_in_13_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_13_V \
    op interface \
    ports { link_in_13_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 160 \
    name link_in_14_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_14_V \
    op interface \
    ports { link_in_14_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 161 \
    name link_in_15_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_15_V \
    op interface \
    ports { link_in_15_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 162 \
    name link_in_16_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_16_V \
    op interface \
    ports { link_in_16_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 163 \
    name link_in_17_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_17_V \
    op interface \
    ports { link_in_17_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 164 \
    name link_in_18_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_18_V \
    op interface \
    ports { link_in_18_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 165 \
    name link_in_19_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_19_V \
    op interface \
    ports { link_in_19_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 166 \
    name link_in_20_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_20_V \
    op interface \
    ports { link_in_20_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 167 \
    name link_in_21_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_21_V \
    op interface \
    ports { link_in_21_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 168 \
    name link_in_22_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_22_V \
    op interface \
    ports { link_in_22_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 169 \
    name link_in_23_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_23_V \
    op interface \
    ports { link_in_23_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 170 \
    name link_in_24_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_24_V \
    op interface \
    ports { link_in_24_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 171 \
    name link_in_25_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_25_V \
    op interface \
    ports { link_in_25_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 172 \
    name link_in_26_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_26_V \
    op interface \
    ports { link_in_26_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 173 \
    name link_in_27_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_27_V \
    op interface \
    ports { link_in_27_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 174 \
    name link_in_28_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_28_V \
    op interface \
    ports { link_in_28_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 175 \
    name link_in_29_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_29_V \
    op interface \
    ports { link_in_29_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 176 \
    name link_in_30_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_30_V \
    op interface \
    ports { link_in_30_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 177 \
    name link_in_31_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_31_V \
    op interface \
    ports { link_in_31_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 178 \
    name link_in_32_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_32_V \
    op interface \
    ports { link_in_32_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 179 \
    name link_in_33_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_33_V \
    op interface \
    ports { link_in_33_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 180 \
    name link_in_34_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_34_V \
    op interface \
    ports { link_in_34_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 181 \
    name link_in_35_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_35_V \
    op interface \
    ports { link_in_35_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 182 \
    name link_in_36_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_36_V \
    op interface \
    ports { link_in_36_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 183 \
    name link_in_37_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_37_V \
    op interface \
    ports { link_in_37_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 184 \
    name link_in_38_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_38_V \
    op interface \
    ports { link_in_38_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 185 \
    name link_in_39_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_39_V \
    op interface \
    ports { link_in_39_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 186 \
    name link_in_40_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_40_V \
    op interface \
    ports { link_in_40_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 187 \
    name link_in_41_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_41_V \
    op interface \
    ports { link_in_41_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 188 \
    name link_in_42_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_42_V \
    op interface \
    ports { link_in_42_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 189 \
    name link_in_43_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_43_V \
    op interface \
    ports { link_in_43_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 190 \
    name link_in_44_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_44_V \
    op interface \
    ports { link_in_44_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 191 \
    name link_in_45_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_45_V \
    op interface \
    ports { link_in_45_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 192 \
    name link_in_46_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_46_V \
    op interface \
    ports { link_in_46_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 193 \
    name link_in_47_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_link_in_47_V \
    op interface \
    ports { link_in_47_V { I 192 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 194 \
    name link_out_0_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_0_V \
    op interface \
    ports { link_out_0_V { O 192 vector } link_out_0_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 195 \
    name link_out_1_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_1_V \
    op interface \
    ports { link_out_1_V { O 192 vector } link_out_1_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 196 \
    name link_out_2_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_2_V \
    op interface \
    ports { link_out_2_V { O 192 vector } link_out_2_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 197 \
    name link_out_3_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_3_V \
    op interface \
    ports { link_out_3_V { O 192 vector } link_out_3_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 198 \
    name link_out_4_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_4_V \
    op interface \
    ports { link_out_4_V { O 192 vector } link_out_4_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 199 \
    name link_out_5_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_5_V \
    op interface \
    ports { link_out_5_V { O 192 vector } link_out_5_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 200 \
    name link_out_6_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_6_V \
    op interface \
    ports { link_out_6_V { O 192 vector } link_out_6_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 201 \
    name link_out_7_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_7_V \
    op interface \
    ports { link_out_7_V { O 192 vector } link_out_7_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 202 \
    name link_out_8_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_8_V \
    op interface \
    ports { link_out_8_V { O 192 vector } link_out_8_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 203 \
    name link_out_9_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_9_V \
    op interface \
    ports { link_out_9_V { O 192 vector } link_out_9_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 204 \
    name link_out_10_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_10_V \
    op interface \
    ports { link_out_10_V { O 192 vector } link_out_10_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 205 \
    name link_out_11_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_11_V \
    op interface \
    ports { link_out_11_V { O 192 vector } link_out_11_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 206 \
    name link_out_12_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_12_V \
    op interface \
    ports { link_out_12_V { O 192 vector } link_out_12_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 207 \
    name link_out_13_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_13_V \
    op interface \
    ports { link_out_13_V { O 192 vector } link_out_13_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 208 \
    name link_out_14_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_14_V \
    op interface \
    ports { link_out_14_V { O 192 vector } link_out_14_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 209 \
    name link_out_15_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_15_V \
    op interface \
    ports { link_out_15_V { O 192 vector } link_out_15_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 210 \
    name link_out_16_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_16_V \
    op interface \
    ports { link_out_16_V { O 192 vector } link_out_16_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 211 \
    name link_out_17_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_17_V \
    op interface \
    ports { link_out_17_V { O 192 vector } link_out_17_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 212 \
    name link_out_18_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_18_V \
    op interface \
    ports { link_out_18_V { O 192 vector } link_out_18_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 213 \
    name link_out_19_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_19_V \
    op interface \
    ports { link_out_19_V { O 192 vector } link_out_19_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 214 \
    name link_out_20_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_20_V \
    op interface \
    ports { link_out_20_V { O 192 vector } link_out_20_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 215 \
    name link_out_21_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_21_V \
    op interface \
    ports { link_out_21_V { O 192 vector } link_out_21_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 216 \
    name link_out_22_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_22_V \
    op interface \
    ports { link_out_22_V { O 192 vector } link_out_22_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 217 \
    name link_out_23_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_23_V \
    op interface \
    ports { link_out_23_V { O 192 vector } link_out_23_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 218 \
    name link_out_24_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_24_V \
    op interface \
    ports { link_out_24_V { O 192 vector } link_out_24_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 219 \
    name link_out_25_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_25_V \
    op interface \
    ports { link_out_25_V { O 192 vector } link_out_25_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 220 \
    name link_out_26_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_26_V \
    op interface \
    ports { link_out_26_V { O 192 vector } link_out_26_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 221 \
    name link_out_27_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_27_V \
    op interface \
    ports { link_out_27_V { O 192 vector } link_out_27_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 222 \
    name link_out_28_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_28_V \
    op interface \
    ports { link_out_28_V { O 192 vector } link_out_28_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 223 \
    name link_out_29_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_29_V \
    op interface \
    ports { link_out_29_V { O 192 vector } link_out_29_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 224 \
    name link_out_30_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_30_V \
    op interface \
    ports { link_out_30_V { O 192 vector } link_out_30_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 225 \
    name link_out_31_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_31_V \
    op interface \
    ports { link_out_31_V { O 192 vector } link_out_31_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 226 \
    name link_out_32_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_32_V \
    op interface \
    ports { link_out_32_V { O 192 vector } link_out_32_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 227 \
    name link_out_33_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_33_V \
    op interface \
    ports { link_out_33_V { O 192 vector } link_out_33_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 228 \
    name link_out_34_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_34_V \
    op interface \
    ports { link_out_34_V { O 192 vector } link_out_34_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 229 \
    name link_out_35_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_35_V \
    op interface \
    ports { link_out_35_V { O 192 vector } link_out_35_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 230 \
    name link_out_36_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_36_V \
    op interface \
    ports { link_out_36_V { O 192 vector } link_out_36_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 231 \
    name link_out_37_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_37_V \
    op interface \
    ports { link_out_37_V { O 192 vector } link_out_37_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 232 \
    name link_out_38_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_38_V \
    op interface \
    ports { link_out_38_V { O 192 vector } link_out_38_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 233 \
    name link_out_39_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_39_V \
    op interface \
    ports { link_out_39_V { O 192 vector } link_out_39_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 234 \
    name link_out_40_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_40_V \
    op interface \
    ports { link_out_40_V { O 192 vector } link_out_40_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 235 \
    name link_out_41_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_41_V \
    op interface \
    ports { link_out_41_V { O 192 vector } link_out_41_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 236 \
    name link_out_42_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_42_V \
    op interface \
    ports { link_out_42_V { O 192 vector } link_out_42_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 237 \
    name link_out_43_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_43_V \
    op interface \
    ports { link_out_43_V { O 192 vector } link_out_43_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 238 \
    name link_out_44_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_44_V \
    op interface \
    ports { link_out_44_V { O 192 vector } link_out_44_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 239 \
    name link_out_45_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_45_V \
    op interface \
    ports { link_out_45_V { O 192 vector } link_out_45_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 240 \
    name link_out_46_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_46_V \
    op interface \
    ports { link_out_46_V { O 192 vector } link_out_46_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 241 \
    name link_out_47_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_link_out_47_V \
    op interface \
    ports { link_out_47_V { O 192 vector } link_out_47_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


