
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
  wire [5:0] shl_ln566_1_fu_163_p3;
  reg [5:0] shl_ln566_1_reg_285;
  wire [2:0] j_fu_181_p2;
  reg [2:0] j_reg_293;
  wire ap_CS_fsm_state2;
  wire [5:0] add_ln566_fu_187_p2;
  reg [5:0] add_ln566_reg_298;
  wire [0:0] icmp_ln563_fu_175_p2;
  wire [3:0] shl_ln_fu_216_p3;
  reg [3:0] shl_ln_reg_313;
  reg [4:0] statemt_addr_reg_319;
  reg [4:0] statemt_addr_26_reg_324;
  reg [4:0] statemt_addr_27_reg_339;
  reg [4:0] statemt_addr_28_reg_344;
  reg [2:0] j_0_reg_126;
  wire ap_CS_fsm_state5;
  wire [63:0] zext_ln566_1_fu_192_p1;
  wire [63:0] zext_ln567_1_fu_207_p1;
  wire [63:0] zext_ln566_fu_224_p1;
  wire [63:0] zext_ln567_fu_235_p1;
  wire [63:0] zext_ln568_1_fu_249_p1;
  wire [63:0] zext_ln569_1_fu_260_p1;
  wire [63:0] zext_ln568_fu_270_p1;
  wire [63:0] zext_ln569_fu_280_p1;
  wire [3:0] trunc_ln566_fu_159_p1;
  wire [5:0] zext_ln563_fu_171_p1;
  wire [7:0] zext_ln566_3_fu_197_p1;
  wire [7:0] add_ln567_fu_201_p2;
  wire [1:0] trunc_ln566_1_fu_212_p1;
  wire [3:0] or_ln567_fu_229_p2;
  wire [8:0] zext_ln566_2_fu_240_p1;
  wire [8:0] add_ln568_fu_243_p2;
  wire [8:0] add_ln569_fu_254_p2;
  wire [3:0] or_ln568_fu_265_p2;
  wire [3:0] or_ln569_fu_275_p2;
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
      j_0_reg_126 <= j_reg_293;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      j_0_reg_126 <= 3'd0;
    end 
  end

  assign shl_ln_fu_216_p3_temp_0 = shl_ln_fu_216_p3 & 3'd12;
  assign shl_ln_reg_313_temp_1 = shl_ln_reg_313 & 3'd3;
  assign shl_ln_fu_216_p3_temp_0_temp_2 = shl_ln_fu_216_p3_temp_0 | shl_ln_reg_313_temp_1;
  assign zext_ln567_fu_235_p1_temp_3 = zext_ln567_fu_235_p1 & 63'd12;
  assign statemt_addr_26_reg_324_temp_4 = statemt_addr_26_reg_324 & 4'd19;
  assign zext_ln567_fu_235_p1_temp_3_temp_5 = zext_ln567_fu_235_p1_temp_3 | statemt_addr_26_reg_324_temp_4;
  assign zext_ln566_fu_224_p1_temp_6 = zext_ln566_fu_224_p1 & 63'd12;
  assign statemt_addr_reg_319_temp_7 = statemt_addr_reg_319 & 4'd19;
  assign zext_ln566_fu_224_p1_temp_6_temp_8 = zext_ln566_fu_224_p1_temp_6 | statemt_addr_reg_319_temp_7;

  always @(posedge ap_clk) begin
    if((icmp_ln563_fu_175_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      add_ln566_reg_298 <= add_ln566_fu_187_p2;
      shl_ln_reg_313 <= shl_ln_fu_216_p3_temp_0_temp_2;
      statemt_addr_26_reg_324 <= zext_ln567_fu_235_p1_temp_3_temp_5;
      statemt_addr_reg_319 <= zext_ln566_fu_224_p1_temp_6_temp_8;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      j_reg_293 <= j_fu_181_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3)) begin
      reg_149 <= grp_fu_137_p2;
      reg_154 <= grp_fu_143_p2;
    end 
  end

  assign shl_ln566_1_fu_163_p3_temp_9 = shl_ln566_1_fu_163_p3 & 5'd60;
  assign shl_ln566_1_reg_285_temp_10 = shl_ln566_1_reg_285 & 5'd3;
  assign shl_ln566_1_fu_163_p3_temp_9_temp_11 = shl_ln566_1_fu_163_p3_temp_9 | shl_ln566_1_reg_285_temp_10;

  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      shl_ln566_1_reg_285 <= shl_ln566_1_fu_163_p3_temp_9_temp_11;
    end 
  end

  assign zext_ln568_fu_270_p1_temp_12 = zext_ln568_fu_270_p1 & 63'd12;
  assign statemt_addr_27_reg_339_temp_13 = statemt_addr_27_reg_339 & 4'd19;
  assign zext_ln568_fu_270_p1_temp_12_temp_14 = zext_ln568_fu_270_p1_temp_12 | statemt_addr_27_reg_339_temp_13;
  assign zext_ln569_fu_280_p1_temp_15 = zext_ln569_fu_280_p1 & 63'd12;
  assign statemt_addr_28_reg_344_temp_16 = statemt_addr_28_reg_344 & 4'd19;
  assign zext_ln569_fu_280_p1_temp_15_temp_17 = zext_ln569_fu_280_p1_temp_15 | statemt_addr_28_reg_344_temp_16;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      statemt_addr_27_reg_339 <= zext_ln568_fu_270_p1_temp_12_temp_14;
      statemt_addr_28_reg_344 <= zext_ln569_fu_280_p1_temp_15_temp_17;
    end 
  end


  always @(*) begin
    if((icmp_ln563_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2) | (ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) begin
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
    if((icmp_ln563_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      statemt_address0 = statemt_addr_27_reg_339;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      statemt_address0 = statemt_addr_reg_319;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address0 = zext_ln568_fu_270_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address0 = zext_ln566_fu_224_p1;
    end else begin
      statemt_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      statemt_address1 = statemt_addr_28_reg_344;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      statemt_address1 = statemt_addr_26_reg_324;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address1 = zext_ln569_fu_280_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address1 = zext_ln567_fu_235_p1;
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
      word_address0 = zext_ln568_1_fu_249_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      word_address0 = zext_ln566_1_fu_192_p1;
    end else begin
      word_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      word_address1 = zext_ln569_1_fu_260_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      word_address1 = zext_ln567_1_fu_207_p1;
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
        if((icmp_ln563_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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

  assign add_ln566_fu_187_p2 = zext_ln563_fu_171_p1 + shl_ln566_1_reg_285;
  assign add_ln567_fu_201_p2 = 8'd120 + zext_ln566_3_fu_197_p1;
  assign add_ln568_fu_243_p2 = 9'd240 + zext_ln566_2_fu_240_p1;
  assign add_ln569_fu_254_p2 = $signed(9'd360) + $signed(zext_ln566_2_fu_240_p1);
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign grp_fu_137_p2 = word_q0 ^ statemt_q0;
  assign grp_fu_143_p2 = word_q1 ^ statemt_q1;
  assign icmp_ln563_fu_175_p2 = (j_0_reg_126 == 3'd4)? 1'b1 : 1'b0;
  assign j_fu_181_p2 = j_0_reg_126 + 3'd1;
  assign or_ln567_fu_229_p2 = shl_ln_fu_216_p3 | 4'd1;
  assign or_ln568_fu_265_p2 = shl_ln_reg_313 | 4'd2;
  assign or_ln569_fu_275_p2 = shl_ln_reg_313 | 4'd3;
  assign trunc_ln566_fu_159_p1_temp_18 = trunc_ln566_fu_159_p1 << 1'd2;
  assign shl_ln566_1_fu_163_p3 = trunc_ln566_fu_159_p1_temp_18;
  assign trunc_ln566_1_fu_212_p1_temp_19 = trunc_ln566_1_fu_212_p1 << 1'd2;
  assign shl_ln_fu_216_p3 = trunc_ln566_1_fu_212_p1_temp_19;
  assign statemt_d0 = reg_149;
  assign statemt_d1 = reg_154;
  assign trunc_ln566_1_fu_212_p1 = (j_0_reg_126 & 2'd3);
  assign trunc_ln566_fu_159_p1 = (n & 4'd15);
  assign zext_ln563_fu_171_p1 = j_0_reg_126;
  assign zext_ln566_1_fu_192_p1 = add_ln566_fu_187_p2;
  assign zext_ln566_2_fu_240_p1 = add_ln566_reg_298;
  assign zext_ln566_3_fu_197_p1 = add_ln566_fu_187_p2;
  assign zext_ln566_fu_224_p1 = shl_ln_fu_216_p3;
  assign zext_ln567_1_fu_207_p1 = add_ln567_fu_201_p2;
  assign zext_ln567_fu_235_p1 = or_ln567_fu_229_p2;
  assign zext_ln568_1_fu_249_p1 = add_ln568_fu_243_p2;
  assign zext_ln568_fu_270_p1 = or_ln568_fu_265_p2;
  assign zext_ln569_1_fu_260_p1 = add_ln569_fu_254_p2;
  assign zext_ln569_fu_280_p1 = or_ln569_fu_275_p2;

  always @(posedge ap_clk) begin
    shl_ln566_1_reg_285 <= shl_ln566_1_reg_285 & 1'd60;
    shl_ln_reg_313 <= shl_ln_reg_313 & 1'd12;
    statemt_addr_reg_319 <= statemt_addr_reg_319 & 1'd28;
    statemt_addr_reg_319 <= statemt_addr_reg_319 & 4'd15;
    statemt_addr_26_reg_324 <= statemt_addr_26_reg_324 & 1'd29;
    statemt_addr_26_reg_324 <= statemt_addr_26_reg_324 & 4'd15;
    statemt_addr_27_reg_339 <= statemt_addr_27_reg_339 & 1'd30;
    statemt_addr_27_reg_339 <= statemt_addr_27_reg_339 & 4'd15;
    statemt_addr_28_reg_344 <= statemt_addr_28_reg_344 & 1'd31;
    statemt_addr_28_reg_344 <= statemt_addr_28_reg_344 & 4'd15;
  end


endmodule

