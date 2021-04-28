
module bit_reverse
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_continue,
  ap_idle,
  ap_ready,
  X_R_address0,
  X_R_ce0,
  X_R_q0,
  X_I_address0,
  X_I_ce0,
  X_I_q0,
  OUT_R_address0,
  OUT_R_ce0,
  OUT_R_we0,
  OUT_R_d0,
  OUT_I_address0,
  OUT_I_ce0,
  OUT_I_we0,
  OUT_I_d0
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
  input ap_continue;
  output ap_idle;
  output ap_ready;
  output [9:0] X_R_address0;
  output X_R_ce0;
  input [31:0] X_R_q0;
  output [9:0] X_I_address0;
  output X_I_ce0;
  input [31:0] X_I_q0;
  output [9:0] OUT_R_address0;
  output OUT_R_ce0;
  output OUT_R_we0;
  output [31:0] OUT_R_d0;
  output [9:0] OUT_I_address0;
  output OUT_I_ce0;
  output OUT_I_we0;
  output [31:0] OUT_I_d0;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg [9:0] X_R_address0;
  reg X_R_ce0;
  reg [9:0] X_I_address0;
  reg X_I_ce0;
  reg [9:0] OUT_R_address0;
  reg OUT_R_ce0;
  reg OUT_R_we0;
  reg [9:0] OUT_I_address0;
  reg OUT_I_ce0;
  reg OUT_I_we0;
  reg ap_done_reg;
  reg [4:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [9:0] trunc_ln4_fu_167_p1;
  wire ap_CS_fsm_state2;
  wire [31:0] zext_ln4_fu_171_p1;
  reg [31:0] zext_ln4_reg_253;
  wire [10:0] i_4_fu_181_p2;
  reg [10:0] i_4_reg_261;
  wire [3:0] i_fu_193_p2;
  wire ap_CS_fsm_state3;
  wire [31:0] rev_fu_207_p3;
  wire [0:0] icmp_ln6_fu_187_p2;
  wire [9:0] zext_ln8_fu_225_p1;
  wire [0:0] icmp_ln21_fu_229_p2;
  reg [0:0] icmp_ln21_reg_284;
  wire [63:0] zext_ln24_fu_234_p1;
  reg [63:0] zext_ln24_reg_288;
  wire ap_CS_fsm_state4;
  reg [10:0] input_assign_reg_124;
  reg ap_block_state1;
  wire ap_CS_fsm_state5;
  reg [31:0] reversed_reg_136;
  wire [0:0] icmp_ln19_fu_175_p2;
  reg [3:0] i_0_i_reg_147;
  reg [9:0] p_0_i_reg_158;
  wire [63:0] zext_ln23_fu_240_p1;
  wire [30:0] trunc_ln7_fu_199_p1;
  wire [0:0] trunc_ln6_fu_203_p1;
  wire [8:0] input_assign_1_fu_215_p4;
  reg [4:0] ap_NS_fsm;

  initial begin
    #0 ap_done_reg = 1'b0;
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
    if(ap_rst == 1'b1) begin
      ap_done_reg <= 1'b0;
    end else
      if(ap_continue == 1'b1) begin
        ap_done_reg <= 1'b0;
      end else if((icmp_ln19_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
        ap_done_reg <= 1'b1;
      end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln19_fu_175_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      i_0_i_reg_147 <= 4'd0;
    end else if((icmp_ln6_fu_187_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
      i_0_i_reg_147 <= i_fu_193_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      input_assign_reg_124 <= i_4_reg_261;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      input_assign_reg_124 <= 11'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln19_fu_175_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      p_0_i_reg_158 <= trunc_ln4_fu_167_p1;
    end else if((icmp_ln6_fu_187_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
      p_0_i_reg_158 <= zext_ln8_fu_225_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln19_fu_175_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      reversed_reg_136 <= 32'd0;
    end else if((icmp_ln6_fu_187_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
      reversed_reg_136 <= rev_fu_207_p3;
    end 
  end

  assign zext_ln4_fu_171_p1_temp_9 = zext_ln4_fu_171_p1 & 11'd2047;
  assign zext_ln4_reg_253_temp_10 = zext_ln4_reg_253 & 11'd4294965248;
  assign zext_ln4_fu_171_p1_temp_9_temp_11 = zext_ln4_fu_171_p1_temp_9 | zext_ln4_reg_253_temp_10;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      i_4_reg_261 <= i_4_fu_181_p2;
      zext_ln4_reg_253 <= zext_ln4_fu_171_p1_temp_9_temp_11;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln6_fu_187_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3)) begin
      icmp_ln21_reg_284 <= icmp_ln21_fu_229_p2;
    end 
  end

  assign zext_ln24_fu_234_p1_temp_12 = zext_ln24_fu_234_p1 & 32'd4294967295;
  assign zext_ln24_reg_288_temp_13 = zext_ln24_reg_288 & 32'd18446744069414584320;
  assign zext_ln24_fu_234_p1_temp_12_temp_14 = zext_ln24_fu_234_p1_temp_12 | zext_ln24_reg_288_temp_13;

  always @(posedge ap_clk) begin
    if((icmp_ln21_fu_229_p2 == 1'd0) & (icmp_ln6_fu_187_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3)) begin
      zext_ln24_reg_288 <= zext_ln24_fu_234_p1_temp_12_temp_14;
    end 
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      OUT_I_address0 = zext_ln24_reg_288;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      OUT_I_address0 = zext_ln23_fu_240_p1;
    end else begin
      OUT_I_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state5)) begin
      OUT_I_ce0 = 1'b1;
    end else begin
      OUT_I_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (icmp_ln21_reg_284 == 1'd0) & (1'b1 == ap_CS_fsm_state5)) begin
      OUT_I_we0 = 1'b1;
    end else begin
      OUT_I_we0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      OUT_R_address0 = zext_ln24_reg_288;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      OUT_R_address0 = zext_ln23_fu_240_p1;
    end else begin
      OUT_R_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state5)) begin
      OUT_R_ce0 = 1'b1;
    end else begin
      OUT_R_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (icmp_ln21_reg_284 == 1'd0) & (1'b1 == ap_CS_fsm_state5)) begin
      OUT_R_we0 = 1'b1;
    end else begin
      OUT_R_we0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      X_I_address0 = zext_ln23_fu_240_p1;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      X_I_address0 = zext_ln24_fu_234_p1;
    end else begin
      X_I_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3)) begin
      X_I_ce0 = 1'b1;
    end else begin
      X_I_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      X_R_address0 = zext_ln23_fu_240_p1;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      X_R_address0 = zext_ln24_fu_234_p1;
    end else begin
      X_R_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3)) begin
      X_R_ce0 = 1'b1;
    end else begin
      X_R_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((icmp_ln19_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
    if((icmp_ln19_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
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
        if((icmp_ln19_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        if((icmp_ln21_fu_229_p2 == 1'd1) & (icmp_ln6_fu_187_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3)) begin
          ap_NS_fsm = ap_ST_fsm_state5;
        end else if((icmp_ln21_fu_229_p2 == 1'd0) & (icmp_ln6_fu_187_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3)) begin
          ap_NS_fsm = ap_ST_fsm_state4;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
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

  assign OUT_I_d0 = X_I_q0;
  assign OUT_R_d0 = X_R_q0;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

  always @(*) begin
    ap_block_state1 = (ap_start == 1'b0) | (ap_done_reg == 1'b1);
  end

  assign i_4_fu_181_p2 = 11'd1 + input_assign_reg_124;
  assign i_fu_193_p2 = i_0_i_reg_147 + 4'd1;
  assign icmp_ln19_fu_175_p2 = (input_assign_reg_124 == 11'd1024)? 1'b1 : 1'b0;
  assign icmp_ln21_fu_229_p2 = (zext_ln4_reg_253 > reversed_reg_136)? 1'b1 : 1'b0;
  assign icmp_ln6_fu_187_p2 = (i_0_i_reg_147 == 4'd10)? 1'b1 : 1'b0;
  assign p_0_i_reg_158_temp_15 = p_0_i_reg_158 >> 1'd1;
  assign p_0_i_reg_158_temp_16 = p_0_i_reg_158_temp_15 & 9'd511;
  assign input_assign_1_fu_215_p4 = p_0_i_reg_158_temp_16;
  assign trunc_ln7_fu_199_p1_temp_17 = trunc_ln7_fu_199_p1 << 1'd1;
  assign trunc_ln7_fu_199_p1_temp_18 = trunc_ln7_fu_199_p1_temp_17 | trunc_ln6_fu_203_p1;
  assign rev_fu_207_p3 = trunc_ln7_fu_199_p1_temp_18;
  assign trunc_ln4_fu_167_p1 = (input_assign_reg_124 & 10'd1023);
  assign trunc_ln6_fu_203_p1 = (p_0_i_reg_158 & 1'd1);
  assign trunc_ln7_fu_199_p1 = (reversed_reg_136 & 31'd2147483647);
  assign zext_ln23_fu_240_p1 = input_assign_reg_124;
  assign zext_ln24_fu_234_p1 = reversed_reg_136;
  assign zext_ln4_fu_171_p1 = input_assign_reg_124;
  assign zext_ln8_fu_225_p1 = input_assign_1_fu_215_p4;

  always @(posedge ap_clk) begin
    zext_ln4_reg_253 <= zext_ln4_reg_253 & 31'd2047 | 31'd0;
    zext_ln24_reg_288 <= zext_ln24_reg_288 & 63'd4294967295 | 63'd0;
  end


endmodule

