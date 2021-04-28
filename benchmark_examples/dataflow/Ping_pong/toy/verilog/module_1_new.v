
module module_1
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_continue,
  ap_idle,
  ap_ready,
  A_address0,
  A_ce0,
  A_q0,
  B_address0,
  B_ce0,
  B_we0,
  B_d0,
  C_address0,
  C_ce0,
  C_we0,
  C_d0
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
  output [2:0] A_address0;
  output A_ce0;
  input [31:0] A_q0;
  output [2:0] B_address0;
  output B_ce0;
  output B_we0;
  output [31:0] B_d0;
  output [2:0] C_address0;
  output C_ce0;
  output C_we0;
  output [31:0] C_d0;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg A_ce0;
  reg B_ce0;
  reg B_we0;
  reg C_ce0;
  reg C_we0;
  reg ap_done_reg;
  reg [2:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [2:0] i_fu_78_p2;
  reg [2:0] i_reg_112;
  wire ap_CS_fsm_state2;
  wire [63:0] zext_ln8_fu_84_p1;
  reg [63:0] zext_ln8_reg_117;
  wire [0:0] icmp_ln7_fu_72_p2;
  reg [2:0] i_0_reg_61;
  reg ap_block_state1;
  wire ap_CS_fsm_state3;
  wire [31:0] shl_ln8_fu_89_p2;
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
      end else if((icmp_ln7_fu_72_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
        ap_done_reg <= 1'b1;
      end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      i_0_reg_61 <= i_reg_112;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      i_0_reg_61 <= 3'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      i_reg_112 <= i_fu_78_p2;
    end 
  end

  assign zext_ln8_fu_84_p1_temp_9 = zext_ln8_fu_84_p1 & 3'd7;
  assign zext_ln8_reg_117_temp_10 = zext_ln8_reg_117 & 3'd18446744073709551608;
  assign zext_ln8_fu_84_p1_temp_9_temp_11 = zext_ln8_fu_84_p1_temp_9 | zext_ln8_reg_117_temp_10;

  always @(posedge ap_clk) begin
    if((icmp_ln7_fu_72_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      zext_ln8_reg_117 <= zext_ln8_fu_84_p1_temp_9_temp_11;
    end 
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      A_ce0 = 1'b1;
    end else begin
      A_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      B_ce0 = 1'b1;
    end else begin
      B_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      B_we0 = 1'b1;
    end else begin
      B_we0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      C_ce0 = 1'b1;
    end else begin
      C_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      C_we0 = 1'b1;
    end else begin
      C_we0 = 1'b0;
    end
  end


  always @(*) begin
    if((icmp_ln7_fu_72_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
    if((icmp_ln7_fu_72_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
        if((icmp_ln7_fu_72_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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

  assign A_address0 = zext_ln8_fu_84_p1;
  assign B_address0 = zext_ln8_reg_117;
  assign B_d0 = A_q0 + shl_ln8_fu_89_p2;
  assign C_address0 = zext_ln8_reg_117;
  assign C_d0 = A_q0 << 32'd1;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

  always @(*) begin
    ap_block_state1 = (ap_start == 1'b0) | (ap_done_reg == 1'b1);
  end

  assign i_fu_78_p2 = i_0_reg_61 + 3'd1;
  assign icmp_ln7_fu_72_p2 = (i_0_reg_61 == 3'd5)? 1'b1 : 1'b0;
  assign shl_ln8_fu_89_p2 = A_q0 << 32'd3;
  assign zext_ln8_fu_84_p1 = i_0_reg_61;

  always @(posedge ap_clk) begin
    zext_ln8_reg_117 <= zext_ln8_reg_117 & 63'd7 | 63'd0;
  end


endmodule

