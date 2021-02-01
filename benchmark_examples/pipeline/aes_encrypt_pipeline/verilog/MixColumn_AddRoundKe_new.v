
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

  parameter ap_ST_fsm_state1 = 9'd1;
  parameter ap_ST_fsm_state2 = 9'd2;
  parameter ap_ST_fsm_state3 = 9'd4;
  parameter ap_ST_fsm_state4 = 9'd8;
  parameter ap_ST_fsm_state5 = 9'd16;
  parameter ap_ST_fsm_state6 = 9'd32;
  parameter ap_ST_fsm_state7 = 9'd64;
  parameter ap_ST_fsm_state8 = 9'd128;
  parameter ap_ST_fsm_state9 = 9'd256;
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
  reg [8:0] ap_CS_fsm;
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
  wire [7:0] tmp_fu_292_p3;
  reg [7:0] tmp_reg_874;
  wire [2:0] j_3_fu_310_p2;
  reg [2:0] j_3_reg_882;
  wire ap_CS_fsm_state2;
  wire [3:0] tmp_6_fu_320_p3;
  reg [3:0] tmp_6_reg_887;
  wire [0:0] exitcond1_fu_304_p2;
  wire [31:0] tmp_6_cast_fu_328_p1;
  reg [31:0] tmp_6_cast_reg_893;
  wire [31:0] tmp_cast_fu_339_p1;
  reg [31:0] tmp_cast_reg_903;
  wire [7:0] tmp_14_fu_344_p2;
  reg [7:0] tmp_14_reg_913;
  reg [31:0] x_6_reg_920;
  wire ap_CS_fsm_state3;
  wire [0:0] tmp_8_fu_357_p2;
  reg [0:0] tmp_8_reg_928;
  reg [31:0] x_reg_933;
  wire [31:0] tmp_33_fu_363_p2;
  reg [31:0] tmp_33_reg_939;
  wire [31:0] x_1_fu_369_p2;
  reg [31:0] x_1_reg_945;
  wire [0:0] tmp_2_fu_393_p2;
  reg [0:0] tmp_2_reg_951;
  wire [31:0] tmp_14_cast_fu_404_p1;
  reg [31:0] tmp_14_cast_reg_956;
  wire [31:0] tmp_15_cast_fu_414_p1;
  reg [31:0] tmp_15_cast_reg_966;
  wire [0:0] tmp_16_fu_431_p2;
  reg [0:0] tmp_16_reg_981;
  reg [31:0] x_2_reg_986;
  wire ap_CS_fsm_state4;
  reg [31:0] x_4_reg_991;
  wire [31:0] tmp_39_fu_534_p2;
  reg [31:0] tmp_39_reg_1011;
  wire [31:0] x_3_fu_540_p2;
  reg [31:0] x_3_reg_1017;
  wire [0:0] tmp_19_fu_564_p2;
  reg [0:0] tmp_19_reg_1023;
  wire [0:0] tmp_22_fu_578_p2;
  reg [0:0] tmp_22_reg_1028;
  wire [31:0] x_5_fu_590_p2;
  reg [31:0] x_5_reg_1033;
  wire [0:0] tmp_25_fu_614_p2;
  reg [0:0] tmp_25_reg_1039;
  wire [31:0] tmp12_fu_691_p2;
  reg [31:0] tmp12_reg_1044;
  wire [31:0] tmp_32_fu_808_p2;
  reg [31:0] tmp_32_reg_1049;
  wire ap_CS_fsm_state5;
  wire [2:0] j_2_fu_820_p2;
  reg [2:0] j_2_reg_1057;
  wire ap_CS_fsm_state7;
  wire [3:0] tmp_3_fu_830_p3;
  reg [3:0] tmp_3_reg_1062;
  wire [0:0] exitcond_fu_814_p2;
  wire [31:0] tmp_3_cast_fu_838_p1;
  reg [31:0] tmp_3_cast_reg_1068;
  wire [31:0] tmp_5_cast_fu_849_p1;
  reg [31:0] tmp_5_cast_reg_1078;
  wire [31:0] tmp_12_cast_fu_859_p1;
  reg [31:0] tmp_12_cast_reg_1088;
  wire ap_CS_fsm_state8;
  wire [31:0] tmp_13_cast_fu_869_p1;
  reg [31:0] tmp_13_cast_reg_1098;
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
  reg [2:0] j_reg_246;
  wire ap_CS_fsm_state6;
  reg [2:0] j_1_reg_257;
  wire ap_CS_fsm_state9;
  wire [31:0] tmp_16_cast_fu_419_p1;
  wire [31:0] tmp_39_cast_fu_478_p1;
  wire [31:0] tmp_40_cast_fu_489_p1;
  wire signed [31:0] tmp_41_cast_fu_500_p1;
  wire [31:0] tmp_15_fu_527_p2;
  wire [31:0] tmp_21_fu_739_p2;
  wire [31:0] tmp_27_fu_788_p2;
  wire [5:0] tmp_1_fu_288_p1;
  wire [1:0] tmp_7_fu_316_p1;
  wire [3:0] tmp_s_fu_333_p2;
  wire [7:0] j_cast1_fu_300_p1;
  wire [23:0] grp_fu_268_p4;
  wire [31:0] p_mask_fu_349_p3;
  wire [23:0] tmp_34_fu_375_p4;
  wire [31:0] p_mask1_fu_385_p3;
  wire [3:0] tmp_10_fu_399_p2;
  wire [3:0] tmp_11_fu_409_p2;
  wire [23:0] grp_fu_278_p4;
  wire [31:0] p_mask2_fu_423_p3;
  wire [31:0] tmp_18_fu_437_p2;
  wire [31:0] tmp_9_fu_442_p2;
  wire [31:0] tmp_4_fu_455_p2;
  wire [8:0] tmp_16_cast_cast_fu_469_p1;
  wire [8:0] tmp_35_fu_472_p2;
  wire [8:0] tmp_36_fu_483_p2;
  wire [9:0] tmp_16_cast_cast1_fu_466_p1;
  wire [9:0] tmp_37_fu_494_p2;
  wire [31:0] ret_load_1_fu_448_p3;
  wire [31:0] storemerge_v_fu_460_p3;
  wire [31:0] tmp3_fu_515_p2;
  wire [31:0] word2_load_cast_fu_505_p1;
  wire [31:0] tmp2_fu_521_p2;
  wire [31:0] tmp1_fu_509_p2;
  wire [23:0] tmp_40_fu_546_p4;
  wire [31:0] p_mask3_fu_556_p3;
  wire [31:0] p_mask4_fu_570_p3;
  wire [31:0] tmp_42_fu_584_p2;
  wire [23:0] tmp_43_fu_596_p4;
  wire [31:0] p_mask5_fu_606_p3;
  wire [31:0] p_mask6_fu_620_p3;
  wire [0:0] tmp_28_fu_628_p2;
  wire [31:0] tmp_29_fu_634_p2;
  wire [31:0] x_7_fu_648_p2;
  wire [23:0] tmp_45_fu_653_p4;
  wire [31:0] p_mask7_fu_663_p3;
  wire [0:0] tmp_30_fu_671_p2;
  wire [31:0] tmp_31_fu_677_p2;
  wire [31:0] storemerge1_v_fu_683_p3;
  wire [31:0] tmp_43_tmp_s_fu_640_p3;
  wire [31:0] tmp_17_fu_697_p2;
  wire [31:0] tmp_20_fu_708_p2;
  wire [31:0] storemerge8_v_fu_713_p3;
  wire [31:0] tmp_23_tmp_1_fu_702_p3;
  wire [31:0] tmp6_fu_727_p2;
  wire [31:0] word2_load_1_cast_fu_719_p1;
  wire [31:0] tmp5_fu_733_p2;
  wire [31:0] tmp4_fu_723_p2;
  wire [31:0] tmp_23_fu_746_p2;
  wire [31:0] tmp_26_fu_757_p2;
  wire [31:0] storemerge9_v_fu_762_p3;
  wire [31:0] tmp_33_tmp_s_fu_751_p3;
  wire [31:0] tmp9_fu_776_p2;
  wire [31:0] word2_load_2_cast_fu_768_p1;
  wire [31:0] tmp8_fu_782_p2;
  wire [31:0] tmp7_fu_772_p2;
  wire [31:0] word2_load_3_cast_fu_795_p1;
  wire [31:0] tmp11_fu_803_p2;
  wire [31:0] tmp10_fu_799_p2;
  wire [1:0] tmp_46_fu_826_p1;
  wire [3:0] tmp_5_fu_843_p2;
  wire [3:0] tmp_12_fu_854_p2;
  wire [3:0] tmp_13_fu_864_p2;
  reg [8:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 9'd1;
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
    if((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_304_p2 == 1'd1)) begin
      j_1_reg_257 <= 3'd0;
    end else if(1'b1 == ap_CS_fsm_state9) begin
      j_1_reg_257 <= j_2_reg_1057;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      j_reg_246 <= j_3_reg_882;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      j_reg_246 <= 3'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state7) begin
      j_2_reg_1057 <= j_2_fu_820_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      j_3_reg_882 <= j_3_fu_310_p2;
    end 
  end

  assign tmp_39_fu_534_p2_temp_0 = tmp_39_fu_534_p2 & 31'd4294967294;
  assign tmp_39_reg_1011_temp_1 = tmp_39_reg_1011 & 31'd1;
  assign tmp_39_fu_534_p2_temp_0_temp_2 = tmp_39_fu_534_p2_temp_0 | tmp_39_reg_1011_temp_1;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      tmp12_reg_1044 <= tmp12_fu_691_p2;
      tmp_19_reg_1023 <= tmp_19_fu_564_p2;
      tmp_22_reg_1028 <= tmp_22_fu_578_p2;
      tmp_25_reg_1039 <= tmp_25_fu_614_p2;
      tmp_39_reg_1011 <= tmp_39_fu_534_p2_temp_0_temp_2;
      x_2_reg_986 <= statemt_q0;
      x_3_reg_1017 <= x_3_fu_540_p2;
      x_4_reg_991 <= statemt_q1;
      x_5_reg_1033 <= x_5_fu_590_p2;
    end 
  end

  assign tmp_12_cast_fu_859_p1_temp_3 = tmp_12_cast_fu_859_p1 & 31'd12;
  assign tmp_12_cast_reg_1088_temp_4 = tmp_12_cast_reg_1088 & 31'd4294967283;
  assign tmp_12_cast_fu_859_p1_temp_3_temp_5 = tmp_12_cast_fu_859_p1_temp_3 | tmp_12_cast_reg_1088_temp_4;
  assign tmp_13_cast_fu_869_p1_temp_6 = tmp_13_cast_fu_869_p1 & 31'd12;
  assign tmp_13_cast_reg_1098_temp_7 = tmp_13_cast_reg_1098 & 31'd4294967283;
  assign tmp_13_cast_fu_869_p1_temp_6_temp_8 = tmp_13_cast_fu_869_p1_temp_6 | tmp_13_cast_reg_1098_temp_7;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state8) begin
      tmp_12_cast_reg_1088 <= tmp_12_cast_fu_859_p1_temp_3_temp_5;
      tmp_13_cast_reg_1098 <= tmp_13_cast_fu_869_p1_temp_6_temp_8;
    end 
  end

  assign tmp_14_cast_fu_404_p1_temp_9 = tmp_14_cast_fu_404_p1 & 31'd12;
  assign tmp_14_cast_reg_956_temp_10 = tmp_14_cast_reg_956 & 31'd4294967283;
  assign tmp_14_cast_fu_404_p1_temp_9_temp_11 = tmp_14_cast_fu_404_p1_temp_9 | tmp_14_cast_reg_956_temp_10;
  assign tmp_15_cast_fu_414_p1_temp_12 = tmp_15_cast_fu_414_p1 & 31'd12;
  assign tmp_15_cast_reg_966_temp_13 = tmp_15_cast_reg_966 & 31'd4294967283;
  assign tmp_15_cast_fu_414_p1_temp_12_temp_14 = tmp_15_cast_fu_414_p1_temp_12 | tmp_15_cast_reg_966_temp_13;
  assign tmp_33_fu_363_p2_temp_15 = tmp_33_fu_363_p2 & 31'd4294967294;
  assign tmp_33_reg_939_temp_16 = tmp_33_reg_939 & 31'd1;
  assign tmp_33_fu_363_p2_temp_15_temp_17 = tmp_33_fu_363_p2_temp_15 | tmp_33_reg_939_temp_16;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      tmp_14_cast_reg_956 <= tmp_14_cast_fu_404_p1_temp_9_temp_11;
      tmp_15_cast_reg_966 <= tmp_15_cast_fu_414_p1_temp_12_temp_14;
      tmp_16_reg_981 <= tmp_16_fu_431_p2;
      tmp_2_reg_951 <= tmp_2_fu_393_p2;
      tmp_33_reg_939 <= tmp_33_fu_363_p2_temp_15_temp_17;
      tmp_8_reg_928 <= tmp_8_fu_357_p2;
      x_1_reg_945 <= x_1_fu_369_p2;
      x_6_reg_920 <= statemt_q0;
      x_reg_933 <= statemt_q1;
    end 
  end

  assign tmp_6_cast_fu_328_p1_temp_18 = tmp_6_cast_fu_328_p1 & 31'd12;
  assign tmp_6_cast_reg_893_temp_19 = tmp_6_cast_reg_893 & 31'd4294967283;
  assign tmp_6_cast_fu_328_p1_temp_18_temp_20 = tmp_6_cast_fu_328_p1_temp_18 | tmp_6_cast_reg_893_temp_19;
  assign tmp_6_fu_320_p3_temp_21 = tmp_6_fu_320_p3 & 3'd12;
  assign tmp_6_reg_887_temp_22 = tmp_6_reg_887 & 3'd3;
  assign tmp_6_fu_320_p3_temp_21_temp_23 = tmp_6_fu_320_p3_temp_21 | tmp_6_reg_887_temp_22;
  assign tmp_cast_fu_339_p1_temp_24 = tmp_cast_fu_339_p1 & 31'd12;
  assign tmp_cast_reg_903_temp_25 = tmp_cast_reg_903 & 31'd4294967283;
  assign tmp_cast_fu_339_p1_temp_24_temp_26 = tmp_cast_fu_339_p1_temp_24 | tmp_cast_reg_903_temp_25;

  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_304_p2 == 1'd0)) begin
      tmp_14_reg_913 <= tmp_14_fu_344_p2;
      tmp_6_cast_reg_893 <= tmp_6_cast_fu_328_p1_temp_18_temp_20;
      tmp_6_reg_887 <= tmp_6_fu_320_p3_temp_21_temp_23;
      tmp_cast_reg_903 <= tmp_cast_fu_339_p1_temp_24_temp_26;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      tmp_32_reg_1049 <= tmp_32_fu_808_p2;
    end 
  end

  assign tmp_3_cast_fu_838_p1_temp_27 = tmp_3_cast_fu_838_p1 & 31'd12;
  assign tmp_3_cast_reg_1068_temp_28 = tmp_3_cast_reg_1068 & 31'd4294967283;
  assign tmp_3_cast_fu_838_p1_temp_27_temp_29 = tmp_3_cast_fu_838_p1_temp_27 | tmp_3_cast_reg_1068_temp_28;
  assign tmp_3_fu_830_p3_temp_30 = tmp_3_fu_830_p3 & 3'd12;
  assign tmp_3_reg_1062_temp_31 = tmp_3_reg_1062 & 3'd3;
  assign tmp_3_fu_830_p3_temp_30_temp_32 = tmp_3_fu_830_p3_temp_30 | tmp_3_reg_1062_temp_31;
  assign tmp_5_cast_fu_849_p1_temp_33 = tmp_5_cast_fu_849_p1 & 31'd12;
  assign tmp_5_cast_reg_1078_temp_34 = tmp_5_cast_reg_1078 & 31'd4294967283;
  assign tmp_5_cast_fu_849_p1_temp_33_temp_35 = tmp_5_cast_fu_849_p1_temp_33 | tmp_5_cast_reg_1078_temp_34;

  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state7) & (1'd0 == exitcond_fu_814_p2)) begin
      tmp_3_cast_reg_1068 <= tmp_3_cast_fu_838_p1_temp_27_temp_29;
      tmp_3_reg_1062 <= tmp_3_fu_830_p3_temp_30_temp_32;
      tmp_5_cast_reg_1078 <= tmp_5_cast_fu_849_p1_temp_33_temp_35;
    end 
  end

  assign tmp_fu_292_p3_temp_36 = tmp_fu_292_p3 & 7'd252;
  assign tmp_reg_874_temp_37 = tmp_reg_874 & 7'd3;
  assign tmp_fu_292_p3_temp_36_temp_38 = tmp_fu_292_p3_temp_36 | tmp_reg_874_temp_37;

  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      tmp_reg_874 <= tmp_fu_292_p3_temp_36_temp_38;
    end 
  end


  always @(*) begin
    if((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1) | (1'b1 == ap_CS_fsm_state7) & (exitcond_fu_814_p2 == 1'd1)) begin
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
    if((1'b1 == ap_CS_fsm_state7) & (exitcond_fu_814_p2 == 1'd1)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state8) begin
      ret_address0 = tmp_12_cast_fu_859_p1;
    end else if(1'b1 == ap_CS_fsm_state7) begin
      ret_address0 = tmp_3_cast_fu_838_p1;
    end else if(1'b1 == ap_CS_fsm_state5) begin
      ret_address0 = tmp_cast_reg_903;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      ret_address0 = tmp_6_cast_reg_893;
    end else begin
      ret_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state8) begin
      ret_address1 = tmp_13_cast_fu_869_p1;
    end else if(1'b1 == ap_CS_fsm_state7) begin
      ret_address1 = tmp_5_cast_fu_849_p1;
    end else if(1'b1 == ap_CS_fsm_state6) begin
      ret_address1 = tmp_15_cast_reg_966;
    end else if(1'b1 == ap_CS_fsm_state5) begin
      ret_address1 = tmp_14_cast_reg_956;
    end else begin
      ret_address1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state8)) begin
      ret_ce0 = 1'b1;
    end else begin
      ret_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state6)) begin
      ret_ce1 = 1'b1;
    end else begin
      ret_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      ret_d0 = tmp_21_fu_739_p2;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      ret_d0 = tmp_15_fu_527_p2;
    end else begin
      ret_d0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      ret_d1 = tmp_32_reg_1049;
    end else if(1'b1 == ap_CS_fsm_state5) begin
      ret_d1 = tmp_27_fu_788_p2;
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
    if(1'b1 == ap_CS_fsm_state9) begin
      statemt_address0 = tmp_12_cast_reg_1088;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_address0 = tmp_3_cast_reg_1068;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address0 = tmp_14_cast_fu_404_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address0 = tmp_6_cast_fu_328_p1;
    end else begin
      statemt_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state9) begin
      statemt_address1 = tmp_13_cast_reg_1098;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_address1 = tmp_5_cast_reg_1078;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address1 = tmp_15_cast_fu_414_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address1 = tmp_cast_fu_339_p1;
    end else begin
      statemt_address1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9)) begin
      statemt_ce0 = 1'b1;
    end else begin
      statemt_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9)) begin
      statemt_ce1 = 1'b1;
    end else begin
      statemt_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9)) begin
      statemt_we0 = 1'b1;
    end else begin
      statemt_we0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9)) begin
      statemt_we1 = 1'b1;
    end else begin
      statemt_we1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      word2_address0 = tmp_39_cast_fu_478_p1;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      word2_address0 = tmp_16_cast_fu_419_p1;
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
        if((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_304_p2 == 1'd1)) begin
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
        if((1'b1 == ap_CS_fsm_state7) & (exitcond_fu_814_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state8;
        end
      end
      ap_ST_fsm_state8: begin
        ap_NS_fsm = ap_ST_fsm_state9;
      end
      ap_ST_fsm_state9: begin
        ap_NS_fsm = ap_ST_fsm_state7;
      end
      default: begin
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
  assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];
  assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];
  assign exitcond1_fu_304_p2 = (j_reg_246 == 3'd4)? 1'b1 : 1'b0;
  assign exitcond_fu_814_p2 = (j_1_reg_257 == 3'd4)? 1'b1 : 1'b0;
  assign statemt_q0_temp_39 = statemt_q0 >> 1'd7;
  assign statemt_q0_temp_40 = statemt_q0_temp_39 & 24'd16777215;
  assign grp_fu_268_p4 = statemt_q0_temp_40;
  assign statemt_q1_temp_41 = statemt_q1 >> 1'd7;
  assign statemt_q1_temp_42 = statemt_q1_temp_41 & 24'd16777215;
  assign grp_fu_278_p4 = statemt_q1_temp_42;
  assign j_2_fu_820_p2 = j_1_reg_257 + 3'd1;
  assign j_3_fu_310_p2 = j_reg_246 + 3'd1;
  assign j_cast1_fu_300_p1 = j_reg_246;
  assign tmp_34_fu_375_p4_temp_43 = tmp_34_fu_375_p4 << 1'd8;
  assign p_mask1_fu_385_p3 = tmp_34_fu_375_p4_temp_43;
  assign grp_fu_278_p4_temp_44 = grp_fu_278_p4 << 1'd8;
  assign p_mask2_fu_423_p3 = grp_fu_278_p4_temp_44;
  assign tmp_40_fu_546_p4_temp_45 = tmp_40_fu_546_p4 << 1'd8;
  assign p_mask3_fu_556_p3 = tmp_40_fu_546_p4_temp_45;
  assign grp_fu_268_p4_temp_46 = grp_fu_268_p4 << 1'd8;
  assign p_mask4_fu_570_p3 = grp_fu_268_p4_temp_46;
  assign tmp_43_fu_596_p4_temp_47 = tmp_43_fu_596_p4 << 1'd8;
  assign p_mask5_fu_606_p3 = tmp_43_fu_596_p4_temp_47;
  assign grp_fu_278_p4_temp_48 = grp_fu_278_p4 << 1'd8;
  assign p_mask6_fu_620_p3 = grp_fu_278_p4_temp_48;
  assign tmp_45_fu_653_p4_temp_49 = tmp_45_fu_653_p4 << 1'd8;
  assign p_mask7_fu_663_p3 = tmp_45_fu_653_p4_temp_49;
  assign grp_fu_268_p4_temp_50 = grp_fu_268_p4 << 1'd8;
  assign p_mask_fu_349_p3 = grp_fu_268_p4_temp_50;
  assign tmp_8_reg_928_temp_51 = tmp_8_reg_928 & 31'd1;
  assign ret_load_1_fu_448_p3 = (tmp_8_reg_928_temp_51 === 1'b1)? tmp_9_fu_442_p2 : tmp_18_fu_437_p2;
  assign statemt_d0 = ret_q0;
  assign statemt_d1 = ret_q1;
  assign tmp_30_fu_671_p2_temp_52 = tmp_30_fu_671_p2 & 31'd1;
  assign storemerge1_v_fu_683_p3 = (tmp_30_fu_671_p2_temp_52 === 1'b1)? tmp_31_fu_677_p2 : x_7_fu_648_p2;
  assign tmp_19_reg_1023_temp_53 = tmp_19_reg_1023 & 31'd1;
  assign storemerge8_v_fu_713_p3 = (tmp_19_reg_1023_temp_53 === 1'b1)? tmp_20_fu_708_p2 : x_3_reg_1017;
  assign tmp_25_reg_1039_temp_54 = tmp_25_reg_1039 & 31'd1;
  assign storemerge9_v_fu_762_p3 = (tmp_25_reg_1039_temp_54 === 1'b1)? tmp_26_fu_757_p2 : x_5_reg_1033;
  assign tmp_2_reg_951_temp_55 = tmp_2_reg_951 & 31'd1;
  assign storemerge_v_fu_460_p3 = (tmp_2_reg_951_temp_55 === 1'b1)? tmp_4_fu_455_p2 : x_1_reg_945;
  assign tmp10_fu_799_p2 = x_2_reg_986 ^ x_reg_933;
  assign tmp11_fu_803_p2 = tmp12_reg_1044 ^ word2_load_3_cast_fu_795_p1;
  assign tmp12_fu_691_p2 = storemerge1_v_fu_683_p3 ^ tmp_43_tmp_s_fu_640_p3;
  assign tmp1_fu_509_p2 = statemt_q0 ^ statemt_q1;
  assign tmp2_fu_521_p2 = tmp3_fu_515_p2 ^ word2_load_cast_fu_505_p1;
  assign tmp3_fu_515_p2 = ret_load_1_fu_448_p3 ^ storemerge_v_fu_460_p3;
  assign tmp4_fu_723_p2 = x_4_reg_991 ^ x_6_reg_920;
  assign tmp5_fu_733_p2 = tmp6_fu_727_p2 ^ word2_load_1_cast_fu_719_p1;
  assign tmp6_fu_727_p2 = storemerge8_v_fu_713_p3 ^ tmp_23_tmp_1_fu_702_p3;
  assign tmp7_fu_772_p2 = x_reg_933 ^ x_6_reg_920;
  assign tmp8_fu_782_p2 = tmp9_fu_776_p2 ^ word2_load_2_cast_fu_768_p1;
  assign tmp9_fu_776_p2 = storemerge9_v_fu_762_p3 ^ tmp_33_tmp_s_fu_751_p3;
  assign tmp_10_fu_399_p2 = tmp_6_reg_887 | 4'd2;
  assign tmp_11_fu_409_p2 = tmp_6_reg_887 | 4'd3;
  assign tmp_12_cast_fu_859_p1 = tmp_12_fu_854_p2;
  assign tmp_12_fu_854_p2 = tmp_3_reg_1062 | 4'd2;
  assign tmp_13_cast_fu_869_p1 = tmp_13_fu_864_p2;
  assign tmp_13_fu_864_p2 = tmp_3_reg_1062 | 4'd3;
  assign tmp_14_cast_fu_404_p1 = tmp_10_fu_399_p2;
  assign tmp_14_fu_344_p2 = tmp_reg_874 + j_cast1_fu_300_p1;
  assign tmp_15_cast_fu_414_p1 = tmp_11_fu_409_p2;
  assign tmp_15_fu_527_p2 = tmp2_fu_521_p2 ^ tmp1_fu_509_p2;
  assign tmp_16_cast_cast1_fu_466_p1 = tmp_14_reg_913;
  assign tmp_16_cast_cast_fu_469_p1 = tmp_14_reg_913;
  assign tmp_16_cast_fu_419_p1 = tmp_14_reg_913;
  assign tmp_16_fu_431_p2 = (p_mask2_fu_423_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_17_fu_697_p2 = tmp_33_reg_939 ^ 32'd283;
  assign tmp_18_fu_437_p2 = x_6_reg_920 << 32'd1;
  assign tmp_19_fu_564_p2 = (p_mask3_fu_556_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_1_fu_288_p1 = (n & 6'd63);
  assign tmp_20_fu_708_p2 = x_3_reg_1017 ^ 32'd283;
  assign tmp_21_fu_739_p2 = tmp5_fu_733_p2 ^ tmp4_fu_723_p2;
  assign tmp_22_fu_578_p2 = (p_mask4_fu_570_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_23_fu_746_p2 = tmp_39_reg_1011 ^ 32'd283;
  assign tmp_16_reg_981_temp_56 = tmp_16_reg_981 & 31'd1;
  assign tmp_23_tmp_1_fu_702_p3 = (tmp_16_reg_981_temp_56 === 1'b1)? tmp_17_fu_697_p2 : tmp_33_reg_939;
  assign tmp_25_fu_614_p2 = (p_mask5_fu_606_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_26_fu_757_p2 = x_5_reg_1033 ^ 32'd283;
  assign tmp_27_fu_788_p2 = tmp8_fu_782_p2 ^ tmp7_fu_772_p2;
  assign tmp_28_fu_628_p2 = (p_mask6_fu_620_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_29_fu_634_p2 = tmp_42_fu_584_p2 ^ 32'd283;
  assign tmp_2_fu_393_p2 = (p_mask1_fu_385_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_30_fu_671_p2 = (p_mask7_fu_663_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_31_fu_677_p2 = x_7_fu_648_p2 ^ 32'd283;
  assign tmp_32_fu_808_p2 = tmp11_fu_803_p2 ^ tmp10_fu_799_p2;
  assign tmp_33_fu_363_p2 = statemt_q1 << 32'd1;
  assign tmp_22_reg_1028_temp_57 = tmp_22_reg_1028 & 31'd1;
  assign tmp_33_tmp_s_fu_751_p3 = (tmp_22_reg_1028_temp_57 === 1'b1)? tmp_23_fu_746_p2 : tmp_39_reg_1011;
  assign x_1_fu_369_p2_temp_58 = x_1_fu_369_p2 >> 1'd8;
  assign x_1_fu_369_p2_temp_59 = x_1_fu_369_p2_temp_58 & 24'd16777215;
  assign tmp_34_fu_375_p4 = x_1_fu_369_p2_temp_59;
  assign tmp_35_fu_472_p2 = 9'd120 + tmp_16_cast_cast_fu_469_p1;
  assign tmp_36_fu_483_p2 = 9'd240 + tmp_16_cast_cast_fu_469_p1;
  assign tmp_37_fu_494_p2 = 10'd360 + tmp_16_cast_cast1_fu_466_p1;
  assign tmp_39_cast_fu_478_p1 = tmp_35_fu_472_p2;
  assign tmp_39_fu_534_p2 = statemt_q0 << 32'd1;
  assign tmp_3_cast_fu_838_p1 = tmp_3_fu_830_p3;
  assign tmp_46_fu_826_p1_temp_60 = tmp_46_fu_826_p1 << 1'd2;
  assign tmp_3_fu_830_p3 = tmp_46_fu_826_p1_temp_60;
  assign tmp_40_cast_fu_489_p1 = tmp_36_fu_483_p2;
  assign x_3_fu_540_p2_temp_61 = x_3_fu_540_p2 >> 1'd8;
  assign x_3_fu_540_p2_temp_62 = x_3_fu_540_p2_temp_61 & 24'd16777215;
  assign tmp_40_fu_546_p4 = x_3_fu_540_p2_temp_62;
  assign tmp_41_cast_fu_500_p1 = $signed(tmp_37_fu_494_p2);
  assign tmp_42_fu_584_p2 = statemt_q1 << 32'd1;
  assign x_5_fu_590_p2_temp_63 = x_5_fu_590_p2 >> 1'd8;
  assign x_5_fu_590_p2_temp_64 = x_5_fu_590_p2_temp_63 & 24'd16777215;
  assign tmp_43_fu_596_p4 = x_5_fu_590_p2_temp_64;
  assign tmp_28_fu_628_p2_temp_65 = tmp_28_fu_628_p2 & 31'd1;
  assign tmp_43_tmp_s_fu_640_p3 = (tmp_28_fu_628_p2_temp_65 === 1'b1)? tmp_29_fu_634_p2 : tmp_42_fu_584_p2;
  assign x_7_fu_648_p2_temp_66 = x_7_fu_648_p2 >> 1'd8;
  assign x_7_fu_648_p2_temp_67 = x_7_fu_648_p2_temp_66 & 24'd16777215;
  assign tmp_45_fu_653_p4 = x_7_fu_648_p2_temp_67;
  assign tmp_46_fu_826_p1 = (j_1_reg_257 & 2'd3);
  assign tmp_4_fu_455_p2 = x_1_reg_945 ^ 32'd283;
  assign tmp_5_cast_fu_849_p1 = tmp_5_fu_843_p2;
  assign tmp_5_fu_843_p2 = tmp_3_fu_830_p3 | 4'd1;
  assign tmp_6_cast_fu_328_p1 = tmp_6_fu_320_p3;
  assign tmp_7_fu_316_p1_temp_68 = tmp_7_fu_316_p1 << 1'd2;
  assign tmp_6_fu_320_p3 = tmp_7_fu_316_p1_temp_68;
  assign tmp_7_fu_316_p1 = (j_reg_246 & 2'd3);
  assign tmp_8_fu_357_p2 = (p_mask_fu_349_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_9_fu_442_p2 = tmp_18_fu_437_p2 ^ 32'd283;
  assign tmp_cast_fu_339_p1 = tmp_s_fu_333_p2;
  assign tmp_1_fu_288_p1_temp_69 = tmp_1_fu_288_p1 << 1'd2;
  assign tmp_fu_292_p3 = tmp_1_fu_288_p1_temp_69;
  assign tmp_s_fu_333_p2 = tmp_6_fu_320_p3 | 4'd1;
  assign word2_address1 = tmp_40_cast_fu_489_p1;
  assign word2_address2 = tmp_41_cast_fu_500_p1;
  assign word2_load_1_cast_fu_719_p1 = word2_q0;
  assign word2_load_2_cast_fu_768_p1 = word2_q1;
  assign word2_load_3_cast_fu_795_p1 = word2_q2;
  assign word2_load_cast_fu_505_p1 = word2_q0;
  assign x_1_fu_369_p2 = statemt_q1 ^ tmp_33_fu_363_p2;
  assign x_3_fu_540_p2 = statemt_q0 ^ tmp_39_fu_534_p2;
  assign x_5_fu_590_p2 = statemt_q1 ^ tmp_42_fu_584_p2;
  assign x_7_fu_648_p2 = x_6_reg_920 ^ tmp_18_fu_437_p2;

  always @(posedge ap_clk) begin
    tmp_reg_874 <= tmp_reg_874 & 1'd252;
    tmp_6_reg_887 <= tmp_6_reg_887 & 1'd12;
    tmp_6_cast_reg_893 <= tmp_6_cast_reg_893 & 1'd4294967292;
    tmp_6_cast_reg_893 <= tmp_6_cast_reg_893 & 31'd15;
    tmp_cast_reg_903 <= tmp_cast_reg_903 & 1'd4294967293;
    tmp_cast_reg_903 <= tmp_cast_reg_903 & 31'd15;
    tmp_33_reg_939 <= tmp_33_reg_939 & 1'd4294967294;
    tmp_14_cast_reg_956 <= tmp_14_cast_reg_956 & 1'd4294967294;
    tmp_14_cast_reg_956 <= tmp_14_cast_reg_956 & 31'd15;
    tmp_15_cast_reg_966 <= tmp_15_cast_reg_966 & 1'd4294967295;
    tmp_15_cast_reg_966 <= tmp_15_cast_reg_966 & 31'd15;
    tmp_39_reg_1011 <= tmp_39_reg_1011 & 1'd4294967294;
    tmp_3_reg_1062 <= tmp_3_reg_1062 & 1'd12;
    tmp_3_cast_reg_1068 <= tmp_3_cast_reg_1068 & 1'd4294967292;
    tmp_3_cast_reg_1068 <= tmp_3_cast_reg_1068 & 31'd15;
    tmp_5_cast_reg_1078 <= tmp_5_cast_reg_1078 & 1'd4294967293;
    tmp_5_cast_reg_1078 <= tmp_5_cast_reg_1078 & 31'd15;
    tmp_12_cast_reg_1088 <= tmp_12_cast_reg_1088 & 1'd4294967294;
    tmp_12_cast_reg_1088 <= tmp_12_cast_reg_1088 & 31'd15;
    tmp_13_cast_reg_1098 <= tmp_13_cast_reg_1098 & 1'd4294967295;
    tmp_13_cast_reg_1098 <= tmp_13_cast_reg_1098 & 31'd15;
  end


endmodule

