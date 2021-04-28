
module module_4
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_continue,
  ap_idle,
  ap_ready,
  D_dout,
  D_empty_n,
  D_read,
  E_dout,
  E_empty_n,
  E_read,
  F_address0,
  F_ce0,
  F_we0,
  F_d0
);

  parameter ap_ST_fsm_state1 = 2'd1;
  parameter ap_ST_fsm_state2 = 2'd2;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  input ap_continue;
  output ap_idle;
  output ap_ready;
  input [31:0] D_dout;
  input D_empty_n;
  output D_read;
  input [31:0] E_dout;
  input E_empty_n;
  output E_read;
  output [2:0] F_address0;
  output F_ce0;
  output F_we0;
  output [31:0] F_d0;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg D_read;
  reg E_read;
  reg F_ce0;
  reg F_we0;
  reg ap_done_reg;
  reg [1:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  reg D_blk_n;
  wire ap_CS_fsm_state2;
  wire [0:0] icmp_ln27_fu_68_p2;
  reg E_blk_n;
  wire [2:0] i_fu_74_p2;
  reg ap_block_state2;
  reg [2:0] i_0_reg_57;
  reg ap_block_state1;
  wire [63:0] zext_ln28_fu_80_p1;
  reg [1:0] ap_NS_fsm;

  initial begin
    #0 ap_done_reg = 1'b0;
    #0 ap_CS_fsm = 2'd1;
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
      end else if(~((icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == E_empty_n) | (icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == D_empty_n)) & (icmp_ln27_fu_68_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
        ap_done_reg <= 1'b1;
      end 
    
  end


  always @(posedge ap_clk) begin
    if(~((icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == E_empty_n) | (icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == D_empty_n)) & (icmp_ln27_fu_68_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      i_0_reg_57 <= i_fu_74_p2;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      i_0_reg_57 <= 3'd0;
    end 
  end


  always @(*) begin
    if((icmp_ln27_fu_68_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      D_blk_n = D_empty_n;
    end else begin
      D_blk_n = 1'b1;
    end
  end


  always @(*) begin
    if(~((icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == E_empty_n) | (icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == D_empty_n)) & (icmp_ln27_fu_68_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      D_read = 1'b1;
    end else begin
      D_read = 1'b0;
    end
  end


  always @(*) begin
    if((icmp_ln27_fu_68_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      E_blk_n = E_empty_n;
    end else begin
      E_blk_n = 1'b1;
    end
  end


  always @(*) begin
    if(~((icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == E_empty_n) | (icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == D_empty_n)) & (icmp_ln27_fu_68_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      E_read = 1'b1;
    end else begin
      E_read = 1'b0;
    end
  end


  always @(*) begin
    if(~((icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == E_empty_n) | (icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == D_empty_n)) & (1'b1 == ap_CS_fsm_state2)) begin
      F_ce0 = 1'b1;
    end else begin
      F_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(~((icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == E_empty_n) | (icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == D_empty_n)) & (icmp_ln27_fu_68_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      F_we0 = 1'b1;
    end else begin
      F_we0 = 1'b0;
    end
  end


  always @(*) begin
    if(~((icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == E_empty_n) | (icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == D_empty_n)) & (icmp_ln27_fu_68_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
    if(~((icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == E_empty_n) | (icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == D_empty_n)) & (icmp_ln27_fu_68_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
        if(~((icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == E_empty_n) | (icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == D_empty_n)) & (icmp_ln27_fu_68_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else if(~((icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == E_empty_n) | (icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == D_empty_n)) & (icmp_ln27_fu_68_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign F_address0 = zext_ln28_fu_80_p1;
  assign F_d0 = D_dout + E_dout;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

  always @(*) begin
    ap_block_state1 = (ap_start == 1'b0) | (ap_done_reg == 1'b1);
  end


  always @(*) begin
    ap_block_state2 = (icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == E_empty_n) | (icmp_ln27_fu_68_p2 == 1'd0) & (1'b0 == D_empty_n);
  end

  assign i_fu_74_p2 = i_0_reg_57 + 3'd1;
  assign icmp_ln27_fu_68_p2 = (i_0_reg_57 == 3'd5)? 1'b1 : 1'b0;
  assign zext_ln28_fu_80_p1 = i_0_reg_57;

endmodule

