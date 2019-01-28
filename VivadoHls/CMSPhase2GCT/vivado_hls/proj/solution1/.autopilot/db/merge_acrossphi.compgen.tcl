# This script segment is generated automatically by AutoPilot

set id 7
set name algo_unpacked_muxbkb
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 0
set din9_width 16
set din9_signed 0
set din10_width 16
set din10_signed 0
set din11_width 16
set din11_signed 0
set din12_width 16
set din12_signed 0
set din13_width 16
set din13_signed 0
set din14_width 16
set din14_signed 0
set din15_width 16
set din15_signed 0
set din16_width 16
set din16_signed 0
set din17_width 16
set din17_signed 0
set din18_width 16
set din18_signed 0
set din19_width 16
set din19_signed 0
set din20_width 16
set din20_signed 0
set din21_width 16
set din21_signed 0
set din22_width 16
set din22_signed 0
set din23_width 16
set din23_signed 0
set din24_width 16
set din24_signed 0
set din25_width 16
set din25_signed 0
set din26_width 16
set din26_signed 0
set din27_width 16
set din27_signed 0
set din28_width 16
set din28_signed 0
set din29_width 16
set din29_signed 0
set din30_width 16
set din30_signed 0
set din31_width 16
set din31_signed 0
set din32_width 5
set din32_signed 1
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    din17_width ${din17_width} \
    din17_signed ${din17_signed} \
    din18_width ${din18_width} \
    din18_signed ${din18_signed} \
    din19_width ${din19_width} \
    din19_signed ${din19_signed} \
    din20_width ${din20_width} \
    din20_signed ${din20_signed} \
    din21_width ${din21_width} \
    din21_signed ${din21_signed} \
    din22_width ${din22_width} \
    din22_signed ${din22_signed} \
    din23_width ${din23_width} \
    din23_signed ${din23_signed} \
    din24_width ${din24_width} \
    din24_signed ${din24_signed} \
    din25_width ${din25_width} \
    din25_signed ${din25_signed} \
    din26_width ${din26_width} \
    din26_signed ${din26_signed} \
    din27_width ${din27_width} \
    din27_signed ${din27_signed} \
    din28_width ${din28_width} \
    din28_signed ${din28_signed} \
    din29_width ${din29_width} \
    din29_signed ${din29_signed} \
    din30_width ${din30_width} \
    din30_signed ${din30_signed} \
    din31_width ${din31_width} \
    din31_signed ${din31_signed} \
    din32_width ${din32_width} \
    din32_signed ${din32_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    din17_width ${din17_width} \
    din17_signed ${din17_signed} \
    din18_width ${din18_width} \
    din18_signed ${din18_signed} \
    din19_width ${din19_width} \
    din19_signed ${din19_signed} \
    din20_width ${din20_width} \
    din20_signed ${din20_signed} \
    din21_width ${din21_width} \
    din21_signed ${din21_signed} \
    din22_width ${din22_width} \
    din22_signed ${din22_signed} \
    din23_width ${din23_width} \
    din23_signed ${din23_signed} \
    din24_width ${din24_width} \
    din24_signed ${din24_signed} \
    din25_width ${din25_width} \
    din25_signed ${din25_signed} \
    din26_width ${din26_width} \
    din26_signed ${din26_signed} \
    din27_width ${din27_width} \
    din27_signed ${din27_signed} \
    din28_width ${din28_width} \
    din28_signed ${din28_signed} \
    din29_width ${din29_width} \
    din29_signed ${din29_signed} \
    din30_width ${din30_width} \
    din30_signed ${din30_signed} \
    din31_width ${din31_width} \
    din31_signed ${din31_signed} \
    din32_width ${din32_width} \
    din32_signed ${din32_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 10
set name algo_unpacked_muxbkb
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 0
set din9_width 16
set din9_signed 0
set din10_width 16
set din10_signed 0
set din11_width 16
set din11_signed 0
set din12_width 16
set din12_signed 0
set din13_width 16
set din13_signed 0
set din14_width 16
set din14_signed 0
set din15_width 16
set din15_signed 0
set din16_width 16
set din16_signed 0
set din17_width 16
set din17_signed 0
set din18_width 16
set din18_signed 0
set din19_width 16
set din19_signed 0
set din20_width 16
set din20_signed 0
set din21_width 16
set din21_signed 0
set din22_width 16
set din22_signed 0
set din23_width 16
set din23_signed 0
set din24_width 16
set din24_signed 0
set din25_width 16
set din25_signed 0
set din26_width 16
set din26_signed 0
set din27_width 16
set din27_signed 0
set din28_width 16
set din28_signed 0
set din29_width 16
set din29_signed 0
set din30_width 16
set din30_signed 0
set din31_width 16
set din31_signed 0
set din32_width 5
set din32_signed 1
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    din17_width ${din17_width} \
    din17_signed ${din17_signed} \
    din18_width ${din18_width} \
    din18_signed ${din18_signed} \
    din19_width ${din19_width} \
    din19_signed ${din19_signed} \
    din20_width ${din20_width} \
    din20_signed ${din20_signed} \
    din21_width ${din21_width} \
    din21_signed ${din21_signed} \
    din22_width ${din22_width} \
    din22_signed ${din22_signed} \
    din23_width ${din23_width} \
    din23_signed ${din23_signed} \
    din24_width ${din24_width} \
    din24_signed ${din24_signed} \
    din25_width ${din25_width} \
    din25_signed ${din25_signed} \
    din26_width ${din26_width} \
    din26_signed ${din26_signed} \
    din27_width ${din27_width} \
    din27_signed ${din27_signed} \
    din28_width ${din28_width} \
    din28_signed ${din28_signed} \
    din29_width ${din29_width} \
    din29_signed ${din29_signed} \
    din30_width ${din30_width} \
    din30_signed ${din30_signed} \
    din31_width ${din31_width} \
    din31_signed ${din31_signed} \
    din32_width ${din32_width} \
    din32_signed ${din32_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    din17_width ${din17_width} \
    din17_signed ${din17_signed} \
    din18_width ${din18_width} \
    din18_signed ${din18_signed} \
    din19_width ${din19_width} \
    din19_signed ${din19_signed} \
    din20_width ${din20_width} \
    din20_signed ${din20_signed} \
    din21_width ${din21_width} \
    din21_signed ${din21_signed} \
    din22_width ${din22_width} \
    din22_signed ${din22_signed} \
    din23_width ${din23_width} \
    din23_signed ${din23_signed} \
    din24_width ${din24_width} \
    din24_signed ${din24_signed} \
    din25_width ${din25_width} \
    din25_signed ${din25_signed} \
    din26_width ${din26_width} \
    din26_signed ${din26_signed} \
    din27_width ${din27_width} \
    din27_signed ${din27_signed} \
    din28_width ${din28_width} \
    din28_signed ${din28_signed} \
    din29_width ${din29_width} \
    din29_signed ${din29_signed} \
    din30_width ${din30_width} \
    din30_signed ${din30_signed} \
    din31_width ${din31_width} \
    din31_signed ${din31_signed} \
    din32_width ${din32_width} \
    din32_signed ${din32_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
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
    id 162 \
    name peakEta_0_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_0_read \
    op interface \
    ports { peakEta_0_0_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 163 \
    name peakEta_0_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_1_read \
    op interface \
    ports { peakEta_0_1_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 164 \
    name peakEta_0_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_3_read \
    op interface \
    ports { peakEta_0_3_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 165 \
    name peakEta_0_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_4_read \
    op interface \
    ports { peakEta_0_4_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 166 \
    name peakEta_0_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_5_read \
    op interface \
    ports { peakEta_0_5_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 167 \
    name peakEta_0_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_7_read \
    op interface \
    ports { peakEta_0_7_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 168 \
    name peakEta_0_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_8_read \
    op interface \
    ports { peakEta_0_8_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 169 \
    name peakEta_0_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_9_read \
    op interface \
    ports { peakEta_0_9_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 170 \
    name peakEta_0_11_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_11_read \
    op interface \
    ports { peakEta_0_11_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 171 \
    name peakEta_0_12_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_12_read \
    op interface \
    ports { peakEta_0_12_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 172 \
    name peakEta_0_13_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_13_read \
    op interface \
    ports { peakEta_0_13_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 173 \
    name peakEta_0_15_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_15_read \
    op interface \
    ports { peakEta_0_15_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 174 \
    name peakEta_0_16_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_16_read \
    op interface \
    ports { peakEta_0_16_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 175 \
    name peakEta_0_17_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_17_read \
    op interface \
    ports { peakEta_0_17_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 176 \
    name peakEta_0_19_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_19_read \
    op interface \
    ports { peakEta_0_19_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 177 \
    name peakEta_0_20_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_20_read \
    op interface \
    ports { peakEta_0_20_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 178 \
    name peakEta_0_21_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_0_21_read \
    op interface \
    ports { peakEta_0_21_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 179 \
    name peakEta_1_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_0_read \
    op interface \
    ports { peakEta_1_0_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 180 \
    name peakEta_1_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_1_read \
    op interface \
    ports { peakEta_1_1_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 181 \
    name peakEta_1_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_3_read \
    op interface \
    ports { peakEta_1_3_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 182 \
    name peakEta_1_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_4_read \
    op interface \
    ports { peakEta_1_4_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 183 \
    name peakEta_1_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_5_read \
    op interface \
    ports { peakEta_1_5_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 184 \
    name peakEta_1_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_7_read \
    op interface \
    ports { peakEta_1_7_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 185 \
    name peakEta_1_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_8_read \
    op interface \
    ports { peakEta_1_8_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 186 \
    name peakEta_1_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_9_read \
    op interface \
    ports { peakEta_1_9_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 187 \
    name peakEta_1_11_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_11_read \
    op interface \
    ports { peakEta_1_11_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 188 \
    name peakEta_1_12_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_12_read \
    op interface \
    ports { peakEta_1_12_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 189 \
    name peakEta_1_13_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_13_read \
    op interface \
    ports { peakEta_1_13_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 190 \
    name peakEta_1_15_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_15_read \
    op interface \
    ports { peakEta_1_15_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 191 \
    name peakEta_1_16_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_16_read \
    op interface \
    ports { peakEta_1_16_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 192 \
    name peakEta_1_17_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_17_read \
    op interface \
    ports { peakEta_1_17_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 193 \
    name peakEta_1_19_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_19_read \
    op interface \
    ports { peakEta_1_19_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 194 \
    name peakEta_1_20_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_20_read \
    op interface \
    ports { peakEta_1_20_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 195 \
    name peakEta_1_21_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_1_21_read \
    op interface \
    ports { peakEta_1_21_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 196 \
    name peakEta_2_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_0_read \
    op interface \
    ports { peakEta_2_0_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 197 \
    name peakEta_2_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_1_read \
    op interface \
    ports { peakEta_2_1_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 198 \
    name peakEta_2_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_3_read \
    op interface \
    ports { peakEta_2_3_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 199 \
    name peakEta_2_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_4_read \
    op interface \
    ports { peakEta_2_4_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 200 \
    name peakEta_2_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_5_read \
    op interface \
    ports { peakEta_2_5_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 201 \
    name peakEta_2_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_7_read \
    op interface \
    ports { peakEta_2_7_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 202 \
    name peakEta_2_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_8_read \
    op interface \
    ports { peakEta_2_8_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 203 \
    name peakEta_2_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_9_read \
    op interface \
    ports { peakEta_2_9_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 204 \
    name peakEta_2_11_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_11_read \
    op interface \
    ports { peakEta_2_11_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 205 \
    name peakEta_2_12_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_12_read \
    op interface \
    ports { peakEta_2_12_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 206 \
    name peakEta_2_13_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_13_read \
    op interface \
    ports { peakEta_2_13_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 207 \
    name peakEta_2_15_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_15_read \
    op interface \
    ports { peakEta_2_15_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 208 \
    name peakEta_2_16_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_16_read \
    op interface \
    ports { peakEta_2_16_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 209 \
    name peakEta_2_17_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_17_read \
    op interface \
    ports { peakEta_2_17_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 210 \
    name peakEta_2_19_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_19_read \
    op interface \
    ports { peakEta_2_19_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 211 \
    name peakEta_2_20_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_20_read \
    op interface \
    ports { peakEta_2_20_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 212 \
    name peakEta_2_21_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakEta_2_21_read \
    op interface \
    ports { peakEta_2_21_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 213 \
    name peakPhi_0_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_0_read \
    op interface \
    ports { peakPhi_0_0_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 214 \
    name peakPhi_0_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_1_read \
    op interface \
    ports { peakPhi_0_1_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 215 \
    name peakPhi_0_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_2_read \
    op interface \
    ports { peakPhi_0_2_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 216 \
    name peakPhi_0_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_3_read \
    op interface \
    ports { peakPhi_0_3_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 217 \
    name peakPhi_0_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_4_read \
    op interface \
    ports { peakPhi_0_4_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 218 \
    name peakPhi_0_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_5_read \
    op interface \
    ports { peakPhi_0_5_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 219 \
    name peakPhi_0_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_6_read \
    op interface \
    ports { peakPhi_0_6_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 220 \
    name peakPhi_0_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_7_read \
    op interface \
    ports { peakPhi_0_7_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 221 \
    name peakPhi_0_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_8_read \
    op interface \
    ports { peakPhi_0_8_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 222 \
    name peakPhi_0_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_9_read \
    op interface \
    ports { peakPhi_0_9_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 223 \
    name peakPhi_0_10_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_10_read \
    op interface \
    ports { peakPhi_0_10_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 224 \
    name peakPhi_0_11_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_11_read \
    op interface \
    ports { peakPhi_0_11_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 225 \
    name peakPhi_0_12_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_12_read \
    op interface \
    ports { peakPhi_0_12_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 226 \
    name peakPhi_0_13_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_13_read \
    op interface \
    ports { peakPhi_0_13_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 227 \
    name peakPhi_0_14_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_14_read \
    op interface \
    ports { peakPhi_0_14_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 228 \
    name peakPhi_0_15_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_15_read \
    op interface \
    ports { peakPhi_0_15_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 229 \
    name peakPhi_0_16_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_16_read \
    op interface \
    ports { peakPhi_0_16_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 230 \
    name peakPhi_0_17_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_17_read \
    op interface \
    ports { peakPhi_0_17_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 231 \
    name peakPhi_0_19_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_19_read \
    op interface \
    ports { peakPhi_0_19_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 232 \
    name peakPhi_0_20_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_20_read \
    op interface \
    ports { peakPhi_0_20_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 233 \
    name peakPhi_0_21_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_0_21_read \
    op interface \
    ports { peakPhi_0_21_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 234 \
    name peakPhi_1_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_0_read \
    op interface \
    ports { peakPhi_1_0_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 235 \
    name peakPhi_1_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_1_read \
    op interface \
    ports { peakPhi_1_1_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 236 \
    name peakPhi_1_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_2_read \
    op interface \
    ports { peakPhi_1_2_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 237 \
    name peakPhi_1_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_3_read \
    op interface \
    ports { peakPhi_1_3_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 238 \
    name peakPhi_1_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_4_read \
    op interface \
    ports { peakPhi_1_4_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 239 \
    name peakPhi_1_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_5_read \
    op interface \
    ports { peakPhi_1_5_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 240 \
    name peakPhi_1_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_6_read \
    op interface \
    ports { peakPhi_1_6_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 241 \
    name peakPhi_1_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_7_read \
    op interface \
    ports { peakPhi_1_7_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 242 \
    name peakPhi_1_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_8_read \
    op interface \
    ports { peakPhi_1_8_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 243 \
    name peakPhi_1_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_9_read \
    op interface \
    ports { peakPhi_1_9_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 244 \
    name peakPhi_1_10_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_10_read \
    op interface \
    ports { peakPhi_1_10_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 245 \
    name peakPhi_1_11_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_11_read \
    op interface \
    ports { peakPhi_1_11_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 246 \
    name peakPhi_1_12_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_12_read \
    op interface \
    ports { peakPhi_1_12_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 247 \
    name peakPhi_1_13_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_13_read \
    op interface \
    ports { peakPhi_1_13_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 248 \
    name peakPhi_1_14_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_14_read \
    op interface \
    ports { peakPhi_1_14_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 249 \
    name peakPhi_1_15_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_15_read \
    op interface \
    ports { peakPhi_1_15_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 250 \
    name peakPhi_1_16_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_16_read \
    op interface \
    ports { peakPhi_1_16_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 251 \
    name peakPhi_1_17_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_17_read \
    op interface \
    ports { peakPhi_1_17_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 252 \
    name peakPhi_1_19_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_19_read \
    op interface \
    ports { peakPhi_1_19_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 253 \
    name peakPhi_1_20_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_20_read \
    op interface \
    ports { peakPhi_1_20_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 254 \
    name peakPhi_1_21_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_1_21_read \
    op interface \
    ports { peakPhi_1_21_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 255 \
    name peakPhi_2_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_0_read \
    op interface \
    ports { peakPhi_2_0_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 256 \
    name peakPhi_2_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_1_read \
    op interface \
    ports { peakPhi_2_1_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 257 \
    name peakPhi_2_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_2_read \
    op interface \
    ports { peakPhi_2_2_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 258 \
    name peakPhi_2_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_3_read \
    op interface \
    ports { peakPhi_2_3_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 259 \
    name peakPhi_2_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_4_read \
    op interface \
    ports { peakPhi_2_4_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 260 \
    name peakPhi_2_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_5_read \
    op interface \
    ports { peakPhi_2_5_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 261 \
    name peakPhi_2_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_6_read \
    op interface \
    ports { peakPhi_2_6_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 262 \
    name peakPhi_2_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_7_read \
    op interface \
    ports { peakPhi_2_7_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 263 \
    name peakPhi_2_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_8_read \
    op interface \
    ports { peakPhi_2_8_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 264 \
    name peakPhi_2_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_9_read \
    op interface \
    ports { peakPhi_2_9_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 265 \
    name peakPhi_2_10_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_10_read \
    op interface \
    ports { peakPhi_2_10_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 266 \
    name peakPhi_2_11_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_11_read \
    op interface \
    ports { peakPhi_2_11_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 267 \
    name peakPhi_2_12_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_12_read \
    op interface \
    ports { peakPhi_2_12_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 268 \
    name peakPhi_2_13_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_13_read \
    op interface \
    ports { peakPhi_2_13_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 269 \
    name peakPhi_2_14_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_14_read \
    op interface \
    ports { peakPhi_2_14_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 270 \
    name peakPhi_2_15_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_15_read \
    op interface \
    ports { peakPhi_2_15_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 271 \
    name peakPhi_2_16_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_16_read \
    op interface \
    ports { peakPhi_2_16_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 272 \
    name peakPhi_2_17_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_17_read \
    op interface \
    ports { peakPhi_2_17_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 273 \
    name peakPhi_2_19_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_19_read \
    op interface \
    ports { peakPhi_2_19_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 274 \
    name peakPhi_2_20_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_20_read \
    op interface \
    ports { peakPhi_2_20_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 275 \
    name peakPhi_2_21_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_peakPhi_2_21_read \
    op interface \
    ports { peakPhi_2_21_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 276 \
    name towerEta_0_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_0_read \
    op interface \
    ports { towerEta_0_0_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 277 \
    name towerEta_0_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_1_read \
    op interface \
    ports { towerEta_0_1_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 278 \
    name towerEta_0_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_2_read \
    op interface \
    ports { towerEta_0_2_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 279 \
    name towerEta_0_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_3_read \
    op interface \
    ports { towerEta_0_3_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 280 \
    name towerEta_0_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_4_read \
    op interface \
    ports { towerEta_0_4_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 281 \
    name towerEta_0_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_5_read \
    op interface \
    ports { towerEta_0_5_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 282 \
    name towerEta_0_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_6_read \
    op interface \
    ports { towerEta_0_6_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 283 \
    name towerEta_0_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_7_read \
    op interface \
    ports { towerEta_0_7_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 284 \
    name towerEta_0_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_8_read \
    op interface \
    ports { towerEta_0_8_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 285 \
    name towerEta_0_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_9_read \
    op interface \
    ports { towerEta_0_9_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 286 \
    name towerEta_0_10_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_10_read \
    op interface \
    ports { towerEta_0_10_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 287 \
    name towerEta_0_11_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_11_read \
    op interface \
    ports { towerEta_0_11_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 288 \
    name towerEta_0_12_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_12_read \
    op interface \
    ports { towerEta_0_12_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 289 \
    name towerEta_0_13_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_13_read \
    op interface \
    ports { towerEta_0_13_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 290 \
    name towerEta_0_14_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_14_read \
    op interface \
    ports { towerEta_0_14_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 291 \
    name towerEta_0_15_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_15_read \
    op interface \
    ports { towerEta_0_15_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 292 \
    name towerEta_0_16_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_16_read \
    op interface \
    ports { towerEta_0_16_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 293 \
    name towerEta_0_17_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_17_read \
    op interface \
    ports { towerEta_0_17_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 294 \
    name towerEta_0_18_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_18_read \
    op interface \
    ports { towerEta_0_18_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 295 \
    name towerEta_0_19_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_19_read \
    op interface \
    ports { towerEta_0_19_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 296 \
    name towerEta_0_20_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_20_read \
    op interface \
    ports { towerEta_0_20_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 297 \
    name towerEta_0_21_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_21_read \
    op interface \
    ports { towerEta_0_21_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 298 \
    name towerEta_0_22_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_22_read \
    op interface \
    ports { towerEta_0_22_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 299 \
    name towerEta_0_23_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_0_23_read \
    op interface \
    ports { towerEta_0_23_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 300 \
    name towerEta_1_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_0_read \
    op interface \
    ports { towerEta_1_0_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 301 \
    name towerEta_1_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_1_read \
    op interface \
    ports { towerEta_1_1_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 302 \
    name towerEta_1_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_2_read \
    op interface \
    ports { towerEta_1_2_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 303 \
    name towerEta_1_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_3_read \
    op interface \
    ports { towerEta_1_3_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 304 \
    name towerEta_1_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_4_read \
    op interface \
    ports { towerEta_1_4_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 305 \
    name towerEta_1_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_5_read \
    op interface \
    ports { towerEta_1_5_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 306 \
    name towerEta_1_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_6_read \
    op interface \
    ports { towerEta_1_6_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 307 \
    name towerEta_1_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_7_read \
    op interface \
    ports { towerEta_1_7_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 308 \
    name towerEta_1_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_8_read \
    op interface \
    ports { towerEta_1_8_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 309 \
    name towerEta_1_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_9_read \
    op interface \
    ports { towerEta_1_9_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 310 \
    name towerEta_1_10_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_10_read \
    op interface \
    ports { towerEta_1_10_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 311 \
    name towerEta_1_11_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_11_read \
    op interface \
    ports { towerEta_1_11_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 312 \
    name towerEta_1_12_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_12_read \
    op interface \
    ports { towerEta_1_12_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 313 \
    name towerEta_1_13_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_13_read \
    op interface \
    ports { towerEta_1_13_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 314 \
    name towerEta_1_14_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_14_read \
    op interface \
    ports { towerEta_1_14_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 315 \
    name towerEta_1_15_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_15_read \
    op interface \
    ports { towerEta_1_15_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 316 \
    name towerEta_1_16_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_16_read \
    op interface \
    ports { towerEta_1_16_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 317 \
    name towerEta_1_17_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_17_read \
    op interface \
    ports { towerEta_1_17_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 318 \
    name towerEta_1_18_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_18_read \
    op interface \
    ports { towerEta_1_18_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 319 \
    name towerEta_1_19_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_19_read \
    op interface \
    ports { towerEta_1_19_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 320 \
    name towerEta_1_20_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_20_read \
    op interface \
    ports { towerEta_1_20_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 321 \
    name towerEta_1_21_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_21_read \
    op interface \
    ports { towerEta_1_21_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 322 \
    name towerEta_1_22_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_22_read \
    op interface \
    ports { towerEta_1_22_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 323 \
    name towerEta_1_23_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_1_23_read \
    op interface \
    ports { towerEta_1_23_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 324 \
    name towerEta_2_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_0_read \
    op interface \
    ports { towerEta_2_0_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 325 \
    name towerEta_2_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_1_read \
    op interface \
    ports { towerEta_2_1_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 326 \
    name towerEta_2_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_2_read \
    op interface \
    ports { towerEta_2_2_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 327 \
    name towerEta_2_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_3_read \
    op interface \
    ports { towerEta_2_3_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 328 \
    name towerEta_2_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_4_read \
    op interface \
    ports { towerEta_2_4_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 329 \
    name towerEta_2_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_5_read \
    op interface \
    ports { towerEta_2_5_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 330 \
    name towerEta_2_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_6_read \
    op interface \
    ports { towerEta_2_6_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 331 \
    name towerEta_2_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_7_read \
    op interface \
    ports { towerEta_2_7_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 332 \
    name towerEta_2_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_8_read \
    op interface \
    ports { towerEta_2_8_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 333 \
    name towerEta_2_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_9_read \
    op interface \
    ports { towerEta_2_9_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 334 \
    name towerEta_2_10_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_10_read \
    op interface \
    ports { towerEta_2_10_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 335 \
    name towerEta_2_11_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_11_read \
    op interface \
    ports { towerEta_2_11_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 336 \
    name towerEta_2_12_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_12_read \
    op interface \
    ports { towerEta_2_12_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 337 \
    name towerEta_2_13_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_13_read \
    op interface \
    ports { towerEta_2_13_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 338 \
    name towerEta_2_14_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_14_read \
    op interface \
    ports { towerEta_2_14_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 339 \
    name towerEta_2_15_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_15_read \
    op interface \
    ports { towerEta_2_15_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 340 \
    name towerEta_2_16_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_16_read \
    op interface \
    ports { towerEta_2_16_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 341 \
    name towerEta_2_17_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_17_read \
    op interface \
    ports { towerEta_2_17_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 342 \
    name towerEta_2_18_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_18_read \
    op interface \
    ports { towerEta_2_18_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 343 \
    name towerEta_2_19_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_19_read \
    op interface \
    ports { towerEta_2_19_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 344 \
    name towerEta_2_20_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_20_read \
    op interface \
    ports { towerEta_2_20_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 345 \
    name towerEta_2_21_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_21_read \
    op interface \
    ports { towerEta_2_21_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 346 \
    name towerEta_2_22_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_22_read \
    op interface \
    ports { towerEta_2_22_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 347 \
    name towerEta_2_23_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerEta_2_23_read \
    op interface \
    ports { towerEta_2_23_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 348 \
    name towerPhi_0_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_0_read \
    op interface \
    ports { towerPhi_0_0_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 349 \
    name towerPhi_0_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_1_read \
    op interface \
    ports { towerPhi_0_1_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 350 \
    name towerPhi_0_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_2_read \
    op interface \
    ports { towerPhi_0_2_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 351 \
    name towerPhi_0_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_3_read \
    op interface \
    ports { towerPhi_0_3_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 352 \
    name towerPhi_0_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_4_read \
    op interface \
    ports { towerPhi_0_4_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 353 \
    name towerPhi_0_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_5_read \
    op interface \
    ports { towerPhi_0_5_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 354 \
    name towerPhi_0_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_6_read \
    op interface \
    ports { towerPhi_0_6_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 355 \
    name towerPhi_0_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_7_read \
    op interface \
    ports { towerPhi_0_7_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 356 \
    name towerPhi_0_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_8_read \
    op interface \
    ports { towerPhi_0_8_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 357 \
    name towerPhi_0_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_9_read \
    op interface \
    ports { towerPhi_0_9_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 358 \
    name towerPhi_0_10_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_10_read \
    op interface \
    ports { towerPhi_0_10_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 359 \
    name towerPhi_0_11_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_11_read \
    op interface \
    ports { towerPhi_0_11_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 360 \
    name towerPhi_0_12_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_12_read \
    op interface \
    ports { towerPhi_0_12_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 361 \
    name towerPhi_0_13_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_13_read \
    op interface \
    ports { towerPhi_0_13_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 362 \
    name towerPhi_0_14_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_14_read \
    op interface \
    ports { towerPhi_0_14_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 363 \
    name towerPhi_0_15_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_15_read \
    op interface \
    ports { towerPhi_0_15_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 364 \
    name towerPhi_0_16_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_16_read \
    op interface \
    ports { towerPhi_0_16_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 365 \
    name towerPhi_0_17_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_17_read \
    op interface \
    ports { towerPhi_0_17_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 366 \
    name towerPhi_0_18_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_18_read \
    op interface \
    ports { towerPhi_0_18_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 367 \
    name towerPhi_0_19_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_19_read \
    op interface \
    ports { towerPhi_0_19_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 368 \
    name towerPhi_0_20_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_20_read \
    op interface \
    ports { towerPhi_0_20_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 369 \
    name towerPhi_0_21_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_21_read \
    op interface \
    ports { towerPhi_0_21_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 370 \
    name towerPhi_0_22_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_22_read \
    op interface \
    ports { towerPhi_0_22_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 371 \
    name towerPhi_0_23_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_0_23_read \
    op interface \
    ports { towerPhi_0_23_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 372 \
    name towerPhi_1_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_0_read \
    op interface \
    ports { towerPhi_1_0_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 373 \
    name towerPhi_1_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_1_read \
    op interface \
    ports { towerPhi_1_1_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 374 \
    name towerPhi_1_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_2_read \
    op interface \
    ports { towerPhi_1_2_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 375 \
    name towerPhi_1_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_3_read \
    op interface \
    ports { towerPhi_1_3_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 376 \
    name towerPhi_1_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_4_read \
    op interface \
    ports { towerPhi_1_4_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 377 \
    name towerPhi_1_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_5_read \
    op interface \
    ports { towerPhi_1_5_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 378 \
    name towerPhi_1_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_6_read \
    op interface \
    ports { towerPhi_1_6_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 379 \
    name towerPhi_1_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_7_read \
    op interface \
    ports { towerPhi_1_7_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 380 \
    name towerPhi_1_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_8_read \
    op interface \
    ports { towerPhi_1_8_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 381 \
    name towerPhi_1_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_9_read \
    op interface \
    ports { towerPhi_1_9_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 382 \
    name towerPhi_1_10_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_10_read \
    op interface \
    ports { towerPhi_1_10_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 383 \
    name towerPhi_1_11_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_11_read \
    op interface \
    ports { towerPhi_1_11_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 384 \
    name towerPhi_1_12_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_12_read \
    op interface \
    ports { towerPhi_1_12_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 385 \
    name towerPhi_1_13_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_13_read \
    op interface \
    ports { towerPhi_1_13_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 386 \
    name towerPhi_1_14_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_14_read \
    op interface \
    ports { towerPhi_1_14_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 387 \
    name towerPhi_1_15_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_15_read \
    op interface \
    ports { towerPhi_1_15_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 388 \
    name towerPhi_1_16_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_16_read \
    op interface \
    ports { towerPhi_1_16_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 389 \
    name towerPhi_1_17_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_17_read \
    op interface \
    ports { towerPhi_1_17_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 390 \
    name towerPhi_1_18_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_18_read \
    op interface \
    ports { towerPhi_1_18_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 391 \
    name towerPhi_1_19_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_19_read \
    op interface \
    ports { towerPhi_1_19_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 392 \
    name towerPhi_1_20_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_20_read \
    op interface \
    ports { towerPhi_1_20_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 393 \
    name towerPhi_1_21_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_21_read \
    op interface \
    ports { towerPhi_1_21_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 394 \
    name towerPhi_1_22_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_22_read \
    op interface \
    ports { towerPhi_1_22_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 395 \
    name towerPhi_1_23_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_1_23_read \
    op interface \
    ports { towerPhi_1_23_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 396 \
    name towerPhi_2_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_0_read \
    op interface \
    ports { towerPhi_2_0_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 397 \
    name towerPhi_2_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_1_read \
    op interface \
    ports { towerPhi_2_1_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 398 \
    name towerPhi_2_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_2_read \
    op interface \
    ports { towerPhi_2_2_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 399 \
    name towerPhi_2_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_3_read \
    op interface \
    ports { towerPhi_2_3_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 400 \
    name towerPhi_2_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_4_read \
    op interface \
    ports { towerPhi_2_4_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 401 \
    name towerPhi_2_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_5_read \
    op interface \
    ports { towerPhi_2_5_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 402 \
    name towerPhi_2_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_6_read \
    op interface \
    ports { towerPhi_2_6_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 403 \
    name towerPhi_2_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_7_read \
    op interface \
    ports { towerPhi_2_7_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 404 \
    name towerPhi_2_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_8_read \
    op interface \
    ports { towerPhi_2_8_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 405 \
    name towerPhi_2_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_9_read \
    op interface \
    ports { towerPhi_2_9_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 406 \
    name towerPhi_2_10_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_10_read \
    op interface \
    ports { towerPhi_2_10_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 407 \
    name towerPhi_2_11_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_11_read \
    op interface \
    ports { towerPhi_2_11_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 408 \
    name towerPhi_2_12_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_12_read \
    op interface \
    ports { towerPhi_2_12_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 409 \
    name towerPhi_2_13_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_13_read \
    op interface \
    ports { towerPhi_2_13_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 410 \
    name towerPhi_2_14_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_14_read \
    op interface \
    ports { towerPhi_2_14_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 411 \
    name towerPhi_2_15_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_15_read \
    op interface \
    ports { towerPhi_2_15_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 412 \
    name towerPhi_2_16_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_16_read \
    op interface \
    ports { towerPhi_2_16_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 413 \
    name towerPhi_2_17_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_17_read \
    op interface \
    ports { towerPhi_2_17_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 414 \
    name towerPhi_2_18_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_18_read \
    op interface \
    ports { towerPhi_2_18_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 415 \
    name towerPhi_2_19_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_19_read \
    op interface \
    ports { towerPhi_2_19_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 416 \
    name towerPhi_2_20_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_20_read \
    op interface \
    ports { towerPhi_2_20_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 417 \
    name towerPhi_2_21_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_21_read \
    op interface \
    ports { towerPhi_2_21_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 418 \
    name towerPhi_2_22_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_22_read \
    op interface \
    ports { towerPhi_2_22_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 419 \
    name towerPhi_2_23_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerPhi_2_23_read \
    op interface \
    ports { towerPhi_2_23_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 420 \
    name ClusterET_0_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_0_read \
    op interface \
    ports { ClusterET_0_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 421 \
    name ClusterET_0_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_1_read \
    op interface \
    ports { ClusterET_0_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 422 \
    name ClusterET_0_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_2_read \
    op interface \
    ports { ClusterET_0_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 423 \
    name ClusterET_0_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_3_read \
    op interface \
    ports { ClusterET_0_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 424 \
    name ClusterET_0_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_4_read \
    op interface \
    ports { ClusterET_0_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 425 \
    name ClusterET_0_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_5_read \
    op interface \
    ports { ClusterET_0_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 426 \
    name ClusterET_0_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_6_read \
    op interface \
    ports { ClusterET_0_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 427 \
    name ClusterET_0_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_7_read \
    op interface \
    ports { ClusterET_0_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 428 \
    name ClusterET_0_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_8_read \
    op interface \
    ports { ClusterET_0_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 429 \
    name ClusterET_0_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_9_read \
    op interface \
    ports { ClusterET_0_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 430 \
    name ClusterET_0_10_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_10_rea \
    op interface \
    ports { ClusterET_0_10_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 431 \
    name ClusterET_0_11_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_11_rea \
    op interface \
    ports { ClusterET_0_11_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 432 \
    name ClusterET_0_12_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_12_rea \
    op interface \
    ports { ClusterET_0_12_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 433 \
    name ClusterET_0_13_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_13_rea \
    op interface \
    ports { ClusterET_0_13_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 434 \
    name ClusterET_0_14_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_14_rea \
    op interface \
    ports { ClusterET_0_14_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 435 \
    name ClusterET_0_15_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_15_rea \
    op interface \
    ports { ClusterET_0_15_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 436 \
    name ClusterET_0_16_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_16_rea \
    op interface \
    ports { ClusterET_0_16_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 437 \
    name ClusterET_0_17_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_17_rea \
    op interface \
    ports { ClusterET_0_17_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 438 \
    name ClusterET_0_19_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_19_rea \
    op interface \
    ports { ClusterET_0_19_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 439 \
    name ClusterET_0_20_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_20_rea \
    op interface \
    ports { ClusterET_0_20_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 440 \
    name ClusterET_0_21_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_0_21_rea \
    op interface \
    ports { ClusterET_0_21_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 441 \
    name ClusterET_1_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_0_read \
    op interface \
    ports { ClusterET_1_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 442 \
    name ClusterET_1_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_1_read \
    op interface \
    ports { ClusterET_1_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 443 \
    name ClusterET_1_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_2_read \
    op interface \
    ports { ClusterET_1_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 444 \
    name ClusterET_1_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_3_read \
    op interface \
    ports { ClusterET_1_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 445 \
    name ClusterET_1_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_4_read \
    op interface \
    ports { ClusterET_1_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 446 \
    name ClusterET_1_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_5_read \
    op interface \
    ports { ClusterET_1_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 447 \
    name ClusterET_1_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_6_read \
    op interface \
    ports { ClusterET_1_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 448 \
    name ClusterET_1_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_7_read \
    op interface \
    ports { ClusterET_1_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 449 \
    name ClusterET_1_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_8_read \
    op interface \
    ports { ClusterET_1_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 450 \
    name ClusterET_1_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_9_read \
    op interface \
    ports { ClusterET_1_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 451 \
    name ClusterET_1_10_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_10_rea \
    op interface \
    ports { ClusterET_1_10_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 452 \
    name ClusterET_1_11_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_11_rea \
    op interface \
    ports { ClusterET_1_11_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 453 \
    name ClusterET_1_12_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_12_rea \
    op interface \
    ports { ClusterET_1_12_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 454 \
    name ClusterET_1_13_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_13_rea \
    op interface \
    ports { ClusterET_1_13_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 455 \
    name ClusterET_1_14_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_14_rea \
    op interface \
    ports { ClusterET_1_14_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 456 \
    name ClusterET_1_15_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_15_rea \
    op interface \
    ports { ClusterET_1_15_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 457 \
    name ClusterET_1_16_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_16_rea \
    op interface \
    ports { ClusterET_1_16_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 458 \
    name ClusterET_1_17_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_17_rea \
    op interface \
    ports { ClusterET_1_17_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 459 \
    name ClusterET_1_19_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_19_rea \
    op interface \
    ports { ClusterET_1_19_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 460 \
    name ClusterET_1_20_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_20_rea \
    op interface \
    ports { ClusterET_1_20_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 461 \
    name ClusterET_1_21_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_1_21_rea \
    op interface \
    ports { ClusterET_1_21_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 462 \
    name ClusterET_2_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_0_read \
    op interface \
    ports { ClusterET_2_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 463 \
    name ClusterET_2_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_1_read \
    op interface \
    ports { ClusterET_2_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 464 \
    name ClusterET_2_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_2_read \
    op interface \
    ports { ClusterET_2_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 465 \
    name ClusterET_2_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_3_read \
    op interface \
    ports { ClusterET_2_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 466 \
    name ClusterET_2_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_4_read \
    op interface \
    ports { ClusterET_2_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 467 \
    name ClusterET_2_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_5_read \
    op interface \
    ports { ClusterET_2_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 468 \
    name ClusterET_2_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_6_read \
    op interface \
    ports { ClusterET_2_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 469 \
    name ClusterET_2_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_7_read \
    op interface \
    ports { ClusterET_2_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 470 \
    name ClusterET_2_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_8_read \
    op interface \
    ports { ClusterET_2_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 471 \
    name ClusterET_2_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_9_read \
    op interface \
    ports { ClusterET_2_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 472 \
    name ClusterET_2_10_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_10_rea \
    op interface \
    ports { ClusterET_2_10_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 473 \
    name ClusterET_2_11_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_11_rea \
    op interface \
    ports { ClusterET_2_11_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 474 \
    name ClusterET_2_12_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_12_rea \
    op interface \
    ports { ClusterET_2_12_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 475 \
    name ClusterET_2_13_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_13_rea \
    op interface \
    ports { ClusterET_2_13_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 476 \
    name ClusterET_2_14_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_14_rea \
    op interface \
    ports { ClusterET_2_14_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 477 \
    name ClusterET_2_15_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_15_rea \
    op interface \
    ports { ClusterET_2_15_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 478 \
    name ClusterET_2_16_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_16_rea \
    op interface \
    ports { ClusterET_2_16_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 479 \
    name ClusterET_2_17_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_17_rea \
    op interface \
    ports { ClusterET_2_17_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 480 \
    name ClusterET_2_19_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_19_rea \
    op interface \
    ports { ClusterET_2_19_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 481 \
    name ClusterET_2_20_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_20_rea \
    op interface \
    ports { ClusterET_2_20_rea { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 482 \
    name ClusterET_2_21_rea \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ClusterET_2_21_rea \
    op interface \
    ports { ClusterET_2_21_rea { I 16 vector } } \
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

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
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
    id -4 \
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


