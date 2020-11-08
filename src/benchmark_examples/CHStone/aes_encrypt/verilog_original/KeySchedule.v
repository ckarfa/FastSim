// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module KeySchedule (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        key_address0,
        key_ce0,
        key_q0,
        word_address0,
        word_ce0,
        word_we0,
        word_d0,
        word_q0,
        word_address1,
        word_ce1,
        word_q1
);

parameter    ap_ST_fsm_state1 = 13'd1;
parameter    ap_ST_fsm_state2 = 13'd2;
parameter    ap_ST_fsm_state3 = 13'd4;
parameter    ap_ST_fsm_state4 = 13'd8;
parameter    ap_ST_fsm_state5 = 13'd16;
parameter    ap_ST_fsm_state6 = 13'd32;
parameter    ap_ST_fsm_state7 = 13'd64;
parameter    ap_ST_fsm_state8 = 13'd128;
parameter    ap_ST_fsm_state9 = 13'd256;
parameter    ap_ST_fsm_state10 = 13'd512;
parameter    ap_ST_fsm_state11 = 13'd1024;
parameter    ap_ST_fsm_state12 = 13'd2048;
parameter    ap_ST_fsm_state13 = 13'd4096;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [4:0] key_address0;
output   key_ce0;
input  [31:0] key_q0;
output  [8:0] word_address0;
output   word_ce0;
output   word_we0;
output  [31:0] word_d0;
input  [31:0] word_q0;
output  [8:0] word_address1;
output   word_ce1;
input  [31:0] word_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg key_ce0;
reg[8:0] word_address0;
reg word_ce0;
reg word_we0;
reg[31:0] word_d0;
reg[8:0] word_address1;
reg word_ce1;

