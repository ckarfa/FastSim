
module module_4
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_continue,
  ap_idle,
  ap_ready,
  D_address0,
  D_ce0,
  D_q0,
  E_address0,
  E_ce0,
  E_q0,
  F_address0,
  F_ce0,
  F_we0,
  F_d0
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
  output [2:0] D_address0;
  output D_ce0;
  input [31:0] D_q0;
  output [2:0] E_address0;
  output E_ce0;
  input [31:0] E_q0;
  output [2:0] F_address0;
  output F_ce0;
  output F_we0;
  output [31:0] F_d0;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg D_ce0;
  reg E_ce0;
  reg F_ce0;
  reg F_we0;
  reg ap_done_reg;
  reg [2:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [2:0] i_fu_74_p2;
  reg [2:0] i_reg_96;
  wire ap_CS_fsm_state2;
  wire [63:0] zext_ln28_fu_80_p1;
  reg [63:0] zext_ln28_reg_101;
  wire [0:0] icmp_ln27_fu_68_p2;
  reg [2:0] i_0_reg_57;
  reg ap_block_state1;
  wire ap_CS_fsm_state3;
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
      end else if((icmp_ln27_fu_68_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
        ap_done_reg <= 1'b1;
      end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      i_0_reg_57 <= i_reg_96;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      i_0_reg_57 <= 3'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      i_reg_96 <= i_fu_74_p2;
    end 
  end

  assign zext_ln28_fu_80_p1_temp_0 = zext_ln28_fu_80_p1 & 3'd7;
  assign zext_ln28_reg_101_temp_1 = zext_ln28_reg_101 & 3'd18446744073709551608;
  assign zext_ln28_fu_80_p1_temp_0_temp_2 = zext_ln28_fu_80_p1_temp_0 | zext_ln28_reg_101_temp_1;

  always @(posedge ap_clk) begin
    if((icmp_ln27_fu_68_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      zext_ln28_reg_101 <= zext_ln28_fu_80_p1_temp_0_temp_2;
    end 
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      D_ce0 = 1'b1;
    end else begin
      D_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      E_ce0 = 1'b1;
    end else begin
      E_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      F_ce0 = 1'b1;
    end else begin
      F_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      F_we0 = 1'b1;
    end else begin
      F_we0 = 1'b0;
    end
  end


  always @(*) begin
    if((icmp_ln27_fu_68_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
    if((icmp_ln27_fu_68_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
        if((icmp_ln27_fu_68_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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

  assign D_address0 = zext_ln28_fu_80_p1;
  assign E_address0 = zext_ln28_fu_80_p1;
  assign F_address0 = zext_ln28_reg_101;
  assign F_d0 = D_q0 + E_q0;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

  always @(*) begin
    ap_block_state1 = (ap_start == 1'b0) | (ap_done_reg == 1'b1);
  end

  assign i_fu_74_p2 = i_0_reg_57 + 3'd1;
  assign icmp_ln27_fu_68_p2 = (i_0_reg_57 == 3'd5)? 1'b1 : 1'b0;
  assign zext_ln28_fu_80_p1 = i_0_reg_57;

  always @(posedge ap_clk) begin
    zext_ln28_reg_101 <= zext_ln28_reg_101 & 63'd7 | 63'd0;
  end


endmodule

