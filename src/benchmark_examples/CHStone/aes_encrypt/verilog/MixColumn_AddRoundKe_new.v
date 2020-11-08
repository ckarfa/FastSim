
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
  input [3:0] n;
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
  reg [8:0] word3_address0;
  reg word3_ce0;
  wire [7:0] word3_q0;
  wire [8:0] word3_address1;
  reg word3_ce1;
  wire [7:0] word3_q1;
  wire [8:0] word3_address2;
  reg word3_ce2;
  wire [7:0] word3_q2;
  wire [5:0] tmp_fu_297_p3;
  reg [5:0] tmp_reg_887;
  wire [2:0] j_3_fu_315_p2;
  reg [2:0] j_3_reg_895;
  wire ap_CS_fsm_state2;
  wire [3:0] tmp_s_fu_325_p3;
  reg [3:0] tmp_s_reg_900;
  wire [0:0] exitcond1_fu_309_p2;
  wire [63:0] tmp_4_fu_333_p1;
  reg [63:0] tmp_4_reg_906;
  wire [63:0] tmp_9_fu_344_p1;
  reg [63:0] tmp_9_reg_916;
  wire [5:0] tmp_22_fu_349_p2;
  reg [5:0] tmp_22_reg_926;
  reg [31:0] x_6_reg_933;
  wire ap_CS_fsm_state3;
  wire [0:0] tmp_6_fu_362_p2;
  reg [0:0] tmp_6_reg_941;
  reg [31:0] x_reg_946;
  wire [31:0] tmp_33_fu_368_p2;
  reg [31:0] tmp_33_reg_952;
  wire [31:0] x_1_fu_374_p2;
  reg [31:0] x_1_reg_958;
  wire [0:0] tmp_2_fu_398_p2;
  reg [0:0] tmp_2_reg_964;
  wire [63:0] tmp_19_fu_409_p1;
  reg [63:0] tmp_19_reg_969;
  wire [63:0] tmp_21_fu_419_p1;
  reg [63:0] tmp_21_reg_979;
  wire [0:0] tmp_25_fu_461_p2;
  reg [0:0] tmp_25_reg_1004;
  reg [31:0] x_4_reg_1009;
  wire ap_CS_fsm_state4;
  wire [31:0] tmp6_fu_600_p2;
  reg [31:0] tmp6_reg_1019;
  reg [7:0] word3_load_2_reg_1024;
  wire [31:0] tmp9_fu_684_p2;
  reg [31:0] tmp9_reg_1029;
  wire [31:0] tmp_41_fu_782_p2;
  reg [31:0] tmp_41_reg_1034;
  wire [2:0] j_2_fu_833_p2;
  reg [2:0] j_2_reg_1042;
  wire ap_CS_fsm_state7;
  wire [3:0] tmp_3_fu_843_p3;
  reg [3:0] tmp_3_reg_1047;
  wire [0:0] exitcond_fu_827_p2;
  wire [63:0] tmp_10_fu_851_p1;
  reg [63:0] tmp_10_reg_1053;
  wire [63:0] tmp_12_fu_862_p1;
  reg [63:0] tmp_12_reg_1063;
  wire [63:0] tmp_14_fu_872_p1;
  reg [63:0] tmp_14_reg_1073;
  wire ap_CS_fsm_state8;
  wire [63:0] tmp_16_fu_882_p1;
  reg [63:0] tmp_16_reg_1083;
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
  reg [2:0] j_reg_255;
  wire ap_CS_fsm_state6;
  reg [2:0] j_1_reg_266;
  wire ap_CS_fsm_state9;
  wire [63:0] tmp_23_fu_424_p1;
  wire [63:0] tmp_48_cast_fu_437_p1;
  wire [63:0] tmp_49_cast_fu_448_p1;
  wire [63:0] tmp_47_cast_fu_505_p1;
  wire ap_CS_fsm_state5;
  wire [31:0] tmp_24_fu_532_p2;
  wire [31:0] tmp_30_fu_801_p2;
  wire [31:0] tmp_36_fu_820_p2;
  wire [1:0] tmp_1_fu_321_p1;
  wire [3:0] tmp_8_fu_338_p2;
  wire [5:0] j_cast1_fu_305_p1;
  wire [23:0] grp_fu_277_p4;
  wire [31:0] p_mask_fu_354_p3;
  wire [23:0] tmp_42_fu_380_p4;
  wire [31:0] p_mask1_fu_390_p3;
  wire [3:0] tmp_18_fu_404_p2;
  wire [3:0] tmp_20_fu_414_p2;
  wire [8:0] tmp_23_cast1_fu_428_p1;
  wire [8:0] tmp_44_fu_431_p2;
  wire [8:0] tmp_45_fu_442_p2;
  wire [23:0] grp_fu_287_p4;
  wire [31:0] p_mask2_fu_453_p3;
  wire [31:0] tmp_5_fu_467_p2;
  wire [31:0] tmp_7_fu_472_p2;
  wire [31:0] tmp_17_fu_485_p2;
  wire [7:0] tmp_23_cast_fu_496_p1;
  wire [7:0] tmp_43_fu_499_p2;
  wire [31:0] ret_load_5_fu_478_p3;
  wire [31:0] storemerge_v_fu_490_p3;
  wire [31:0] tmp3_fu_520_p2;
  wire [31:0] word3_load_cast_fu_510_p1;
  wire [31:0] tmp2_fu_526_p2;
  wire [31:0] tmp1_fu_514_p2;
  wire [31:0] tmp_26_fu_539_p2;
  wire [31:0] tmp_47_fu_550_p2;
  wire [31:0] x_3_fu_556_p2;
  wire [23:0] tmp_48_fu_562_p4;
  wire [31:0] p_mask3_fu_572_p3;
  wire [0:0] tmp_28_fu_580_p2;
  wire [31:0] tmp_29_fu_586_p2;
  wire [31:0] storemerge2_v_fu_592_p3;
  wire [31:0] tmp_33_tmp_s_fu_544_p3;
  wire [31:0] p_mask4_fu_606_p3;
  wire [0:0] tmp_31_fu_614_p2;
  wire [31:0] tmp_32_fu_620_p2;
  wire [31:0] tmp_50_fu_634_p2;
  wire [31:0] x_5_fu_640_p2;
  wire [23:0] tmp_51_fu_646_p4;
  wire [31:0] p_mask5_fu_656_p3;
  wire [0:0] tmp_34_fu_664_p2;
  wire [31:0] tmp_35_fu_670_p2;
  wire [31:0] storemerge3_v_fu_676_p3;
  wire [31:0] tmp_43_tmp_s_fu_626_p3;
  wire [31:0] p_mask6_fu_690_p3;
  wire [0:0] tmp_37_fu_698_p2;
  wire [31:0] tmp_38_fu_704_p2;
  wire [31:0] x_7_fu_718_p2;
  wire [23:0] tmp_53_fu_723_p4;
  wire [31:0] p_mask7_fu_733_p3;
  wire [0:0] tmp_39_fu_741_p2;
  wire [31:0] tmp_40_fu_747_p2;
  wire [31:0] storemerge4_v_fu_753_p3;
  wire [31:0] tmp_53_tmp_s_fu_710_p3;
  wire [31:0] tmp12_fu_770_p2;
  wire [31:0] word3_load_3_cast_fu_761_p1;
  wire [31:0] tmp11_fu_776_p2;
  wire [31:0] tmp10_fu_765_p2;
  wire [31:0] word3_load_1_cast_fu_788_p1;
  wire [31:0] tmp5_fu_796_p2;
  wire [31:0] tmp4_fu_792_p2;
  wire [31:0] word3_load_2_cast_fu_808_p1;
  wire [31:0] tmp8_fu_815_p2;
  wire [31:0] tmp7_fu_811_p2;
  wire [1:0] tmp_54_fu_839_p1;
  wire [3:0] tmp_11_fu_856_p2;
  wire [3:0] tmp_13_fu_867_p2;
  wire [3:0] tmp_15_fu_877_p2;
  reg [8:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 9'd1;
  end


  MixColumn_AddRouncud
  #(
    .DataWidth(8),
    .AddressRange(480),
    .AddressWidth(9)
  )
  word3_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(word3_address0),
    .ce0(word3_ce0),
    .q0(word3_q0),
    .address1(word3_address1),
    .ce1(word3_ce1),
    .q1(word3_q1),
    .address2(word3_address2),
    .ce2(word3_ce2),
    .q2(word3_q2)
  );


  MixColumn_AddRoundEe
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
    if((exitcond1_fu_309_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      j_1_reg_266 <= 3'd0;
    end else if(1'b1 == ap_CS_fsm_state9) begin
      j_1_reg_266 <= j_2_reg_1042;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      j_reg_255 <= j_3_reg_895;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      j_reg_255 <= 3'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state7) begin
      j_2_reg_1042 <= j_2_fu_833_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      j_3_reg_895 <= j_3_fu_315_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      tmp6_reg_1019 <= tmp6_fu_600_p2;
      tmp9_reg_1029 <= tmp9_fu_684_p2;
      tmp_41_reg_1034 <= tmp_41_fu_782_p2;
      word3_load_2_reg_1024 <= word3_q1;
      x_4_reg_1009 <= statemt_q1;
    end 
  end

  assign tmp_10_fu_851_p1_temp_25 = tmp_10_fu_851_p1 & 63'd12;
  assign tmp_10_reg_1053_temp_26 = tmp_10_reg_1053 & 63'd18446744073709551603;
  assign tmp_10_fu_851_p1_temp_25_temp_27 = tmp_10_fu_851_p1_temp_25 | tmp_10_reg_1053_temp_26;
  assign tmp_12_fu_862_p1_temp_28 = tmp_12_fu_862_p1 & 63'd12;
  assign tmp_12_reg_1063_temp_29 = tmp_12_reg_1063 & 63'd18446744073709551603;
  assign tmp_12_fu_862_p1_temp_28_temp_30 = tmp_12_fu_862_p1_temp_28 | tmp_12_reg_1063_temp_29;
  assign tmp_3_fu_843_p3_temp_31 = tmp_3_fu_843_p3 & 3'd12;
  assign tmp_3_reg_1047_temp_32 = tmp_3_reg_1047 & 3'd3;
  assign tmp_3_fu_843_p3_temp_31_temp_33 = tmp_3_fu_843_p3_temp_31 | tmp_3_reg_1047_temp_32;

  always @(posedge ap_clk) begin
    if((exitcond_fu_827_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7)) begin
      tmp_10_reg_1053 <= tmp_10_fu_851_p1_temp_25_temp_27;
      tmp_12_reg_1063 <= tmp_12_fu_862_p1_temp_28_temp_30;
      tmp_3_reg_1047 <= tmp_3_fu_843_p3_temp_31_temp_33;
    end 
  end

  assign tmp_14_fu_872_p1_temp_34 = tmp_14_fu_872_p1 & 63'd12;
  assign tmp_14_reg_1073_temp_35 = tmp_14_reg_1073 & 63'd18446744073709551603;
  assign tmp_14_fu_872_p1_temp_34_temp_36 = tmp_14_fu_872_p1_temp_34 | tmp_14_reg_1073_temp_35;
  assign tmp_16_fu_882_p1_temp_37 = tmp_16_fu_882_p1 & 63'd12;
  assign tmp_16_reg_1083_temp_38 = tmp_16_reg_1083 & 63'd18446744073709551603;
  assign tmp_16_fu_882_p1_temp_37_temp_39 = tmp_16_fu_882_p1_temp_37 | tmp_16_reg_1083_temp_38;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state8) begin
      tmp_14_reg_1073 <= tmp_14_fu_872_p1_temp_34_temp_36;
      tmp_16_reg_1083 <= tmp_16_fu_882_p1_temp_37_temp_39;
    end 
  end

  assign tmp_19_fu_409_p1_temp_40 = tmp_19_fu_409_p1 & 63'd12;
  assign tmp_19_reg_969_temp_41 = tmp_19_reg_969 & 63'd18446744073709551603;
  assign tmp_19_fu_409_p1_temp_40_temp_42 = tmp_19_fu_409_p1_temp_40 | tmp_19_reg_969_temp_41;
  assign tmp_21_fu_419_p1_temp_43 = tmp_21_fu_419_p1 & 63'd12;
  assign tmp_21_reg_979_temp_44 = tmp_21_reg_979 & 63'd18446744073709551603;
  assign tmp_21_fu_419_p1_temp_43_temp_45 = tmp_21_fu_419_p1_temp_43 | tmp_21_reg_979_temp_44;
  assign tmp_33_fu_368_p2_temp_46 = tmp_33_fu_368_p2 & 31'd4294967294;
  assign tmp_33_reg_952_temp_47 = tmp_33_reg_952 & 31'd1;
  assign tmp_33_fu_368_p2_temp_46_temp_48 = tmp_33_fu_368_p2_temp_46 | tmp_33_reg_952_temp_47;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      tmp_19_reg_969 <= tmp_19_fu_409_p1_temp_40_temp_42;
      tmp_21_reg_979 <= tmp_21_fu_419_p1_temp_43_temp_45;
      tmp_25_reg_1004 <= tmp_25_fu_461_p2;
      tmp_2_reg_964 <= tmp_2_fu_398_p2;
      tmp_33_reg_952 <= tmp_33_fu_368_p2_temp_46_temp_48;
      tmp_6_reg_941 <= tmp_6_fu_362_p2;
      x_1_reg_958 <= x_1_fu_374_p2;
      x_6_reg_933 <= statemt_q0;
      x_reg_946 <= statemt_q1;
    end 
  end

  assign tmp_4_fu_333_p1_temp_49 = tmp_4_fu_333_p1 & 63'd12;
  assign tmp_4_reg_906_temp_50 = tmp_4_reg_906 & 63'd18446744073709551603;
  assign tmp_4_fu_333_p1_temp_49_temp_51 = tmp_4_fu_333_p1_temp_49 | tmp_4_reg_906_temp_50;
  assign tmp_9_fu_344_p1_temp_52 = tmp_9_fu_344_p1 & 63'd12;
  assign tmp_9_reg_916_temp_53 = tmp_9_reg_916 & 63'd18446744073709551603;
  assign tmp_9_fu_344_p1_temp_52_temp_54 = tmp_9_fu_344_p1_temp_52 | tmp_9_reg_916_temp_53;
  assign tmp_s_fu_325_p3_temp_55 = tmp_s_fu_325_p3 & 3'd12;
  assign tmp_s_reg_900_temp_56 = tmp_s_reg_900 & 3'd3;
  assign tmp_s_fu_325_p3_temp_55_temp_57 = tmp_s_fu_325_p3_temp_55 | tmp_s_reg_900_temp_56;

  always @(posedge ap_clk) begin
    if((exitcond1_fu_309_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      tmp_22_reg_926 <= tmp_22_fu_349_p2;
      tmp_4_reg_906 <= tmp_4_fu_333_p1_temp_49_temp_51;
      tmp_9_reg_916 <= tmp_9_fu_344_p1_temp_52_temp_54;
      tmp_s_reg_900 <= tmp_s_fu_325_p3_temp_55_temp_57;
    end 
  end

  assign tmp_fu_297_p3_temp_58 = tmp_fu_297_p3 & 5'd60;
  assign tmp_reg_887_temp_59 = tmp_reg_887 & 5'd3;
  assign tmp_fu_297_p3_temp_58_temp_60 = tmp_fu_297_p3_temp_58 | tmp_reg_887_temp_59;

  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      tmp_reg_887 <= tmp_fu_297_p3_temp_58_temp_60;
    end 
  end


  always @(*) begin
    if((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1) | (1'b1 == ap_CS_fsm_state7) & (exitcond_fu_827_p2 == 1'd1)) begin
      ap_done = 1'b1;
    end else begin
      ap_done = 1'b0;
    end
  end


  always @(*) begin
    if((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) begin
      ap_idle = 1'b1;
    end else begin
      ap_idle = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state7) & (exitcond_fu_827_p2 == 1'd1)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state8) begin
      ret_address0 = tmp_14_fu_872_p1;
    end else if(1'b1 == ap_CS_fsm_state7) begin
      ret_address0 = tmp_10_fu_851_p1;
    end else if(1'b1 == ap_CS_fsm_state5) begin
      ret_address0 = tmp_9_reg_916;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      ret_address0 = tmp_4_reg_906;
    end else begin
      ret_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state8) begin
      ret_address1 = tmp_16_fu_882_p1;
    end else if(1'b1 == ap_CS_fsm_state7) begin
      ret_address1 = tmp_12_fu_862_p1;
    end else if(1'b1 == ap_CS_fsm_state6) begin
      ret_address1 = tmp_21_reg_979;
    end else if(1'b1 == ap_CS_fsm_state5) begin
      ret_address1 = tmp_19_reg_969;
    end else begin
      ret_address1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state4)) begin
      ret_ce0 = 1'b1;
    end else begin
      ret_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7)) begin
      ret_ce1 = 1'b1;
    end else begin
      ret_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      ret_d0 = tmp_30_fu_801_p2;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      ret_d0 = tmp_24_fu_532_p2;
    end else begin
      ret_d0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      ret_d1 = tmp_41_reg_1034;
    end else if(1'b1 == ap_CS_fsm_state5) begin
      ret_d1 = tmp_36_fu_820_p2;
    end else begin
      ret_d1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4)) begin
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
      statemt_address0 = tmp_14_reg_1073;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_address0 = tmp_10_reg_1053;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address0 = tmp_19_fu_409_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address0 = tmp_4_fu_333_p1;
    end else begin
      statemt_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state9) begin
      statemt_address1 = tmp_16_reg_1083;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_address1 = tmp_12_reg_1063;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address1 = tmp_21_fu_419_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address1 = tmp_9_fu_344_p1;
    end else begin
      statemt_address1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8)) begin
      statemt_ce0 = 1'b1;
    end else begin
      statemt_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8)) begin
      statemt_ce1 = 1'b1;
    end else begin
      statemt_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8)) begin
      statemt_we0 = 1'b1;
    end else begin
      statemt_we0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8)) begin
      statemt_we1 = 1'b1;
    end else begin
      statemt_we1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      word3_address0 = tmp_47_cast_fu_505_p1;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      word3_address0 = tmp_23_fu_424_p1;
    end else begin
      word3_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state4)) begin
      word3_ce0 = 1'b1;
    end else begin
      word3_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      word3_ce1 = 1'b1;
    end else begin
      word3_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      word3_ce2 = 1'b1;
    end else begin
      word3_ce2 = 1'b0;
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
        if((exitcond1_fu_309_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
        if((1'b1 == ap_CS_fsm_state7) & (exitcond_fu_827_p2 == 1'd1)) begin
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
  assign exitcond1_fu_309_p2 = (j_reg_255 == 3'd4)? 1'b1 : 1'b0;
  assign exitcond_fu_827_p2 = (j_1_reg_266 == 3'd4)? 1'b1 : 1'b0;
  assign statemt_q0_temp_61 = statemt_q0 >> 1'd7;
  assign statemt_q0_temp_62 = statemt_q0_temp_61 & 24'd16777215;
  assign grp_fu_277_p4 = statemt_q0_temp_62;
  assign statemt_q1_temp_63 = statemt_q1 >> 1'd7;
  assign statemt_q1_temp_64 = statemt_q1_temp_63 & 24'd16777215;
  assign grp_fu_287_p4 = statemt_q1_temp_64;
  assign j_2_fu_833_p2 = j_1_reg_266 + 3'd1;
  assign j_3_fu_315_p2 = j_reg_255 + 3'd1;
  assign j_cast1_fu_305_p1 = j_reg_255;
  assign tmp_42_fu_380_p4_temp_65 = tmp_42_fu_380_p4 << 1'd8;
  assign p_mask1_fu_390_p3 = tmp_42_fu_380_p4_temp_65;
  assign grp_fu_287_p4_temp_66 = grp_fu_287_p4 << 1'd8;
  assign p_mask2_fu_453_p3 = grp_fu_287_p4_temp_66;
  assign tmp_48_fu_562_p4_temp_67 = tmp_48_fu_562_p4 << 1'd8;
  assign p_mask3_fu_572_p3 = tmp_48_fu_562_p4_temp_67;
  assign grp_fu_277_p4_temp_68 = grp_fu_277_p4 << 1'd8;
  assign p_mask4_fu_606_p3 = grp_fu_277_p4_temp_68;
  assign tmp_51_fu_646_p4_temp_69 = tmp_51_fu_646_p4 << 1'd8;
  assign p_mask5_fu_656_p3 = tmp_51_fu_646_p4_temp_69;
  assign grp_fu_287_p4_temp_70 = grp_fu_287_p4 << 1'd8;
  assign p_mask6_fu_690_p3 = grp_fu_287_p4_temp_70;
  assign tmp_53_fu_723_p4_temp_71 = tmp_53_fu_723_p4 << 1'd8;
  assign p_mask7_fu_733_p3 = tmp_53_fu_723_p4_temp_71;
  assign grp_fu_277_p4_temp_72 = grp_fu_277_p4 << 1'd8;
  assign p_mask_fu_354_p3 = grp_fu_277_p4_temp_72;
  assign tmp_6_reg_941_temp_73 = tmp_6_reg_941 & 1'd1;
  assign ret_load_5_fu_478_p3 = (tmp_6_reg_941_temp_73 === 1'b1)? tmp_7_fu_472_p2 : tmp_5_fu_467_p2;
  assign statemt_d0 = ret_q0;
  assign statemt_d1 = ret_q1;
  assign tmp_28_fu_580_p2_temp_74 = tmp_28_fu_580_p2 & 1'd1;
  assign storemerge2_v_fu_592_p3 = (tmp_28_fu_580_p2_temp_74 === 1'b1)? tmp_29_fu_586_p2 : x_3_fu_556_p2;
  assign tmp_34_fu_664_p2_temp_75 = tmp_34_fu_664_p2 & 1'd1;
  assign storemerge3_v_fu_676_p3 = (tmp_34_fu_664_p2_temp_75 === 1'b1)? tmp_35_fu_670_p2 : x_5_fu_640_p2;
  assign tmp_39_fu_741_p2_temp_76 = tmp_39_fu_741_p2 & 1'd1;
  assign storemerge4_v_fu_753_p3 = (tmp_39_fu_741_p2_temp_76 === 1'b1)? tmp_40_fu_747_p2 : x_7_fu_718_p2;
  assign tmp_2_reg_964_temp_77 = tmp_2_reg_964 & 1'd1;
  assign storemerge_v_fu_490_p3 = (tmp_2_reg_964_temp_77 === 1'b1)? tmp_17_fu_485_p2 : x_1_reg_958;
  assign tmp10_fu_765_p2 = x_reg_946 ^ statemt_q0;
  assign tmp11_fu_776_p2 = word3_load_3_cast_fu_761_p1 ^ tmp12_fu_770_p2;
  assign tmp12_fu_770_p2 = tmp_53_tmp_s_fu_710_p3 ^ storemerge4_v_fu_753_p3;
  assign tmp1_fu_514_p2 = statemt_q1 ^ statemt_q0;
  assign tmp2_fu_526_p2 = word3_load_cast_fu_510_p1 ^ tmp3_fu_520_p2;
  assign tmp3_fu_520_p2 = storemerge_v_fu_490_p3 ^ ret_load_5_fu_478_p3;
  assign tmp4_fu_792_p2 = x_6_reg_933 ^ x_4_reg_1009;
  assign tmp5_fu_796_p2 = word3_load_1_cast_fu_788_p1 ^ tmp6_reg_1019;
  assign tmp6_fu_600_p2 = tmp_33_tmp_s_fu_544_p3 ^ storemerge2_v_fu_592_p3;
  assign tmp7_fu_811_p2 = x_reg_946 ^ x_6_reg_933;
  assign tmp8_fu_815_p2 = word3_load_2_cast_fu_808_p1 ^ tmp9_reg_1029;
  assign tmp9_fu_684_p2 = tmp_43_tmp_s_fu_626_p3 ^ storemerge3_v_fu_676_p3;
  assign tmp_10_fu_851_p1 = tmp_3_fu_843_p3;
  assign tmp_11_fu_856_p2 = tmp_3_fu_843_p3 | 4'd1;
  assign tmp_12_fu_862_p1 = tmp_11_fu_856_p2;
  assign tmp_13_fu_867_p2 = tmp_3_reg_1047 | 4'd2;
  assign tmp_14_fu_872_p1 = tmp_13_fu_867_p2;
  assign tmp_15_fu_877_p2 = tmp_3_reg_1047 | 4'd3;
  assign tmp_16_fu_882_p1 = tmp_15_fu_877_p2;
  assign tmp_17_fu_485_p2 = x_1_reg_958 ^ 32'd283;
  assign tmp_18_fu_404_p2 = tmp_s_reg_900 | 4'd2;
  assign tmp_19_fu_409_p1 = tmp_18_fu_404_p2;
  assign tmp_1_fu_321_p1 = (j_reg_255 & 2'd3);
  assign tmp_20_fu_414_p2 = tmp_s_reg_900 | 4'd3;
  assign tmp_21_fu_419_p1 = tmp_20_fu_414_p2;
  assign tmp_22_fu_349_p2 = tmp_reg_887 + j_cast1_fu_305_p1;
  assign tmp_23_cast1_fu_428_p1 = tmp_22_reg_926;
  assign tmp_23_cast_fu_496_p1 = tmp_22_reg_926;
  assign tmp_23_fu_424_p1 = tmp_22_reg_926;
  assign tmp_24_fu_532_p2 = tmp2_fu_526_p2 ^ tmp1_fu_514_p2;
  assign tmp_25_fu_461_p2 = (p_mask2_fu_453_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_26_fu_539_p2 = tmp_33_reg_952 ^ 32'd283;
  assign tmp_28_fu_580_p2 = (p_mask3_fu_572_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_29_fu_586_p2 = x_3_fu_556_p2 ^ 32'd283;
  assign tmp_2_fu_398_p2 = (p_mask1_fu_390_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_30_fu_801_p2 = tmp5_fu_796_p2 ^ tmp4_fu_792_p2;
  assign tmp_31_fu_614_p2 = (p_mask4_fu_606_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_32_fu_620_p2 = tmp_47_fu_550_p2 ^ 32'd283;
  assign tmp_33_fu_368_p2 = statemt_q1 << 32'd1;
  assign tmp_25_reg_1004_temp_78 = tmp_25_reg_1004 & 1'd1;
  assign tmp_33_tmp_s_fu_544_p3 = (tmp_25_reg_1004_temp_78 === 1'b1)? tmp_26_fu_539_p2 : tmp_33_reg_952;
  assign tmp_34_fu_664_p2 = (p_mask5_fu_656_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_35_fu_670_p2 = x_5_fu_640_p2 ^ 32'd283;
  assign tmp_36_fu_820_p2 = tmp8_fu_815_p2 ^ tmp7_fu_811_p2;
  assign tmp_37_fu_698_p2 = (p_mask6_fu_690_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_38_fu_704_p2 = tmp_50_fu_634_p2 ^ 32'd283;
  assign tmp_39_fu_741_p2 = (p_mask7_fu_733_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_54_fu_839_p1_temp_79 = tmp_54_fu_839_p1 << 1'd2;
  assign tmp_3_fu_843_p3 = tmp_54_fu_839_p1_temp_79;
  assign tmp_40_fu_747_p2 = x_7_fu_718_p2 ^ 32'd283;
  assign tmp_41_fu_782_p2 = tmp11_fu_776_p2 ^ tmp10_fu_765_p2;
  assign x_1_fu_374_p2_temp_80 = x_1_fu_374_p2 >> 1'd8;
  assign x_1_fu_374_p2_temp_81 = x_1_fu_374_p2_temp_80 & 24'd16777215;
  assign tmp_42_fu_380_p4 = x_1_fu_374_p2_temp_81;
  assign tmp_43_fu_499_p2 = 8'd120 + tmp_23_cast_fu_496_p1;
  assign tmp_31_fu_614_p2_temp_82 = tmp_31_fu_614_p2 & 1'd1;
  assign tmp_43_tmp_s_fu_626_p3 = (tmp_31_fu_614_p2_temp_82 === 1'b1)? tmp_32_fu_620_p2 : tmp_47_fu_550_p2;
  assign tmp_44_fu_431_p2 = 9'd240 + tmp_23_cast1_fu_428_p1;
  assign tmp_45_fu_442_p2 = $signed(9'd360) + $signed(tmp_23_cast1_fu_428_p1);
  assign tmp_47_cast_fu_505_p1 = tmp_43_fu_499_p2;
  assign tmp_47_fu_550_p2 = statemt_q0 << 32'd1;
  assign tmp_48_cast_fu_437_p1 = tmp_44_fu_431_p2;
  assign x_3_fu_556_p2_temp_83 = x_3_fu_556_p2 >> 1'd8;
  assign x_3_fu_556_p2_temp_84 = x_3_fu_556_p2_temp_83 & 24'd16777215;
  assign tmp_48_fu_562_p4 = x_3_fu_556_p2_temp_84;
  assign tmp_49_cast_fu_448_p1 = tmp_45_fu_442_p2;
  assign tmp_4_fu_333_p1 = tmp_s_fu_325_p3;
  assign tmp_50_fu_634_p2 = statemt_q1 << 32'd1;
  assign x_5_fu_640_p2_temp_85 = x_5_fu_640_p2 >> 1'd8;
  assign x_5_fu_640_p2_temp_86 = x_5_fu_640_p2_temp_85 & 24'd16777215;
  assign tmp_51_fu_646_p4 = x_5_fu_640_p2_temp_86;
  assign x_7_fu_718_p2_temp_87 = x_7_fu_718_p2 >> 1'd8;
  assign x_7_fu_718_p2_temp_88 = x_7_fu_718_p2_temp_87 & 24'd16777215;
  assign tmp_53_fu_723_p4 = x_7_fu_718_p2_temp_88;
  assign tmp_37_fu_698_p2_temp_89 = tmp_37_fu_698_p2 & 1'd1;
  assign tmp_53_tmp_s_fu_710_p3 = (tmp_37_fu_698_p2_temp_89 === 1'b1)? tmp_38_fu_704_p2 : tmp_50_fu_634_p2;
  assign tmp_54_fu_839_p1 = (j_1_reg_266 & 2'd3);
  assign tmp_5_fu_467_p2 = x_6_reg_933 << 32'd1;
  assign tmp_6_fu_362_p2 = (p_mask_fu_354_p3 == 32'd256)? 1'b1 : 1'b0;
  assign tmp_7_fu_472_p2 = tmp_5_fu_467_p2 ^ 32'd283;
  assign tmp_8_fu_338_p2 = tmp_s_fu_325_p3 | 4'd1;
  assign tmp_9_fu_344_p1 = tmp_8_fu_338_p2;
  assign n_temp_90 = n << 1'd2;
  assign tmp_fu_297_p3 = n_temp_90;
  assign tmp_1_fu_321_p1_temp_91 = tmp_1_fu_321_p1 << 1'd2;
  assign tmp_s_fu_325_p3 = tmp_1_fu_321_p1_temp_91;
  assign word3_address1 = tmp_48_cast_fu_437_p1;
  assign word3_address2 = tmp_49_cast_fu_448_p1;
  assign word3_load_1_cast_fu_788_p1 = word3_q0;
  assign word3_load_2_cast_fu_808_p1 = word3_load_2_reg_1024;
  assign word3_load_3_cast_fu_761_p1 = word3_q2;
  assign word3_load_cast_fu_510_p1 = word3_q0;
  assign x_1_fu_374_p2 = tmp_33_fu_368_p2 ^ statemt_q1;
  assign x_3_fu_556_p2 = tmp_47_fu_550_p2 ^ statemt_q0;
  assign x_5_fu_640_p2 = tmp_50_fu_634_p2 ^ statemt_q1;
  assign x_7_fu_718_p2 = x_6_reg_933 ^ tmp_5_fu_467_p2;

  always @(posedge ap_clk) begin
    tmp_reg_887 <= tmp_reg_887 & 1'd60;
    tmp_s_reg_900 <= tmp_s_reg_900 & 1'd12;
    tmp_4_reg_906 <= tmp_4_reg_906 & 1'd18446744073709551612;
    tmp_4_reg_906 <= tmp_4_reg_906 & 63'd15;
    tmp_9_reg_916 <= tmp_9_reg_916 & 1'd18446744073709551613;
    tmp_9_reg_916 <= tmp_9_reg_916 & 63'd15;
    tmp_33_reg_952 <= tmp_33_reg_952 & 1'd4294967294;
    tmp_19_reg_969 <= tmp_19_reg_969 & 1'd18446744073709551614;
    tmp_19_reg_969 <= tmp_19_reg_969 & 63'd15;
    tmp_21_reg_979 <= tmp_21_reg_979 & 1'd18446744073709551615;
    tmp_21_reg_979 <= tmp_21_reg_979 & 63'd15;
    tmp_3_reg_1047 <= tmp_3_reg_1047 & 1'd12;
    tmp_10_reg_1053 <= tmp_10_reg_1053 & 1'd18446744073709551612;
    tmp_10_reg_1053 <= tmp_10_reg_1053 & 63'd15;
    tmp_12_reg_1063 <= tmp_12_reg_1063 & 1'd18446744073709551613;
    tmp_12_reg_1063 <= tmp_12_reg_1063 & 63'd15;
    tmp_14_reg_1073 <= tmp_14_reg_1073 & 1'd18446744073709551614;
    tmp_14_reg_1073 <= tmp_14_reg_1073 & 63'd15;
    tmp_16_reg_1083 <= tmp_16_reg_1083 & 1'd18446744073709551615;
    tmp_16_reg_1083 <= tmp_16_reg_1083 & 63'd15;
  end


endmodule