(* fsm_encoding = "none" *) reg   [12:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [7:0] Sbox_address0;
reg    Sbox_ce0;
wire   [7:0] Sbox_q0;
wire   [7:0] Sbox_address1;
reg    Sbox_ce1;
wire   [7:0] Sbox_q1;
wire   [7:0] Sbox_address2;
reg    Sbox_ce2;
wire   [7:0] Sbox_q2;
wire   [7:0] Sbox_address3;
reg    Sbox_ce3;
wire   [7:0] Sbox_q3;
wire   [4:0] Rcon0_address0;
reg    Rcon0_ce0;
wire   [7:0] Rcon0_q0;
reg   [31:0] reg_330;
wire    ap_CS_fsm_state8;
wire    ap_CS_fsm_state9;
reg   [31:0] reg_335;
wire   [2:0] j_2_fu_346_p2;
reg   [2:0] j_2_reg_1046;
wire    ap_CS_fsm_state2;
wire   [3:0] tmp_fu_356_p3;
reg   [3:0] tmp_reg_1051;
wire   [0:0] exitcond3_fu_340_p2;
wire   [2:0] i_1_fu_374_p2;
reg   [2:0] i_1_reg_1059;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond2_fu_368_p2;
wire   [0:0] tmp_3_fu_463_p2;
reg   [0:0] tmp_3_reg_1072;
wire    ap_CS_fsm_state5;
wire   [0:0] exitcond1_fu_453_p2;
reg   [8:0] word_addr_2_reg_1082;
reg   [8:0] word_addr_3_reg_1087;
reg   [8:0] word_addr_4_reg_1093;
reg   [31:0] temp_0_1_reg_1098;
wire    ap_CS_fsm_state6;
reg   [31:0] temp_1_1_reg_1103;
wire    ap_CS_fsm_state7;
reg   [0:0] tmp_22_reg_1118;
reg   [0:0] tmp_32_reg_1124;
wire   [9:0] tmp_31_fu_605_p2;
reg   [9:0] tmp_31_reg_1130;
wire   [9:0] tmp_40_fu_695_p2;
reg   [9:0] tmp_40_reg_1135;
reg   [0:0] tmp_42_reg_1140;
wire   [3:0] tmp_44_fu_707_p1;
reg   [3:0] tmp_44_reg_1146;
reg   [5:0] p_lshr_i2_cast_reg_1151;
reg   [0:0] tmp_52_reg_1156;
wire   [3:0] tmp_54_fu_727_p1;
reg   [3:0] tmp_54_reg_1162;
reg   [5:0] p_lshr_i3_cast_reg_1167;
wire    ap_CS_fsm_state10;
wire   [9:0] tmp_2_cast_fu_948_p1;
reg   [9:0] tmp_2_cast_reg_1197;
wire    ap_CS_fsm_state11;
wire   [9:0] tmp_cast_fu_952_p1;
reg   [9:0] tmp_cast_reg_1202;
wire   [2:0] i_3_fu_962_p2;
reg   [2:0] i_3_reg_1210;
wire    ap_CS_fsm_state12;
wire   [0:0] exitcond_fu_956_p2;
wire   [9:0] tmp_63_fu_1004_p2;
reg   [9:0] tmp_63_reg_1220;
wire   [31:0] tmp_10_fu_1013_p6;
reg   [31:0] tmp_10_reg_1225;
wire   [5:0] j_3_fu_1027_p2;
reg   [2:0] j_reg_227;
reg   [2:0] i_reg_239;
wire    ap_CS_fsm_state4;
reg   [5:0] j_1_reg_251;
wire   [31:0] temp_2_cast_fu_932_p1;
reg   [31:0] temp_22_reg_263;
wire   [31:0] temp_1_cast_fu_927_p1;
reg   [31:0] temp_12_reg_273;
wire   [31:0] temp_0_1_cast_fu_922_p1;
reg   [31:0] temp_02_reg_283;
wire   [31:0] Sbox_load_3_cast_fu_937_p1;
reg   [31:0] temp_3_reg_293;
reg   [2:0] i_2_reg_303;
wire    ap_CS_fsm_state13;
wire   [63:0] tmp_5_fu_385_p1;
wire  signed [63:0] tmp_21_fu_448_p1;
wire   [63:0] tmp_11_cast_fu_494_p1;
wire   [63:0] tmp_14_cast_fu_505_p1;
wire   [63:0] tmp_15_cast_fu_516_p1;
wire   [63:0] tmp_8_fu_475_p1;
wire  signed [63:0] tmp_31_cast_fu_741_p1;
wire   [63:0] tmp_9_fu_761_p1;
wire  signed [63:0] tmp_40_cast_fu_766_p1;
wire  signed [63:0] tmp_49_cast_fu_838_p1;
wire  signed [63:0] tmp_58_cast_fu_911_p1;
wire  signed [63:0] tmp_62_cast_fu_999_p1;
wire  signed [63:0] tmp_63_cast_fu_1033_p1;
wire   [31:0] tmp_12_fu_1037_p2;
wire   [1:0] tmp_6_fu_352_p1;
wire   [3:0] i_cast_fu_364_p1;
wire   [3:0] tmp_4_fu_380_p2;
wire   [9:0] tmp_14_fu_390_p3;
wire   [5:0] tmp_15_fu_402_p3;
wire   [10:0] p_shl_cast_fu_398_p1;
wire   [10:0] p_shl1_cast_fu_410_p1;
wire   [10:0] tmp_16_fu_414_p2;
wire   [2:0] tmp_17_fu_420_p1;
wire   [7:0] tmp_19_fu_430_p4;
wire   [2:0] tmp_18_fu_424_p2;
wire   [10:0] tmp_20_fu_440_p3;
wire   [1:0] tmp_13_fu_459_p1;
wire   [5:0] tmp_7_fu_469_p2;
wire   [7:0] tmp_8_cast_fu_484_p1;
wire   [7:0] tmp_s_fu_488_p2;
wire   [8:0] tmp_8_cast1_fu_480_p1;
wire   [8:0] tmp_2_fu_499_p2;
wire   [8:0] tmp_11_fu_510_p2;
wire   [31:0] p_neg1_fu_525_p2;
wire   [3:0] tmp_24_fu_531_p1;
wire   [9:0] tmp_25_fu_535_p3;
wire   [3:0] tmp_23_fu_521_p1;
wire   [9:0] tmp_26_fu_543_p2;
wire   [9:0] tmp_27_fu_549_p3;
wire   [5:0] p_lshr_i_cast_fu_564_p4;
wire   [5:0] p_neg_t_i_fu_574_p2;
wire   [5:0] tmp_29_fu_580_p4;
wire   [5:0] tmp_30_fu_590_p3;
wire   [9:0] tmp_30_cast_fu_597_p3;
wire   [9:0] tmp_28_fu_557_p3;
wire   [31:0] p_neg2_fu_615_p2;
wire   [3:0] tmp_34_fu_621_p1;
wire   [9:0] tmp_35_fu_625_p3;
wire   [3:0] tmp_33_fu_611_p1;
wire   [9:0] tmp_36_fu_633_p2;
wire   [9:0] tmp_37_fu_639_p3;
wire   [5:0] p_lshr_i1_cast_fu_654_p4;
wire   [5:0] p_neg_t_i1_fu_664_p2;
wire   [5:0] tmp_39_fu_670_p4;
wire   [5:0] tmp_41_fu_680_p3;
wire   [9:0] tmp_39_cast_fu_687_p3;
wire   [9:0] tmp_38_fu_647_p3;
wire   [31:0] p_neg5_fu_701_p2;
wire   [31:0] p_neg_fu_721_p2;
wire   [3:0] p_lshr_f_cast_fu_745_p4;
wire   [3:0] addconv_fu_755_p2;
wire   [9:0] tmp_45_fu_774_p3;
wire   [3:0] tmp_43_fu_770_p1;
wire   [9:0] tmp_46_fu_781_p2;
wire   [9:0] tmp_47_fu_787_p3;
wire   [5:0] p_neg_t_i2_fu_802_p2;
wire   [5:0] tmp_50_fu_807_p4;
wire   [5:0] tmp_51_fu_817_p3;
wire   [9:0] tmp_48_cast_fu_824_p3;
wire   [9:0] tmp_48_fu_795_p3;
wire   [9:0] tmp_49_fu_832_p2;
wire   [9:0] tmp_55_fu_847_p3;
wire   [3:0] tmp_53_fu_843_p1;
wire   [9:0] tmp_56_fu_854_p2;
wire   [9:0] tmp_57_fu_860_p3;
wire   [5:0] p_neg_t_i3_fu_875_p2;
wire   [5:0] tmp_65_fu_880_p4;
wire   [5:0] tmp_66_fu_890_p3;
wire   [9:0] tmp_57_cast_fu_897_p3;
wire   [9:0] tmp_64_fu_868_p3;
wire   [9:0] tmp_58_fu_905_p2;
wire   [7:0] temp_0_fu_916_p2;
wire   [5:0] tmp_1_fu_942_p2;
wire   [5:0] tmp_60_fu_976_p3;
wire   [9:0] tmp_59_fu_968_p3;
wire   [9:0] p_shl3_cast_fu_984_p1;
wire   [9:0] tmp_61_fu_988_p2;
wire   [9:0] tmp_62_fu_994_p2;
wire   [1:0] tmp_10_fu_1013_p5;
reg   [12:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 13'd1;
end

KeySchedule_Sbox #(
    .DataWidth( 8 ),
    .AddressRange( 256 ),
    .AddressWidth( 8 ))
Sbox_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(Sbox_address0),
    .ce0(Sbox_ce0),
    .q0(Sbox_q0),
    .address1(Sbox_address1),
    .ce1(Sbox_ce1),
    .q1(Sbox_q1),
    .address2(Sbox_address2),
    .ce2(Sbox_ce2),
    .q2(Sbox_q2),
    .address3(Sbox_address3),
    .ce3(Sbox_ce3),
    .q3(Sbox_q3)
);

