
module module_3
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_continue,
  ap_idle,
  ap_ready,
  C_address0,
  C_ce0,
  C_q0,
  E_address0,
  E_ce0,
  E_we0,
  E_d0
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
  output [2:0] C_address0;
  output C_ce0;
  input [31:0] C_q0;
  output [2:0] E_address0;
  output E_ce0;
  output E_we0;
  output [31:0] E_d0;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg C_ce0;
  reg E_ce0;
  reg E_we0;
  reg ap_done_reg;
  reg [4:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [2:0] i_fu_59_p2;
  reg [2:0] i_reg_77;
  wire ap_CS_fsm_state2;
  wire [63:0] zext_ln22_fu_65_p1;
  reg [63:0] zext_ln22_reg_82;
  wire [0:0] icmp_ln21_fu_53_p2;
  reg signed [31:0] C_load_reg_92;
  wire ap_CS_fsm_state3;
  wire [31:0] mul_ln22_fu_70_p2;
  reg [31:0] mul_ln22_reg_98;
  wire ap_CS_fsm_state4;
  reg [2:0] i_0_reg_42;
  reg ap_block_state1;
  wire ap_CS_fsm_state5;
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
      end else if((icmp_ln21_fu_53_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
        ap_done_reg <= 1'b1;
      end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      i_0_reg_42 <= i_reg_77;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      i_0_reg_42 <= 3'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      C_load_reg_92 <= C_q0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      i_reg_77 <= i_fu_59_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      mul_ln22_reg_98 <= mul_ln22_fu_70_p2;
    end 
  end

  assign zext_ln22_fu_65_p1_temp_3 = zext_ln22_fu_65_p1 & 3'd7;
  assign zext_ln22_reg_82_temp_4 = zext_ln22_reg_82 & 3'd18446744073709551608;
  assign zext_ln22_fu_65_p1_temp_3_temp_5 = zext_ln22_fu_65_p1_temp_3 | zext_ln22_reg_82_temp_4;

  always @(posedge ap_clk) begin
    if((icmp_ln21_fu_53_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      zext_ln22_reg_82 <= zext_ln22_fu_65_p1_temp_3_temp_5;
    end 
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      C_ce0 = 1'b1;
    end else begin
      C_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      E_ce0 = 1'b1;
    end else begin
      E_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      E_we0 = 1'b1;
    end else begin
      E_we0 = 1'b0;
    end
  end


  always @(*) begin
    if((icmp_ln21_fu_53_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
    if((icmp_ln21_fu_53_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
        if((icmp_ln21_fu_53_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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

  assign C_address0 = zext_ln22_fu_65_p1;
  assign E_address0 = zext_ln22_reg_82;
  assign E_d0 = mul_ln22_reg_98;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

  always @(*) begin
    ap_block_state1 = (ap_start == 1'b0) | (ap_done_reg == 1'b1);
  end

  assign i_fu_59_p2 = i_0_reg_42 + 3'd1;
  assign icmp_ln21_fu_53_p2 = (i_0_reg_42 == 3'd5)? 1'b1 : 1'b0;
  assign mul_ln22_fu_70_p2 = $signed(C_load_reg_92) * $signed(C_load_reg_92);
  assign zext_ln22_fu_65_p1 = i_0_reg_42;

  always @(posedge ap_clk) begin
    zext_ln22_reg_82 <= zext_ln22_reg_82 & 63'd7 | 63'd0;
  end


endmodule

