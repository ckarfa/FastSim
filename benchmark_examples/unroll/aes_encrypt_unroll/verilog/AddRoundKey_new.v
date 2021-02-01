
module AddRoundKey
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

  parameter ap_ST_fsm_state1 = 5'd1;
  parameter ap_ST_fsm_state2 = 5'd2;
  parameter ap_ST_fsm_state3 = 5'd4;
  parameter ap_ST_fsm_state4 = 5'd8;
  parameter ap_ST_fsm_state5 = 5'd16;
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
  reg [31:0] statemt_d0;
  reg [4:0] statemt_address1;
  reg statemt_ce1;
  reg statemt_we1;
  reg [31:0] statemt_d1;
  reg [4:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [8:0] word13_address0;
  reg word13_ce0;
  wire [7:0] word13_q0;
  wire [8:0] word13_address1;
  reg word13_ce1;
  wire [7:0] word13_q1;
  wire [8:0] word13_address2;
  reg word13_ce2;
  wire [7:0] word13_q2;
  wire [8:0] word13_address3;
  reg word13_ce3;
  wire [7:0] word13_q3;
  wire [7:0] tmp_fu_143_p3;
  reg [7:0] tmp_reg_303;
  wire [2:0] j_4_fu_161_p2;
  reg [2:0] j_4_reg_311;
  wire ap_CS_fsm_state2;
  wire [7:0] tmp_s_fu_167_p2;
  reg [7:0] tmp_s_reg_316;
  wire [0:0] exitcond_fu_155_p2;
  wire [3:0] tmp_40_fu_176_p3;
  reg [3:0] tmp_40_reg_323;
  reg [4:0] statemt_addr_reg_329;
  reg [4:0] statemt_addr_36_reg_334;
  wire ap_CS_fsm_state3;
  reg [31:0] statemt_load_reg_359;
  reg [31:0] statemt_load_19_reg_364;
  reg [4:0] statemt_addr_37_reg_369;
  reg [4:0] statemt_addr_38_reg_374;
  wire [31:0] tmp_45_fu_287_p2;
  reg [31:0] tmp_45_reg_379;
  wire ap_CS_fsm_state4;
  wire [31:0] tmp_47_fu_297_p2;
  reg [31:0] tmp_47_reg_384;
  reg [2:0] j_reg_128;
  wire ap_CS_fsm_state5;
  wire [31:0] tmp_86_cast_fu_184_p1;
  wire [31:0] tmp_88_cast_fu_195_p1;
  wire [31:0] tmp_cast_fu_200_p1;
  wire [31:0] tmp_99_cast_fu_216_p1;
  wire [31:0] tmp_100_cast_fu_227_p1;
  wire signed [31:0] tmp_101_cast_fu_238_p1;
  wire [31:0] tmp_90_cast_fu_248_p1;
  wire [31:0] tmp_92_cast_fu_258_p1;
  wire [31:0] tmp_41_fu_267_p2;
  wire [31:0] tmp_43_fu_277_p2;
  wire [5:0] tmp_108_fu_139_p1;
  wire [7:0] j_cast1_fu_151_p1;
  wire [1:0] tmp_109_fu_172_p1;
  wire [3:0] tmp_42_fu_189_p2;
  wire [8:0] tmp_cast_cast_fu_207_p1;
  wire [8:0] tmp_98_fu_210_p2;
  wire [8:0] tmp_99_fu_221_p2;
  wire [9:0] tmp_cast_cast1_fu_204_p1;
  wire [9:0] tmp_100_fu_232_p2;
  wire [3:0] tmp_44_fu_243_p2;
  wire [3:0] tmp_46_fu_253_p2;
  wire [31:0] word13_load_cast_fu_263_p1;
  wire [31:0] word13_load_1_cast_fu_273_p1;
  wire [31:0] word13_load_2_cast_fu_283_p1;
  wire [31:0] word13_load_3_cast_fu_293_p1;
  reg [4:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 5'd1;
  end


  AddRoundKey_word13
  #(
    .DataWidth(8),
    .AddressRange(480),
    .AddressWidth(9)
  )
  word13_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(word13_address0),
    .ce0(word13_ce0),
    .q0(word13_q0),
    .address1(word13_address1),
    .ce1(word13_ce1),
    .q1(word13_q1),
    .address2(word13_address2),
    .ce2(word13_ce2),
    .q2(word13_q2),
    .address3(word13_address3),
    .ce3(word13_ce3),
    .q3(word13_q3)
  );


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      j_reg_128 <= j_4_reg_311;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      j_reg_128 <= 3'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      j_4_reg_311 <= j_4_fu_161_p2;
    end 
  end

  assign tmp_88_cast_fu_195_p1_temp_60 = tmp_88_cast_fu_195_p1 & 31'd12;
  assign statemt_addr_36_reg_334_temp_61 = statemt_addr_36_reg_334 & 4'd19;
  assign tmp_88_cast_fu_195_p1_temp_60_temp_62 = tmp_88_cast_fu_195_p1_temp_60 | statemt_addr_36_reg_334_temp_61;
  assign tmp_86_cast_fu_184_p1_temp_63 = tmp_86_cast_fu_184_p1 & 31'd12;
  assign statemt_addr_reg_329_temp_64 = statemt_addr_reg_329 & 4'd19;
  assign tmp_86_cast_fu_184_p1_temp_63_temp_65 = tmp_86_cast_fu_184_p1_temp_63 | statemt_addr_reg_329_temp_64;
  assign tmp_40_fu_176_p3_temp_66 = tmp_40_fu_176_p3 & 3'd12;
  assign tmp_40_reg_323_temp_67 = tmp_40_reg_323 & 3'd3;
  assign tmp_40_fu_176_p3_temp_66_temp_68 = tmp_40_fu_176_p3_temp_66 | tmp_40_reg_323_temp_67;

  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state2) & (exitcond_fu_155_p2 == 1'd0)) begin
      statemt_addr_36_reg_334 <= tmp_88_cast_fu_195_p1_temp_60_temp_62;
      statemt_addr_reg_329 <= tmp_86_cast_fu_184_p1_temp_63_temp_65;
      tmp_40_reg_323 <= tmp_40_fu_176_p3_temp_66_temp_68;
      tmp_s_reg_316 <= tmp_s_fu_167_p2;
    end 
  end

  assign tmp_90_cast_fu_248_p1_temp_69 = tmp_90_cast_fu_248_p1 & 31'd12;
  assign statemt_addr_37_reg_369_temp_70 = statemt_addr_37_reg_369 & 4'd19;
  assign tmp_90_cast_fu_248_p1_temp_69_temp_71 = tmp_90_cast_fu_248_p1_temp_69 | statemt_addr_37_reg_369_temp_70;
  assign tmp_92_cast_fu_258_p1_temp_72 = tmp_92_cast_fu_258_p1 & 31'd12;
  assign statemt_addr_38_reg_374_temp_73 = statemt_addr_38_reg_374 & 4'd19;
  assign tmp_92_cast_fu_258_p1_temp_72_temp_74 = tmp_92_cast_fu_258_p1_temp_72 | statemt_addr_38_reg_374_temp_73;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      statemt_addr_37_reg_369 <= tmp_90_cast_fu_248_p1_temp_69_temp_71;
      statemt_addr_38_reg_374 <= tmp_92_cast_fu_258_p1_temp_72_temp_74;
      statemt_load_19_reg_364 <= statemt_q1;
      statemt_load_reg_359 <= statemt_q0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      tmp_45_reg_379 <= tmp_45_fu_287_p2;
      tmp_47_reg_384 <= tmp_47_fu_297_p2;
    end 
  end

  assign tmp_fu_143_p3_temp_75 = tmp_fu_143_p3 & 7'd252;
  assign tmp_reg_303_temp_76 = tmp_reg_303 & 7'd3;
  assign tmp_fu_143_p3_temp_75_temp_77 = tmp_fu_143_p3_temp_75 | tmp_reg_303_temp_76;

  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      tmp_reg_303 <= tmp_fu_143_p3_temp_75_temp_77;
    end 
  end


  always @(*) begin
    if((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1) | (1'b1 == ap_CS_fsm_state2) & (exitcond_fu_155_p2 == 1'd1)) begin
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
    if((1'b1 == ap_CS_fsm_state2) & (exitcond_fu_155_p2 == 1'd1)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      statemt_address0 = statemt_addr_37_reg_369;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      statemt_address0 = statemt_addr_reg_329;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address0 = tmp_90_cast_fu_248_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address0 = tmp_86_cast_fu_184_p1;
    end else begin
      statemt_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      statemt_address1 = statemt_addr_38_reg_374;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      statemt_address1 = statemt_addr_36_reg_334;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address1 = tmp_92_cast_fu_258_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address1 = tmp_88_cast_fu_195_p1;
    end else begin
      statemt_address1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state5)) begin
      statemt_ce0 = 1'b1;
    end else begin
      statemt_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state5)) begin
      statemt_ce1 = 1'b1;
    end else begin
      statemt_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      statemt_d0 = tmp_45_reg_379;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      statemt_d0 = tmp_41_fu_267_p2;
    end else begin
      statemt_d0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      statemt_d1 = tmp_47_reg_384;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      statemt_d1 = tmp_43_fu_277_p2;
    end else begin
      statemt_d1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state5)) begin
      statemt_we0 = 1'b1;
    end else begin
      statemt_we0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state5)) begin
      statemt_we1 = 1'b1;
    end else begin
      statemt_we1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      word13_ce0 = 1'b1;
    end else begin
      word13_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      word13_ce1 = 1'b1;
    end else begin
      word13_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      word13_ce2 = 1'b1;
    end else begin
      word13_ce2 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      word13_ce3 = 1'b1;
    end else begin
      word13_ce3 = 1'b0;
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
        if((1'b1 == ap_CS_fsm_state2) & (exitcond_fu_155_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
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
        ap_NS_fsm = ap_ST_fsm_state2;
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
  assign exitcond_fu_155_p2 = (j_reg_128 == 3'd4)? 1'b1 : 1'b0;
  assign j_4_fu_161_p2 = j_reg_128 + 3'd1;
  assign j_cast1_fu_151_p1 = j_reg_128;
  assign tmp_100_cast_fu_227_p1 = tmp_99_fu_221_p2;
  assign tmp_100_fu_232_p2 = 10'd360 + tmp_cast_cast1_fu_204_p1;
  assign tmp_101_cast_fu_238_p1 = $signed(tmp_100_fu_232_p2);
  assign tmp_108_fu_139_p1 = (n & 6'd63);
  assign tmp_109_fu_172_p1 = (j_reg_128 & 2'd3);
  assign tmp_109_fu_172_p1_temp_78 = tmp_109_fu_172_p1 << 1'd2;
  assign tmp_40_fu_176_p3 = tmp_109_fu_172_p1_temp_78;
  assign tmp_41_fu_267_p2 = statemt_load_reg_359 ^ word13_load_cast_fu_263_p1;
  assign tmp_42_fu_189_p2 = tmp_40_fu_176_p3 | 4'd1;
  assign tmp_43_fu_277_p2 = statemt_load_19_reg_364 ^ word13_load_1_cast_fu_273_p1;
  assign tmp_44_fu_243_p2 = tmp_40_reg_323 | 4'd2;
  assign tmp_45_fu_287_p2 = statemt_q0 ^ word13_load_2_cast_fu_283_p1;
  assign tmp_46_fu_253_p2 = tmp_40_reg_323 | 4'd3;
  assign tmp_47_fu_297_p2 = statemt_q1 ^ word13_load_3_cast_fu_293_p1;
  assign tmp_86_cast_fu_184_p1 = tmp_40_fu_176_p3;
  assign tmp_88_cast_fu_195_p1 = tmp_42_fu_189_p2;
  assign tmp_90_cast_fu_248_p1 = tmp_44_fu_243_p2;
  assign tmp_92_cast_fu_258_p1 = tmp_46_fu_253_p2;
  assign tmp_98_fu_210_p2 = 9'd120 + tmp_cast_cast_fu_207_p1;
  assign tmp_99_cast_fu_216_p1 = tmp_98_fu_210_p2;
  assign tmp_99_fu_221_p2 = 9'd240 + tmp_cast_cast_fu_207_p1;
  assign tmp_cast_cast1_fu_204_p1 = tmp_s_reg_316;
  assign tmp_cast_cast_fu_207_p1 = tmp_s_reg_316;
  assign tmp_cast_fu_200_p1 = tmp_s_reg_316;
  assign tmp_108_fu_139_p1_temp_79 = tmp_108_fu_139_p1 << 1'd2;
  assign tmp_fu_143_p3 = tmp_108_fu_139_p1_temp_79;
  assign tmp_s_fu_167_p2 = j_cast1_fu_151_p1 + tmp_reg_303;
  assign word13_address0 = tmp_cast_fu_200_p1;
  assign word13_address1 = tmp_99_cast_fu_216_p1;
  assign word13_address2 = tmp_100_cast_fu_227_p1;
  assign word13_address3 = tmp_101_cast_fu_238_p1;
  assign word13_load_1_cast_fu_273_p1 = word13_q1;
  assign word13_load_2_cast_fu_283_p1 = word13_q2;
  assign word13_load_3_cast_fu_293_p1 = word13_q3;
  assign word13_load_cast_fu_263_p1 = word13_q0;

  always @(posedge ap_clk) begin
    tmp_reg_303 <= tmp_reg_303 & 1'd252;
    tmp_40_reg_323 <= tmp_40_reg_323 & 1'd12;
    statemt_addr_reg_329 <= statemt_addr_reg_329 & 1'd28;
    statemt_addr_reg_329 <= statemt_addr_reg_329 & 4'd15;
    statemt_addr_36_reg_334 <= statemt_addr_36_reg_334 & 1'd29;
    statemt_addr_36_reg_334 <= statemt_addr_36_reg_334 & 4'd15;
    statemt_addr_37_reg_369 <= statemt_addr_37_reg_369 & 1'd30;
    statemt_addr_37_reg_369 <= statemt_addr_37_reg_369 & 4'd15;
    statemt_addr_38_reg_374 <= statemt_addr_38_reg_374 & 1'd31;
    statemt_addr_38_reg_374 <= statemt_addr_38_reg_374 & 4'd15;
  end


endmodule

