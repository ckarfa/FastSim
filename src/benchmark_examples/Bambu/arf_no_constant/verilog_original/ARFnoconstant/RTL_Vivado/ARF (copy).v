// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="hls_macc,hls_ip_2017_2,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.912000,HLS_SYN_LAT=6,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=28,HLS_SYN_FF=1856,HLS_SYN_LUT=799}" *)

module hls_macc (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        i1,
        i2,
        i3,
        i4,
        i6,
        o1,
        o1_ap_vld,
        o2,
        o2_ap_vld,
        o3,
        o4,
        G1,
        G2,
        G3,
        G4,
        GG1,
        GG2
);

parameter    ap_ST_fsm_state1 = 7'd1;
parameter    ap_ST_fsm_state2 = 7'd2;
parameter    ap_ST_fsm_state3 = 7'd4;
parameter    ap_ST_fsm_state4 = 7'd8;
parameter    ap_ST_fsm_state5 = 7'd16;
parameter    ap_ST_fsm_state6 = 7'd32;
parameter    ap_ST_fsm_state7 = 7'd64;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] i1;
input  [31:0] i2;
input  [31:0] i3;
input  [31:0] i4;
input  [31:0] i6;
output  [31:0] o1;
output   o1_ap_vld;
output  [31:0] o2;
output   o2_ap_vld;
input  [31:0] o3;
input  [31:0] o4;
input  [31:0] G1;
input  [31:0] G2;
input  [31:0] G3;
input  [31:0] G4;
input  [31:0] GG1;
input  [31:0] GG2;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg o1_ap_vld;
reg o2_ap_vld;

(* fsm_encoding = "none" *) reg   [6:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [31:0] grp_fu_104_p2;
reg   [31:0] op4_reg_244;
wire    ap_CS_fsm_state2;
wire   [31:0] grp_fu_110_p2;
reg   [31:0] op5_reg_251;
wire   [31:0] grp_fu_116_p2;
reg   [31:0] op5_2_reg_256;
wire   [0:0] tmp_fu_122_p2;
reg   [0:0] tmp_reg_262;
wire    ap_CS_fsm_state3;
wire   [31:0] op5_1_fu_127_p2;
reg   [31:0] op5_1_reg_267;
wire   [0:0] tmp_6_fu_139_p2;
reg   [0:0] tmp_6_reg_272;
wire    ap_CS_fsm_state4;
wire   [31:0] grp_fu_144_p2;
reg   [31:0] op3_reg_282;
wire    ap_CS_fsm_state5;
wire   [31:0] grp_fu_149_p2;
reg   [31:0] op6_3_reg_287;
wire   [31:0] grp_fu_153_p2;
reg   [31:0] op7_reg_292;
wire   [31:0] grp_fu_157_p2;
reg   [31:0] op8_reg_297;
wire   [31:0] op6_1_fu_180_p3;
reg   [31:0] op6_1_reg_302;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state7;
wire  signed [31:0] tmp_fu_122_p0;
wire   [31:0] op5_3_fu_132_p3;
wire   [31:0] op6_fu_161_p2;
wire   [31:0] op6_2_fu_165_p2;
wire  signed [31:0] op6_4_fu_176_p1;
wire   [31:0] op6_4_fu_176_p2;
wire   [31:0] op6_5_fu_169_p3;
wire   [31:0] tmp2_fu_187_p2;
wire  signed [31:0] tmp1_fu_198_p1;
wire   [31:0] tmp1_fu_198_p2;
reg   [6:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 7'd1;
end

hls_macc_mul_32s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
hls_macc_mul_32s_bkb_U0(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(G2),
    .din1(i1),
    .ce(1'b1),
    .dout(grp_fu_104_p2)
);

hls_macc_mul_32s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
hls_macc_mul_32s_bkb_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(G1),
    .din1(i3),
    .ce(1'b1),
    .dout(grp_fu_110_p2)
);

hls_macc_mul_32s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
hls_macc_mul_32s_bkb_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(i4),
    .din1(i3),
    .ce(1'b1),
    .dout(grp_fu_116_p2)
);

hls_macc_mul_32s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
hls_macc_mul_32s_bkb_U3(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(G1),
    .din1(i2),
    .ce(1'b1),
    .dout(grp_fu_144_p2)
);

hls_macc_mul_32s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
hls_macc_mul_32s_bkb_U4(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(G2),
    .din1(i4),
    .ce(1'b1),
    .dout(grp_fu_149_p2)
);

hls_macc_mul_32s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
hls_macc_mul_32s_bkb_U5(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(G1),
    .din1(i4),
    .ce(1'b1),
    .dout(grp_fu_153_p2)
);

hls_macc_mul_32s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
hls_macc_mul_32s_bkb_U6(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(G2),
    .din1(i3),
    .ce(1'b1),
    .dout(grp_fu_157_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (tmp_reg_262 == 1'd0) & (tmp_6_reg_272 == 1'd0))) begin
        op3_reg_282 <= grp_fu_144_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        op4_reg_244 <= grp_fu_104_p2;
        op5_2_reg_256 <= grp_fu_116_p2;
        op5_reg_251 <= grp_fu_110_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        op5_1_reg_267 <= op5_1_fu_127_p2;
        tmp_6_reg_272 <= tmp_6_fu_139_p2;
        tmp_reg_262 <= tmp_fu_122_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        op6_1_reg_302 <= op6_1_fu_180_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (tmp_6_reg_272 == 1'd1))) begin
        op6_3_reg_287 <= grp_fu_149_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        op7_reg_292 <= grp_fu_153_p2;
        op8_reg_297 <= grp_fu_157_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        o1_ap_vld = 1'b1;
    end else begin
        o1_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        o2_ap_vld = 1'b1;
    end else begin
        o2_ap_vld = 1'b0;
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
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
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
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign o1 = (tmp1_fu_198_p2 + op4_reg_244);

assign o2 = (tmp2_fu_187_p2 + op7_reg_292);

assign op5_1_fu_127_p2 = (op5_reg_251 + GG1);

assign op5_3_fu_132_p3 = ((tmp_fu_122_p2[0:0] === 1'b1) ? op5_1_fu_127_p2 : op5_2_reg_256);

assign op6_1_fu_180_p3 = ((tmp_6_reg_272[0:0] === 1'b1) ? op6_4_fu_176_p2 : op6_5_fu_169_p3);

assign op6_2_fu_165_p2 = (op5_2_reg_256 - op3_reg_282);

assign op6_4_fu_176_p1 = i3;

assign op6_4_fu_176_p2 = ($signed(op6_3_reg_287) - $signed(op6_4_fu_176_p1));

assign op6_5_fu_169_p3 = ((tmp_reg_262[0:0] === 1'b1) ? op6_fu_161_p2 : op6_2_fu_165_p2);

assign op6_fu_161_p2 = (op5_1_reg_267 - op4_reg_244);

assign tmp1_fu_198_p1 = G1;

assign tmp1_fu_198_p2 = ($signed(op6_1_reg_302) + $signed(tmp1_fu_198_p1));

assign tmp2_fu_187_p2 = (op8_reg_297 + i6);

assign tmp_6_fu_139_p2 = ((op5_3_fu_132_p3 < op4_reg_244) ? 1'b1 : 1'b0);

assign tmp_fu_122_p0 = G1;

assign tmp_fu_122_p2 = ((tmp_fu_122_p0 > 32'd10) ? 1'b1 : 1'b0);

endmodule //hls_macc
