
module histogram_map
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_continue,
  ap_idle,
  ap_ready,
  in_r_address0,
  in_r_ce0,
  in_r_q0,
  hist_address0,
  hist_ce0,
  hist_we0,
  hist_d0,
  hist_address1,
  hist_ce1,
  hist_q1
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
  output [1:0] in_r_address0;
  output in_r_ce0;
  input [31:0] in_r_q0;
  output [7:0] hist_address0;
  output hist_ce0;
  output hist_we0;
  output [31:0] hist_d0;
  output [7:0] hist_address1;
  output hist_ce1;
  input [31:0] hist_q1;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg [1:0] in_r_address0;
  reg in_r_ce0;
  reg [7:0] hist_address0;
  reg hist_ce0;
  reg hist_we0;
  reg [31:0] hist_d0;
  reg hist_ce1;
  reg ap_done_reg;
  reg [5:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  reg ap_block_state1;
  wire [8:0] i_fu_154_p2;
  wire ap_CS_fsm_state2;
  wire ap_CS_fsm_state3;
  wire [2:0] i_2_fu_171_p2;
  reg [2:0] i_2_reg_230;
  wire ap_CS_fsm_state4;
  wire [0:0] icmp_ln10_fu_165_p2;
  reg signed [31:0] val_reg_240;
  wire ap_CS_fsm_state5;
  wire [0:0] icmp_ln13_fu_187_p2;
  reg [0:0] icmp_ln13_reg_245;
  wire [31:0] acc_fu_203_p2;
  wire ap_CS_fsm_state6;
  reg [8:0] i_0_reg_91;
  wire [0:0] icmp_ln4_fu_148_p2;
  reg signed [31:0] old_0_reg_102;
  wire [31:0] ap_phi_mux_acc_0_phi_fu_117_p4;
  reg [31:0] acc_0_reg_112;
  reg [2:0] i1_0_reg_126;
  reg [31:0] ap_phi_mux_acc_1_in_phi_fu_140_p4;
  reg [31:0] acc_1_in_reg_137;
  wire [63:0] zext_ln6_fu_160_p1;
  wire [63:0] zext_ln12_fu_177_p1;
  wire signed [63:0] sext_ln21_fu_182_p1;
  wire signed [63:0] sext_ln16_fu_193_p1;
  wire signed [63:0] sext_ln17_fu_198_p1;
  wire signed [31:0] icmp_ln13_fu_187_p1;
  wire signed [31:0] sext_ln17_fu_198_p0;
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
    end else
      if(ap_continue == 1'b1) begin
        ap_done_reg <= 1'b0;
      end else if((icmp_ln10_fu_165_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) begin
        ap_done_reg <= 1'b1;
      end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      acc_0_reg_112 <= acc_fu_203_p2;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      acc_0_reg_112 <= 32'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln13_fu_187_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5)) begin
      acc_1_in_reg_137 <= acc_0_reg_112;
    end else if((icmp_ln13_reg_245 == 1'd0) & (1'b1 == ap_CS_fsm_state6)) begin
      acc_1_in_reg_137 <= hist_q1;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      i1_0_reg_126 <= i_2_reg_230;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      i1_0_reg_126 <= 3'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln4_fu_148_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      i_0_reg_91 <= i_fu_154_p2;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      i_0_reg_91 <= 9'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      old_0_reg_102 <= val_reg_240;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      old_0_reg_102 <= in_r_q0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      i_2_reg_230 <= i_2_fu_171_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      icmp_ln13_reg_245 <= icmp_ln13_fu_187_p2;
      val_reg_240 <= in_r_q0;
    end 
  end


  always @(*) begin
    if((icmp_ln10_fu_165_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) begin
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
    if((icmp_ln13_reg_245 == 1'd0) & (1'b1 == ap_CS_fsm_state6)) begin
      ap_phi_mux_acc_1_in_phi_fu_140_p4 = hist_q1;
    end else begin
      ap_phi_mux_acc_1_in_phi_fu_140_p4 = acc_1_in_reg_137;
    end
  end


  always @(*) begin
    if((icmp_ln10_fu_165_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      hist_address0 = sext_ln16_fu_193_p1;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      hist_address0 = sext_ln21_fu_182_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      hist_address0 = zext_ln6_fu_160_p1;
    end else begin
      hist_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state2)) begin
      hist_ce0 = 1'b1;
    end else begin
      hist_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      hist_ce1 = 1'b1;
    end else begin
      hist_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      hist_d0 = acc_0_reg_112;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      hist_d0 = ap_phi_mux_acc_0_phi_fu_117_p4;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      hist_d0 = 32'd0;
    end else begin
      hist_d0 = 'bx;
    end
  end


  always @(*) begin
    if((icmp_ln13_fu_187_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5) | (icmp_ln10_fu_165_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4) | (icmp_ln4_fu_148_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      hist_we0 = 1'b1;
    end else begin
      hist_we0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      in_r_address0 = zext_ln12_fu_177_p1;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      in_r_address0 = 64'd0;
    end else begin
      in_r_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state2)) begin
      in_r_ce0 = 1'b1;
    end else begin
      in_r_ce0 = 1'b0;
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
        if((icmp_ln4_fu_148_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        ap_NS_fsm = ap_ST_fsm_state4;
      end
      ap_ST_fsm_state4: begin
        if((icmp_ln10_fu_165_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state5;
        end
      end
      ap_ST_fsm_state5: begin
        ap_NS_fsm = ap_ST_fsm_state6;
      end
      ap_ST_fsm_state6: begin
        ap_NS_fsm = ap_ST_fsm_state4;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign acc_fu_203_p2 = ap_phi_mux_acc_1_in_phi_fu_140_p4 + 32'd1;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

  always @(*) begin
    ap_block_state1 = (ap_start == 1'b0) | (ap_done_reg == 1'b1);
  end

  assign ap_phi_mux_acc_0_phi_fu_117_p4 = acc_0_reg_112;
  assign hist_address1 = sext_ln17_fu_198_p1;
  assign i_2_fu_171_p2 = i1_0_reg_126 + 3'd1;
  assign i_fu_154_p2 = i_0_reg_91 + 9'd1;
  assign icmp_ln10_fu_165_p2 = (i1_0_reg_126 == 3'd4)? 1'b1 : 1'b0;
  assign icmp_ln13_fu_187_p1 = in_r_q0;
  assign icmp_ln13_fu_187_p2 = (old_0_reg_102 == icmp_ln13_fu_187_p1)? 1'b1 : 1'b0;
  assign icmp_ln4_fu_148_p2 = (i_0_reg_91 == 9'd256)? 1'b1 : 1'b0;
  assign sext_ln16_fu_193_p1 = old_0_reg_102;
  assign sext_ln17_fu_198_p0 = in_r_q0;
  assign sext_ln17_fu_198_p1 = sext_ln17_fu_198_p0;
  assign sext_ln21_fu_182_p1 = old_0_reg_102;
  assign zext_ln12_fu_177_p1 = i1_0_reg_126;
  assign zext_ln6_fu_160_p1 = i_0_reg_91;

endmodule