KeySchedule_Rcon0 #(
    .DataWidth( 8 ),
    .AddressRange( 30 ),
    .AddressWidth( 5 ))
Rcon0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(Rcon0_address0),
    .ce0(Rcon0_ce0),
    .q0(Rcon0_q0)
);

aes_main_mux_42_3bkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .din2_WIDTH( 32 ),
    .din3_WIDTH( 32 ),
    .din4_WIDTH( 2 ),
    .dout_WIDTH( 32 ))
aes_main_mux_42_3bkb_U1(
    .din0(temp_02_reg_283),
    .din1(temp_12_reg_273),
    .din2(temp_22_reg_263),
    .din3(temp_3_reg_293),
    .din4(tmp_10_fu_1013_p5),
    .dout(tmp_10_fu_1013_p6)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        i_2_reg_303 <= i_3_reg_1210;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        i_2_reg_303 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_340_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_reg_239 <= 3'd0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        i_reg_239 <= i_1_reg_1059;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_340_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        j_1_reg_251 <= 6'd4;
    end else if (((1'b1 == ap_CS_fsm_state12) & (exitcond_fu_956_p2 == 1'd1))) begin
        j_1_reg_251 <= j_3_fu_1027_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond2_fu_368_p2 == 1'd1))) begin
        j_reg_227 <= j_2_reg_1046;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        j_reg_227 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        reg_330 <= word_q1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        reg_330 <= word_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        reg_335 <= word_q0;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        reg_335 <= word_q1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        temp_02_reg_283 <= temp_0_1_reg_1098;
    end else if (((1'b1 == ap_CS_fsm_state11) & (tmp_3_reg_1072 == 1'd1))) begin
        temp_02_reg_283 <= temp_0_1_cast_fu_922_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        temp_12_reg_273 <= temp_1_1_reg_1103;
    end else if (((1'b1 == ap_CS_fsm_state11) & (tmp_3_reg_1072 == 1'd1))) begin
        temp_12_reg_273 <= temp_1_cast_fu_927_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        temp_22_reg_263 <= word_q1;
    end else if (((1'b1 == ap_CS_fsm_state11) & (tmp_3_reg_1072 == 1'd1))) begin
        temp_22_reg_263 <= temp_2_cast_fu_932_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        temp_3_reg_293 <= word_q0;
    end else if (((1'b1 == ap_CS_fsm_state11) & (tmp_3_reg_1072 == 1'd1))) begin
        temp_3_reg_293 <= Sbox_load_3_cast_fu_937_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i_1_reg_1059 <= i_1_fu_374_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        i_3_reg_1210 <= i_3_fu_962_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        j_2_reg_1046 <= j_2_fu_346_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        p_lshr_i2_cast_reg_1151 <= {{p_neg5_fu_701_p2[9:4]}};
        p_lshr_i3_cast_reg_1167 <= {{p_neg_fu_721_p2[9:4]}};
        tmp_31_reg_1130 <= tmp_31_fu_605_p2;
        tmp_40_reg_1135 <= tmp_40_fu_695_p2;
        tmp_42_reg_1140 <= word_q1[32'd31];
        tmp_44_reg_1146 <= tmp_44_fu_707_p1;
        tmp_52_reg_1156 <= word_q0[32'd31];
        tmp_54_reg_1162 <= tmp_54_fu_727_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        temp_0_1_reg_1098 <= word_q0;
        temp_1_1_reg_1103 <= word_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_956_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state12))) begin
        tmp_10_reg_1225 <= tmp_10_fu_1013_p6;
        tmp_63_reg_1220 <= tmp_63_fu_1004_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        tmp_22_reg_1118 <= word_q0[32'd31];
        tmp_32_reg_1124 <= word_q1[32'd31];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        tmp_2_cast_reg_1197[5 : 0] <= tmp_2_cast_fu_948_p1[5 : 0];
        tmp_cast_reg_1202[5 : 0] <= tmp_cast_fu_952_p1[5 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_453_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        tmp_3_reg_1072 <= tmp_3_fu_463_p2;
        word_addr_2_reg_1082 <= tmp_14_cast_fu_505_p1;
        word_addr_3_reg_1087 <= tmp_15_cast_fu_516_p1;
        word_addr_4_reg_1093[5 : 0] <= tmp_8_fu_475_p1[5 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_340_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_reg_1051[3 : 2] <= tmp_fu_356_p3[3 : 2];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        Rcon0_ce0 = 1'b1;
    end else begin
        Rcon0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        Sbox_ce0 = 1'b1;
    end else begin
        Sbox_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        Sbox_ce1 = 1'b1;
    end else begin
        Sbox_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        Sbox_ce2 = 1'b1;
    end else begin
        Sbox_ce2 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        Sbox_ce3 = 1'b1;
    end else begin
        Sbox_ce3 = 1'b0;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state5) & (exitcond1_fu_453_p2 == 1'd1)))) begin
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
    if (((1'b1 == ap_CS_fsm_state5) & (exitcond1_fu_453_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        key_ce0 = 1'b1;
    end else begin
        key_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        word_address0 = tmp_63_cast_fu_1033_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        word_address0 = word_addr_4_reg_1093;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        word_address0 = word_addr_3_reg_1087;
    end else if (((exitcond1_fu_453_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5) & (tmp_3_fu_463_p2 == 1'd1))) begin
        word_address0 = tmp_11_cast_fu_494_p1;
    end else if (((exitcond1_fu_453_p2 == 1'd0) & (tmp_3_fu_463_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        word_address0 = tmp_8_fu_475_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        word_address0 = tmp_21_fu_448_p1;
    end else begin
        word_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        word_address1 = tmp_62_cast_fu_999_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        word_address1 = word_addr_3_reg_1087;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        word_address1 = word_addr_2_reg_1082;
    end else if (((exitcond1_fu_453_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5) & (tmp_3_fu_463_p2 == 1'd1))) begin
        word_address1 = tmp_14_cast_fu_505_p1;
    end else if (((exitcond1_fu_453_p2 == 1'd0) & (tmp_3_fu_463_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        word_address1 = tmp_11_cast_fu_494_p1;
    end else begin
        word_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state6) | ((exitcond1_fu_453_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5) & (tmp_3_fu_463_p2 == 1'd1)) | ((exitcond1_fu_453_p2 == 1'd0) & (tmp_3_fu_463_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5)))) begin
        word_ce0 = 1'b1;
    end else begin
        word_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state6) | ((exitcond1_fu_453_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5) & (tmp_3_fu_463_p2 == 1'd1)) | ((exitcond1_fu_453_p2 == 1'd0) & (tmp_3_fu_463_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5)))) begin
        word_ce1 = 1'b1;
    end else begin
        word_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        word_d0 = tmp_12_fu_1037_p2;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        word_d0 = key_q0;
    end else begin
        word_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state4))) begin
        word_we0 = 1'b1;
    end else begin
        word_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((exitcond3_fu_340_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (exitcond2_fu_368_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (exitcond1_fu_453_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else if (((exitcond1_fu_453_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5) & (tmp_3_fu_463_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            if (((1'b1 == ap_CS_fsm_state12) & (exitcond_fu_956_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign Rcon0_address0 = tmp_9_fu_761_p1;

assign Sbox_address0 = tmp_31_cast_fu_741_p1;

assign Sbox_address1 = tmp_40_cast_fu_766_p1;

assign Sbox_address2 = tmp_49_cast_fu_838_p1;

assign Sbox_address3 = tmp_58_cast_fu_911_p1;

assign Sbox_load_3_cast_fu_937_p1 = Sbox_q3;

assign addconv_fu_755_p2 = ($signed(4'd15) + $signed(p_lshr_f_cast_fu_745_p4));

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign exitcond1_fu_453_p2 = ((j_1_reg_251 == 6'd44) ? 1'b1 : 1'b0);

assign exitcond2_fu_368_p2 = ((i_reg_239 == 3'd4) ? 1'b1 : 1'b0);

assign exitcond3_fu_340_p2 = ((j_reg_227 == 3'd4) ? 1'b1 : 1'b0);

assign exitcond_fu_956_p2 = ((i_2_reg_303 == 3'd4) ? 1'b1 : 1'b0);

assign i_1_fu_374_p2 = (i_reg_239 + 3'd1);

assign i_3_fu_962_p2 = (i_2_reg_303 + 3'd1);

assign i_cast_fu_364_p1 = i_reg_239;

assign j_2_fu_346_p2 = (j_reg_227 + 3'd1);

assign j_3_fu_1027_p2 = (j_1_reg_251 + 6'd1);

assign key_address0 = tmp_5_fu_385_p1;

assign p_lshr_f_cast_fu_745_p4 = {{j_1_reg_251[5:2]}};

assign p_lshr_i1_cast_fu_654_p4 = {{p_neg2_fu_615_p2[9:4]}};

assign p_lshr_i_cast_fu_564_p4 = {{p_neg1_fu_525_p2[9:4]}};

assign p_neg1_fu_525_p2 = (32'd0 - reg_330);

assign p_neg2_fu_615_p2 = (32'd0 - reg_335);

assign p_neg5_fu_701_p2 = (32'd0 - word_q1);

assign p_neg_fu_721_p2 = (32'd0 - word_q0);

assign p_neg_t_i1_fu_664_p2 = (6'd0 - p_lshr_i1_cast_fu_654_p4);

assign p_neg_t_i2_fu_802_p2 = (6'd0 - p_lshr_i2_cast_reg_1151);

assign p_neg_t_i3_fu_875_p2 = (6'd0 - p_lshr_i3_cast_reg_1167);

assign p_neg_t_i_fu_574_p2 = (6'd0 - p_lshr_i_cast_fu_564_p4);

assign p_shl1_cast_fu_410_p1 = tmp_15_fu_402_p3;

assign p_shl3_cast_fu_984_p1 = tmp_60_fu_976_p3;

assign p_shl_cast_fu_398_p1 = tmp_14_fu_390_p3;

assign temp_0_1_cast_fu_922_p1 = temp_0_fu_916_p2;

assign temp_0_fu_916_p2 = (Sbox_q0 ^ Rcon0_q0);

assign temp_1_cast_fu_927_p1 = Sbox_q1;

assign temp_2_cast_fu_932_p1 = Sbox_q2;

assign tmp_10_fu_1013_p5 = i_2_reg_303[1:0];

assign tmp_11_cast_fu_494_p1 = tmp_s_fu_488_p2;

assign tmp_11_fu_510_p2 = ($signed(9'd360) + $signed(tmp_8_cast1_fu_480_p1));

assign tmp_12_fu_1037_p2 = (word_q1 ^ tmp_10_reg_1225);

assign tmp_13_fu_459_p1 = j_1_reg_251[1:0];

assign tmp_14_cast_fu_505_p1 = tmp_2_fu_499_p2;

assign tmp_14_fu_390_p3 = {{i_reg_239}, {7'd0}};

assign tmp_15_cast_fu_516_p1 = tmp_11_fu_510_p2;

assign tmp_15_fu_402_p3 = {{i_reg_239}, {3'd0}};

assign tmp_16_fu_414_p2 = (p_shl_cast_fu_398_p1 - p_shl1_cast_fu_410_p1);

assign tmp_17_fu_420_p1 = tmp_16_fu_414_p2[2:0];

assign tmp_18_fu_424_p2 = (tmp_17_fu_420_p1 | j_reg_227);

assign tmp_19_fu_430_p4 = {{tmp_16_fu_414_p2[10:3]}};

assign tmp_1_fu_942_p2 = ($signed(j_1_reg_251) + $signed(6'd60));

assign tmp_20_fu_440_p3 = {{tmp_19_fu_430_p4}, {tmp_18_fu_424_p2}};

assign tmp_21_fu_448_p1 = $signed(tmp_20_fu_440_p3);

assign tmp_23_fu_521_p1 = reg_330[3:0];

assign tmp_24_fu_531_p1 = p_neg1_fu_525_p2[3:0];

assign tmp_25_fu_535_p3 = {{6'd0}, {tmp_24_fu_531_p1}};

assign tmp_26_fu_543_p2 = (10'd0 - tmp_25_fu_535_p3);

assign tmp_27_fu_549_p3 = {{6'd0}, {tmp_23_fu_521_p1}};

assign tmp_28_fu_557_p3 = ((tmp_22_reg_1118[0:0] === 1'b1) ? tmp_26_fu_543_p2 : tmp_27_fu_549_p3);

assign tmp_29_fu_580_p4 = {{reg_330[9:4]}};

assign tmp_2_cast_fu_948_p1 = tmp_1_fu_942_p2;

assign tmp_2_fu_499_p2 = (9'd240 + tmp_8_cast1_fu_480_p1);

assign tmp_30_cast_fu_597_p3 = {{tmp_30_fu_590_p3}, {4'd0}};

assign tmp_30_fu_590_p3 = ((tmp_22_reg_1118[0:0] === 1'b1) ? p_neg_t_i_fu_574_p2 : tmp_29_fu_580_p4);

assign tmp_31_cast_fu_741_p1 = $signed(tmp_31_reg_1130);

assign tmp_31_fu_605_p2 = (tmp_30_cast_fu_597_p3 + tmp_28_fu_557_p3);

assign tmp_33_fu_611_p1 = reg_335[3:0];

assign tmp_34_fu_621_p1 = p_neg2_fu_615_p2[3:0];

assign tmp_35_fu_625_p3 = {{6'd0}, {tmp_34_fu_621_p1}};

assign tmp_36_fu_633_p2 = (10'd0 - tmp_35_fu_625_p3);

assign tmp_37_fu_639_p3 = {{6'd0}, {tmp_33_fu_611_p1}};

assign tmp_38_fu_647_p3 = ((tmp_32_reg_1124[0:0] === 1'b1) ? tmp_36_fu_633_p2 : tmp_37_fu_639_p3);

assign tmp_39_cast_fu_687_p3 = {{tmp_41_fu_680_p3}, {4'd0}};

assign tmp_39_fu_670_p4 = {{reg_335[9:4]}};

assign tmp_3_fu_463_p2 = ((tmp_13_fu_459_p1 == 2'd0) ? 1'b1 : 1'b0);

assign tmp_40_cast_fu_766_p1 = $signed(tmp_40_reg_1135);

assign tmp_40_fu_695_p2 = (tmp_39_cast_fu_687_p3 + tmp_38_fu_647_p3);

assign tmp_41_fu_680_p3 = ((tmp_32_reg_1124[0:0] === 1'b1) ? p_neg_t_i1_fu_664_p2 : tmp_39_fu_670_p4);

assign tmp_43_fu_770_p1 = reg_330[3:0];

assign tmp_44_fu_707_p1 = p_neg5_fu_701_p2[3:0];

assign tmp_45_fu_774_p3 = {{6'd0}, {tmp_44_reg_1146}};

assign tmp_46_fu_781_p2 = (10'd0 - tmp_45_fu_774_p3);

assign tmp_47_fu_787_p3 = {{6'd0}, {tmp_43_fu_770_p1}};

assign tmp_48_cast_fu_824_p3 = {{tmp_51_fu_817_p3}, {4'd0}};

assign tmp_48_fu_795_p3 = ((tmp_42_reg_1140[0:0] === 1'b1) ? tmp_46_fu_781_p2 : tmp_47_fu_787_p3);

assign tmp_49_cast_fu_838_p1 = $signed(tmp_49_fu_832_p2);

assign tmp_49_fu_832_p2 = (tmp_48_cast_fu_824_p3 + tmp_48_fu_795_p3);

assign tmp_4_fu_380_p2 = (tmp_reg_1051 + i_cast_fu_364_p1);

assign tmp_50_fu_807_p4 = {{reg_330[9:4]}};

assign tmp_51_fu_817_p3 = ((tmp_42_reg_1140[0:0] === 1'b1) ? p_neg_t_i2_fu_802_p2 : tmp_50_fu_807_p4);

assign tmp_53_fu_843_p1 = reg_335[3:0];

assign tmp_54_fu_727_p1 = p_neg_fu_721_p2[3:0];

assign tmp_55_fu_847_p3 = {{6'd0}, {tmp_54_reg_1162}};

assign tmp_56_fu_854_p2 = (10'd0 - tmp_55_fu_847_p3);

assign tmp_57_cast_fu_897_p3 = {{tmp_66_fu_890_p3}, {4'd0}};

assign tmp_57_fu_860_p3 = {{6'd0}, {tmp_53_fu_843_p1}};

assign tmp_58_cast_fu_911_p1 = $signed(tmp_58_fu_905_p2);

assign tmp_58_fu_905_p2 = (tmp_57_cast_fu_897_p3 + tmp_64_fu_868_p3);

assign tmp_59_fu_968_p3 = {{i_2_reg_303}, {7'd0}};

assign tmp_5_fu_385_p1 = tmp_4_fu_380_p2;

assign tmp_60_fu_976_p3 = {{i_2_reg_303}, {3'd0}};

assign tmp_61_fu_988_p2 = (tmp_59_fu_968_p3 - p_shl3_cast_fu_984_p1);

assign tmp_62_cast_fu_999_p1 = $signed(tmp_62_fu_994_p2);

assign tmp_62_fu_994_p2 = (tmp_2_cast_reg_1197 + tmp_61_fu_988_p2);

assign tmp_63_cast_fu_1033_p1 = $signed(tmp_63_reg_1220);

assign tmp_63_fu_1004_p2 = (tmp_cast_reg_1202 + tmp_61_fu_988_p2);

assign tmp_64_fu_868_p3 = ((tmp_52_reg_1156[0:0] === 1'b1) ? tmp_56_fu_854_p2 : tmp_57_fu_860_p3);

assign tmp_65_fu_880_p4 = {{reg_335[9:4]}};

assign tmp_66_fu_890_p3 = ((tmp_52_reg_1156[0:0] === 1'b1) ? p_neg_t_i3_fu_875_p2 : tmp_65_fu_880_p4);

assign tmp_6_fu_352_p1 = j_reg_227[1:0];

assign tmp_7_fu_469_p2 = ($signed(6'd63) + $signed(j_1_reg_251));

assign tmp_8_cast1_fu_480_p1 = tmp_7_fu_469_p2;

assign tmp_8_cast_fu_484_p1 = tmp_7_fu_469_p2;

assign tmp_8_fu_475_p1 = tmp_7_fu_469_p2;

assign tmp_9_fu_761_p1 = addconv_fu_755_p2;

assign tmp_cast_fu_952_p1 = j_1_reg_251;

assign tmp_fu_356_p3 = {{tmp_6_fu_352_p1}, {2'd0}};

assign tmp_s_fu_488_p2 = (8'd120 + tmp_8_cast_fu_484_p1);

always @ (posedge ap_clk) begin
    tmp_reg_1051[1:0] <= 2'b00;
    word_addr_4_reg_1093[8:6] <= 3'b000;
    tmp_2_cast_reg_1197[9:6] <= 4'b0000;
    tmp_cast_reg_1202[9:6] <= 4'b0000;
end

endmodule //KeySchedule
