
module module_1
(
  ap_clk,
  ap_rst,
  ap_start,
  start_full_n,
  ap_done,
  ap_continue,
  ap_idle,
  ap_ready,
  start_out,
  start_write,
  A_address0,
  A_ce0,
  A_q0,
  B_din,
  B_full_n,
  B_write,
  C_din,
  C_full_n,
  C_write
);

  parameter ap_ST_fsm_state1 = 3'd1;
  parameter ap_ST_fsm_state2 = 3'd2;
  parameter ap_ST_fsm_state3 = 3'd4;
  input ap_clk;
  input ap_rst;
  input ap_start;
  input start_full_n;
  output ap_done;
  input ap_continue;
  output ap_idle;
  output ap_ready;
  output start_out;
  output start_write;
  output [2:0] A_address0;
  output A_ce0;
  input [31:0] A_q0;
  output [31:0] B_din;
  input B_full_n;
  output B_write;
  output [31:0] C_din;
  input C_full_n;
  output C_write;
  reg ap_done;
  reg ap_idle;
  reg start_write;
  reg A_ce0;
  reg B_write;
  reg C_write;
  reg real_start;
  reg start_once_reg;
  reg ap_done_reg;
  reg [2:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  reg internal_ap_ready;
  reg B_blk_n;
  wire ap_CS_fsm_state3;
  reg C_blk_n;
  wire [2:0] i_fu_80_p2;
  reg [2:0] i_reg_114;
  wire ap_CS_fsm_state2;
  wire [0:0] icmp_ln7_fu_74_p2;
  reg [2:0] i_0_reg_63;
  reg ap_block_state1;
  reg ap_block_state3;
  wire [63:0] zext_ln8_fu_86_p1;
  wire [31:0] shl_ln8_fu_91_p2;
  reg [2:0] ap_NS_fsm;

  initial begin
    #0 start_once_reg = 1'b0;
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
      end else if((icmp_ln7_fu_74_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
        ap_done_reg <= 1'b1;
      end 
    
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      start_once_reg <= 1'b0;
    end else
      if((internal_ap_ready == 1'b0) & (real_start == 1'b1)) begin
        start_once_reg <= 1'b1;
      end else if(internal_ap_ready == 1'b1) begin
        start_once_reg <= 1'b0;
      end 
    
  end


  always @(posedge ap_clk) begin
    if(~((1'b0 == C_full_n) | (1'b0 == B_full_n)) & (1'b1 == ap_CS_fsm_state3)) begin
      i_0_reg_63 <= i_reg_114;
    end else if(~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      i_0_reg_63 <= 3'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      i_reg_114 <= i_fu_80_p2;
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
      B_blk_n = B_full_n;
    end else begin
      B_blk_n = 1'b1;
    end
  end


  always @(*) begin
    if(~((1'b0 == C_full_n) | (1'b0 == B_full_n)) & (1'b1 == ap_CS_fsm_state3)) begin
      B_write = 1'b1;
    end else begin
      B_write = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      C_blk_n = C_full_n;
    end else begin
      C_blk_n = 1'b1;
    end
  end


  always @(*) begin
    if(~((1'b0 == C_full_n) | (1'b0 == B_full_n)) & (1'b1 == ap_CS_fsm_state3)) begin
      C_write = 1'b1;
    end else begin
      C_write = 1'b0;
    end
  end


  always @(*) begin
    if((icmp_ln7_fu_74_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      ap_done = 1'b1;
    end else begin
      ap_done = ap_done_reg;
    end
  end


  always @(*) begin
    if((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) begin
      ap_idle = 1'b1;
    end else begin
      ap_idle = 1'b0;
    end
  end


  always @(*) begin
    if((icmp_ln7_fu_74_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      internal_ap_ready = 1'b1;
    end else begin
      internal_ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if((start_once_reg == 1'b0) & (start_full_n == 1'b0)) begin
      real_start = 1'b0;
    end else begin
      real_start = ap_start;
    end
  end


  always @(*) begin
    if((start_once_reg == 1'b0) & (real_start == 1'b1)) begin
      start_write = 1'b1;
    end else begin
      start_write = 1'b0;
    end
  end


  always @(*) begin
    case(ap_CS_fsm)
      ap_ST_fsm_state1: begin
        if(~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end
      end
      ap_ST_fsm_state2: begin
        if((icmp_ln7_fu_74_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        if(~((1'b0 == C_full_n) | (1'b0 == B_full_n)) & (1'b1 == ap_CS_fsm_state3)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign A_address0 = zext_ln8_fu_86_p1;
  assign B_din = A_q0 + shl_ln8_fu_91_p2;
  assign C_din = A_q0 << 32'd1;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

  always @(*) begin
    ap_block_state1 = (real_start == 1'b0) | (ap_done_reg == 1'b1);
  end


  always @(*) begin
    ap_block_state3 = (1'b0 == C_full_n) | (1'b0 == B_full_n);
  end

  assign ap_ready = internal_ap_ready;
  assign i_fu_80_p2 = i_0_reg_63 + 3'd1;
  assign icmp_ln7_fu_74_p2 = (i_0_reg_63 == 3'd5)? 1'b1 : 1'b0;
  assign shl_ln8_fu_91_p2 = A_q0 << 32'd3;
  assign start_out = real_start;
  assign zext_ln8_fu_86_p1 = i_0_reg_63;

endmodule

