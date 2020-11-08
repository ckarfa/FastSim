// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module addFloat64Sigs (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        a,
        b,
        zSign,
        ap_return
);

parameter    ap_ST_fsm_state1 = 8'd1;
parameter    ap_ST_fsm_state2 = 8'd2;
parameter    ap_ST_fsm_state3 = 8'd4;
parameter    ap_ST_fsm_state4 = 8'd8;
parameter    ap_ST_fsm_state5 = 8'd16;
parameter    ap_ST_fsm_state6 = 8'd32;
parameter    ap_ST_fsm_state7 = 8'd64;
parameter    ap_ST_fsm_state8 = 8'd128;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [63:0] a;
input  [63:0] b;
input  [0:0] zSign;
output  [63:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[63:0] ap_return;

(* fsm_encoding = "none" *) reg   [7:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [31:0] float_exception_flag;
wire   [51:0] aSig_fu_296_p1;
reg   [51:0] aSig_reg_1570;
wire   [10:0] aExp_fu_300_p4;
reg   [10:0] aExp_reg_1575;
wire   [11:0] aExp_cast_fu_312_p1;
wire   [10:0] bExp_fu_320_p4;
reg   [10:0] bExp_reg_1586;
wire   [11:0] expDiff_fu_334_p2;
reg   [11:0] expDiff_reg_1591;
wire   [61:0] aSig_1_cast2_cast_fu_352_p1;
reg   [61:0] aSig_1_cast2_cast_reg_1597;
wire   [61:0] bSig_1_cast1_cast_fu_368_p1;
reg   [61:0] bSig_1_cast1_cast_reg_1603;
wire   [0:0] tmp_1_fu_372_p2;
reg   [0:0] tmp_1_reg_1608;
wire   [0:0] tmp_3_fu_378_p3;
reg   [0:0] tmp_3_reg_1612;
wire   [0:0] grp_fu_238_p2;
reg   [0:0] tmp_s_reg_1616;
wire   [0:0] grp_fu_243_p2;
reg   [0:0] tmp_28_reg_1620;
wire   [63:0] zSig_fu_400_p2;
wire   [63:0] tmp_58_fu_426_p4;
wire   [63:0] p_mux4_fu_526_p3;
wire   [0:0] tmp_27_fu_442_p2;
wire   [63:0] b_assign_5_fu_534_p3;
wire   [0:0] tmp_55_fu_520_p2;
wire   [0:0] tmp_9_fu_542_p2;
reg   [0:0] tmp_9_reg_1650;
wire   [63:0] p_mux2_fu_632_p3;
wire   [0:0] tmp_22_fu_548_p2;
wire   [63:0] b_assign_4_fu_640_p3;
wire   [0:0] tmp_43_fu_626_p2;
wire   [63:0] tmp_32_fu_656_p2;
reg   [0:0] tmp_2_reg_1675;
wire   [61:0] bSig_3_fu_684_p3;
reg   [61:0] bSig_3_reg_1679;
wire   [10:0] expDiff_2_fu_692_p3;
reg   [10:0] expDiff_2_reg_1687;
wire   [0:0] icmp_fu_714_p2;
reg   [0:0] icmp_reg_1693;
wire   [5:0] tmp_9_i_fu_720_p2;
reg   [5:0] tmp_9_i_reg_1698;
wire   [63:0] p_mux_fu_810_p3;
wire   [0:0] tmp_4_fu_726_p2;
wire   [63:0] b_assign_3_fu_818_p3;
wire   [0:0] tmp_21_fu_804_p2;
wire   [61:0] aSig_3_fu_840_p3;
reg   [61:0] aSig_3_reg_1719;
wire    ap_CS_fsm_state2;
wire   [11:0] count_assign_1_fu_862_p2;
reg   [11:0] count_assign_1_reg_1726;
wire   [0:0] tmp_i3_fu_868_p2;
reg   [0:0] tmp_i3_reg_1731;
wire   [0:0] icmp7_fu_884_p2;
reg   [0:0] icmp7_reg_1737;
wire   [0:0] tmp_3_i1_fu_900_p2;
reg   [0:0] tmp_3_i1_reg_1742;
wire   [61:0] z_6_fu_968_p3;
wire    ap_CS_fsm_state3;
wire   [61:0] z_5_fu_1061_p3;
wire    ap_CS_fsm_state4;
wire   [11:0] zExp_0_s_fu_1118_p3;
wire    ap_CS_fsm_state5;
wire   [63:0] p_s_fu_1126_p3;
wire   [9:0] roundBits_fu_1138_p1;
reg   [9:0] roundBits_reg_1767;
wire    ap_CS_fsm_state6;
wire   [0:0] tmp_1_i1_fu_1142_p2;
reg   [0:0] tmp_1_i1_reg_1773;
wire   [63:0] zPtr_write_assign_fu_1252_p3;
reg   [63:0] zPtr_write_assign_reg_1781;
wire   [9:0] roundBits_1_fu_1260_p1;
reg   [9:0] roundBits_1_reg_1786;
wire   [0:0] sel_tmp10_i_fu_1300_p2;
reg   [0:0] sel_tmp10_i_reg_1792;
wire   [0:0] sel_tmp56_i_fu_1312_p2;
reg   [0:0] sel_tmp56_i_reg_1801;
wire   [0:0] tmp_16_i_fu_1318_p2;
reg   [0:0] tmp_16_i_reg_1808;
wire    ap_CS_fsm_state7;
wire   [0:0] not_tmp_1_i_fu_1347_p2;
reg   [0:0] not_tmp_1_i_reg_1814;
wire   [53:0] zSig1_2_fu_1389_p2;
reg   [53:0] zSig1_2_reg_1820;
wire   [0:0] tmp_26_i_fu_1395_p2;
reg   [0:0] tmp_26_i_reg_1825;
reg   [61:0] bSig_s_reg_164;
reg   [61:0] aSig_s_reg_173;
reg   [10:0] zExp_2_reg_182;
reg   [11:0] zExp_assign_reg_191;
reg   [63:0] zSig_assign_5_reg_201;
wire   [63:0] p_0_i_fu_1544_p3;
reg   [63:0] ap_phi_mux_p_0_phi_fu_214_p22;
reg   [63:0] p_0_reg_211;
wire    ap_CS_fsm_state8;
wire   [31:0] grp_fu_284_p2;
wire   [31:0] float_exception_flag_10_fu_1537_p3;
wire   [0:0] float_exception_flag_9_fu_1531_p2;
reg   [10:0] grp_fu_243_p0;
wire   [11:0] bExp_cast_fu_330_p1;
wire   [60:0] aSig_1_fu_344_p3;
wire   [51:0] bSig_fu_316_p1;
wire   [60:0] bSig_1_fu_356_p3;
wire   [62:0] tmp_59_fu_386_p4;
wire   [63:0] bSig_1_cast1_fu_364_p1;
wire   [63:0] tmp_69_cast_fu_396_p1;
wire   [61:0] tmp_56_fu_406_p2;
wire   [52:0] zSig1_fu_412_p4;
wire   [61:0] zSig1_1_fu_422_p1;
wire   [60:0] tmp_26_fu_436_p2;
wire   [11:0] grp_fu_248_p4;
wire   [62:0] tmp_45_fu_448_p3;
wire   [50:0] tmp_75_fu_462_p1;
wire   [0:0] tmp_46_fu_456_p2;
wire   [0:0] tmp_47_fu_466_p2;
wire   [63:0] tmp_76_fu_478_p2;
wire   [11:0] grp_fu_258_p4;
wire   [62:0] tmp_51_fu_490_p3;
wire   [50:0] tmp_80_fu_504_p1;
wire   [0:0] tmp_52_fu_498_p2;
wire   [0:0] tmp_53_fu_508_p2;
wire   [0:0] tmp_48_fu_472_p2;
wire   [0:0] tmp_54_fu_514_p2;
wire   [63:0] grp_fu_274_p2;
wire   [63:0] grp_fu_268_p2;
wire   [0:0] tmp_50_fu_484_p2;
wire   [62:0] tmp_33_fu_554_p3;
wire   [50:0] tmp_68_fu_568_p1;
wire   [0:0] tmp_34_fu_562_p2;
wire   [0:0] tmp_35_fu_572_p2;
wire   [63:0] tmp_69_fu_584_p2;
wire   [62:0] tmp_39_fu_596_p3;
wire   [50:0] tmp_71_fu_610_p1;
wire   [0:0] tmp_40_fu_604_p2;
wire   [0:0] tmp_41_fu_614_p2;
wire   [0:0] tmp_36_fu_578_p2;
wire   [0:0] tmp_42_fu_620_p2;
wire   [0:0] tmp_38_fu_590_p2;
wire   [63:0] tmp_31_fu_648_p3;
wire   [10:0] tmp_fu_340_p1;
wire   [0:0] tmp_5_fu_662_p2;
wire   [61:0] bSig_2_fu_674_p4;
wire   [10:0] expDiff_2_cast_fu_668_p2;
wire   [4:0] tmp_15_fu_704_p4;
wire   [5:0] tmp_6_fu_700_p1;
wire   [62:0] tmp_11_fu_732_p3;
wire   [50:0] tmp_37_fu_746_p1;
wire   [0:0] tmp_12_fu_740_p2;
wire   [0:0] tmp_13_fu_750_p2;
wire   [63:0] tmp_44_fu_762_p2;
wire   [62:0] tmp_17_fu_774_p3;
wire   [50:0] tmp_57_fu_788_p1;
wire   [0:0] tmp_18_fu_782_p2;
wire   [0:0] tmp_19_fu_792_p2;
wire   [0:0] tmp_14_fu_756_p2;
wire   [0:0] tmp_20_fu_798_p2;
wire   [0:0] tmp_16_fu_768_p2;
wire   [61:0] aSig_2_fu_831_p4;
wire   [11:0] expDiff_3_fu_826_p2;
wire   [11:0] expDiff_1_fu_851_p3;
wire   [5:0] tmp_64_fu_874_p4;
wire   [5:0] tmp_61_fu_858_p1;
wire   [63:0] aSig_3_cast_fu_847_p1;
wire   [63:0] tmp_1_i8_fu_890_p1;
wire   [63:0] tmp_2_i9_fu_894_p2;
wire   [61:0] tmp_7_i5_cast_fu_906_p1;
wire   [61:0] tmp_8_i6_fu_909_p2;
wire   [0:0] tmp_66_fu_914_p1;
wire   [60:0] tmp_24_fu_923_p4;
wire   [0:0] tmp_10_i1_fu_918_p2;
wire   [0:0] tmp_5_i1_fu_941_p2;
wire   [0:0] sel_tmp_i1_fu_950_p2;
wire   [0:0] sel_tmp1_i1_fu_955_p2;
wire   [61:0] tmp_25_fu_933_p3;
wire   [61:0] z_5_cast_fu_946_p1;
wire   [61:0] z_2_fu_960_p3;
wire   [61:0] tmp_7_i_cast_fu_982_p1;
wire   [63:0] bSig_3_cast_fu_974_p1;
wire   [63:0] tmp_1_i_fu_990_p1;
wire   [63:0] tmp_2_i_fu_993_p2;
wire   [61:0] tmp_8_i_fu_985_p2;
wire   [0:0] tmp_30_fu_1005_p1;
wire   [0:0] tmp_3_i_fu_999_p2;
wire   [60:0] tmp_7_fu_1015_p4;
wire   [0:0] tmp_10_i_fu_1009_p2;
wire   [0:0] tmp_5_i_fu_1033_p2;
wire   [0:0] tmp_i_fu_977_p2;
wire   [0:0] sel_tmp_i_fu_1042_p2;
wire   [0:0] sel_tmp1_i_fu_1048_p2;
wire   [61:0] tmp_8_fu_1025_p3;
wire   [61:0] z_1_cast_fu_1038_p1;
wire   [61:0] z_fu_1053_p3;
wire   [61:0] aSig_4_fu_1076_p2;
wire   [62:0] aSig_4_cast_fu_1082_p1;
wire   [62:0] bSig_cast_fu_1068_p1;
wire   [62:0] zSig_1_fu_1086_p2;
wire   [11:0] zExp_3_cast_fu_1072_p1;
wire   [0:0] tmp_73_fu_1110_p3;
wire   [11:0] zExp_3_fu_1104_p2;
wire   [63:0] zSig_1_cast_fu_1092_p1;
wire   [63:0] zSig_2_fu_1096_p3;
wire   [63:0] tmp_5_i2_fu_1160_p2;
wire   [11:0] count_assign_2_fu_1182_p2;
wire  signed [31:0] count_assign_i_cast_fu_1188_p1;
wire   [63:0] tmp_7_i_i_fu_1198_p1;
wire   [5:0] tmp_81_fu_1134_p1;
wire   [63:0] tmp_1_i_i_fu_1208_p1;
wire   [63:0] tmp_2_i_i_fu_1212_p2;
wire   [63:0] tmp_8_i_i_fu_1202_p2;
wire   [0:0] tmp_85_fu_1224_p1;
wire   [0:0] tmp_3_i_i_fu_1218_p2;
wire   [62:0] tmp_11_i_i_fu_1234_p4;
wire   [0:0] tmp_10_i_i_fu_1228_p2;
wire   [0:0] tmp_i_i_fu_1192_p2;
wire   [63:0] z_4_fu_1244_p3;
wire   [0:0] tmp_2_i1_fu_1148_p2;
wire   [0:0] tmp_3_i2_fu_1154_p2;
wire   [0:0] tmp_83_fu_1166_p3;
wire   [0:0] sel_tmp9_i_demorgan_fu_1276_p2;
wire   [0:0] tmp_84_fu_1174_p3;
wire   [0:0] sel_tmp4_i_fu_1264_p2;
wire   [0:0] sel_tmp9_i_fu_1282_p2;
wire   [0:0] tmp35_fu_1294_p2;
wire   [0:0] tmp34_fu_1288_p2;
wire   [0:0] sel_tmp9_demorgan_i_fu_1270_p2;
wire   [0:0] sel_tmp55_i_fu_1306_p2;
wire   [63:0] zSig_assign_1_fu_1323_p3;
wire   [9:0] roundBits_2_fu_1336_p3;
wire   [9:0] roundBits_3_fu_1341_p3;
wire   [63:0] zSig_assign_2_fu_1329_p3;
wire   [63:0] tmp_21_i_fu_1353_p2;
wire   [0:0] tmp_22_i_fu_1369_p2;
wire   [31:0] tmp_23_i_fu_1375_p1;
wire   [31:0] tmp_24_i_fu_1379_p2;
wire   [53:0] zSig_assign_1_i_cast_fu_1359_p4;
wire  signed [53:0] tmp_25_i_cast_fu_1385_p1;
wire   [63:0] tmp_12_i_fu_1407_p3;
wire   [31:0] tmp_17_i_fu_1420_p2;
wire   [0:0] not_tmp_i_fu_1426_p2;
wire   [31:0] float_exception_flag_5_fu_1431_p3;
wire   [31:0] sel_tmp21_i_fu_1443_p3;
wire   [31:0] float_exception_flag_7_fu_1450_p3;
wire   [0:0] tmp_87_fu_1457_p1;
wire   [30:0] tmp_63_fu_1466_p4;
wire   [0:0] tmp_62_fu_1461_p2;
wire   [11:0] tmp_77_fu_1484_p3;
wire   [11:0] tmp_78_fu_1491_p3;
wire   [11:0] tmp_79_fu_1498_p3;
wire   [63:0] tmp_31_i_fu_1513_p4;
wire   [63:0] tmp_30_i_fu_1505_p3;
wire   [0:0] tmp36_fu_1527_p2;
wire   [0:0] float_exception_flag_6_fu_1438_p2;
wire   [31:0] tmp_10_i2_fu_1401_p2;
wire   [31:0] float_exception_flag_8_fu_1476_p3;
wire   [63:0] tmp_13_i_fu_1414_p2;
wire   [63:0] tmp_32_i_fu_1521_p2;
reg   [63:0] ap_return_preg;
reg   [7:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 8'd1;
#0 float_exception_flag = 32'd0;
#0 ap_return_preg = 64'd0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_preg <= 64'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state8)) begin
            ap_return_preg <= ap_phi_mux_p_0_phi_fu_214_p22;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        aSig_s_reg_173 <= z_6_fu_968_p3;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        aSig_s_reg_173 <= aSig_1_cast2_cast_reg_1597;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        bSig_s_reg_164 <= bSig_1_cast1_cast_reg_1603;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        bSig_s_reg_164 <= z_5_fu_1061_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state8) & ((((float_exception_flag_9_fu_1531_p2 == 1'd1) & (tmp_9_reg_1650 == 1'd0) & (tmp_3_reg_1612 == 1'd1) & (tmp_1_reg_1608 == 1'd0)) | ((float_exception_flag_9_fu_1531_p2 == 1'd1) & (tmp_2_reg_1675 == 1'd0) & (tmp_1_reg_1608 == 1'd1))) | ((float_exception_flag_9_fu_1531_p2 == 1'd1) & (tmp_28_reg_1620 == 1'd0) & (tmp_s_reg_1616 == 1'd0) & (tmp_3_reg_1612 == 1'd0) & (tmp_1_reg_1608 == 1'd0))))) begin
        float_exception_flag <= float_exception_flag_10_fu_1537_p3;
    end else if ((((tmp_21_fu_804_p2 == 1'd1) & (grp_fu_238_p2 == 1'd1) & (tmp_4_fu_726_p2 == 1'd0) & (tmp_1_fu_372_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) | ((tmp_9_fu_542_p2 == 1'd1) & (tmp_43_fu_626_p2 == 1'd1) & (tmp_22_fu_548_p2 == 1'd0) & (tmp_3_fu_378_p3 == 1'd1) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) | ((tmp_55_fu_520_p2 == 1'd1) & (grp_fu_238_p2 == 1'd1) & (tmp_27_fu_442_p2 == 1'd0) & (tmp_3_fu_378_p3 == 1'd0) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        float_exception_flag <= grp_fu_284_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_55_fu_520_p2 == 1'd1) & (grp_fu_238_p2 == 1'd1) & (tmp_27_fu_442_p2 == 1'd0) & (tmp_3_fu_378_p3 == 1'd0) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        p_0_reg_211 <= p_mux4_fu_526_p3;
    end else if (((tmp_9_fu_542_p2 == 1'd1) & (tmp_43_fu_626_p2 == 1'd1) & (tmp_22_fu_548_p2 == 1'd0) & (tmp_3_fu_378_p3 == 1'd1) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        p_0_reg_211 <= p_mux2_fu_632_p3;
    end else if (((tmp_21_fu_804_p2 == 1'd1) & (grp_fu_238_p2 == 1'd1) & (tmp_4_fu_726_p2 == 1'd0) & (tmp_1_fu_372_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        p_0_reg_211 <= p_mux_fu_810_p3;
    end else if ((((tmp_4_fu_726_p2 == 1'd1) & (grp_fu_238_p2 == 1'd1) & (tmp_1_fu_372_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) | ((tmp_27_fu_442_p2 == 1'd1) & (grp_fu_238_p2 == 1'd1) & (tmp_3_fu_378_p3 == 1'd0) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        p_0_reg_211 <= a;
    end else if (((grp_fu_238_p2 == 1'd1) & (tmp_55_fu_520_p2 == 1'd0) & (tmp_27_fu_442_p2 == 1'd0) & (tmp_3_fu_378_p3 == 1'd0) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        p_0_reg_211 <= b_assign_5_fu_534_p3;
    end else if (((tmp_9_fu_542_p2 == 1'd1) & (tmp_43_fu_626_p2 == 1'd0) & (tmp_22_fu_548_p2 == 1'd0) & (tmp_3_fu_378_p3 == 1'd1) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        p_0_reg_211 <= b_assign_4_fu_640_p3;
    end else if (((grp_fu_238_p2 == 1'd1) & (tmp_21_fu_804_p2 == 1'd0) & (tmp_4_fu_726_p2 == 1'd0) & (tmp_1_fu_372_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        p_0_reg_211 <= b_assign_3_fu_818_p3;
    end else if (((grp_fu_243_p2 == 1'd1) & (grp_fu_238_p2 == 1'd0) & (tmp_3_fu_378_p3 == 1'd0) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        p_0_reg_211 <= tmp_58_fu_426_p4;
    end else if (((tmp_9_fu_542_p2 == 1'd1) & (tmp_22_fu_548_p2 == 1'd1) & (tmp_3_fu_378_p3 == 1'd1) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        p_0_reg_211 <= tmp_32_fu_656_p2;
    end else if (((1'b1 == ap_CS_fsm_state8) & ((((tmp_9_reg_1650 == 1'd0) & (tmp_3_reg_1612 == 1'd1) & (tmp_1_reg_1608 == 1'd0)) | ((tmp_2_reg_1675 == 1'd0) & (tmp_1_reg_1608 == 1'd1))) | ((tmp_28_reg_1620 == 1'd0) & (tmp_s_reg_1616 == 1'd0) & (tmp_3_reg_1612 == 1'd0) & (tmp_1_reg_1608 == 1'd0))))) begin
        p_0_reg_211 <= p_0_i_fu_1544_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        zExp_2_reg_182 <= bExp_reg_1586;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        zExp_2_reg_182 <= aExp_reg_1575;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        zExp_assign_reg_191 <= zExp_0_s_fu_1118_p3;
    end else if (((grp_fu_243_p2 == 1'd0) & (grp_fu_238_p2 == 1'd0) & (tmp_3_fu_378_p3 == 1'd0) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        zExp_assign_reg_191 <= aExp_cast_fu_312_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        zSig_assign_5_reg_201 <= p_s_fu_1126_p3;
    end else if (((grp_fu_243_p2 == 1'd0) & (grp_fu_238_p2 == 1'd0) & (tmp_3_fu_378_p3 == 1'd0) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        zSig_assign_5_reg_201 <= zSig_fu_400_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        aExp_reg_1575 <= {{a[62:52]}};
        aSig_1_cast2_cast_reg_1597[60 : 9] <= aSig_1_cast2_cast_fu_352_p1[60 : 9];
        aSig_reg_1570 <= aSig_fu_296_p1;
        bExp_reg_1586 <= {{b[62:52]}};
        bSig_1_cast1_cast_reg_1603[60 : 9] <= bSig_1_cast1_cast_fu_368_p1[60 : 9];
        expDiff_reg_1591 <= expDiff_fu_334_p2;
        tmp_1_reg_1608 <= tmp_1_fu_372_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        aSig_3_reg_1719[61 : 9] <= aSig_3_fu_840_p3[61 : 9];
        count_assign_1_reg_1726 <= count_assign_1_fu_862_p2;
        icmp7_reg_1737 <= icmp7_fu_884_p2;
        tmp_3_i1_reg_1742 <= tmp_3_i1_fu_900_p2;
        tmp_i3_reg_1731 <= tmp_i3_fu_868_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_fu_238_p2 == 1'd0) & (tmp_1_fu_372_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        bSig_3_reg_1679[61 : 9] <= bSig_3_fu_684_p3[61 : 9];
        expDiff_2_reg_1687 <= expDiff_2_fu_692_p3;
        icmp_reg_1693 <= icmp_fu_714_p2;
        tmp_9_i_reg_1698 <= tmp_9_i_fu_720_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        not_tmp_1_i_reg_1814 <= not_tmp_1_i_fu_1347_p2;
        tmp_16_i_reg_1808 <= tmp_16_i_fu_1318_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        roundBits_1_reg_1786 <= roundBits_1_fu_1260_p1;
        roundBits_reg_1767 <= roundBits_fu_1138_p1;
        sel_tmp10_i_reg_1792 <= sel_tmp10_i_fu_1300_p2;
        sel_tmp56_i_reg_1801 <= sel_tmp56_i_fu_1312_p2;
        tmp_1_i1_reg_1773 <= tmp_1_i1_fu_1142_p2;
        zPtr_write_assign_reg_1781 <= zPtr_write_assign_fu_1252_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((sel_tmp56_i_reg_1801 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        tmp_26_i_reg_1825 <= tmp_26_i_fu_1395_p2;
        zSig1_2_reg_1820 <= zSig1_2_fu_1389_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_fu_238_p2 == 1'd0) & (tmp_3_fu_378_p3 == 1'd0) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        tmp_28_reg_1620 <= grp_fu_243_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_1_fu_372_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        tmp_2_reg_1675 <= grp_fu_238_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        tmp_3_reg_1612 <= expDiff_fu_334_p2[32'd11];
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_3_fu_378_p3 == 1'd1) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        tmp_9_reg_1650 <= tmp_9_fu_542_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_3_fu_378_p3 == 1'd0) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        tmp_s_reg_1616 <= grp_fu_238_p2;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) & ((((tmp_9_reg_1650 == 1'd0) & (tmp_3_reg_1612 == 1'd1) & (tmp_1_reg_1608 == 1'd0)) | ((tmp_2_reg_1675 == 1'd0) & (tmp_1_reg_1608 == 1'd1))) | ((tmp_28_reg_1620 == 1'd0) & (tmp_s_reg_1616 == 1'd0) & (tmp_3_reg_1612 == 1'd0) & (tmp_1_reg_1608 == 1'd0))))) begin
        ap_phi_mux_p_0_phi_fu_214_p22 = p_0_i_fu_1544_p3;
    end else begin
        ap_phi_mux_p_0_phi_fu_214_p22 = p_0_reg_211;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        ap_return = ap_phi_mux_p_0_phi_fu_214_p22;
    end else begin
        ap_return = ap_return_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_fu_243_p0 = aExp_reg_1575;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        grp_fu_243_p0 = {{a[62:52]}};
    end else begin
        grp_fu_243_p0 = 'bx;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((grp_fu_238_p2 == 1'd0) & (tmp_1_fu_372_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else if (((tmp_9_fu_542_p2 == 1'd0) & (tmp_3_fu_378_p3 == 1'd1) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1) & (((((grp_fu_238_p2 == 1'd1) & (tmp_1_fu_372_p2 == 1'd1)) | ((tmp_9_fu_542_p2 == 1'd1) & (tmp_3_fu_378_p3 == 1'd1) & (tmp_1_fu_372_p2 == 1'd0))) | ((grp_fu_243_p2 == 1'd1) & (tmp_3_fu_378_p3 == 1'd0) & (tmp_1_fu_372_p2 == 1'd0))) | ((grp_fu_238_p2 == 1'd1) & (tmp_3_fu_378_p3 == 1'd0) & (tmp_1_fu_372_p2 == 1'd0))))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else if (((grp_fu_243_p2 == 1'd0) & (grp_fu_238_p2 == 1'd0) & (tmp_3_fu_378_p3 == 1'd0) & (tmp_1_fu_372_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign aExp_cast_fu_312_p1 = aExp_fu_300_p4;

assign aExp_fu_300_p4 = {{a[62:52]}};

assign aSig_1_cast2_cast_fu_352_p1 = aSig_1_fu_344_p3;

assign aSig_1_fu_344_p3 = {{aSig_fu_296_p1}, {9'd0}};

assign aSig_2_fu_831_p4 = {{{{1'd1}, {aSig_reg_1570}}}, {9'd0}};

assign aSig_3_cast_fu_847_p1 = aSig_3_fu_840_p3;

assign aSig_3_fu_840_p3 = ((grp_fu_243_p2[0:0] === 1'b1) ? aSig_1_cast2_cast_reg_1597 : aSig_2_fu_831_p4);

assign aSig_4_cast_fu_1082_p1 = aSig_4_fu_1076_p2;

assign aSig_4_fu_1076_p2 = (62'd2305843009213693952 | aSig_s_reg_173);

assign aSig_fu_296_p1 = a[51:0];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign bExp_cast_fu_330_p1 = bExp_fu_320_p4;

assign bExp_fu_320_p4 = {{b[62:52]}};

assign bSig_1_cast1_cast_fu_368_p1 = bSig_1_fu_356_p3;

assign bSig_1_cast1_fu_364_p1 = bSig_1_fu_356_p3;

assign bSig_1_fu_356_p3 = {{bSig_fu_316_p1}, {9'd0}};

assign bSig_2_fu_674_p4 = {{{{1'd1}, {bSig_fu_316_p1}}}, {9'd0}};

assign bSig_3_cast_fu_974_p1 = bSig_3_reg_1679;

assign bSig_3_fu_684_p3 = ((tmp_5_fu_662_p2[0:0] === 1'b1) ? bSig_1_cast1_cast_fu_368_p1 : bSig_2_fu_674_p4);

assign bSig_cast_fu_1068_p1 = bSig_s_reg_164;

assign bSig_fu_316_p1 = b[51:0];

assign b_assign_3_fu_818_p3 = ((tmp_16_fu_768_p2[0:0] === 1'b1) ? grp_fu_274_p2 : grp_fu_268_p2);

assign b_assign_4_fu_640_p3 = ((tmp_38_fu_590_p2[0:0] === 1'b1) ? grp_fu_274_p2 : grp_fu_268_p2);

assign b_assign_5_fu_534_p3 = ((tmp_50_fu_484_p2[0:0] === 1'b1) ? grp_fu_274_p2 : grp_fu_268_p2);

assign count_assign_1_fu_862_p2 = (12'd0 - expDiff_1_fu_851_p3);

assign count_assign_2_fu_1182_p2 = (12'd0 - zExp_assign_reg_191);

assign count_assign_i_cast_fu_1188_p1 = $signed(count_assign_2_fu_1182_p2);

assign expDiff_1_fu_851_p3 = ((grp_fu_243_p2[0:0] === 1'b1) ? expDiff_3_fu_826_p2 : expDiff_reg_1591);

assign expDiff_2_cast_fu_668_p2 = ($signed(11'd2047) + $signed(tmp_fu_340_p1));

assign expDiff_2_fu_692_p3 = ((tmp_5_fu_662_p2[0:0] === 1'b1) ? expDiff_2_cast_fu_668_p2 : tmp_fu_340_p1);

assign expDiff_3_fu_826_p2 = (12'd1 + expDiff_reg_1591);

assign expDiff_fu_334_p2 = (aExp_cast_fu_312_p1 - bExp_cast_fu_330_p1);

assign float_exception_flag_10_fu_1537_p3 = ((sel_tmp56_i_reg_1801[0:0] === 1'b1) ? tmp_10_i2_fu_1401_p2 : float_exception_flag_8_fu_1476_p3);

assign float_exception_flag_5_fu_1431_p3 = ((tmp_16_i_reg_1808[0:0] === 1'b1) ? float_exception_flag : tmp_17_i_fu_1420_p2);

assign float_exception_flag_6_fu_1438_p2 = (sel_tmp10_i_reg_1792 & not_tmp_i_fu_1426_p2);

assign float_exception_flag_7_fu_1450_p3 = ((tmp_1_i1_reg_1773[0:0] === 1'b1) ? sel_tmp21_i_fu_1443_p3 : float_exception_flag);

assign float_exception_flag_8_fu_1476_p3 = {{tmp_63_fu_1466_p4}, {tmp_62_fu_1461_p2}};

assign float_exception_flag_9_fu_1531_p2 = (tmp36_fu_1527_p2 | float_exception_flag_6_fu_1438_p2);

assign grp_fu_238_p2 = ((aExp_fu_300_p4 == 11'd2047) ? 1'b1 : 1'b0);

assign grp_fu_243_p2 = ((grp_fu_243_p0 == 11'd0) ? 1'b1 : 1'b0);

assign grp_fu_248_p4 = {{a[62:51]}};

assign grp_fu_258_p4 = {{b[62:51]}};

assign grp_fu_268_p2 = (64'd2251799813685248 | a);

assign grp_fu_274_p2 = (b | 64'd2251799813685248);

assign grp_fu_284_p2 = (float_exception_flag | 32'd16);

assign icmp7_fu_884_p2 = (($signed(tmp_64_fu_874_p4) < $signed(6'd1)) ? 1'b1 : 1'b0);

assign icmp_fu_714_p2 = ((tmp_15_fu_704_p4 == 5'd0) ? 1'b1 : 1'b0);

assign not_tmp_1_i_fu_1347_p2 = ((roundBits_3_fu_1341_p3 != 10'd0) ? 1'b1 : 1'b0);

assign not_tmp_i_fu_1426_p2 = (tmp_16_i_reg_1808 ^ 1'd1);

assign p_0_i_fu_1544_p3 = ((sel_tmp56_i_reg_1801[0:0] === 1'b1) ? tmp_13_i_fu_1414_p2 : tmp_32_i_fu_1521_p2);

assign p_mux2_fu_632_p3 = ((tmp_42_fu_620_p2[0:0] === 1'b1) ? grp_fu_274_p2 : grp_fu_268_p2);

assign p_mux4_fu_526_p3 = ((tmp_54_fu_514_p2[0:0] === 1'b1) ? grp_fu_274_p2 : grp_fu_268_p2);

assign p_mux_fu_810_p3 = ((tmp_20_fu_798_p2[0:0] === 1'b1) ? grp_fu_274_p2 : grp_fu_268_p2);

assign p_s_fu_1126_p3 = ((tmp_73_fu_1110_p3[0:0] === 1'b1) ? zSig_1_cast_fu_1092_p1 : zSig_2_fu_1096_p3);

assign roundBits_1_fu_1260_p1 = zPtr_write_assign_fu_1252_p3[9:0];

assign roundBits_2_fu_1336_p3 = ((sel_tmp10_i_reg_1792[0:0] === 1'b1) ? roundBits_1_reg_1786 : roundBits_reg_1767);

assign roundBits_3_fu_1341_p3 = ((tmp_1_i1_reg_1773[0:0] === 1'b1) ? roundBits_2_fu_1336_p3 : roundBits_reg_1767);

assign roundBits_fu_1138_p1 = zSig_assign_5_reg_201[9:0];

assign sel_tmp10_i_fu_1300_p2 = (tmp35_fu_1294_p2 & tmp34_fu_1288_p2);

assign sel_tmp1_i1_fu_955_p2 = (sel_tmp_i1_fu_950_p2 & icmp7_reg_1737);

assign sel_tmp1_i_fu_1048_p2 = (sel_tmp_i_fu_1042_p2 & icmp_reg_1693);

assign sel_tmp21_i_fu_1443_p3 = ((sel_tmp10_i_reg_1792[0:0] === 1'b1) ? float_exception_flag_5_fu_1431_p3 : float_exception_flag);

assign sel_tmp4_i_fu_1264_p2 = (tmp_2_i1_fu_1148_p2 ^ 1'd1);

assign sel_tmp55_i_fu_1306_p2 = (tmp_2_i1_fu_1148_p2 | sel_tmp9_demorgan_i_fu_1270_p2);

assign sel_tmp56_i_fu_1312_p2 = (tmp_1_i1_fu_1142_p2 & sel_tmp55_i_fu_1306_p2);

assign sel_tmp9_demorgan_i_fu_1270_p2 = (tmp_83_fu_1166_p3 & tmp_3_i2_fu_1154_p2);

assign sel_tmp9_i_demorgan_fu_1276_p2 = (tmp_83_fu_1166_p3 & tmp_3_i2_fu_1154_p2);

assign sel_tmp9_i_fu_1282_p2 = (sel_tmp9_i_demorgan_fu_1276_p2 ^ 1'd1);

assign sel_tmp_i1_fu_950_p2 = (tmp_i3_reg_1731 ^ 1'd1);

assign sel_tmp_i_fu_1042_p2 = (tmp_i_fu_977_p2 ^ 1'd1);

assign tmp34_fu_1288_p2 = (tmp_84_fu_1174_p3 & sel_tmp4_i_fu_1264_p2);

assign tmp35_fu_1294_p2 = (tmp_1_i1_fu_1142_p2 & sel_tmp9_i_fu_1282_p2);

assign tmp36_fu_1527_p2 = (sel_tmp56_i_reg_1801 | not_tmp_1_i_reg_1814);

assign tmp_10_i1_fu_918_p2 = (tmp_66_fu_914_p1 | tmp_3_i1_reg_1742);

assign tmp_10_i2_fu_1401_p2 = (float_exception_flag | 32'd9);

assign tmp_10_i_fu_1009_p2 = (tmp_3_i_fu_999_p2 | tmp_30_fu_1005_p1);

assign tmp_10_i_i_fu_1228_p2 = (tmp_85_fu_1224_p1 | tmp_3_i_i_fu_1218_p2);

assign tmp_11_fu_732_p3 = {{grp_fu_248_p4}, {51'd0}};

assign tmp_11_i_i_fu_1234_p4 = {{tmp_8_i_i_fu_1202_p2[63:1]}};

assign tmp_12_fu_740_p2 = ((tmp_11_fu_732_p3 == 63'd9218868437227405312) ? 1'b1 : 1'b0);

assign tmp_12_i_fu_1407_p3 = {{zSign}, {63'd0}};

assign tmp_13_fu_750_p2 = ((tmp_37_fu_746_p1 != 51'd0) ? 1'b1 : 1'b0);

assign tmp_13_i_fu_1414_p2 = (tmp_12_i_fu_1407_p3 | 64'd9218868437227405312);

assign tmp_14_fu_756_p2 = (tmp_13_fu_750_p2 & tmp_12_fu_740_p2);

assign tmp_15_fu_704_p4 = {{expDiff_2_fu_692_p3[10:6]}};

assign tmp_16_fu_768_p2 = ((tmp_44_fu_762_p2 > 64'd18437736874454810624) ? 1'b1 : 1'b0);

assign tmp_16_i_fu_1318_p2 = ((roundBits_1_reg_1786 == 10'd0) ? 1'b1 : 1'b0);

assign tmp_17_fu_774_p3 = {{grp_fu_258_p4}, {51'd0}};

assign tmp_17_i_fu_1420_p2 = (float_exception_flag | 32'd4);

assign tmp_18_fu_782_p2 = ((tmp_17_fu_774_p3 == 63'd9218868437227405312) ? 1'b1 : 1'b0);

assign tmp_19_fu_792_p2 = ((tmp_57_fu_788_p1 != 51'd0) ? 1'b1 : 1'b0);

assign tmp_1_fu_372_p2 = (($signed(expDiff_fu_334_p2) > $signed(12'd0)) ? 1'b1 : 1'b0);

assign tmp_1_i1_fu_1142_p2 = ((zExp_assign_reg_191 > 12'd2044) ? 1'b1 : 1'b0);

assign tmp_1_i8_fu_890_p1 = tmp_61_fu_858_p1;

assign tmp_1_i_fu_990_p1 = tmp_9_i_reg_1698;

assign tmp_1_i_i_fu_1208_p1 = tmp_81_fu_1134_p1;

assign tmp_20_fu_798_p2 = (tmp_19_fu_792_p2 & tmp_18_fu_782_p2);

assign tmp_21_fu_804_p2 = (tmp_20_fu_798_p2 | tmp_14_fu_756_p2);

assign tmp_21_i_fu_1353_p2 = (64'd512 + zSig_assign_2_fu_1329_p3);

assign tmp_22_fu_548_p2 = ((bSig_fu_316_p1 == 52'd0) ? 1'b1 : 1'b0);

assign tmp_22_i_fu_1369_p2 = ((roundBits_3_fu_1341_p3 == 10'd512) ? 1'b1 : 1'b0);

assign tmp_23_i_fu_1375_p1 = tmp_22_i_fu_1369_p2;

assign tmp_24_fu_923_p4 = {{tmp_8_i6_fu_909_p2[61:1]}};

assign tmp_24_i_fu_1379_p2 = (tmp_23_i_fu_1375_p1 ^ 32'd4294967295);

assign tmp_25_fu_933_p3 = {{tmp_24_fu_923_p4}, {tmp_10_i1_fu_918_p2}};

assign tmp_25_i_cast_fu_1385_p1 = $signed(tmp_24_i_fu_1379_p2);

assign tmp_26_fu_436_p2 = (bSig_1_fu_356_p3 | aSig_1_fu_344_p3);

assign tmp_26_i_fu_1395_p2 = ((zSig1_2_fu_1389_p2 == 54'd0) ? 1'b1 : 1'b0);

assign tmp_27_fu_442_p2 = ((tmp_26_fu_436_p2 == 61'd0) ? 1'b1 : 1'b0);
	
assign tmp_2_i1_fu_1148_p2 = (($signed(zExp_assign_reg_191) > $signed(12'd2045)) ? 1'b1 : 1'b0);

assign tmp_2_i9_fu_894_p2 = aSig_3_cast_fu_847_p1 << tmp_1_i8_fu_890_p1;

assign tmp_2_i_fu_993_p2 = bSig_3_cast_fu_974_p1 << tmp_1_i_fu_990_p1;

assign tmp_2_i_i_fu_1212_p2 = zSig_assign_5_reg_201 << tmp_1_i_i_fu_1208_p1;

assign tmp_30_fu_1005_p1 = tmp_8_i_fu_985_p2[0:0];

assign tmp_30_i_fu_1505_p3 = {{tmp_79_fu_1498_p3}, {52'd0}};

assign tmp_31_fu_648_p3 = {{zSign}, {63'd0}};

assign tmp_31_i_fu_1513_p4 = {{{zSign}, {9'd0}}, {zSig1_2_reg_1820}};

assign tmp_32_fu_656_p2 = (tmp_31_fu_648_p3 | 64'd9218868437227405312);

assign tmp_32_i_fu_1521_p2 = (tmp_31_i_fu_1513_p4 + tmp_30_i_fu_1505_p3);

assign tmp_33_fu_554_p3 = {{grp_fu_248_p4}, {51'd0}};

assign tmp_34_fu_562_p2 = ((tmp_33_fu_554_p3 == 63'd9218868437227405312) ? 1'b1 : 1'b0);

assign tmp_35_fu_572_p2 = ((tmp_68_fu_568_p1 != 51'd0) ? 1'b1 : 1'b0);

assign tmp_36_fu_578_p2 = (tmp_35_fu_572_p2 & tmp_34_fu_562_p2);

assign tmp_37_fu_746_p1 = a[50:0];

assign tmp_38_fu_590_p2 = ((tmp_69_fu_584_p2 > 64'd18437736874454810624) ? 1'b1 : 1'b0);

assign tmp_39_fu_596_p3 = {{grp_fu_258_p4}, {51'd0}};

assign tmp_3_fu_378_p3 = expDiff_fu_334_p2[32'd11];

assign tmp_3_i1_fu_900_p2 = ((tmp_2_i9_fu_894_p2 != 64'd0) ? 1'b1 : 1'b0);

assign tmp_3_i2_fu_1154_p2 = ((zExp_assign_reg_191 == 12'd2045) ? 1'b1 : 1'b0);

assign tmp_3_i_fu_999_p2 = ((tmp_2_i_fu_993_p2 != 64'd0) ? 1'b1 : 1'b0);

assign tmp_3_i_i_fu_1218_p2 = ((tmp_2_i_i_fu_1212_p2 != 64'd0) ? 1'b1 : 1'b0);

assign tmp_40_fu_604_p2 = ((tmp_39_fu_596_p3 == 63'd9218868437227405312) ? 1'b1 : 1'b0);

assign tmp_41_fu_614_p2 = ((tmp_71_fu_610_p1 != 51'd0) ? 1'b1 : 1'b0);

assign tmp_42_fu_620_p2 = (tmp_41_fu_614_p2 & tmp_40_fu_604_p2);

assign tmp_43_fu_626_p2 = (tmp_42_fu_620_p2 | tmp_36_fu_578_p2);

assign tmp_44_fu_762_p2 = b << 64'd1;

assign tmp_45_fu_448_p3 = {{grp_fu_248_p4}, {51'd0}};

assign tmp_46_fu_456_p2 = ((tmp_45_fu_448_p3 == 63'd9218868437227405312) ? 1'b1 : 1'b0);

assign tmp_47_fu_466_p2 = ((tmp_75_fu_462_p1 != 51'd0) ? 1'b1 : 1'b0);

assign tmp_48_fu_472_p2 = (tmp_47_fu_466_p2 & tmp_46_fu_456_p2);

assign tmp_4_fu_726_p2 = ((aSig_fu_296_p1 == 52'd0) ? 1'b1 : 1'b0);

assign tmp_50_fu_484_p2 = ((tmp_76_fu_478_p2 > 64'd18437736874454810624) ? 1'b1 : 1'b0);

assign tmp_51_fu_490_p3 = {{grp_fu_258_p4}, {51'd0}};

assign tmp_52_fu_498_p2 = ((tmp_51_fu_490_p3 == 63'd9218868437227405312) ? 1'b1 : 1'b0);

assign tmp_53_fu_508_p2 = ((tmp_80_fu_504_p1 != 51'd0) ? 1'b1 : 1'b0);

assign tmp_54_fu_514_p2 = (tmp_53_fu_508_p2 & tmp_52_fu_498_p2);

assign tmp_55_fu_520_p2 = (tmp_54_fu_514_p2 | tmp_48_fu_472_p2);

assign tmp_56_fu_406_p2 = (aSig_1_cast2_cast_fu_352_p1 + bSig_1_cast1_cast_fu_368_p1);

assign tmp_57_fu_788_p1 = b[50:0];

assign tmp_58_fu_426_p4 = {{{zSign}, {1'd0}}, {zSig1_1_fu_422_p1}};

assign tmp_59_fu_386_p4 = {{{{2'd2}, {aSig_fu_296_p1}}}, {9'd0}};

assign tmp_5_fu_662_p2 = ((bExp_fu_320_p4 == 11'd0) ? 1'b1 : 1'b0);

assign tmp_5_i1_fu_941_p2 = ((aSig_3_reg_1719 != 62'd0) ? 1'b1 : 1'b0);

assign tmp_5_i2_fu_1160_p2 = (64'd512 + zSig_assign_5_reg_201);

assign tmp_5_i_fu_1033_p2 = ((bSig_3_reg_1679 != 62'd0) ? 1'b1 : 1'b0);

assign tmp_61_fu_858_p1 = expDiff_1_fu_851_p3[5:0];

assign tmp_62_fu_1461_p2 = (tmp_87_fu_1457_p1 | not_tmp_1_i_reg_1814);

assign tmp_63_fu_1466_p4 = {{float_exception_flag_7_fu_1450_p3[31:1]}};

assign tmp_64_fu_874_p4 = {{count_assign_1_fu_862_p2[11:6]}};

assign tmp_66_fu_914_p1 = tmp_8_i6_fu_909_p2[0:0];

assign tmp_68_fu_568_p1 = a[50:0];

assign tmp_69_cast_fu_396_p1 = tmp_59_fu_386_p4;

assign tmp_69_fu_584_p2 = b << 64'd1;

assign tmp_6_fu_700_p1 = expDiff_2_fu_692_p3[5:0];

assign tmp_71_fu_610_p1 = b[50:0];

assign tmp_73_fu_1110_p3 = zSig_1_fu_1086_p2[32'd62];

assign tmp_75_fu_462_p1 = a[50:0];

assign tmp_76_fu_478_p2 = b << 64'd1;

assign tmp_77_fu_1484_p3 = ((sel_tmp10_i_reg_1792[0:0] === 1'b1) ? 12'd0 : zExp_assign_reg_191);

assign tmp_78_fu_1491_p3 = ((tmp_1_i1_reg_1773[0:0] === 1'b1) ? tmp_77_fu_1484_p3 : zExp_assign_reg_191);

assign tmp_79_fu_1498_p3 = ((tmp_26_i_reg_1825[0:0] === 1'b1) ? 12'd0 : tmp_78_fu_1491_p3);

assign tmp_7_fu_1015_p4 = {{tmp_8_i_fu_985_p2[61:1]}};

assign tmp_7_i5_cast_fu_906_p1 = count_assign_1_reg_1726;

assign tmp_7_i_cast_fu_982_p1 = expDiff_2_reg_1687;

assign tmp_7_i_i_fu_1198_p1 = $unsigned(count_assign_i_cast_fu_1188_p1);

assign tmp_80_fu_504_p1 = b[50:0];

assign tmp_81_fu_1134_p1 = zExp_assign_reg_191[5:0];

assign tmp_83_fu_1166_p3 = tmp_5_i2_fu_1160_p2[32'd63];

assign tmp_84_fu_1174_p3 = zExp_assign_reg_191[32'd11];

assign tmp_85_fu_1224_p1 = tmp_8_i_i_fu_1202_p2[0:0];

assign tmp_87_fu_1457_p1 = float_exception_flag_7_fu_1450_p3[0:0];

assign tmp_8_fu_1025_p3 = {{tmp_7_fu_1015_p4}, {tmp_10_i_fu_1009_p2}};

assign tmp_8_i6_fu_909_p2 = aSig_3_reg_1719 >> tmp_7_i5_cast_fu_906_p1;

assign tmp_8_i_fu_985_p2 = bSig_3_reg_1679 >> tmp_7_i_cast_fu_982_p1;

assign tmp_8_i_i_fu_1202_p2 = zSig_assign_5_reg_201 >> tmp_7_i_i_fu_1198_p1;

assign tmp_9_fu_542_p2 = ((bExp_fu_320_p4 == 11'd2047) ? 1'b1 : 1'b0);

assign tmp_9_i_fu_720_p2 = (6'd0 - tmp_6_fu_700_p1);

assign tmp_fu_340_p1 = expDiff_fu_334_p2[10:0];

assign tmp_i3_fu_868_p2 = ((expDiff_1_fu_851_p3 == 12'd0) ? 1'b1 : 1'b0);

assign tmp_i_fu_977_p2 = ((expDiff_2_reg_1687 == 11'd0) ? 1'b1 : 1'b0);

assign tmp_i_i_fu_1192_p2 = ((zExp_assign_reg_191 == 12'd0) ? 1'b1 : 1'b0);

assign zExp_0_s_fu_1118_p3 = ((tmp_73_fu_1110_p3[0:0] === 1'b1) ? zExp_3_cast_fu_1072_p1 : zExp_3_fu_1104_p2);

assign zExp_3_cast_fu_1072_p1 = zExp_2_reg_182;

assign zExp_3_fu_1104_p2 = ($signed(12'd4095) + $signed(zExp_3_cast_fu_1072_p1));

assign zPtr_write_assign_fu_1252_p3 = ((tmp_i_i_fu_1192_p2[0:0] === 1'b1) ? zSig_assign_5_reg_201 : z_4_fu_1244_p3);

assign zSig1_1_fu_422_p1 = zSig1_fu_412_p4;

assign zSig1_2_fu_1389_p2 = (zSig_assign_1_i_cast_fu_1359_p4 & tmp_25_i_cast_fu_1385_p1);

assign zSig1_fu_412_p4 = {{tmp_56_fu_406_p2[61:9]}};

assign zSig_1_cast_fu_1092_p1 = zSig_1_fu_1086_p2;

assign zSig_1_fu_1086_p2 = (aSig_4_cast_fu_1082_p1 + bSig_cast_fu_1068_p1);

assign zSig_2_fu_1096_p3 = {{zSig_1_fu_1086_p2}, {1'd0}};

assign zSig_assign_1_fu_1323_p3 = ((sel_tmp10_i_reg_1792[0:0] === 1'b1) ? zPtr_write_assign_reg_1781 : zSig_assign_5_reg_201);

assign zSig_assign_1_i_cast_fu_1359_p4 = {{tmp_21_i_fu_1353_p2[63:10]}};

assign zSig_assign_2_fu_1329_p3 = ((tmp_1_i1_reg_1773[0:0] === 1'b1) ? zSig_assign_1_fu_1323_p3 : zSig_assign_5_reg_201);

assign zSig_fu_400_p2 = (bSig_1_cast1_fu_364_p1 + tmp_69_cast_fu_396_p1);

assign z_1_cast_fu_1038_p1 = tmp_5_i_fu_1033_p2;

assign z_2_fu_960_p3 = ((sel_tmp1_i1_fu_955_p2[0:0] === 1'b1) ? tmp_25_fu_933_p3 : z_5_cast_fu_946_p1);

assign z_4_fu_1244_p3 = {{tmp_11_i_i_fu_1234_p4}, {tmp_10_i_i_fu_1228_p2}};

assign z_5_cast_fu_946_p1 = tmp_5_i1_fu_941_p2;

assign z_5_fu_1061_p3 = ((tmp_i_fu_977_p2[0:0] === 1'b1) ? bSig_3_reg_1679 : z_fu_1053_p3);

assign z_6_fu_968_p3 = ((tmp_i3_reg_1731[0:0] === 1'b1) ? aSig_3_reg_1719 : z_2_fu_960_p3);

assign z_fu_1053_p3 = ((sel_tmp1_i_fu_1048_p2[0:0] === 1'b1) ? tmp_8_fu_1025_p3 : z_1_cast_fu_1038_p1);

always @ (posedge ap_clk) begin
    aSig_1_cast2_cast_reg_1597[8:0] <= 9'b000000000;
    aSig_1_cast2_cast_reg_1597[61] <= 1'b0;
    bSig_1_cast1_cast_reg_1603[8:0] <= 9'b000000000;
    bSig_1_cast1_cast_reg_1603[61] <= 1'b0;
    bSig_3_reg_1679[8:0] <= 9'b000000000;
    aSig_3_reg_1719[8:0] <= 9'b000000000;
end

endmodule //addFloat64Sigs
