
module MixColumn_AddRoundKe
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_idle,
  ap_ready,
  statemt_address0,
  statemt_ce0,
  statemt_we0,
  statemt_d0,
  statemt_q0,
  statemt_address1,
  statemt_ce1,
  statemt_we1,
  statemt_d1,
  statemt_q1,
  n
);

  parameter ap_ST_fsm_state1 = 14'd1;
  parameter ap_ST_fsm_state2 = 14'd2;
  parameter ap_ST_fsm_state3 = 14'd4;
  parameter ap_ST_fsm_state4 = 14'd8;
  parameter ap_ST_fsm_state5 = 14'd16;
  parameter ap_ST_fsm_state6 = 14'd32;
  parameter ap_ST_fsm_state7 = 14'd64;
  parameter ap_ST_fsm_state8 = 14'd128;
  parameter ap_ST_fsm_state9 = 14'd256;
  parameter ap_ST_fsm_state10 = 14'd512;
  parameter ap_ST_fsm_state11 = 14'd1024;
  parameter ap_ST_fsm_state12 = 14'd2048;
  parameter ap_ST_fsm_state13 = 14'd4096;
  parameter ap_ST_fsm_state14 = 14'd8192;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [4:0] statemt_address0;
  output statemt_ce0;
  output statemt_we0;
  output [31:0] statemt_d0;
  input [31:0] statemt_q0;
  output [4:0] statemt_address1;
  output statemt_ce1;
  output statemt_we1;
  output [31:0] statemt_d1;
  input [31:0] statemt_q1;
  input [31:0] n;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg [4:0] statemt_address0;
  reg statemt_ce0;
  reg statemt_we0;
  reg [4:0] statemt_address1;
  reg statemt_ce1;
  reg statemt_we1;
  reg [13:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  reg [8:0] word2_address0;
  reg word2_ce0;
  wire [7:0] word2_q0;
  wire [8:0] word2_address1;
  reg word2_ce1;
  wire [7:0] word2_q1;
  wire [8:0] word2_address2;
  reg word2_ce2;
  wire [7:0] word2_q2;
  wire [7:0] tmp_fu_517_p3;
  reg [7:0] tmp_reg_1039;
  wire [2:0] j_1_fu_535_p2;
  reg [2:0] j_1_reg_1047;
  wire ap_CS_fsm_state2;
  wire [3:0] tmp_6_fu_545_p3;
  reg [3:0] tmp_6_reg_1052;
  wire [0:0] exitcond_fu_529_p2;
  wire [31:0] tmp_6_cast_fu_553_p1;
  reg [31:0] tmp_6_cast_reg_1058;
  wire [31:0] tmp_cast_fu_564_p1;
  reg [31:0] tmp_cast_reg_1068;
  wire [7:0] tmp_10_fu_569_p2;
  reg [7:0] tmp_10_reg_1078;
  reg [31:0] x_6_reg_1095;
  wire ap_CS_fsm_state3;
  wire [0:0] tmp_8_fu_582_p2;
  reg [0:0] tmp_8_reg_1103;
  reg [31:0] x_reg_1108;
  wire [31:0] tmp_29_fu_588_p2;
  reg [31:0] tmp_29_reg_1114;
  wire [31:0] x_1_fu_594_p2;
  reg [31:0] x_1_reg_1120;
  wire [0:0] tmp_2_fu_618_p2;
  reg [0:0] tmp_2_reg_1126;
  wire [31:0] tmp_10_cast_fu_629_p1;
  reg [31:0] tmp_10_cast_reg_1131;
  wire [31:0] tmp_11_cast_fu_639_p1;
  reg [31:0] tmp_11_cast_reg_1141;
  wire [0:0] tmp_12_fu_656_p2;
  reg [0:0] tmp_12_reg_1156;
  reg [31:0] x_2_reg_1161;
  wire ap_CS_fsm_state4;
  reg [31:0] x_4_reg_1166;
  wire [31:0] tmp_35_fu_759_p2;
  reg [31:0] tmp_35_reg_1186;
  wire [31:0] x_3_fu_765_p2;
  reg [31:0] x_3_reg_1192;
  wire [0:0] tmp_15_fu_789_p2;
  reg [0:0] tmp_15_reg_1198;
  wire [0:0] tmp_18_fu_803_p2;
  reg [0:0] tmp_18_reg_1203;
  wire [31:0] x_5_fu_815_p2;
  reg [31:0] x_5_reg_1208;
  wire [0:0] tmp_21_fu_839_p2;
  reg [0:0] tmp_21_reg_1214;
  wire [31:0] tmp12_fu_916_p2;
  reg [31:0] tmp12_reg_1219;
  wire [31:0] tmp_28_fu_1033_p2;
  reg [31:0] tmp_28_reg_1224;
  wire ap_CS_fsm_state5;
  wire ap_CS_fsm_state7;
  wire ap_CS_fsm_state8;
  wire ap_CS_fsm_state9;
  wire ap_CS_fsm_state10;
  wire ap_CS_fsm_state11;
  wire ap_CS_fsm_state12;
  wire ap_CS_fsm_state13;
  reg [4:0] ret_address0;
  reg ret_ce0;
  reg ret_we0;
  reg [31:0] ret_d0;
  wire [31:0] ret_q0;
  reg [4:0] ret_address1;
  reg ret_ce1;
  reg ret_we1;
  reg [31:0] ret_d1;
  wire [31:0] ret_q1;
  reg [2:0] j_reg_482;
  wire ap_CS_fsm_state6;
  wire [31:0] tmp_12_cast_fu_644_p1;
  wire [31:0] tmp_35_cast_fu_703_p1;
  wire [31:0] tmp_36_cast_fu_714_p1;
  wire signed [31:0] tmp_37_cast_fu_725_p1;
  wire ap_CS_fsm_state14;
  wire [31:0] tmp_11_fu_752_p2;
  wire [31:0] tmp_17_fu_964_p2;
  wire [31:0] tmp_23_fu_1013_p2;
  wire [5:0] tmp_1_fu_513_p1;
  wire [1:0] tmp_7_fu_541_p1;
  wire [3:0] tmp_s_fu_558_p2;
  wire [7:0] j_cast1_fu_525_p1;
  wire [23:0] grp_fu_493_p4;
  wire [31:0] p_mask_fu_574_p3;
  wire [23:0] tmp_30_fu_600_p4;
  wire [31:0] p_mask1_fu_610_p3;
  wire [3:0] tmp_3_fu_624_p2;
  wire [3:0] tmp_5_fu_634_p2;
  wire [23:0] grp_fu_503_p4;
  wire [31:0] p_mask2_fu_648_p3;
  wire [31:0] tmp_14_fu_662_p2;
  wire [31:0] tmp_9_fu_667_p2;
  wire [31:0] tmp_4_fu_680_p2;
  wire [8:0] tmp_12_cast_cast_fu_694_p1;
  wire [8:0] tmp_31_fu_697_p2;
  wire [8:0] tmp_32_fu_708_p2;
  wire [9:0] tmp_12_cast_cast1_fu_691_p1;
  wire [9:0] tmp_33_fu_719_p2;
  wire [31:0] ret_load_1_fu_673_p3;
  wire [31:0] storemerge_v_fu_685_p3;
  wire [31:0] tmp3_fu_740_p2;
  wire [31:0] word2_load_cast_fu_730_p1;
  wire [31:0] tmp2_fu_746_p2;
  wire [31:0] tmp1_fu_734_p2;
  wire [23:0] tmp_36_fu_771_p4;
  wire [31:0] p_mask3_fu_781_p3;
  wire [31:0] p_mask4_fu_795_p3;
  wire [31:0] tmp_38_fu_809_p2;
  wire [23:0] tmp_39_fu_821_p4;
  wire [31:0] p_mask5_fu_831_p3;
  wire [31:0] p_mask6_fu_845_p3;
  wire [0:0] tmp_24_fu_853_p2;
  wire [31:0] tmp_25_fu_859_p2;
  wire [31:0] x_7_fu_873_p2;
  wire [23:0] tmp_41_fu_878_p4;
  wire [31:0] p_mask7_fu_888_p3;
  wire [0:0] tmp_26_fu_896_p2;
  wire [31:0] tmp_27_fu_902_p2;
  wire [31:0] storemerge1_v_fu_908_p3;
  wire [31:0] tmp_43_tmp_s_fu_865_p3;
  wire [31:0] tmp_13_fu_922_p2;
  wire [31:0] tmp_16_fu_933_p2;
  wire [31:0] storemerge8_v_fu_938_p3;
  wire [31:0] tmp_23_tmp_1_fu_927_p3;
  wire [31:0] tmp6_fu_952_p2;
  wire [31:0] word2_load_1_cast_fu_944_p1;
  wire [31:0] tmp5_fu_958_p2;
  wire [31:0] tmp4_fu_948_p2;
  wire [31:0] tmp_19_fu_971_p2;
  wire [31:0] tmp_22_fu_982_p2;
  wire [31:0] storemerge9_v_fu_987_p3;
  wire [31:0] tmp_33_tmp_s_fu_976_p3;
  wire [31:0] tmp9_fu_1001_p2;
  wire [31:0] word2_load_2_cast_fu_993_p1;
  wire [31:0] tmp8_fu_1007_p2;
  wire [31:0] tmp7_fu_997_p2;
  wire [31:0] word2_load_3_cast_fu_1020_p1;
  wire [31:0] tmp11_fu_1028_p2;
  wire [31:0] tmp10_fu_1024_p2;
  reg [13:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 14'd1;
  end


  MixColumn_AddRouneOg
  #(
    .DataWidth(8),
    .AddressRange(480),
    .AddressWidth(9)
  )
  word2_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(word2_address0),
    .ce0(word2_ce0),
    .q0(word2_q0),
    .address1(word2_address1),
    .ce1(word2_ce1),
    .q1(word2_q1),
    .address2(word2_address2),
    .ce2(word2_ce2),
    .q2(word2_q2)
  );


  MixColumn_AddRounfYi
  #(
    .DataWidth(32),
    .AddressRange(32),
    .AddressWidth(5)
  )
  ret_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(ret_address0),
    .ce0(ret_ce0),
    .we0(ret_we0),
    .d0(ret_d0),
    .q0(ret_q0),
    .address1(ret_address1),
    .ce1(ret_ce1),
    .we1(ret_we1),
    .d1(ret_d1),
    .q1(ret_q1)
  );


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      j_reg_482 <= j_1_reg_1047;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      j_reg_482 <= 3'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      j_1_reg_1047 <= j_1_fu_535_p2;
    end 
  end

  assign tmp_35_fu_759_p2_temp_0 = tmp_35_fu_759_p2 & 31'd4294967294;
  assign tmp_35_reg_1186_temp_1 = tmp_35_reg_1186 & 31'd1;
  assign tmp_35_fu_759_p2_temp_0_temp_2 = tmp_35_fu_759_p2_temp_0 | tmp_35_reg_1186_temp_1;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      tmp12_reg_1219 <= tmp12_fu_916_p2;
      tmp_15_reg_1198 <= tmp_15_fu_789_p2;
      tmp_18_reg_1203 <= tmp_18_fu_803_p2;
      tmp_21_reg_1214 <= tmp_21_fu_839_p2;
      tmp_35_reg_1186 <= tmp_35_fu_759_p2_temp_0_temp_2;
      x_2_reg_1161 <= statemt_q0;
      x_3_reg_1192 <= x_3_fu_765_p2;
      x_4_reg_1166 <= statemt_q1;
      x_5_reg_1208 <= x_5_fu_815_p2;
    end 
  end

  assign tmp_10_cast_fu_629_p1_temp_3 = tmp_10_cast_fu_629_p1 & 31'd12;
  assign tmp_10_cast_reg_1131_temp_4 = tmp_10_cast_reg_1131 & 31'd4294967283;
  assign tmp_10_cast_fu_629_p1_temp_3_temp_5 = tmp_10_cast_fu_629_p1_temp_3 | tmp_10_cast_reg_1131_temp_4;
  assign tmp_11_cast_fu_639_p1_temp_6 = tmp_11_cast_fu_639_p1 & 31'd12;
  assign tmp_11_cast_reg_1141_temp_7 = tmp_11_cast_reg_1141 & 31'd4294967283;
  assign tmp_11_cast_fu_639_p1_temp_6_temp_8 = tmp_11_cast_fu_639_p1_temp_6 | tmp_11_cast_reg_1141_temp_7;
  assign tmp_29_fu_588_p2_temp_9 = tmp_29_fu_588_p2 & 31'd4294967294;
  assign tmp_29_reg_1114_temp_10 = tmp_29_reg_1114 & 31'd1;
  assign tmp_29_fu_588_p2_temp_9_temp_11 = tmp_29_fu_588_p2_temp_9 | tmp_29_reg_1114_temp_10;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      tmp_10_cast_reg_1131 <= tmp_10_cast_fu_629_p1_temp_3_temp_5;
      tmp_11_cast_reg_1141 <= tmp_11_cast_fu_639_p1_temp_6_temp_8;
      tmp_12_reg_1156 <= tmp_12_fu_656_p2;
      tmp_29_reg_1114 <= tmp_29_fu_588_p2_temp_9_temp_11;
      tmp_2_reg_1126 <= tmp_2_fu_618_p2;
      tmp_8_reg_1103 <= tmp_8_fu_582_p2;
      x_1_reg_1120 <= x_1_fu_594_p2;
      x_6_reg_1095 <= statemt_q0;
      x_reg_1108 <= statemt_q1;
    end 
  end

  assign tmp_6_cast_fu_553_p1_temp_12 = tmp_6_cast_fu_553_p1 & 31'd12;
  assign tmp_6_cast_reg_1058_temp_13 = tmp_6_cast_reg_1058 & 31'd4294967283;
  assign tmp_6_cast_fu_553_p1_temp_12_temp_14 = tmp_6_cast_fu_553_p1_temp_12 | tmp_6_cast_reg_1058_temp_13;
  assign tmp_6_fu_545_p3_temp_15 = tmp_6_fu_545_p3 & 3'd12;
  assign tmp_6_reg_1052_temp_16 = tmp_6_reg_1052 & 3'd3;
  assign tmp_6_fu_545_p3_temp_15_temp_17 = tmp_6_fu_545_p3_temp_15 | tmp_6_reg_1052_temp_16;
  assign tmp_cast_fu_564_p1_temp_18 = tmp_cast_fu_564_p1 & 31'd12;
  assign tmp_cast_reg_1068_temp_19 = tmp_cast_reg_1068 & 31'd4294967283;
  assign tmp_cast_fu_564_p1_temp_18_temp_20 = tmp_cast_fu_564_p1_temp_18 | tmp_cast_reg_1068_temp_19;

  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state2) & (exitcond_fu_529_p2 == 1'd0)) begin
      tmp_10_reg_1078 <= tmp_10_fu_569_p2;
      tmp_6_cast_reg_1058 <= tmp_6_cast_fu_553_p1_temp_12_temp_14;
      tmp_6_reg_1052 <= tmp_6_fu_545_p3_temp_15_temp_17;
      tmp_cast_reg_1068 <= tmp_cast_fu_564_p1_temp_18_temp_20;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      tmp_28_reg_1224 <= tmp_28_fu_1033_p2;
    end 
  end

  assign tmp_fu_517_p3_temp_21 = tmp_fu_517_p3 & 7'd252;
  assign tmp_reg_1039_temp_22 = tmp_reg_1039 & 7'd3;
  assign tmp_fu_517_p3_temp_21_temp_23 = tmp_fu_517_p3_temp_21 | tmp_reg_1039_temp_22;

  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      tmp_reg_1039 <= tmp_fu_517_p3_temp_21_temp_23;
    end 
  end


  always @(*) begin
    if((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1) | (1'b1 == ap_CS_fsm_state14)) begin
      ap_done = 1'b1;
    end else begin
      ap_done = 1'b0;
    end
  end


  always @(*) begin
    if((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1)) begin
      ap_idle = 1'b1;
    end else begin
      ap_idle = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state14) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state13) begin
      ret_address0 = 32'd14;
    end else if(1'b1 == ap_CS_fsm_state12) begin
      ret_address0 = 32'd12;
    end else if(1'b1 == ap_CS_fsm_state11) begin
      ret_address0 = 32'd10;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      ret_address0 = 32'd8;
    end else if(1'b1 == ap_CS_fsm_state9) begin
      ret_address0 = 32'd6;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      ret_address0 = 32'd4;
    end else if(1'b1 == ap_CS_fsm_state7) begin
      ret_address0 = 32'd2;
    end else if(1'b1 == ap_CS_fsm_state5) begin
      ret_address0 = tmp_10_cast_reg_1131;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      ret_address0 = tmp_6_cast_reg_1058;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      ret_address0 = 32'd0;
    end else begin
      ret_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state13) begin
      ret_address1 = 32'd15;
    end else if(1'b1 == ap_CS_fsm_state12) begin
      ret_address1 = 32'd13;
    end else if(1'b1 == ap_CS_fsm_state11) begin
      ret_address1 = 32'd11;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      ret_address1 = 32'd9;
    end else if(1'b1 == ap_CS_fsm_state9) begin
      ret_address1 = 32'd7;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      ret_address1 = 32'd5;
    end else if(1'b1 == ap_CS_fsm_state7) begin
      ret_address1 = 32'd3;
    end else if(1'b1 == ap_CS_fsm_state6) begin
      ret_address1 = tmp_11_cast_reg_1141;
    end else if(1'b1 == ap_CS_fsm_state5) begin
      ret_address1 = tmp_cast_reg_1068;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      ret_address1 = 32'd1;
    end else begin
      ret_address1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state13)) begin
      ret_ce0 = 1'b1;
    end else begin
      ret_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state6)) begin
      ret_ce1 = 1'b1;
    end else begin
      ret_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      ret_d0 = tmp_23_fu_1013_p2;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      ret_d0 = tmp_11_fu_752_p2;
    end else begin
      ret_d0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      ret_d1 = tmp_28_reg_1224;
    end else if(1'b1 == ap_CS_fsm_state5) begin
      ret_d1 = tmp_17_fu_964_p2;
    end else begin
      ret_d1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state5)) begin
      ret_we0 = 1'b1;
    end else begin
      ret_we0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state6)) begin
      ret_we1 = 1'b1;
    end else begin
      ret_we1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state14) begin
      statemt_address0 = 32'd14;
    end else if(1'b1 == ap_CS_fsm_state13) begin
      statemt_address0 = 32'd12;
    end else if(1'b1 == ap_CS_fsm_state12) begin
      statemt_address0 = 32'd10;
    end else if(1'b1 == ap_CS_fsm_state11) begin
      statemt_address0 = 32'd8;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      statemt_address0 = 32'd6;
    end else if(1'b1 == ap_CS_fsm_state9) begin
      statemt_address0 = 32'd4;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_address0 = 32'd2;
    end else if(1'b1 == ap_CS_fsm_state7) begin
      statemt_address0 = 32'd0;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address0 = tmp_10_cast_fu_629_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address0 = tmp_6_cast_fu_553_p1;
    end else begin
      statemt_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state14) begin
      statemt_address1 = 32'd15;
    end else if(1'b1 == ap_CS_fsm_state13) begin
      statemt_address1 = 32'd13;
    end else if(1'b1 == ap_CS_fsm_state12) begin
      statemt_address1 = 32'd11;
    end else if(1'b1 == ap_CS_fsm_state11) begin
      statemt_address1 = 32'd9;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      statemt_address1 = 32'd7;
    end else if(1'b1 == ap_CS_fsm_state9) begin
      statemt_address1 = 32'd5;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_address1 = 32'd3;
    end else if(1'b1 == ap_CS_fsm_state7) begin
      statemt_address1 = 32'd1;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address1 = tmp_11_cast_fu_639_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address1 = tmp_cast_fu_564_p1;
    end else begin
      statemt_address1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state14)) begin
      statemt_ce0 = 1'b1;
    end else begin
      statemt_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state14)) begin
      statemt_ce1 = 1'b1;
    end else begin
      statemt_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state14)) begin
      statemt_we0 = 1'b1;
    end else begin
      statemt_we0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state14)) begin
      statemt_we1 = 1'b1;
    end else begin
      statemt_we1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      word2_address0 = tmp_35_cast_fu_703_p1;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      word2_address0 = tmp_12_cast_fu_644_p1;
    end else begin
      word2_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state4)) begin
      word2_ce0 = 1'b1;
    end else begin
      word2_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      word2_ce1 = 1'b1;
    end else begin
      word2_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      word2_ce2 = 1'b1;
    end else begin
      word2_ce2 = 1'b0;
    end
  end


  always @(*) begin
    case(ap_CS_fsm)
      ap_ST_fsm_state1: begin
        if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end
      end
      ap_ST_fsm_state2: begin
        if((1'b1 == ap_CS_fsm_state2) & (exitcond_fu_529_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state7;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        ap_NS_fsm = ap_ST_fsm_state4;
      end
      ap_ST_fsm_state4: begin
        ap_NS_fsm = ap_ST_fsm_state5;
      end
      ap_ST_fsm_state5: begin
        ap_NS_fsm = ap_ST_fsm_state6;
      end
      ap_ST_fsm_state6: begin
        ap_NS_fsm = ap_ST_fsm_state2;
      end
      ap_ST_fsm_state7: begin
        ap_NS_fsm = ap_ST_fsm_state8;
      end
      ap_ST_fsm_state8: begin
        ap_NS_fsm = ap_ST_fsm_state9;
      end
      ap_ST_fsm_state9: begin
        ap_NS_fsm = ap_ST_fsm_state10;
      end
      ap_ST_fsm_state10: begin
        ap_NS_fsm = ap_ST_fsm_state11;
      end
      ap_ST_fsm_state11: begin
        ap_NS_fsm = ap_ST_fsm_state12;
      end
      ap_ST_fsm_state12: begin
        ap_NS_fsm = ap_ST_fsm_state13;
      end
      ap_ST_fsm_state13: begin
        ap_NS_fsm = ap_ST_fsm_state14;
      end
      ap_ST_fsm_state14: begin
        ap_NS_fsm = ap_ST_fsm_state1;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];
  assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];
  assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];
  assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];
  assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];
  assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];
  assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];
  assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];
  assign exitcond_fu_529_p2 = (j_reg_482 == 3'd4)? 1'b1 : 1'b0;
  assign statemt_q0_temp_24 = statemt_q0 >> 1'd7;
  assign statemt_q0_temp_25 = statemt_q0_temp_24 & 24'd16777215;
  assign grp_fu_493_p4 = statemt_q0_temp_25;
  assign statemt_q1_temp_26 = statemt_q1 >> 1'd7;
  assign statemt_q1_temp_27 = statemt_q1_temp_26 & 24'd16777215;
  assign grp_fu_503_p4 = statemt_q1_temp_27;
  assign j_1_fu_535_p2 = j_reg_482 + 3'd1;
  assign j_cast1_fu_525_p1 = j_reg_482;
  assign tmp_30_fu_600_p4_temp_28 = tmp_30_fu_600_p4 << 1'd8;
  assign p_mask1_fu_610_p3 = tmp_30_fu_600_p4_temp_28;
  assign grp_fu_503_p4_temp_29 = grp_fu_503_p4 << 1'd8;
  assign p_mask2_fu_648_p3 = grp_fu_503_p4_temp_29;
  assign tmp_36_fu_771_p4_temp_30 = tmp_36_fu_771_p4 << 1'd8;
  assign p_mask3_fu_781_p3 = tmp_36_fu_771_p4_temp_30;
  assign grp_fu_493_p4_temp_31 = grp_fu_493_p4 << 1'd8;
  assign p_mask4_fu_795_p3 = grp_fu_493_p4_temp_31;
  assign tmp_39_fu_821_p4_temp_32 = tmp_39_fu_821_p4 << 1'd8;
  assign p_mask5_fu_831_p3 = tmp_39_fu_821_p4_temp_32;
  assign grp_fu_503_p4_temp_33 = grp_fu_503_p4 << 1'd8;
  assign p_mask6_fu_845_p3 = grp_fu_503_p4_temp_33;
  assign tmp_41_fu_878_p4_temp_34 = tmp_41_fu_878_p4 << 1'd8;
  assign p_mask7_fu_888_p3 = tmp_41_fu_878_p4_temp_34;
  assign grp_fu_493_p4_temp_35 = grp_fu_493_p4 << 1'd8;
  assign p_mask_fu_574_p3 = grp_fu_493_p4_temp_35;
  assign tmp_8_reg_1103_temp_36 = tmp_8_reg_1103 & 31'd1;
  assign ret_load_1_fu_673_p3 = (tmp_8_reg_1103_temp_36 === 1'b1)? tmp_9_fu_667_p2 : tmp_14_fu_662_p2;
  assign statemt_d0 = ret_q0;
  assign statemt_d1 = ret_q1;
  assign tmp_26_fu_896_p2_temp_37 = tmp_26_fu_896_p2 & 31'd1;
  assign storemerge1_v_fu_908_p3 = (tmp_26_fu_896_p2_temp_37 === 1'b1)? tmp_27_fu_902_p2 : x_7_fu_873_p2;
  assign tmp_15_reg_1198_temp_38 = tmp_15_reg_1198 & 31'd1;
  assign storemerge8_v_fu_938_p3 = (tmp_15_reg_1198_temp_38 === 1'b1)? tmp_16_fu_933_p2 : x_3_reg_1192;
  assign tmp_21_reg_1214_temp_39 = tmp_21_reg_1214 & 31'd1;
  assign storemerge9_v_fu_987_p3 = (tmp_21_reg_1214_temp_39 === 1'b1)? tmp_22_fu_982_p2 : x_5_reg_1208;
  assign tmp_2_reg_1126_temp_40 = tmp_2_reg_1126 & 31'd1;
  assign storemerge_v_fu_685_p3 = (tmp_2_reg_1126_temp_40 === 1'b1)? tmp_4_fu_680_p2 : x_1_reg_1120;
  assign tmp10_fu_1024_p2 = x_2_reg_1161 ^ x_reg_1108;
  assign tmp11_fu_1028_p2 = tmp12_reg_1219 ^ word2_load_3_cast_fu_1020_p1;
  assign tmp12_fu_916_p2 = storemerge1_v_fu_908_p3 ^ tmp_43_tmp_s_fu_865_p3;
  assign tmp1_fu_734_p2 = statemt_q0 ^ statemt_q1;
  assign tmp2_fu_746_p2 = tmp3_fu_740_p2 ^ word2_load_cast_fu_730_p1;
  assign tmp3_fu_740_p2 = ret_load_1_fu_673_p3 ^ storemerge_v_fu_685_p3;
  assign tmp4_fu_948_p2 = x_4_reg_1166 ^ x_6_reg_1095;
  assign tmp5_fu_958_p2 = tmp6_fu_952_p2 ^ word2_load_1_cast_fu_944_p1;
  assign tmp6_fu_952_p2 = storemerge8_v_fu_938_p3 ^ tmp_23_tmp_1_fu_927_p3;
  assign tmp7_fu_997_p2 = x_reg_1108 ^ x_6_reg_1095;
  assign tmp8_fu_1007_p2 = tmp9_fu_1001_p2 ^ word2_load_2_cast_fu_993_p1;
  assign tmp9_fu_1001_p2 = storemerge9_v_fu_987_p3 ^ tmp_33_tmp_s_fu_976_p3;
  assign tmp_10_cast_fu_629_p1 = tmp_3_fu_624_p2;
  assign tmp_10_fu_569_p2 = tmp_reg_1039 + j_cast1_fu_525_p1;
  assign tmp_11_cast_fu_639_p1 = tmp_5_fu_634_p2;
  assign tmp_11_fu_752_p2 = tmp2_fu_746_p2 ^ tmp1_fu_734_p2;
  assign tmp_12_cast_cast1_fu_691_p1 = tmp_10_reg_1078;
  assign tmp_12_cast_cast_fu_694_p1 = tmp_10_reg_1078;
  assign tmp_12_cast_fu_644_p1 = tmp_10_reg_1078;
  assign tmp_12_fu_656_p2 = (p_mask2_fu_648_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_13_fu_922_p2 = tmp_29_reg_1114 ^ 32'd283;
  assign tmp_14_fu_662_p2 = x_6_reg_1095 << 32'd1;
  assign tmp_15_fu_789_p2 = (p_mask3_fu_781_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_16_fu_933_p2 = x_3_reg_1192 ^ 32'd283;
  assign tmp_17_fu_964_p2 = tmp5_fu_958_p2 ^ tmp4_fu_948_p2;
  assign tmp_18_fu_803_p2 = (p_mask4_fu_795_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_19_fu_971_p2 = tmp_35_reg_1186 ^ 32'd283;
  assign tmp_1_fu_513_p1 = (n & 6'd63);
  assign tmp_21_fu_839_p2 = (p_mask5_fu_831_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_22_fu_982_p2 = x_5_reg_1208 ^ 32'd283;
  assign tmp_23_fu_1013_p2 = tmp8_fu_1007_p2 ^ tmp7_fu_997_p2;
  assign tmp_12_reg_1156_temp_41 = tmp_12_reg_1156 & 31'd1;
  assign tmp_23_tmp_1_fu_927_p3 = (tmp_12_reg_1156_temp_41 === 1'b1)? tmp_13_fu_922_p2 : tmp_29_reg_1114;
  assign tmp_24_fu_853_p2 = (p_mask6_fu_845_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_25_fu_859_p2 = tmp_38_fu_809_p2 ^ 32'd283;
  assign tmp_26_fu_896_p2 = (p_mask7_fu_888_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_27_fu_902_p2 = x_7_fu_873_p2 ^ 32'd283;
  assign tmp_28_fu_1033_p2 = tmp11_fu_1028_p2 ^ tmp10_fu_1024_p2;
  assign tmp_29_fu_588_p2 = statemt_q1 << 32'd1;
  assign tmp_2_fu_618_p2 = (p_mask1_fu_610_p3 == 32'd256)? 1'b1 : 1'b0;
  assign x_1_fu_594_p2_temp_42 = x_1_fu_594_p2 >> 1'd8;
  assign x_1_fu_594_p2_temp_43 = x_1_fu_594_p2_temp_42 & 24'd16777215;
  assign tmp_30_fu_600_p4 = x_1_fu_594_p2_temp_43;
  assign tmp_31_fu_697_p2 = 9'd120 + tmp_12_cast_cast_fu_694_p1;
  assign tmp_32_fu_708_p2 = 9'd240 + tmp_12_cast_cast_fu_694_p1;
  assign tmp_33_fu_719_p2 = 10'd360 + tmp_12_cast_cast1_fu_691_p1;
  assign tmp_18_reg_1203_temp_44 = tmp_18_reg_1203 & 31'd1;
  assign tmp_33_tmp_s_fu_976_p3 = (tmp_18_reg_1203_temp_44 === 1'b1)? tmp_19_fu_971_p2 : tmp_35_reg_1186;
  assign tmp_35_cast_fu_703_p1 = tmp_31_fu_697_p2;
  assign tmp_35_fu_759_p2 = statemt_q0 << 32'd1;
  assign tmp_36_cast_fu_714_p1 = tmp_32_fu_708_p2;
  assign x_3_fu_765_p2_temp_45 = x_3_fu_765_p2 >> 1'd8;
  assign x_3_fu_765_p2_temp_46 = x_3_fu_765_p2_temp_45 & 24'd16777215;
  assign tmp_36_fu_771_p4 = x_3_fu_765_p2_temp_46;
  assign tmp_37_cast_fu_725_p1 = $signed(tmp_33_fu_719_p2);
  assign tmp_38_fu_809_p2 = statemt_q1 << 32'd1;
  assign x_5_fu_815_p2_temp_47 = x_5_fu_815_p2 >> 1'd8;
  assign x_5_fu_815_p2_temp_48 = x_5_fu_815_p2_temp_47 & 24'd16777215;
  assign tmp_39_fu_821_p4 = x_5_fu_815_p2_temp_48;
  assign tmp_3_fu_624_p2 = tmp_6_reg_1052 | 4'd2;
  assign x_7_fu_873_p2_temp_49 = x_7_fu_873_p2 >> 1'd8;
  assign x_7_fu_873_p2_temp_50 = x_7_fu_873_p2_temp_49 & 24'd16777215;
  assign tmp_41_fu_878_p4 = x_7_fu_873_p2_temp_50;
  assign tmp_24_fu_853_p2_temp_51 = tmp_24_fu_853_p2 & 31'd1;
  assign tmp_43_tmp_s_fu_865_p3 = (tmp_24_fu_853_p2_temp_51 === 1'b1)? tmp_25_fu_859_p2 : tmp_38_fu_809_p2;
  assign tmp_4_fu_680_p2 = x_1_reg_1120 ^ 32'd283;
  assign tmp_5_fu_634_p2 = tmp_6_reg_1052 | 4'd3;
  assign tmp_6_cast_fu_553_p1 = tmp_6_fu_545_p3;
  assign tmp_7_fu_541_p1_temp_52 = tmp_7_fu_541_p1 << 1'd2;
  assign tmp_6_fu_545_p3 = tmp_7_fu_541_p1_temp_52;
  assign tmp_7_fu_541_p1 = (j_reg_482 & 2'd3);
  assign tmp_8_fu_582_p2 = (p_mask_fu_574_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_9_fu_667_p2 = tmp_14_fu_662_p2 ^ 32'd283;
  assign tmp_cast_fu_564_p1 = tmp_s_fu_558_p2;
  assign tmp_1_fu_513_p1_temp_53 = tmp_1_fu_513_p1 << 1'd2;
  assign tmp_fu_517_p3 = tmp_1_fu_513_p1_temp_53;
  assign tmp_s_fu_558_p2 = tmp_6_fu_545_p3 | 4'd1;
  assign word2_address1 = tmp_36_cast_fu_714_p1;
  assign word2_address2 = tmp_37_cast_fu_725_p1;
  assign word2_load_1_cast_fu_944_p1 = word2_q0;
  assign word2_load_2_cast_fu_993_p1 = word2_q1;
  assign word2_load_3_cast_fu_1020_p1 = word2_q2;
  assign word2_load_cast_fu_730_p1 = word2_q0;
  assign x_1_fu_594_p2 = statemt_q1 ^ tmp_29_fu_588_p2;
  assign x_3_fu_765_p2 = statemt_q0 ^ tmp_35_fu_759_p2;
  assign x_5_fu_815_p2 = statemt_q1 ^ tmp_38_fu_809_p2;
  assign x_7_fu_873_p2 = x_6_reg_1095 ^ tmp_14_fu_662_p2;

  always @(posedge ap_clk) begin
    tmp_reg_1039 <= tmp_reg_1039 & 1'd252;
    tmp_6_reg_1052 <= tmp_6_reg_1052 & 1'd12;
    tmp_6_cast_reg_1058 <= tmp_6_cast_reg_1058 & 1'd4294967292;
    tmp_6_cast_reg_1058 <= tmp_6_cast_reg_1058 & 31'd15;
    tmp_cast_reg_1068 <= tmp_cast_reg_1068 & 1'd4294967293;
    tmp_cast_reg_1068 <= tmp_cast_reg_1068 & 31'd15;
    tmp_29_reg_1114 <= tmp_29_reg_1114 & 1'd4294967294;
    tmp_10_cast_reg_1131 <= tmp_10_cast_reg_1131 & 1'd4294967294;
    tmp_10_cast_reg_1131 <= tmp_10_cast_reg_1131 & 31'd15;
    tmp_11_cast_reg_1141 <= tmp_11_cast_reg_1141 & 1'd4294967295;
    tmp_11_cast_reg_1141 <= tmp_11_cast_reg_1141 & 31'd15;
    tmp_35_reg_1186 <= tmp_35_reg_1186 & 1'd4294967294;
  end


endmodule

