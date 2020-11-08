
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
  input [5:0] n;
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
  wire [8:0] word1_address0;
  reg word1_ce0;
  wire [7:0] word1_q0;
  wire [8:0] word1_address1;
  reg word1_ce1;
  wire [7:0] word1_q1;
  wire [8:0] word1_address2;
  reg word1_ce2;
  wire [7:0] word1_q2;
  wire [8:0] word1_address3;
  reg word1_ce3;
  wire [7:0] word1_q3;
  wire [5:0] tmp_fu_145_p2;
  reg [5:0] tmp_reg_303;
  wire [2:0] j_4_fu_161_p2;
  reg [2:0] j_4_reg_311;
  wire ap_CS_fsm_state2;
  wire [3:0] tmp_s_fu_171_p3;
  reg [3:0] tmp_s_reg_316;
  wire [0:0] exitcond_fu_155_p2;
  reg [4:0] statemt_addr_reg_322;
  wire [5:0] tmp_43_fu_184_p2;
  reg [5:0] tmp_43_reg_327;
  reg [4:0] statemt_addr_24_reg_334;
  reg [31:0] statemt_load_reg_339;
  wire ap_CS_fsm_state3;
  reg [31:0] statemt_load_19_reg_364;
  reg [4:0] statemt_addr_25_reg_369;
  reg [4:0] statemt_addr_26_reg_374;
  wire [31:0] tmp_51_fu_287_p2;
  reg [31:0] tmp_51_reg_379;
  wire ap_CS_fsm_state4;
  wire [31:0] tmp_54_fu_297_p2;
  reg [31:0] tmp_54_reg_384;
  reg [2:0] j_reg_134;
  wire ap_CS_fsm_state5;
  wire [63:0] tmp_42_fu_179_p1;
  wire [63:0] tmp_47_fu_195_p1;
  wire [63:0] tmp_44_fu_200_p1;
  wire [63:0] tmp_88_cast_fu_216_p1;
  wire [63:0] tmp_89_cast_fu_227_p1;
  wire [63:0] tmp_90_cast_fu_238_p1;
  wire [63:0] tmp_50_fu_248_p1;
  wire [63:0] tmp_53_fu_258_p1;
  wire [31:0] tmp_45_fu_267_p2;
  wire [31:0] tmp_48_fu_277_p2;
  wire [1:0] tmp_55_fu_167_p1;
  wire [5:0] j_cast1_fu_151_p1;
  wire [3:0] tmp_46_fu_189_p2;
  wire [7:0] tmp_44_cast_fu_207_p1;
  wire [7:0] tmp_68_fu_210_p2;
  wire [8:0] tmp_44_cast1_fu_204_p1;
  wire [8:0] tmp_69_fu_221_p2;
  wire [8:0] tmp_70_fu_232_p2;
  wire [3:0] tmp_49_fu_243_p2;
  wire [3:0] tmp_52_fu_253_p2;
  wire [31:0] word1_load_cast_fu_263_p1;
  wire [31:0] word1_load_1_cast_fu_273_p1;
  wire [31:0] word1_load_2_cast_fu_283_p1;
  wire [31:0] word1_load_3_cast_fu_293_p1;
  reg [4:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 5'd1;
  end


  AddRoundKey_word1
  #(
    .DataWidth(8),
    .AddressRange(480),
    .AddressWidth(9)
  )
  word1_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(word1_address0),
    .ce0(word1_ce0),
    .q0(word1_q0),
    .address1(word1_address1),
    .ce1(word1_ce1),
    .q1(word1_q1),
    .address2(word1_address2),
    .ce2(word1_ce2),
    .q2(word1_q2),
    .address3(word1_address3),
    .ce3(word1_ce3),
    .q3(word1_q3)
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
      j_reg_134 <= j_4_reg_311;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      j_reg_134 <= 3'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      j_4_reg_311 <= j_4_fu_161_p2;
    end 
  end

  assign tmp_47_fu_195_p1_temp_6 = tmp_47_fu_195_p1 & 63'd12;
  assign statemt_addr_24_reg_334_temp_7 = statemt_addr_24_reg_334 & 4'd19;
  assign tmp_47_fu_195_p1_temp_6_temp_8 = tmp_47_fu_195_p1_temp_6 | statemt_addr_24_reg_334_temp_7;
  assign tmp_42_fu_179_p1_temp_9 = tmp_42_fu_179_p1 & 63'd12;
  assign statemt_addr_reg_322_temp_10 = statemt_addr_reg_322 & 4'd19;
  assign tmp_42_fu_179_p1_temp_9_temp_11 = tmp_42_fu_179_p1_temp_9 | statemt_addr_reg_322_temp_10;
  assign tmp_s_fu_171_p3_temp_12 = tmp_s_fu_171_p3 & 3'd12;
  assign tmp_s_reg_316_temp_13 = tmp_s_reg_316 & 3'd3;
  assign tmp_s_fu_171_p3_temp_12_temp_14 = tmp_s_fu_171_p3_temp_12 | tmp_s_reg_316_temp_13;

  always @(posedge ap_clk) begin
    if((exitcond_fu_155_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      statemt_addr_24_reg_334 <= tmp_47_fu_195_p1_temp_6_temp_8;
      statemt_addr_reg_322 <= tmp_42_fu_179_p1_temp_9_temp_11;
      tmp_43_reg_327 <= tmp_43_fu_184_p2;
      tmp_s_reg_316 <= tmp_s_fu_171_p3_temp_12_temp_14;
    end 
  end

  assign tmp_50_fu_248_p1_temp_15 = tmp_50_fu_248_p1 & 63'd12;
  assign statemt_addr_25_reg_369_temp_16 = statemt_addr_25_reg_369 & 4'd19;
  assign tmp_50_fu_248_p1_temp_15_temp_17 = tmp_50_fu_248_p1_temp_15 | statemt_addr_25_reg_369_temp_16;
  assign tmp_53_fu_258_p1_temp_18 = tmp_53_fu_258_p1 & 63'd12;
  assign statemt_addr_26_reg_374_temp_19 = statemt_addr_26_reg_374 & 4'd19;
  assign tmp_53_fu_258_p1_temp_18_temp_20 = tmp_53_fu_258_p1_temp_18 | statemt_addr_26_reg_374_temp_19;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      statemt_addr_25_reg_369 <= tmp_50_fu_248_p1_temp_15_temp_17;
      statemt_addr_26_reg_374 <= tmp_53_fu_258_p1_temp_18_temp_20;
      statemt_load_19_reg_364 <= statemt_q1;
      statemt_load_reg_339 <= statemt_q0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      tmp_51_reg_379 <= tmp_51_fu_287_p2;
      tmp_54_reg_384 <= tmp_54_fu_297_p2;
    end 
  end

  assign tmp_fu_145_p2_temp_21 = tmp_fu_145_p2 & 5'd60;
  assign tmp_reg_303_temp_22 = tmp_reg_303 & 5'd3;
  assign tmp_fu_145_p2_temp_21_temp_23 = tmp_fu_145_p2_temp_21 | tmp_reg_303_temp_22;

  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      tmp_reg_303 <= tmp_fu_145_p2_temp_21_temp_23;
    end 
  end


  always @(*) begin
    if((exitcond_fu_155_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2) | (ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) begin
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
    if((exitcond_fu_155_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      statemt_address0 = statemt_addr_25_reg_369;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      statemt_address0 = statemt_addr_reg_322;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address0 = tmp_50_fu_248_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address0 = tmp_42_fu_179_p1;
    end else begin
      statemt_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      statemt_address1 = statemt_addr_26_reg_374;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      statemt_address1 = statemt_addr_24_reg_334;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address1 = tmp_53_fu_258_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address1 = tmp_47_fu_195_p1;
    end else begin
      statemt_address1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4)) begin
      statemt_ce0 = 1'b1;
    end else begin
      statemt_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4)) begin
      statemt_ce1 = 1'b1;
    end else begin
      statemt_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      statemt_d0 = tmp_51_reg_379;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      statemt_d0 = tmp_45_fu_267_p2;
    end else begin
      statemt_d0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      statemt_d1 = tmp_54_reg_384;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      statemt_d1 = tmp_48_fu_277_p2;
    end else begin
      statemt_d1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4)) begin
      statemt_we0 = 1'b1;
    end else begin
      statemt_we0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4)) begin
      statemt_we1 = 1'b1;
    end else begin
      statemt_we1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      word1_ce0 = 1'b1;
    end else begin
      word1_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      word1_ce1 = 1'b1;
    end else begin
      word1_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      word1_ce2 = 1'b1;
    end else begin
      word1_ce2 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      word1_ce3 = 1'b1;
    end else begin
      word1_ce3 = 1'b0;
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
        if((exitcond_fu_155_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
  assign exitcond_fu_155_p2 = (j_reg_134 == 3'd4)? 1'b1 : 1'b0;
  assign j_4_fu_161_p2 = j_reg_134 + 3'd1;
  assign j_cast1_fu_151_p1 = j_reg_134;
  assign tmp_42_fu_179_p1 = tmp_s_fu_171_p3;
  assign tmp_43_fu_184_p2 = j_cast1_fu_151_p1 + tmp_reg_303;
  assign tmp_44_cast1_fu_204_p1 = tmp_43_reg_327;
  assign tmp_44_cast_fu_207_p1 = tmp_43_reg_327;
  assign tmp_44_fu_200_p1 = tmp_43_reg_327;
  assign tmp_45_fu_267_p2 = word1_load_cast_fu_263_p1 ^ statemt_load_reg_339;
  assign tmp_46_fu_189_p2 = tmp_s_fu_171_p3 | 4'd1;
  assign tmp_47_fu_195_p1 = tmp_46_fu_189_p2;
  assign tmp_48_fu_277_p2 = word1_load_1_cast_fu_273_p1 ^ statemt_load_19_reg_364;
  assign tmp_49_fu_243_p2 = tmp_s_reg_316 | 4'd2;
  assign tmp_50_fu_248_p1 = tmp_49_fu_243_p2;
  assign tmp_51_fu_287_p2 = word1_load_2_cast_fu_283_p1 ^ statemt_q0;
  assign tmp_52_fu_253_p2 = tmp_s_reg_316 | 4'd3;
  assign tmp_53_fu_258_p1 = tmp_52_fu_253_p2;
  assign tmp_54_fu_297_p2 = word1_load_3_cast_fu_293_p1 ^ statemt_q1;
  assign tmp_55_fu_167_p1 = (j_reg_134 & 2'd3);
  assign tmp_68_fu_210_p2 = 8'd120 + tmp_44_cast_fu_207_p1;
  assign tmp_69_fu_221_p2 = 9'd240 + tmp_44_cast1_fu_204_p1;
  assign tmp_70_fu_232_p2 = $signed(9'd360) + $signed(tmp_44_cast1_fu_204_p1);
  assign tmp_88_cast_fu_216_p1 = tmp_68_fu_210_p2;
  assign tmp_89_cast_fu_227_p1 = tmp_69_fu_221_p2;
  assign tmp_90_cast_fu_238_p1 = tmp_70_fu_232_p2;
  assign tmp_fu_145_p2 = n << 6'd2;
  assign tmp_55_fu_167_p1_temp_24 = tmp_55_fu_167_p1 << 1'd2;
  assign tmp_s_fu_171_p3 = tmp_55_fu_167_p1_temp_24;
  assign word1_address0 = tmp_44_fu_200_p1;
  assign word1_address1 = tmp_88_cast_fu_216_p1;
  assign word1_address2 = tmp_89_cast_fu_227_p1;
  assign word1_address3 = tmp_90_cast_fu_238_p1;
  assign word1_load_1_cast_fu_273_p1 = word1_q1;
  assign word1_load_2_cast_fu_283_p1 = word1_q2;
  assign word1_load_3_cast_fu_293_p1 = word1_q3;
  assign word1_load_cast_fu_263_p1 = word1_q0;

  always @(posedge ap_clk) begin
    tmp_reg_303 <= tmp_reg_303 & 1'd60;
    tmp_s_reg_316 <= tmp_s_reg_316 & 1'd12;
    statemt_addr_reg_322 <= statemt_addr_reg_322 & 1'd28;
    statemt_addr_reg_322 <= statemt_addr_reg_322 & 4'd15;
    statemt_addr_24_reg_334 <= statemt_addr_24_reg_334 & 1'd29;
    statemt_addr_24_reg_334 <= statemt_addr_24_reg_334 & 4'd15;
    statemt_addr_25_reg_369 <= statemt_addr_25_reg_369 & 1'd30;
    statemt_addr_25_reg_369 <= statemt_addr_25_reg_369 & 4'd15;
    statemt_addr_26_reg_374 <= statemt_addr_26_reg_374 & 1'd31;
    statemt_addr_26_reg_374 <= statemt_addr_26_reg_374 & 4'd15;
  end


endmodule

