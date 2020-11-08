
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
  n,
  word_address0,
  word_ce0,
  word_q0,
  word_address1,
  word_ce1,
  word_q1
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
  input [4:0] n;
  output [8:0] word_address0;
  output word_ce0;
  input [31:0] word_q0;
  output [8:0] word_address1;
  output word_ce1;
  input [31:0] word_q1;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg [4:0] statemt_address0;
  reg statemt_ce0;
  reg statemt_we0;
  reg [4:0] statemt_address1;
  reg statemt_ce1;
  reg statemt_we1;
  reg [8:0] word_address0;
  reg word_ce0;
  reg [8:0] word_address1;
  reg word_ce1;
  reg [4:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [31:0] grp_fu_137_p2;
  reg [31:0] reg_149;
  wire ap_CS_fsm_state3;
  wire ap_CS_fsm_state4;
  wire [31:0] grp_fu_143_p2;
  reg [31:0] reg_154;
  wire [5:0] tmp_fu_163_p3;
  reg [5:0] tmp_reg_285;
  wire [2:0] j_4_fu_181_p2;
  reg [2:0] j_4_reg_293;
  wire ap_CS_fsm_state2;
  wire [5:0] tmp_s_fu_187_p2;
  reg [5:0] tmp_s_reg_298;
  wire [0:0] exitcond_fu_175_p2;
  wire [3:0] tmp_104_fu_216_p3;
  reg [3:0] tmp_104_reg_313;
  reg [4:0] statemt_addr_reg_319;
  reg [4:0] statemt_addr_28_reg_324;
  reg [4:0] statemt_addr_29_reg_339;
  reg [4:0] statemt_addr_30_reg_344;
  reg [2:0] j_reg_126;
  wire ap_CS_fsm_state5;
  wire [63:0] tmp_101_fu_192_p1;
  wire [63:0] tmp_100_cast_fu_207_p1;
  wire [63:0] tmp_105_fu_224_p1;
  wire [63:0] tmp_108_fu_235_p1;
  wire [63:0] tmp_102_cast_fu_249_p1;
  wire [63:0] tmp_103_cast_fu_260_p1;
  wire [63:0] tmp_111_fu_270_p1;
  wire [63:0] tmp_114_fu_280_p1;
  wire [3:0] tmp_96_fu_159_p1;
  wire [5:0] j_cast1_fu_171_p1;
  wire [7:0] tmp_101_cast_fu_197_p1;
  wire [7:0] tmp_100_fu_201_p2;
  wire [1:0] tmp_97_fu_212_p1;
  wire [3:0] tmp_107_fu_229_p2;
  wire [8:0] tmp_101_cast1_fu_240_p1;
  wire [8:0] tmp_102_fu_243_p2;
  wire [8:0] tmp_103_fu_254_p2;
  wire [3:0] tmp_110_fu_265_p2;
  wire [3:0] tmp_113_fu_275_p2;
  reg [4:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 5'd1;
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      j_reg_126 <= j_4_reg_293;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      j_reg_126 <= 3'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      j_4_reg_293 <= j_4_fu_181_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3)) begin
      reg_149 <= grp_fu_137_p2;
      reg_154 <= grp_fu_143_p2;
    end 
  end

  assign tmp_108_fu_235_p1_temp_6 = tmp_108_fu_235_p1 & 63'd12;
  assign statemt_addr_28_reg_324_temp_7 = statemt_addr_28_reg_324 & 4'd19;
  assign tmp_108_fu_235_p1_temp_6_temp_8 = tmp_108_fu_235_p1_temp_6 | statemt_addr_28_reg_324_temp_7;
  assign tmp_105_fu_224_p1_temp_9 = tmp_105_fu_224_p1 & 63'd12;
  assign statemt_addr_reg_319_temp_10 = statemt_addr_reg_319 & 4'd19;
  assign tmp_105_fu_224_p1_temp_9_temp_11 = tmp_105_fu_224_p1_temp_9 | statemt_addr_reg_319_temp_10;
  assign tmp_104_fu_216_p3_temp_12 = tmp_104_fu_216_p3 & 3'd12;
  assign tmp_104_reg_313_temp_13 = tmp_104_reg_313 & 3'd3;
  assign tmp_104_fu_216_p3_temp_12_temp_14 = tmp_104_fu_216_p3_temp_12 | tmp_104_reg_313_temp_13;

  always @(posedge ap_clk) begin
    if((exitcond_fu_175_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      statemt_addr_28_reg_324 <= tmp_108_fu_235_p1_temp_6_temp_8;
      statemt_addr_reg_319 <= tmp_105_fu_224_p1_temp_9_temp_11;
      tmp_104_reg_313 <= tmp_104_fu_216_p3_temp_12_temp_14;
      tmp_s_reg_298 <= tmp_s_fu_187_p2;
    end 
  end

  assign tmp_111_fu_270_p1_temp_15 = tmp_111_fu_270_p1 & 63'd12;
  assign statemt_addr_29_reg_339_temp_16 = statemt_addr_29_reg_339 & 4'd19;
  assign tmp_111_fu_270_p1_temp_15_temp_17 = tmp_111_fu_270_p1_temp_15 | statemt_addr_29_reg_339_temp_16;
  assign tmp_114_fu_280_p1_temp_18 = tmp_114_fu_280_p1 & 63'd12;
  assign statemt_addr_30_reg_344_temp_19 = statemt_addr_30_reg_344 & 4'd19;
  assign tmp_114_fu_280_p1_temp_18_temp_20 = tmp_114_fu_280_p1_temp_18 | statemt_addr_30_reg_344_temp_19;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      statemt_addr_29_reg_339 <= tmp_111_fu_270_p1_temp_15_temp_17;
      statemt_addr_30_reg_344 <= tmp_114_fu_280_p1_temp_18_temp_20;
    end 
  end

  assign tmp_fu_163_p3_temp_21 = tmp_fu_163_p3 & 5'd60;
  assign tmp_reg_285_temp_22 = tmp_reg_285 & 5'd3;
  assign tmp_fu_163_p3_temp_21_temp_23 = tmp_fu_163_p3_temp_21 | tmp_reg_285_temp_22;

  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      tmp_reg_285 <= tmp_fu_163_p3_temp_21_temp_23;
    end 
  end


  always @(*) begin
    if((exitcond_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2) | (ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) begin
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
    if((exitcond_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      statemt_address0 = statemt_addr_29_reg_339;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      statemt_address0 = statemt_addr_reg_319;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address0 = tmp_111_fu_270_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address0 = tmp_105_fu_224_p1;
    end else begin
      statemt_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      statemt_address1 = statemt_addr_30_reg_344;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      statemt_address1 = statemt_addr_28_reg_324;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address1 = tmp_114_fu_280_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address1 = tmp_108_fu_235_p1;
    end else begin
      statemt_address1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state5)) begin
      statemt_ce0 = 1'b1;
    end else begin
      statemt_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state5)) begin
      statemt_ce1 = 1'b1;
    end else begin
      statemt_ce1 = 1'b0;
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
      word_address0 = tmp_102_cast_fu_249_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      word_address0 = tmp_101_fu_192_p1;
    end else begin
      word_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      word_address1 = tmp_103_cast_fu_260_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      word_address1 = tmp_100_cast_fu_207_p1;
    end else begin
      word_address1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state3)) begin
      word_ce0 = 1'b1;
    end else begin
      word_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state3)) begin
      word_ce1 = 1'b1;
    end else begin
      word_ce1 = 1'b0;
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
        if((exitcond_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
  assign exitcond_fu_175_p2 = (j_reg_126 == 3'd4)? 1'b1 : 1'b0;
  assign grp_fu_137_p2 = word_q0 ^ statemt_q0;
  assign grp_fu_143_p2 = word_q1 ^ statemt_q1;
  assign j_4_fu_181_p2 = j_reg_126 + 3'd1;
  assign j_cast1_fu_171_p1 = j_reg_126;
  assign statemt_d0 = reg_149;
  assign statemt_d1 = reg_154;
  assign tmp_100_cast_fu_207_p1 = tmp_100_fu_201_p2;
  assign tmp_100_fu_201_p2 = 8'd120 + tmp_101_cast_fu_197_p1;
  assign tmp_101_cast1_fu_240_p1 = tmp_s_reg_298;
  assign tmp_101_cast_fu_197_p1 = tmp_s_fu_187_p2;
  assign tmp_101_fu_192_p1 = tmp_s_fu_187_p2;
  assign tmp_102_cast_fu_249_p1 = tmp_102_fu_243_p2;
  assign tmp_102_fu_243_p2 = 9'd240 + tmp_101_cast1_fu_240_p1;
  assign tmp_103_cast_fu_260_p1 = tmp_103_fu_254_p2;
  assign tmp_103_fu_254_p2 = $signed(9'd360) + $signed(tmp_101_cast1_fu_240_p1);
  assign tmp_97_fu_212_p1_temp_24 = tmp_97_fu_212_p1 << 1'd2;
  assign tmp_104_fu_216_p3 = tmp_97_fu_212_p1_temp_24;
  assign tmp_105_fu_224_p1 = tmp_104_fu_216_p3;
  assign tmp_107_fu_229_p2 = tmp_104_fu_216_p3 | 4'd1;
  assign tmp_108_fu_235_p1 = tmp_107_fu_229_p2;
  assign tmp_110_fu_265_p2 = tmp_104_reg_313 | 4'd2;
  assign tmp_111_fu_270_p1 = tmp_110_fu_265_p2;
  assign tmp_113_fu_275_p2 = tmp_104_reg_313 | 4'd3;
  assign tmp_114_fu_280_p1 = tmp_113_fu_275_p2;
  assign tmp_96_fu_159_p1 = (n & 4'd15);
  assign tmp_97_fu_212_p1 = (j_reg_126 & 2'd3);
  assign tmp_96_fu_159_p1_temp_25 = tmp_96_fu_159_p1 << 1'd2;
  assign tmp_fu_163_p3 = tmp_96_fu_159_p1_temp_25;
  assign tmp_s_fu_187_p2 = j_cast1_fu_171_p1 + tmp_reg_285;

  always @(posedge ap_clk) begin
    tmp_reg_285 <= tmp_reg_285 & 1'd60;
    tmp_104_reg_313 <= tmp_104_reg_313 & 1'd12;
    statemt_addr_reg_319 <= statemt_addr_reg_319 & 1'd28;
    statemt_addr_reg_319 <= statemt_addr_reg_319 & 4'd15;
    statemt_addr_28_reg_324 <= statemt_addr_28_reg_324 & 1'd29;
    statemt_addr_28_reg_324 <= statemt_addr_28_reg_324 & 4'd15;
    statemt_addr_29_reg_339 <= statemt_addr_29_reg_339 & 1'd30;
    statemt_addr_29_reg_339 <= statemt_addr_29_reg_339 & 4'd15;
    statemt_addr_30_reg_344 <= statemt_addr_30_reg_344 & 1'd31;
    statemt_addr_30_reg_344 <= statemt_addr_30_reg_344 & 4'd15;
  end


endmodule

