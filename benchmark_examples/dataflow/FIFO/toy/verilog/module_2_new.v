
module module_2
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
  B_dout,
  B_empty_n,
  B_read,
  D_din,
  D_full_n,
  D_write
);

  parameter ap_ST_fsm_state1 = 4'd1;
  parameter ap_ST_fsm_state2 = 4'd2;
  parameter ap_ST_fsm_state3 = 4'd4;
  parameter ap_ST_fsm_state4 = 4'd8;
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
  input [31:0] B_dout;
  input B_empty_n;
  output B_read;
  output [31:0] D_din;
  input D_full_n;
  output D_write;
  reg ap_done;
  reg ap_idle;
  reg start_write;
  reg B_read;
  reg D_write;
  reg real_start;
  reg start_once_reg;
  reg ap_done_reg;
  reg [3:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  reg internal_ap_ready;
  reg B_blk_n;
  wire ap_CS_fsm_state2;
  wire [0:0] icmp_ln15_fu_54_p2;
  reg D_blk_n;
  wire ap_CS_fsm_state4;
  wire [2:0] i_fu_60_p2;
  reg [2:0] i_reg_73;
  reg ap_block_state2;
  reg signed [31:0] B_read_reg_78;
  wire [31:0] mul_ln16_fu_66_p2;
  reg [31:0] mul_ln16_reg_84;
  wire ap_CS_fsm_state3;
  reg [2:0] i_0_reg_43;
  reg ap_block_state1;
  reg [3:0] ap_NS_fsm;

  initial begin
    #0 start_once_reg = 1'b0;
    #0 ap_done_reg = 1'b0;
    #0 ap_CS_fsm = 4'd1;
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
      end else if(~((icmp_ln15_fu_54_p2 == 1'd0) & (1'b0 == B_empty_n)) & (icmp_ln15_fu_54_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
    if((1'b1 == D_full_n) & (1'b1 == ap_CS_fsm_state4)) begin
      i_0_reg_43 <= i_reg_73;
    end else if(~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      i_0_reg_43 <= 3'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(~((icmp_ln15_fu_54_p2 == 1'd0) & (1'b0 == B_empty_n)) & (icmp_ln15_fu_54_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      B_read_reg_78 <= B_dout;
    end 
  end


  always @(posedge ap_clk) begin
    if(~((icmp_ln15_fu_54_p2 == 1'd0) & (1'b0 == B_empty_n)) & (1'b1 == ap_CS_fsm_state2)) begin
      i_reg_73 <= i_fu_60_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      mul_ln16_reg_84 <= mul_ln16_fu_66_p2;
    end 
  end


  always @(*) begin
    if((icmp_ln15_fu_54_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      B_blk_n = B_empty_n;
    end else begin
      B_blk_n = 1'b1;
    end
  end


  always @(*) begin
    if(~((icmp_ln15_fu_54_p2 == 1'd0) & (1'b0 == B_empty_n)) & (icmp_ln15_fu_54_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      B_read = 1'b1;
    end else begin
      B_read = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      D_blk_n = D_full_n;
    end else begin
      D_blk_n = 1'b1;
    end
  end


  always @(*) begin
    if((1'b1 == D_full_n) & (1'b1 == ap_CS_fsm_state4)) begin
      D_write = 1'b1;
    end else begin
      D_write = 1'b0;
    end
  end


  always @(*) begin
    if(~((icmp_ln15_fu_54_p2 == 1'd0) & (1'b0 == B_empty_n)) & (icmp_ln15_fu_54_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
    if(~((icmp_ln15_fu_54_p2 == 1'd0) & (1'b0 == B_empty_n)) & (icmp_ln15_fu_54_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
        if(~((icmp_ln15_fu_54_p2 == 1'd0) & (1'b0 == B_empty_n)) & (icmp_ln15_fu_54_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else if(~((icmp_ln15_fu_54_p2 == 1'd0) & (1'b0 == B_empty_n)) & (icmp_ln15_fu_54_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end
      end
      ap_ST_fsm_state3: begin
        ap_NS_fsm = ap_ST_fsm_state4;
      end
      ap_ST_fsm_state4: begin
        if((1'b1 == D_full_n) & (1'b1 == ap_CS_fsm_state4)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state4;
        end
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign D_din = mul_ln16_reg_84;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

  always @(*) begin
    ap_block_state1 = (real_start == 1'b0) | (ap_done_reg == 1'b1);
  end


  always @(*) begin
    ap_block_state2 = (icmp_ln15_fu_54_p2 == 1'd0) & (1'b0 == B_empty_n);
  end

  assign ap_ready = internal_ap_ready;
  assign i_fu_60_p2 = i_0_reg_43 + 3'd1;
  assign icmp_ln15_fu_54_p2 = (i_0_reg_43 == 3'd5)? 1'b1 : 1'b0;
  assign mul_ln16_fu_66_p2 = $signed(B_read_reg_78) * $signed(B_read_reg_78);
  assign start_out = real_start;

endmodule

