
module calculationofkeys
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_idle,
  ap_ready,
  L,
  R,
  sub_key_address0,
  sub_key_ce0,
  sub_key_q0,
  ap_return
);

  parameter ap_ST_fsm_state1 = 16'd1;
  parameter ap_ST_fsm_state2 = 16'd2;
  parameter ap_ST_fsm_state3 = 16'd4;
  parameter ap_ST_fsm_state4 = 16'd8;
  parameter ap_ST_fsm_state5 = 16'd16;
  parameter ap_ST_fsm_state6 = 16'd32;
  parameter ap_ST_fsm_state7 = 16'd64;
  parameter ap_ST_fsm_state8 = 16'd128;
  parameter ap_ST_fsm_state9 = 16'd256;
  parameter ap_ST_fsm_state10 = 16'd512;
  parameter ap_ST_fsm_state11 = 16'd1024;
  parameter ap_ST_fsm_state12 = 16'd2048;
  parameter ap_ST_fsm_state13 = 16'd4096;
  parameter ap_ST_fsm_state14 = 16'd8192;
  parameter ap_ST_fsm_state15 = 16'd16384;
  parameter ap_ST_fsm_state16 = 16'd32768;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  input [31:0] L;
  input [31:0] R;
  output [3:0] sub_key_address0;
  output sub_key_ce0;
  input [63:0] sub_key_q0;
  output [63:0] ap_return;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg sub_key_ce0;
  reg [63:0] ap_return;
  reg [15:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [5:0] E_address0;
  reg E_ce0;
  wire [5:0] E_q0;
  wire [8:0] S_address0;
  reg S_ce0;
  wire [3:0] S_q0;
  wire [4:0] P_address0;
  reg P_ce0;
  wire [5:0] P_q0;
  wire [5:0] PI_address0;
  reg PI_ce0;
  wire [6:0] PI_q0;
  wire [4:0] i_3_fu_301_p2;
  reg [4:0] i_3_reg_732;
  wire ap_CS_fsm_state2;
  wire [63:0] pre_output_fu_307_p3;
  reg [63:0] pre_output_reg_737;
  wire [0:0] icmp_ln227_fu_295_p2;
  wire [5:0] j_fu_321_p2;
  reg [5:0] j_reg_745;
  wire ap_CS_fsm_state3;
  wire [0:0] icmp_ln232_fu_315_p2;
  reg [5:0] E_load_reg_760;
  wire ap_CS_fsm_state4;
  wire [62:0] trunc_ln235_1_fu_337_p1;
  reg [62:0] trunc_ln235_1_reg_765;
  wire [63:0] s_input_fu_360_p3;
  wire ap_CS_fsm_state5;
  wire [46:0] xor_ln241_fu_383_p2;
  reg [46:0] xor_ln241_reg_775;
  wire ap_CS_fsm_state6;
  wire [47:0] xor_ln241_1_fu_389_p2;
  reg [47:0] xor_ln241_1_reg_780;
  wire [3:0] j_3_fu_401_p2;
  reg [3:0] j_3_reg_788;
  wire ap_CS_fsm_state7;
  wire signed [31:0] sext_ln253_fu_439_p1;
  reg signed [31:0] sext_ln253_reg_793;
  wire [0:0] icmp_ln250_fu_395_p2;
  wire [6:0] sub_ln253_1_fu_458_p2;
  reg [6:0] sub_ln253_1_reg_798;
  wire [47:0] lshr_ln253_1_fu_478_p2;
  reg [47:0] lshr_ln253_1_reg_803;
  wire [10:0] add_ln259_1_fu_586_p2;
  reg [10:0] add_ln259_1_reg_810;
  wire ap_CS_fsm_state8;
  wire ap_CS_fsm_state9;
  wire [5:0] j_4_fu_619_p2;
  reg [5:0] j_4_reg_823;
  wire ap_CS_fsm_state11;
  wire [0:0] icmp_ln266_fu_613_p2;
  wire [30:0] trunc_ln269_1_fu_630_p1;
  reg [30:0] trunc_ln269_1_reg_833;
  wire [31:0] R1_fu_634_p2;
  reg [5:0] P_load_reg_843;
  wire ap_CS_fsm_state12;
  wire [31:0] f_function_res_fu_659_p3;
  wire ap_CS_fsm_state13;
  wire [6:0] i_fu_672_p2;
  reg [6:0] i_reg_856;
  wire ap_CS_fsm_state14;
  wire [0:0] icmp_ln304_fu_666_p2;
  wire [62:0] trunc_ln308_1_fu_683_p1;
  reg [62:0] trunc_ln308_1_reg_866;
  reg [6:0] PI_load_reg_871;
  wire ap_CS_fsm_state15;
  wire [63:0] inv_init_perm_res_fu_705_p3;
  wire ap_CS_fsm_state16;
  reg [4:0] i_0_reg_175;
  reg [31:0] L1_reg_187;
  reg [31:0] temp_reg_197;
  reg [5:0] j_0_reg_208;
  reg [63:0] s_input_0_reg_219;
  reg [3:0] j_1_reg_231;
  wire ap_CS_fsm_state10;
  reg [5:0] j_2_reg_243;
  reg [31:0] f_function_res_0_reg_254;
  reg [6:0] i_0_i_reg_265;
  reg [63:0] inv_init_perm_res_0_s_reg_276;
  wire [63:0] zext_ln235_fu_327_p1;
  wire [63:0] zext_ln245_fu_332_p1;
  wire signed [63:0] sext_ln259_3_fu_592_p1;
  wire [63:0] zext_ln269_fu_625_p1;
  wire [63:0] zext_ln308_fu_678_p1;
  reg [31:0] s_output_1_fu_94;
  wire [31:0] s_output_fu_600_p3;
  wire [5:0] sub_ln235_fu_341_p2;
  wire [31:0] zext_ln235_1_fu_346_p1;
  wire [31:0] lshr_ln235_fu_350_p2;
  wire [0:0] trunc_ln235_fu_356_p1;
  wire [46:0] trunc_ln241_3_fu_379_p1;
  wire [46:0] trunc_ln241_2_fu_375_p1;
  wire [47:0] trunc_ln241_1_fu_371_p1;
  wire [47:0] trunc_ln241_fu_367_p1;
  wire [2:0] trunc_ln253_fu_407_p1;
  wire [5:0] shl_ln_fu_411_p3;
  wire [3:0] shl_ln253_fu_423_p2;
  wire [6:0] zext_ln253_fu_419_p1;
  wire [6:0] zext_ln253_1_fu_429_p1;
  wire [6:0] sub_ln253_fu_433_p2;
  wire [47:0] zext_ln253_3_fu_443_p1;
  wire [47:0] lshr_ln253_fu_447_p2;
  wire [6:0] add_ln253_fu_464_p2;
  wire signed [31:0] sext_ln253_1_fu_470_p1;
  wire [47:0] and_ln253_fu_453_p2;
  wire [47:0] zext_ln253_4_fu_474_p1;
  wire [0:0] tmp_fu_490_p3;
  wire [0:0] trunc_ln253_1_fu_487_p1;
  wire [46:0] zext_ln253_2_fu_484_p1;
  wire [46:0] lshr_ln256_fu_512_p2;
  wire [6:0] add_ln256_fu_523_p2;
  wire signed [31:0] sext_ln256_fu_528_p1;
  wire [46:0] and_ln256_fu_518_p2;
  wire [46:0] zext_ln256_fu_532_p1;
  wire [2:0] tmp_s_fu_503_p4;
  wire [0:0] or_ln254_fu_497_p2;
  wire [7:0] tmp_3_fu_542_p4;
  wire [46:0] lshr_ln256_1_fu_536_p2;
  wire [7:0] trunc_ln259_fu_556_p1;
  wire signed [8:0] sext_ln259_1_fu_560_p1;
  wire signed [8:0] sext_ln259_fu_552_p1;
  wire [8:0] add_ln259_fu_564_p2;
  wire [9:0] tmp_4_fu_574_p3;
  wire signed [10:0] sext_ln259_2_fu_570_p1;
  wire [10:0] zext_ln259_fu_582_p1;
  wire [27:0] trunc_ln259_1_fu_596_p1;
  wire [5:0] sub_ln269_fu_640_p2;
  wire [31:0] zext_ln269_1_fu_645_p1;
  wire [31:0] lshr_ln269_fu_649_p2;
  wire [0:0] trunc_ln269_fu_655_p1;
  wire [6:0] sub_ln308_fu_687_p2;
  wire [63:0] zext_ln308_1_fu_692_p1;
  wire [63:0] lshr_ln308_fu_696_p2;
  wire [0:0] trunc_ln308_fu_701_p1;
  reg [63:0] ap_return_preg;
  reg [15:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 16'd1;
    #0 ap_return_preg = 64'd0;
  end


  calculationofkeys_E
  #(
    .DataWidth(6),
    .AddressRange(48),
    .AddressWidth(6)
  )
  E_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(E_address0),
    .ce0(E_ce0),
    .q0(E_q0)
  );


  calculationofkeys_S
  #(
    .DataWidth(4),
    .AddressRange(512),
    .AddressWidth(9)
  )
  S_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(S_address0),
    .ce0(S_ce0),
    .q0(S_q0)
  );


  calculationofkeys_P
  #(
    .DataWidth(6),
    .AddressRange(32),
    .AddressWidth(5)
  )
  P_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(P_address0),
    .ce0(P_ce0),
    .q0(P_q0)
  );


  calculationofkeysbkb
  #(
    .DataWidth(7),
    .AddressRange(64),
    .AddressWidth(6)
  )
  PI_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(PI_address0),
    .ce0(PI_ce0),
    .q0(PI_q0)
  );


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_return_preg <= 64'd0;
    end else
      if((icmp_ln304_fu_666_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state14)) begin
        ap_return_preg <= inv_init_perm_res_0_s_reg_276;
      end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln266_fu_613_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state11)) begin
      L1_reg_187 <= temp_reg_197;
    end else if((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) begin
      L1_reg_187 <= L;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln250_fu_395_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7)) begin
      f_function_res_0_reg_254 <= 32'd0;
    end else if(1'b1 == ap_CS_fsm_state13) begin
      f_function_res_0_reg_254 <= f_function_res_fu_659_p3;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state16) begin
      i_0_i_reg_265 <= i_reg_856;
    end else if((icmp_ln227_fu_295_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      i_0_i_reg_265 <= 7'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln266_fu_613_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state11)) begin
      i_0_reg_175 <= i_3_reg_732;
    end else if((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) begin
      i_0_reg_175 <= 5'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state16) begin
      inv_init_perm_res_0_s_reg_276 <= inv_init_perm_res_fu_705_p3;
    end else if((icmp_ln227_fu_295_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      inv_init_perm_res_0_s_reg_276 <= 64'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln227_fu_295_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      j_0_reg_208 <= 6'd0;
    end else if(1'b1 == ap_CS_fsm_state5) begin
      j_0_reg_208 <= j_reg_745;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state10) begin
      j_1_reg_231 <= j_3_reg_788;
    end else if(1'b1 == ap_CS_fsm_state6) begin
      j_1_reg_231 <= 4'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln250_fu_395_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7)) begin
      j_2_reg_243 <= 6'd0;
    end else if(1'b1 == ap_CS_fsm_state13) begin
      j_2_reg_243 <= j_4_reg_823;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln227_fu_295_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      s_input_0_reg_219 <= 64'd0;
    end else if(1'b1 == ap_CS_fsm_state5) begin
      s_input_0_reg_219 <= s_input_fu_360_p3;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state10) begin
      s_output_1_fu_94 <= s_output_fu_600_p3;
    end else if((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) begin
      s_output_1_fu_94 <= 32'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln266_fu_613_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state11)) begin
      temp_reg_197 <= R1_fu_634_p2;
    end else if((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) begin
      temp_reg_197 <= R;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      E_load_reg_760 <= E_q0;
      trunc_ln235_1_reg_765 <= trunc_ln235_1_fu_337_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state15) begin
      PI_load_reg_871 <= PI_q0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state12) begin
      P_load_reg_843 <= P_q0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state8) begin
      add_ln259_1_reg_810 <= add_ln259_1_fu_586_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      i_3_reg_732 <= i_3_fu_301_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state14) begin
      i_reg_856 <= i_fu_672_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state7) begin
      j_3_reg_788 <= j_3_fu_401_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state11) begin
      j_4_reg_823 <= j_4_fu_619_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      j_reg_745 <= j_fu_321_p2;
    end 
  end

  assign sext_ln253_fu_439_p1_temp_168 = sext_ln253_fu_439_p1 & 31'd4294967294;
  assign sext_ln253_reg_793_temp_169 = sext_ln253_reg_793 & 31'd1;
  assign sext_ln253_fu_439_p1_temp_168_temp_170 = sext_ln253_fu_439_p1_temp_168 | sext_ln253_reg_793_temp_169;
  assign sub_ln253_1_fu_458_p2_temp_171 = sub_ln253_1_fu_458_p2 & 6'd126;
  assign sub_ln253_1_reg_798_temp_172 = sub_ln253_1_reg_798 & 6'd1;
  assign sub_ln253_1_fu_458_p2_temp_171_temp_173 = sub_ln253_1_fu_458_p2_temp_171 | sub_ln253_1_reg_798_temp_172;

  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state7) & (icmp_ln250_fu_395_p2 == 1'd0)) begin
      lshr_ln253_1_reg_803 <= lshr_ln253_1_fu_478_p2;
      sext_ln253_reg_793 <= sext_ln253_fu_439_p1_temp_168_temp_170;
      sub_ln253_1_reg_798 <= sub_ln253_1_fu_458_p2_temp_171_temp_173;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln227_fu_295_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      pre_output_reg_737 <= pre_output_fu_307_p3;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state11) & (icmp_ln266_fu_613_p2 == 1'd0)) begin
      trunc_ln269_1_reg_833 <= trunc_ln269_1_fu_630_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state14) & (icmp_ln304_fu_666_p2 == 1'd0)) begin
      trunc_ln308_1_reg_866 <= trunc_ln308_1_fu_683_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      xor_ln241_1_reg_780 <= xor_ln241_1_fu_389_p2;
      xor_ln241_reg_775 <= xor_ln241_fu_383_p2;
    end 
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      E_ce0 = 1'b1;
    end else begin
      E_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state14) begin
      PI_ce0 = 1'b1;
    end else begin
      PI_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state11) begin
      P_ce0 = 1'b1;
    end else begin
      P_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state9) begin
      S_ce0 = 1'b1;
    end else begin
      S_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1) | (icmp_ln304_fu_666_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state14)) begin
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
    if((icmp_ln304_fu_666_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state14)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if((icmp_ln304_fu_666_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state14)) begin
      ap_return = inv_init_perm_res_0_s_reg_276;
    end else begin
      ap_return = ap_return_preg;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      sub_key_ce0 = 1'b1;
    end else begin
      sub_key_ce0 = 1'b0;
    end
  end


  always @(*) begin
    case(ap_CS_fsm)
      ap_ST_fsm_state1: begin
        if((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end
      end
      ap_ST_fsm_state2: begin
        if((icmp_ln227_fu_295_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state14;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        if((icmp_ln232_fu_315_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3)) begin
          ap_NS_fsm = ap_ST_fsm_state6;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state4;
        end
      end
      ap_ST_fsm_state4: begin
        ap_NS_fsm = ap_ST_fsm_state5;
      end
      ap_ST_fsm_state5: begin
        ap_NS_fsm = ap_ST_fsm_state3;
      end
      ap_ST_fsm_state6: begin
        ap_NS_fsm = ap_ST_fsm_state7;
      end
      ap_ST_fsm_state7: begin
        if((icmp_ln250_fu_395_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7)) begin
          ap_NS_fsm = ap_ST_fsm_state11;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state8;
        end
      end
      ap_ST_fsm_state8: begin
        ap_NS_fsm = ap_ST_fsm_state9;
      end
      ap_ST_fsm_state9: begin
        ap_NS_fsm = ap_ST_fsm_state10;
      end
      ap_ST_fsm_state10: begin
        ap_NS_fsm = ap_ST_fsm_state7;
      end
      ap_ST_fsm_state11: begin
        if((icmp_ln266_fu_613_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state11)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state12;
        end
      end
      ap_ST_fsm_state12: begin
        ap_NS_fsm = ap_ST_fsm_state13;
      end
      ap_ST_fsm_state13: begin
        ap_NS_fsm = ap_ST_fsm_state11;
      end
      ap_ST_fsm_state14: begin
        if((icmp_ln304_fu_666_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state14)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state15;
        end
      end
      ap_ST_fsm_state15: begin
        ap_NS_fsm = ap_ST_fsm_state16;
      end
      ap_ST_fsm_state16: begin
        ap_NS_fsm = ap_ST_fsm_state14;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign E_address0 = zext_ln235_fu_327_p1;
  assign PI_address0 = zext_ln308_fu_678_p1;
  assign P_address0 = zext_ln269_fu_625_p1;
  assign R1_fu_634_p2 = f_function_res_0_reg_254 ^ L1_reg_187;
  assign S_address0 = sext_ln259_3_fu_592_p1;
  assign add_ln253_fu_464_p2 = 7'd42 + sub_ln253_1_fu_458_p2;
  assign add_ln256_fu_523_p2 = 7'd43 + sub_ln253_1_reg_798;
  assign add_ln259_1_fu_586_p2 = $signed(sext_ln259_2_fu_570_p1) + $signed(zext_ln259_fu_582_p1);
  assign add_ln259_fu_564_p2 = $signed(sext_ln259_1_fu_560_p1) + $signed(sext_ln259_fu_552_p1);
  assign and_ln253_fu_453_p2 = xor_ln241_1_reg_780 & lshr_ln253_fu_447_p2;
  assign and_ln256_fu_518_p2 = xor_ln241_reg_775 & lshr_ln256_fu_512_p2;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];
  assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];
  assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];
  assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];
  assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];
  assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];
  assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];
  assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];
  assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];
  assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];
  assign trunc_ln269_1_reg_833_temp_174 = trunc_ln269_1_reg_833 << 1'd1;
  assign trunc_ln269_1_reg_833_temp_175 = trunc_ln269_1_reg_833_temp_174 | trunc_ln269_fu_655_p1;
  assign f_function_res_fu_659_p3 = trunc_ln269_1_reg_833_temp_175;
  assign i_3_fu_301_p2 = i_0_reg_175 + 5'd1;
  assign i_fu_672_p2 = i_0_i_reg_265 + 7'd1;
  assign icmp_ln227_fu_295_p2 = (i_0_reg_175 == 5'd16)? 1'b1 : 1'b0;
  assign icmp_ln232_fu_315_p2 = (j_0_reg_208 == 6'd48)? 1'b1 : 1'b0;
  assign icmp_ln250_fu_395_p2 = (j_1_reg_231 == 4'd8)? 1'b1 : 1'b0;
  assign icmp_ln266_fu_613_p2 = (j_2_reg_243 == 6'd32)? 1'b1 : 1'b0;
  assign icmp_ln304_fu_666_p2 = (i_0_i_reg_265 == 7'd64)? 1'b1 : 1'b0;
  assign trunc_ln308_1_reg_866_temp_176 = trunc_ln308_1_reg_866 << 1'd1;
  assign trunc_ln308_1_reg_866_temp_177 = trunc_ln308_1_reg_866_temp_176 | trunc_ln308_fu_701_p1;
  assign inv_init_perm_res_fu_705_p3 = trunc_ln308_1_reg_866_temp_177;
  assign j_3_fu_401_p2 = j_1_reg_231 + 4'd1;
  assign j_4_fu_619_p2 = j_2_reg_243 + 6'd1;
  assign j_fu_321_p2 = j_0_reg_208 + 6'd1;
  assign lshr_ln235_fu_350_p2 = temp_reg_197 >> zext_ln235_1_fu_346_p1;
  assign lshr_ln253_1_fu_478_p2 = and_ln253_fu_453_p2 >> zext_ln253_4_fu_474_p1;
  assign lshr_ln253_fu_447_p2 = 48'd145135534866432 >> zext_ln253_3_fu_443_p1;
  assign lshr_ln256_1_fu_536_p2 = and_ln256_fu_518_p2 >> zext_ln256_fu_532_p1;
  assign lshr_ln256_fu_512_p2 = 47'd131941395333120 >> zext_ln253_2_fu_484_p1;
  assign lshr_ln269_fu_649_p2 = s_output_1_fu_94 >> zext_ln269_1_fu_645_p1;
  assign lshr_ln308_fu_696_p2 = pre_output_reg_737 >> zext_ln308_1_fu_692_p1;
  assign or_ln254_fu_497_p2 = trunc_ln253_1_fu_487_p1 | tmp_fu_490_p3;
  assign temp_reg_197_temp_178 = temp_reg_197 << 1'd32;
  assign temp_reg_197_temp_179 = temp_reg_197_temp_178 | L1_reg_187;
  assign pre_output_fu_307_p3 = temp_reg_197_temp_179;
  assign trunc_ln235_1_reg_765_temp_180 = trunc_ln235_1_reg_765 << 1'd1;
  assign trunc_ln235_1_reg_765_temp_181 = trunc_ln235_1_reg_765_temp_180 | trunc_ln235_fu_356_p1;
  assign s_input_fu_360_p3 = trunc_ln235_1_reg_765_temp_181;
  assign trunc_ln259_1_fu_596_p1_temp_182 = trunc_ln259_1_fu_596_p1 << 1'd4;
  assign trunc_ln259_1_fu_596_p1_temp_183 = trunc_ln259_1_fu_596_p1_temp_182 | S_q0;
  assign s_output_fu_600_p3 = trunc_ln259_1_fu_596_p1_temp_183;
  assign sext_ln253_1_fu_470_p1 = $signed(add_ln253_fu_464_p2);
  assign sext_ln253_fu_439_p1 = $signed(sub_ln253_fu_433_p2);
  assign sext_ln256_fu_528_p1 = $signed(add_ln256_fu_523_p2);
  assign sext_ln259_1_fu_560_p1 = $signed(trunc_ln259_fu_556_p1);
  assign sext_ln259_2_fu_570_p1 = $signed(add_ln259_fu_564_p2);
  assign sext_ln259_3_fu_592_p1 = $signed(add_ln259_1_reg_810);
  assign sext_ln259_fu_552_p1 = $signed(tmp_3_fu_542_p4);
  assign shl_ln253_fu_423_p2 = j_1_reg_231 << 4'd1;
  assign trunc_ln253_fu_407_p1_temp_184 = trunc_ln253_fu_407_p1 << 1'd3;
  assign shl_ln_fu_411_p3 = trunc_ln253_fu_407_p1_temp_184;
  assign sub_key_address0 = zext_ln245_fu_332_p1;
  assign sub_ln235_fu_341_p2 = $signed(6'd32) - $signed(E_load_reg_760);
  assign sub_ln253_1_fu_458_p2 = zext_ln253_1_fu_429_p1 - zext_ln253_fu_419_p1;
  assign sub_ln253_fu_433_p2 = zext_ln253_fu_419_p1 - zext_ln253_1_fu_429_p1;
  assign sub_ln269_fu_640_p2 = $signed(6'd32) - $signed(P_load_reg_843);
  assign sub_ln308_fu_687_p2 = $signed(7'd64) - $signed(PI_load_reg_871);
  assign tmp_s_fu_503_p4_temp_185 = tmp_s_fu_503_p4 << 1'd1;
  assign tmp_s_fu_503_p4_temp_186 = tmp_s_fu_503_p4_temp_185 | or_ln254_fu_497_p2;
  assign tmp_s_fu_503_p4_temp_187 = tmp_s_fu_503_p4_temp_186 << 1'd4;
  assign tmp_3_fu_542_p4 = tmp_s_fu_503_p4_temp_187;
  assign j_1_reg_231_temp_188 = j_1_reg_231 << 1'd6;
  assign tmp_4_fu_574_p3 = j_1_reg_231_temp_188;
  assign lshr_ln253_1_reg_803_temp_189 = lshr_ln253_1_reg_803 >> 32'd4;
  assign tmp_fu_490_p3 = lshr_ln253_1_reg_803_temp_189 & 1'd1;
  assign lshr_ln253_1_reg_803_temp_190 = lshr_ln253_1_reg_803 >> 1'd5;
  assign lshr_ln253_1_reg_803_temp_191 = lshr_ln253_1_reg_803_temp_190 & 3'd7;
  assign tmp_s_fu_503_p4 = lshr_ln253_1_reg_803_temp_191;
  assign trunc_ln235_1_fu_337_p1 = (s_input_0_reg_219 & 63'd9223372036854775807);
  assign trunc_ln235_fu_356_p1 = (lshr_ln235_fu_350_p2 & 1'd1);
  assign trunc_ln241_1_fu_371_p1 = (sub_key_q0 & 48'd281474976710655);
  assign trunc_ln241_2_fu_375_p1 = (s_input_0_reg_219 & 47'd140737488355327);
  assign trunc_ln241_3_fu_379_p1 = (sub_key_q0 & 47'd140737488355327);
  assign trunc_ln241_fu_367_p1 = (s_input_0_reg_219 & 48'd281474976710655);
  assign trunc_ln253_1_fu_487_p1 = (lshr_ln253_1_reg_803 & 1'd1);
  assign trunc_ln253_fu_407_p1 = (j_1_reg_231 & 3'd7);
  assign trunc_ln259_1_fu_596_p1 = (s_output_1_fu_94 & 28'd268435455);
  assign trunc_ln259_fu_556_p1 = (lshr_ln256_1_fu_536_p2 & 8'd255);
  assign trunc_ln269_1_fu_630_p1 = (f_function_res_0_reg_254 & 31'd2147483647);
  assign trunc_ln269_fu_655_p1 = (lshr_ln269_fu_649_p2 & 1'd1);
  assign trunc_ln308_1_fu_683_p1 = (inv_init_perm_res_0_s_reg_276 & 63'd9223372036854775807);
  assign trunc_ln308_fu_701_p1 = (lshr_ln308_fu_696_p2 & 1'd1);
  assign xor_ln241_1_fu_389_p2 = trunc_ln241_fu_367_p1 ^ trunc_ln241_1_fu_371_p1;
  assign xor_ln241_fu_383_p2 = trunc_ln241_3_fu_379_p1 ^ trunc_ln241_2_fu_375_p1;
  assign zext_ln235_1_fu_346_p1 = sub_ln235_fu_341_p2;
  assign zext_ln235_fu_327_p1 = j_0_reg_208;
  assign zext_ln245_fu_332_p1 = i_0_reg_175;
  assign zext_ln253_1_fu_429_p1 = shl_ln253_fu_423_p2;
  assign zext_ln253_2_fu_484_p1 = $unsigned(sext_ln253_reg_793);
  assign zext_ln253_3_fu_443_p1 = $unsigned(sext_ln253_fu_439_p1);
  assign zext_ln253_4_fu_474_p1 = $unsigned(sext_ln253_1_fu_470_p1);
  assign zext_ln253_fu_419_p1 = shl_ln_fu_411_p3;
  assign zext_ln256_fu_532_p1 = $unsigned(sext_ln256_fu_528_p1);
  assign zext_ln259_fu_582_p1 = tmp_4_fu_574_p3;
  assign zext_ln269_1_fu_645_p1 = sub_ln269_fu_640_p2;
  assign zext_ln269_fu_625_p1 = j_2_reg_243;
  assign zext_ln308_1_fu_692_p1 = sub_ln308_fu_687_p2;
  assign zext_ln308_fu_678_p1 = i_0_i_reg_265;

  always @(posedge ap_clk) begin
    sext_ln253_reg_793 <= sext_ln253_reg_793 & 1'd4294967294;
    sub_ln253_1_reg_798 <= sub_ln253_1_reg_798 & 1'd126;
  end


endmodule

