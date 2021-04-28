
module histogram_reduce
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_continue,
  ap_idle,
  ap_ready,
  hist1_address0,
  hist1_ce0,
  hist1_q0,
  hist2_address0,
  hist2_ce0,
  hist2_q0,
  output_r_address0,
  output_r_ce0,
  output_r_we0,
  output_r_d0
);

  parameter ap_ST_fsm_state1 = 4'd1;
  parameter ap_ST_fsm_state2 = 4'd2;
  parameter ap_ST_fsm_state3 = 4'd4;
  parameter ap_ST_fsm_state4 = 4'd8;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  input ap_continue;
  output ap_idle;
  output ap_ready;
  output [7:0] hist1_address0;
  output hist1_ce0;
  input [31:0] hist1_q0;
  output [7:0] hist2_address0;
  output hist2_ce0;
  input [31:0] hist2_q0;
  output [7:0] output_r_address0;
  output output_r_ce0;
  output output_r_we0;
  output [31:0] output_r_d0;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg hist1_ce0;
  reg hist2_ce0;
  reg output_r_ce0;
  reg output_r_we0;
  reg ap_done_reg;
  reg [3:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [8:0] i_fu_74_p2;
  reg [8:0] i_reg_95;
  wire ap_CS_fsm_state2;
  wire [63:0] zext_ln27_fu_80_p1;
  reg [63:0] zext_ln27_reg_100;
  wire [0:0] icmp_ln25_fu_68_p2;
  wire [31:0] add_ln27_fu_86_p2;
  reg [31:0] add_ln27_reg_115;
  wire ap_CS_fsm_state3;
  reg [8:0] i_0_reg_57;
  reg ap_block_state1;
  wire ap_CS_fsm_state4;
  reg [3:0] ap_NS_fsm;

  initial begin
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
      end else if((icmp_ln25_fu_68_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
        ap_done_reg <= 1'b1;
      end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      i_0_reg_57 <= i_reg_95;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      i_0_reg_57 <= 9'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      add_ln27_reg_115 <= add_ln27_fu_86_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      i_reg_95 <= i_fu_74_p2;
    end 
  end

  assign zext_ln27_fu_80_p1_temp_0 = zext_ln27_fu_80_p1 & 9'd511;
  assign zext_ln27_reg_100_temp_1 = zext_ln27_reg_100 & 9'd18446744073709551104;
  assign zext_ln27_fu_80_p1_temp_0_temp_2 = zext_ln27_fu_80_p1_temp_0 | zext_ln27_reg_100_temp_1;

  always @(posedge ap_clk) begin
    if((icmp_ln25_fu_68_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      zext_ln27_reg_100 <= zext_ln27_fu_80_p1_temp_0_temp_2;
    end 
  end


  always @(*) begin
    if((icmp_ln25_fu_68_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
    if((icmp_ln25_fu_68_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      hist1_ce0 = 1'b1;
    end else begin
      hist1_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      hist2_ce0 = 1'b1;
    end else begin
      hist2_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      output_r_ce0 = 1'b1;
    end else begin
      output_r_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      output_r_we0 = 1'b1;
    end else begin
      output_r_we0 = 1'b0;
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
        if((icmp_ln25_fu_68_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        ap_NS_fsm = ap_ST_fsm_state4;
      end
      ap_ST_fsm_state4: begin
        ap_NS_fsm = ap_ST_fsm_state2;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign add_ln27_fu_86_p2 = hist1_q0 + hist2_q0;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

  always @(*) begin
    ap_block_state1 = (ap_start == 1'b0) | (ap_done_reg == 1'b1);
  end

  assign hist1_address0 = zext_ln27_fu_80_p1;
  assign hist2_address0 = zext_ln27_fu_80_p1;
  assign i_fu_74_p2 = i_0_reg_57 + 9'd1;
  assign icmp_ln25_fu_68_p2 = (i_0_reg_57 == 9'd256)? 1'b1 : 1'b0;
  assign output_r_address0 = zext_ln27_reg_100;
  assign output_r_d0 = add_ln27_reg_115;
  assign zext_ln27_fu_80_p1 = i_0_reg_57;

  always @(posedge ap_clk) begin
    zext_ln27_reg_100 <= zext_ln27_reg_100 & 63'd511 | 63'd0;
  end


endmodule

