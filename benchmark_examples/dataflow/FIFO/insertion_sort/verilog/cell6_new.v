
module cell6
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
  in_V_dout,
  in_V_empty_n,
  in_V_read,
  out_V_din,
  out_V_full_n,
  out_V_write
);

  parameter ap_ST_fsm_state1 = 1'd1;
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
  input [31:0] in_V_dout;
  input in_V_empty_n;
  output in_V_read;
  output [31:0] out_V_din;
  input out_V_full_n;
  output out_V_write;
  reg ap_done;
  reg ap_idle;
  reg start_write;
  reg in_V_read;
  reg [31:0] out_V_din;
  reg out_V_write;
  reg real_start;
  reg start_once_reg;
  reg ap_done_reg;
  reg [0:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  reg internal_ap_ready;
  reg [31:0] localCopy_3;
  reg in_V_blk_n;
  reg out_V_blk_n;
  wire [0:0] icmp_ln91_fu_41_p2;
  reg ap_block_state1;
  reg [0:0] ap_NS_fsm;
  reg ap_condition_72;

  initial begin
    #0 start_once_reg = 1'b0;
    #0 ap_done_reg = 1'b0;
    #0 ap_CS_fsm = 1'd1;
    #0 localCopy_3 = 32'd0;
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
      end else if(~((real_start == 1'b0) | (in_V_empty_n == 1'b0) | (ap_done_reg == 1'b1) | (icmp_ln91_fu_41_p2 == 1'd0) & (out_V_full_n == 1'b0) | (icmp_ln91_fu_41_p2 == 1'd1) & (out_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state1)) begin
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
    if(~((real_start == 1'b0) | (in_V_empty_n == 1'b0) | (ap_done_reg == 1'b1) | (icmp_ln91_fu_41_p2 == 1'd0) & (out_V_full_n == 1'b0) | (icmp_ln91_fu_41_p2 == 1'd1) & (out_V_full_n == 1'b0)) & (icmp_ln91_fu_41_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1)) begin
      localCopy_3 <= in_V_dout;
    end 
  end


  always @(*) begin
    if(~((real_start == 1'b0) | (in_V_empty_n == 1'b0) | (ap_done_reg == 1'b1) | (icmp_ln91_fu_41_p2 == 1'd0) & (out_V_full_n == 1'b0) | (icmp_ln91_fu_41_p2 == 1'd1) & (out_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state1)) begin
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
    if(~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      in_V_blk_n = in_V_empty_n;
    end else begin
      in_V_blk_n = 1'b1;
    end
  end


  always @(*) begin
    if(~((real_start == 1'b0) | (in_V_empty_n == 1'b0) | (ap_done_reg == 1'b1) | (icmp_ln91_fu_41_p2 == 1'd0) & (out_V_full_n == 1'b0) | (icmp_ln91_fu_41_p2 == 1'd1) & (out_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state1)) begin
      in_V_read = 1'b1;
    end else begin
      in_V_read = 1'b0;
    end
  end


  always @(*) begin
    if(~((real_start == 1'b0) | (in_V_empty_n == 1'b0) | (ap_done_reg == 1'b1) | (icmp_ln91_fu_41_p2 == 1'd0) & (out_V_full_n == 1'b0) | (icmp_ln91_fu_41_p2 == 1'd1) & (out_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state1)) begin
      internal_ap_ready = 1'b1;
    end else begin
      internal_ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (icmp_ln91_fu_41_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) | ~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (icmp_ln91_fu_41_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1)) begin
      out_V_blk_n = out_V_full_n;
    end else begin
      out_V_blk_n = 1'b1;
    end
  end


  always @(*) begin
      if((icmp_ln91_fu_41_p2 == 1'd1) & (1'b1 == ap_condition_72)) begin
        out_V_din = localCopy_3;
      end else if((icmp_ln91_fu_41_p2 == 1'd0) & (1'b1 == ap_condition_72)) begin
        out_V_din = in_V_dout;
      end else if(1'b1 == ap_condition_72) begin
        out_V_din = 'bx;
    end else begin
      out_V_din = 'bx;
    end
  end


  always @(*) begin
    if(~((real_start == 1'b0) | (in_V_empty_n == 1'b0) | (ap_done_reg == 1'b1) | (icmp_ln91_fu_41_p2 == 1'd0) & (out_V_full_n == 1'b0) | (icmp_ln91_fu_41_p2 == 1'd1) & (out_V_full_n == 1'b0)) & (icmp_ln91_fu_41_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) | ~((real_start == 1'b0) | (in_V_empty_n == 1'b0) | (ap_done_reg == 1'b1) | (icmp_ln91_fu_41_p2 == 1'd0) & (out_V_full_n == 1'b0) | (icmp_ln91_fu_41_p2 == 1'd1) & (out_V_full_n == 1'b0)) & (icmp_ln91_fu_41_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1)) begin
      out_V_write = 1'b1;
    end else begin
      out_V_write = 1'b0;
    end
  end


  always @(*) begin
    if((start_full_n == 1'b0) & (start_once_reg == 1'b0)) begin
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
        ap_NS_fsm = ap_ST_fsm_state1;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

  always @(*) begin
    ap_block_state1 = (real_start == 1'b0) | (in_V_empty_n == 1'b0) | (ap_done_reg == 1'b1) | (icmp_ln91_fu_41_p2 == 1'd0) & (out_V_full_n == 1'b0) | (icmp_ln91_fu_41_p2 == 1'd1) & (out_V_full_n == 1'b0);
  end


  always @(*) begin
    ap_condition_72 = ~((real_start == 1'b0) | (in_V_empty_n == 1'b0) | (ap_done_reg == 1'b1) | (icmp_ln91_fu_41_p2 == 1'd0) & (out_V_full_n == 1'b0) | (icmp_ln91_fu_41_p2 == 1'd1) & (out_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state1);
  end

  assign ap_ready = internal_ap_ready;
  assign icmp_ln91_fu_41_p2 = ($signed(in_V_dout) > $signed(localCopy_3))? 1'b1 : 1'b0;
  assign start_out = real_start;

endmodule

