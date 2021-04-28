
module fft_stage6
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
  Out_R_address0,
  Out_R_ce0,
  Out_R_we0,
  Out_R_d0,
  Out_R_address1,
  Out_R_ce1,
  Out_R_we1,
  Out_R_d1,
  Out_I_address0,
  Out_I_ce0,
  Out_I_we0,
  Out_I_d0,
  Out_I_address1,
  Out_I_ce1,
  Out_I_we1,
  Out_I_d1
);

  parameter ap_ST_fsm_state1 = 6'd1;
  parameter ap_ST_fsm_state2 = 6'd2;
  parameter ap_ST_fsm_state3 = 6'd4;
  parameter ap_ST_fsm_state4 = 6'd8;
  parameter ap_ST_fsm_state5 = 6'd16;
  parameter ap_ST_fsm_state6 = 6'd32;
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
  output [9:0] Out_R_address0;
  output Out_R_ce0;
  output Out_R_we0;
  output [31:0] Out_R_d0;
  output [9:0] Out_R_address1;
  output Out_R_ce1;
  output Out_R_we1;
  output [31:0] Out_R_d1;
  output [9:0] Out_I_address0;
  output Out_I_ce0;
  output Out_I_we0;
  output [31:0] Out_I_d0;
  output [9:0] Out_I_address1;
  output Out_I_ce1;
  output Out_I_we1;
  output [31:0] Out_I_d1;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg [9:0] X_R_address0;
  reg X_R_ce0;
  reg [9:0] X_I_address0;
  reg X_I_ce0;
  reg Out_R_ce0;
  reg Out_R_we0;
  reg Out_R_ce1;
  reg Out_R_we1;
  reg Out_I_ce0;
  reg Out_I_we0;
  reg Out_I_ce1;
  reg Out_I_we1;
  reg ap_done_reg;
  reg [5:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [31:0] zext_ln45_fu_171_p1;
  wire ap_CS_fsm_state2;
  wire [2:0] a_fu_175_p2;
  reg [2:0] a_reg_272;
  wire [0:0] ap_phi_mux_i_phi_fu_153_p4;
  wire signed [63:0] sext_ln53_fu_203_p1;
  reg signed [63:0] sext_ln53_reg_280;
  wire ap_CS_fsm_state3;
  wire [0:0] icmp_ln51_fu_191_p2;
  wire signed [31:0] sub_ln53_fu_209_p2;
  reg signed [31:0] sub_ln53_reg_296;
  wire ap_CS_fsm_state4;
  wire signed [31:0] add_ln54_fu_215_p2;
  reg signed [31:0] add_ln54_reg_301;
  wire signed [63:0] sext_ln55_fu_221_p1;
  reg signed [63:0] sext_ln55_reg_306;
  wire [31:0] i_3_fu_227_p2;
  reg [31:0] i_3_reg_322;
  wire [31:0] temp_R_fu_237_p2;
  reg [31:0] temp_R_reg_327;
  wire ap_CS_fsm_state5;
  wire [31:0] temp_I_fu_242_p2;
  reg [31:0] temp_I_reg_333;
  reg [31:0] X_R_load_1_reg_339;
  reg [31:0] X_I_load_1_reg_345;
  reg [2:0] c_reg_136;
  reg ap_block_state1;
  reg [0:0] i_reg_148;
  reg signed [31:0] i_0_reg_161;
  wire ap_CS_fsm_state6;
  wire [21:0] tmp_3_fu_181_p4;
  wire [31:0] i_lower_fu_197_p2;
  wire [2:0] temp_R_fu_237_p1;
  wire [31:0] zext_ln45_2_fu_233_p1;
  wire [2:0] temp_I_fu_242_p1;
  reg [5:0] ap_NS_fsm;

  initial begin
    #0 ap_done_reg = 1'b0;
    #0 ap_CS_fsm = 6'd1;
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
    end else if(ap_continue == 1'b1) begin
      ap_done_reg <= 1'b0;
    end else if((ap_phi_mux_i_phi_fu_153_p4 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      ap_done_reg <= 1'b1;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln51_fu_191_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
      c_reg_136 <= a_reg_272;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      c_reg_136 <= 3'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      i_0_reg_161 <= i_3_reg_322;
    end else if((ap_phi_mux_i_phi_fu_153_p4 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      i_0_reg_161 <= zext_ln45_fu_171_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln51_fu_191_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
      i_reg_148 <= 1'd1;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      i_reg_148 <= 1'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      X_I_load_1_reg_345 <= X_I_q0;
      X_R_load_1_reg_339 <= X_R_q0;
      temp_I_reg_333 <= temp_I_fu_242_p2;
      temp_R_reg_327 <= temp_R_fu_237_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((ap_phi_mux_i_phi_fu_153_p4 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      a_reg_272 <= a_fu_175_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      add_ln54_reg_301 <= add_ln54_fu_215_p2;
      i_3_reg_322 <= i_3_fu_227_p2;
      sext_ln55_reg_306 <= sext_ln55_fu_221_p1;
      sub_ln53_reg_296 <= sub_ln53_fu_209_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln51_fu_191_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3)) begin
      sext_ln53_reg_280 <= sext_ln53_fu_203_p1;
    end 
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      Out_I_ce0 = 1'b1;
    end else begin
      Out_I_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      Out_I_ce1 = 1'b1;
    end else begin
      Out_I_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      Out_I_we0 = 1'b1;
    end else begin
      Out_I_we0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      Out_I_we1 = 1'b1;
    end else begin
      Out_I_we1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      Out_R_ce0 = 1'b1;
    end else begin
      Out_R_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      Out_R_ce1 = 1'b1;
    end else begin
      Out_R_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      Out_R_we0 = 1'b1;
    end else begin
      Out_R_we0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      Out_R_we1 = 1'b1;
    end else begin
      Out_R_we1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      X_I_address0 = sext_ln55_fu_221_p1;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      X_I_address0 = sext_ln53_fu_203_p1;
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
      X_R_address0 = sext_ln55_fu_221_p1;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      X_R_address0 = sext_ln53_fu_203_p1;
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
    if((ap_phi_mux_i_phi_fu_153_p4 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
    if((ap_phi_mux_i_phi_fu_153_p4 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
        if((ap_phi_mux_i_phi_fu_153_p4 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        if((icmp_ln51_fu_191_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state4;
        end
      end
      ap_ST_fsm_state4: begin
        ap_NS_fsm = ap_ST_fsm_state5;
      end
      ap_ST_fsm_state5: begin
        ap_NS_fsm = ap_ST_fsm_state6;
      end
      ap_ST_fsm_state6: begin
        ap_NS_fsm = ap_ST_fsm_state3;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign Out_I_address0 = sext_ln53_reg_280;
  assign Out_I_address1 = sext_ln55_reg_306;
  assign Out_I_d0 = X_I_load_1_reg_345 - temp_I_reg_333;
  assign Out_I_d1 = X_I_load_1_reg_345 + temp_I_reg_333;
  assign Out_R_address0 = sext_ln53_reg_280;
  assign Out_R_address1 = sext_ln55_reg_306;
  assign Out_R_d0 = X_R_load_1_reg_339 - temp_R_reg_327;
  assign Out_R_d1 = X_R_load_1_reg_339 + temp_R_reg_327;
  assign a_fu_175_p2 = c_reg_136 ^ 3'd4;
  assign add_ln54_fu_215_p2 = X_I_q0 + X_R_q0;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

  always @(*) begin
    ap_block_state1 = (ap_start == 1'b0) | (ap_done_reg == 1'b1);
  end

  assign ap_phi_mux_i_phi_fu_153_p4 = i_reg_148;
  assign i_3_fu_227_p2 = $signed(i_0_reg_161) + $signed(32'd2);
  assign i_lower_fu_197_p2 = $signed(i_0_reg_161) + $signed(32'd1);
  assign icmp_ln51_fu_191_p2 = ($signed(tmp_3_fu_181_p4) < $signed(22'd1))? 1'b1 : 1'b0;
  assign sext_ln53_fu_203_p1 = $signed(i_lower_fu_197_p2);
  assign sext_ln55_fu_221_p1 = i_0_reg_161;
  assign sub_ln53_fu_209_p2 = X_R_q0 - X_I_q0;
  assign temp_I_fu_242_p1 = zext_ln45_2_fu_233_p1;
  assign temp_I_fu_242_p1_temp_4 = 1'b0 << 1'd2;
  assign temp_I_fu_242_p1_temp_5 = temp_I_fu_242_p1_temp_4 | temp_I_fu_242_p1;
  assign temp_I_fu_242_p1__temp0 = temp_I_fu_242_p1_temp_5;
  assign temp_I_fu_242_p2 = $signed(add_ln54_reg_301) * $signed(temp_I_fu_242_p1__temp0);
  assign temp_R_fu_237_p1 = zext_ln45_2_fu_233_p1;
  assign temp_R_fu_237_p1_temp_6 = 1'b0 << 1'd2;
  assign temp_R_fu_237_p1_temp_7 = temp_R_fu_237_p1_temp_6 | temp_R_fu_237_p1;
  assign temp_R_fu_237_p1__temp0 = temp_R_fu_237_p1_temp_7;
  assign temp_R_fu_237_p2 = $signed(sub_ln53_reg_296) * $signed(temp_R_fu_237_p1__temp0);
  assign i_0_reg_161_temp_7 = i_0_reg_161 >> 1'd10;
  assign i_0_reg_161_temp_8 = i_0_reg_161_temp_7 & 22'd4194303;
  assign tmp_3_fu_181_p4 = i_0_reg_161_temp_8;
  assign zext_ln45_2_fu_233_p1 = c_reg_136;
  assign zext_ln45_fu_171_p1 = i_reg_148;

endmodule

