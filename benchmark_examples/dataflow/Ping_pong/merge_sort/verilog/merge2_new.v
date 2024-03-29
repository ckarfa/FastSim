
module merge2
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_continue,
  ap_idle,
  ap_ready,
  input1_address0,
  input1_ce0,
  input1_q0,
  input1_address1,
  input1_ce1,
  input1_q1,
  input2_address0,
  input2_ce0,
  input2_we0,
  input2_d0
);

  parameter ap_ST_fsm_state1 = 3'd1;
  parameter ap_ST_fsm_state2 = 3'd2;
  parameter ap_ST_fsm_state3 = 3'd4;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  input ap_continue;
  output ap_idle;
  output ap_ready;
  output [3:0] input1_address0;
  output input1_ce0;
  input [31:0] input1_q0;
  output [3:0] input1_address1;
  output input1_ce1;
  input [31:0] input1_q1;
  output [3:0] input2_address0;
  output input2_ce0;
  output input2_we0;
  output [31:0] input2_d0;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg input1_ce0;
  reg input1_ce1;
  reg [3:0] input2_address0;
  reg input2_ce0;
  reg input2_we0;
  reg [31:0] input2_d0;
  reg ap_done_reg;
  reg [2:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [4:0] i_fu_167_p2;
  reg [4:0] i_reg_359;
  wire ap_CS_fsm_state2;
  wire [0:0] icmp_ln47_fu_161_p2;
  wire [31:0] f2_9_fu_324_p3;
  wire ap_CS_fsm_state3;
  wire [31:0] f1_6_fu_332_p3;
  wire [31:0] f2_10_fu_340_p3;
  wire [31:0] i3_6_fu_348_p3;
  reg signed [31:0] f2_0_reg_81;
  reg ap_block_state1;
  reg signed [31:0] f1_0_reg_93;
  reg [31:0] i2_1_reg_105;
  reg [31:0] f1_5_reg_117;
  reg [4:0] i_0_reg_129;
  reg [31:0] ap_phi_mux_f2_1_phi_fu_144_p4;
  wire [0:0] or_ln50_fu_216_p2;
  wire [0:0] icmp_ln49_fu_183_p2;
  wire [31:0] f2_fu_227_p2;
  wire [31:0] f1_fu_239_p2;
  reg [31:0] ap_phi_mux_f1_1_phi_fu_154_p4;
  wire signed [63:0] sext_ln48_fu_173_p1;
  wire signed [63:0] sext_ln49_fu_178_p1;
  wire [63:0] zext_ln55_fu_222_p1;
  wire [63:0] zext_ln51_fu_234_p1;
  wire [31:0] t2_fu_189_p3;
  wire [0:0] icmp_ln50_fu_198_p2;
  wire [0:0] xor_ln50_fu_204_p2;
  wire [0:0] icmp_ln50_1_fu_210_p2;
  wire [0:0] icmp_ln58_fu_246_p2;
  wire [0:0] icmp_ln58_1_fu_252_p2;
  wire [31:0] i2_fu_264_p2;
  wire [27:0] tmp_fu_276_p4;
  wire [0:0] icmp_ln62_fu_286_p2;
  wire [31:0] i3_fu_270_p2;
  wire [27:0] tmp_3_fu_300_p4;
  wire [0:0] icmp_ln63_fu_310_p2;
  wire [0:0] and_ln58_fu_258_p2;
  wire [31:0] f2_8_fu_292_p3;
  wire [31:0] i3_5_fu_316_p3;
  reg [2:0] ap_NS_fsm;

  initial begin
    #0 ap_done_reg = 1'b0;
    #0 ap_CS_fsm = 3'd1;
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_done_reg <= 1'b0;
    end else
      if(ap_continue == 1'b1) begin
        ap_done_reg <= 1'b0;
      end else if((icmp_ln47_fu_161_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
        ap_done_reg <= 1'b1;
      end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      f1_0_reg_93 <= f1_6_fu_332_p3;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      f1_0_reg_93 <= 32'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      f1_5_reg_117 <= i3_6_fu_348_p3;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      f1_5_reg_117 <= 32'd4;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      f2_0_reg_81 <= f2_9_fu_324_p3;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      f2_0_reg_81 <= 32'd2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      i2_1_reg_105 <= f2_10_fu_340_p3;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      i2_1_reg_105 <= 32'd2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      i_0_reg_129 <= i_reg_359;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      i_0_reg_129 <= 5'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      i_reg_359 <= i_fu_167_p2;
    end 
  end


  always @(*) begin
    if((icmp_ln47_fu_161_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      ap_done = 1'b1;
    end else begin
      ap_done = ap_done_reg;
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
      if((or_ln50_fu_216_p2 == 1'd1) & (icmp_ln49_fu_183_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3) ) begin
        ap_phi_mux_f1_1_phi_fu_154_p4 = f1_0_reg_93;
      end else if(((icmp_ln49_fu_183_p2 == 1'd1) | (or_ln50_fu_216_p2 == 1'd0)) & (1'b1 == ap_CS_fsm_state3) ) begin
        ap_phi_mux_f1_1_phi_fu_154_p4 = f1_fu_239_p2;
      end else if(1'b1 == ap_CS_fsm_state3) begin
        ap_phi_mux_f1_1_phi_fu_154_p4 = 'bx;
      end else begin
      ap_phi_mux_f1_1_phi_fu_154_p4 = 'bx;
    end
  end


  always @(*) begin
      if((or_ln50_fu_216_p2 == 1'd1) & (icmp_ln49_fu_183_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
        ap_phi_mux_f2_1_phi_fu_144_p4 = f2_fu_227_p2;
      end else if(((icmp_ln49_fu_183_p2 == 1'd1) | (or_ln50_fu_216_p2 == 1'd0)) & (1'b1 == ap_CS_fsm_state3)) begin
        ap_phi_mux_f2_1_phi_fu_144_p4 = f2_0_reg_81;
      end else if(1'b1 == ap_CS_fsm_state3) begin
        ap_phi_mux_f2_1_phi_fu_144_p4 = 'bx;
      end else begin
      ap_phi_mux_f2_1_phi_fu_144_p4 = 'bx;
    end
  end


  always @(*) begin
    if((icmp_ln47_fu_161_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      input1_ce0 = 1'b1;
    end else begin
      input1_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      input1_ce1 = 1'b1;
    end else begin
      input1_ce1 = 1'b0;
    end
  end


  always @(*) begin
      if(((icmp_ln49_fu_183_p2 == 1'd1) | (or_ln50_fu_216_p2 == 1'd0)) & (1'b1 == ap_CS_fsm_state3)) begin
        input2_address0 = zext_ln51_fu_234_p1;
      end else if((or_ln50_fu_216_p2 == 1'd1) & (icmp_ln49_fu_183_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
        input2_address0 = zext_ln55_fu_222_p1;
      end else if(1'b1 == ap_CS_fsm_state3) begin
        input2_address0 = 'bx;
      end else begin
      input2_address0 = 'bx;
    end
  end


  always @(*) begin
    if((or_ln50_fu_216_p2 == 1'd1) & (icmp_ln49_fu_183_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state3) & ((icmp_ln49_fu_183_p2 == 1'd1) | (or_ln50_fu_216_p2 == 1'd0))) begin
      input2_ce0 = 1'b1;
    end else begin
      input2_ce0 = 1'b0;
    end
  end


  always @(*) begin
      if(((icmp_ln49_fu_183_p2 == 1'd1) | (or_ln50_fu_216_p2 == 1'd0)) & (1'b1 == ap_CS_fsm_state3)) begin
        input2_d0 = input1_q0;
      end else if((or_ln50_fu_216_p2 == 1'd1) & (icmp_ln49_fu_183_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
        input2_d0 = t2_fu_189_p3;
      end else if(1'b1 == ap_CS_fsm_state3) begin
        input2_d0 = 'bx;
      end else begin
      input2_d0 = 'bx;
    end
  end


  always @(*) begin
    if((or_ln50_fu_216_p2 == 1'd1) & (icmp_ln49_fu_183_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state3) & ((icmp_ln49_fu_183_p2 == 1'd1) | (or_ln50_fu_216_p2 == 1'd0))) begin
      input2_we0 = 1'b1;
    end else begin
      input2_we0 = 1'b0;
    end
  end


  always @(*) begin
    case(ap_CS_fsm)
      ap_ST_fsm_state1: begin
        if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end
      end
      ap_ST_fsm_state2: begin
        if((icmp_ln47_fu_161_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        ap_NS_fsm = ap_ST_fsm_state2;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign and_ln58_fu_258_p2 = icmp_ln58_fu_246_p2 & icmp_ln58_1_fu_252_p2;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

  always @(*) begin
    ap_block_state1 = (ap_start == 1'b0) | (ap_done_reg == 1'b1);
  end

  assign and_ln58_fu_258_p2_temp_22 = and_ln58_fu_258_p2 & 31'd1;
  assign f1_6_fu_332_p3 = (and_ln58_fu_258_p2_temp_22 === 1'b1)? f1_5_reg_117 : ap_phi_mux_f1_1_phi_fu_154_p4;
  assign f1_fu_239_p2 = $signed(f1_0_reg_93) + $signed(32'd1);
  assign and_ln58_fu_258_p2_temp_23 = and_ln58_fu_258_p2 & 31'd1;
  assign f2_10_fu_340_p3 = (and_ln58_fu_258_p2_temp_23 === 1'b1)? f2_8_fu_292_p3 : i2_1_reg_105;
  assign icmp_ln62_fu_286_p2_temp_24 = icmp_ln62_fu_286_p2 & 31'd1;
  assign f2_8_fu_292_p3 = (icmp_ln62_fu_286_p2_temp_24 === 1'b1)? i2_fu_264_p2 : 32'd16;
  assign and_ln58_fu_258_p2_temp_25 = and_ln58_fu_258_p2 & 31'd1;
  assign f2_9_fu_324_p3 = (and_ln58_fu_258_p2_temp_25 === 1'b1)? f2_8_fu_292_p3 : ap_phi_mux_f2_1_phi_fu_144_p4;
  assign f2_fu_227_p2 = $signed(f2_0_reg_81) + $signed(32'd1);
  assign i2_fu_264_p2 = i2_1_reg_105 + 32'd4;
  assign icmp_ln63_fu_310_p2_temp_26 = icmp_ln63_fu_310_p2 & 31'd1;
  assign i3_5_fu_316_p3 = (icmp_ln63_fu_310_p2_temp_26 === 1'b1)? i3_fu_270_p2 : 32'd16;
  assign and_ln58_fu_258_p2_temp_27 = and_ln58_fu_258_p2 & 31'd1;
  assign i3_6_fu_348_p3 = (and_ln58_fu_258_p2_temp_27 === 1'b1)? i3_5_fu_316_p3 : f1_5_reg_117;
  assign i3_fu_270_p2 = f1_5_reg_117 + 32'd4;
  assign i_fu_167_p2 = i_0_reg_129 + 5'd1;
  assign icmp_ln47_fu_161_p2 = (i_0_reg_129 == 5'd16)? 1'b1 : 1'b0;
  assign icmp_ln49_fu_183_p2 = (f2_0_reg_81 == f1_5_reg_117)? 1'b1 : 1'b0;
  assign icmp_ln50_1_fu_210_p2 = ($signed(input1_q0) > $signed(t2_fu_189_p3))? 1'b1 : 1'b0;
  assign icmp_ln50_fu_198_p2 = ($signed(f1_0_reg_93) < $signed(i2_1_reg_105))? 1'b1 : 1'b0;
  assign icmp_ln58_1_fu_252_p2 = (ap_phi_mux_f2_1_phi_fu_144_p4 == f1_5_reg_117)? 1'b1 : 1'b0;
  assign icmp_ln58_fu_246_p2 = (ap_phi_mux_f1_1_phi_fu_154_p4 == i2_1_reg_105)? 1'b1 : 1'b0;
  assign icmp_ln62_fu_286_p2 = ($signed(tmp_fu_276_p4) < $signed(28'd1))? 1'b1 : 1'b0;
  assign icmp_ln63_fu_310_p2 = ($signed(tmp_3_fu_300_p4) < $signed(28'd1))? 1'b1 : 1'b0;
  assign input1_address0 = sext_ln48_fu_173_p1;
  assign input1_address1 = sext_ln49_fu_178_p1;
  assign or_ln50_fu_216_p2 = xor_ln50_fu_204_p2 | icmp_ln50_1_fu_210_p2;
  assign sext_ln48_fu_173_p1 = f1_0_reg_93;
  assign sext_ln49_fu_178_p1 = f2_0_reg_81;
  assign icmp_ln49_fu_183_p2_temp_28 = icmp_ln49_fu_183_p2 & 31'd1;
  assign t2_fu_189_p3 = (icmp_ln49_fu_183_p2_temp_28 === 1'b1)? 32'd0 : input1_q1;
  assign i3_fu_270_p2_temp_29 = i3_fu_270_p2 >> 1'd4;
  assign i3_fu_270_p2_temp_30 = i3_fu_270_p2_temp_29 & 28'd268435455;
  assign tmp_3_fu_300_p4 = i3_fu_270_p2_temp_30;
  assign i2_fu_264_p2_temp_31 = i2_fu_264_p2 >> 1'd4;
  assign i2_fu_264_p2_temp_32 = i2_fu_264_p2_temp_31 & 28'd268435455;
  assign tmp_fu_276_p4 = i2_fu_264_p2_temp_32;
  assign xor_ln50_fu_204_p2 = icmp_ln50_fu_198_p2 ^ 1'd1;
  assign zext_ln51_fu_234_p1 = i_0_reg_129;
  assign zext_ln55_fu_222_p1 = i_0_reg_129;

endmodule

