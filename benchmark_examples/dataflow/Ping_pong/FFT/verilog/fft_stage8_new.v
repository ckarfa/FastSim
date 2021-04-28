
module fft_stage8
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
  wire [31:0] zext_ln45_fu_155_p1;
  reg [31:0] zext_ln45_reg_251;
  wire ap_CS_fsm_state2;
  wire [2:0] a_fu_165_p2;
  reg [2:0] a_reg_261;
  wire signed [63:0] sext_ln53_fu_193_p1;
  reg signed [63:0] sext_ln53_reg_269;
  wire ap_CS_fsm_state3;
  wire [0:0] icmp_ln51_fu_181_p2;
  wire signed [31:0] sub_ln53_fu_199_p2;
  reg signed [31:0] sub_ln53_reg_285;
  wire ap_CS_fsm_state4;
  wire signed [31:0] add_ln54_fu_205_p2;
  reg signed [31:0] add_ln54_reg_290;
  wire signed [63:0] sext_ln55_fu_211_p1;
  reg signed [63:0] sext_ln55_reg_295;
  wire [31:0] i_1_fu_217_p2;
  reg [31:0] i_1_reg_311;
  wire [31:0] temp_R_fu_223_p2;
  reg [31:0] temp_R_reg_316;
  wire ap_CS_fsm_state5;
  wire [31:0] temp_I_fu_227_p2;
  reg [31:0] temp_I_reg_322;
  reg [31:0] X_R_load_1_reg_328;
  reg [31:0] X_I_load_1_reg_334;
  reg [2:0] c_reg_134;
  reg ap_block_state1;
  reg signed [31:0] i_0_reg_145;
  wire [0:0] icmp_ln45_fu_159_p2;
  wire ap_CS_fsm_state6;
  wire [21:0] tmp_1_fu_171_p4;
  wire [31:0] i_lower_fu_187_p2;
  wire [2:0] temp_R_fu_223_p1;
  wire [2:0] temp_I_fu_227_p1;
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
      end else if((icmp_ln45_fu_159_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
        ap_done_reg <= 1'b1;
      end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln51_fu_181_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
      c_reg_134 <= a_reg_261;
    end else if(~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) begin
      c_reg_134 <= 3'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      i_0_reg_145 <= i_1_reg_311;
    end else if((1'b1 == ap_CS_fsm_state2) & (icmp_ln45_fu_159_p2 == 1'd0)) begin
      i_0_reg_145 <= zext_ln45_fu_155_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      X_I_load_1_reg_334 <= X_I_q0;
      X_R_load_1_reg_328 <= X_R_q0;
      temp_I_reg_322 <= temp_I_fu_227_p2;
      temp_R_reg_316 <= temp_R_fu_223_p2;
    end 
  end

  assign zext_ln45_fu_155_p1_temp_0 = zext_ln45_fu_155_p1 & 3'd7;
  assign zext_ln45_reg_251_temp_1 = zext_ln45_reg_251 & 3'd4294967288;
  assign zext_ln45_fu_155_p1_temp_0_temp_2 = zext_ln45_fu_155_p1_temp_0 | zext_ln45_reg_251_temp_1;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      a_reg_261 <= a_fu_165_p2;
      zext_ln45_reg_251 <= zext_ln45_fu_155_p1_temp_0_temp_2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      add_ln54_reg_290 <= add_ln54_fu_205_p2;
      i_1_reg_311 <= i_1_fu_217_p2;
      sext_ln55_reg_295 <= sext_ln55_fu_211_p1;
      sub_ln53_reg_285 <= sub_ln53_fu_199_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln51_fu_181_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3)) begin
      sext_ln53_reg_269 <= sext_ln53_fu_193_p1;
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
      X_I_address0 = sext_ln55_fu_211_p1;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      X_I_address0 = sext_ln53_fu_193_p1;
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
      X_R_address0 = sext_ln55_fu_211_p1;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      X_R_address0 = sext_ln53_fu_193_p1;
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
    if((icmp_ln45_fu_159_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
    if((icmp_ln45_fu_159_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
        if((icmp_ln45_fu_159_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        if((icmp_ln51_fu_181_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
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

  assign Out_I_address0 = sext_ln53_reg_269;
  assign Out_I_address1 = sext_ln55_reg_295;
  assign Out_I_d0 = X_I_load_1_reg_334 - temp_I_reg_322;
  assign Out_I_d1 = X_I_load_1_reg_334 + temp_I_reg_322;
  assign Out_R_address0 = sext_ln53_reg_269;
  assign Out_R_address1 = sext_ln55_reg_295;
  assign Out_R_d0 = X_R_load_1_reg_328 - temp_R_reg_316;
  assign Out_R_d1 = X_R_load_1_reg_328 + temp_R_reg_316;
  assign a_fu_165_p2 = c_reg_134 + 3'd1;
  assign add_ln54_fu_205_p2 = X_I_q0 + X_R_q0;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

  always @(*) begin
    ap_block_state1 = (ap_start == 1'b0) | (ap_done_reg == 1'b1);
  end

  assign i_1_fu_217_p2 = $signed(i_0_reg_145) + $signed(32'd8);
  assign i_lower_fu_187_p2 = $signed(i_0_reg_145) + $signed(32'd4);
  assign icmp_ln45_fu_159_p2 = (c_reg_134 == 3'd4)? 1'b1 : 1'b0;
  assign icmp_ln51_fu_181_p2 = ($signed(tmp_1_fu_171_p4) < $signed(22'd1))? 1'b1 : 1'b0;
  assign sext_ln53_fu_193_p1 = $signed(i_lower_fu_187_p2);
  assign sext_ln55_fu_211_p1 = i_0_reg_145;
  assign sub_ln53_fu_199_p2 = X_R_q0 - X_I_q0;
  assign temp_I_fu_227_p1 = zext_ln45_reg_251;
  assign temp_I_fu_227_p1_temp_0 = 1'b0 << 1'd2;
  assign temp_I_fu_227_p1_temp_1 = temp_I_fu_227_p1_temp_0 | temp_I_fu_227_p1;
  assign temp_I_fu_227_p1__temp0 = temp_I_fu_227_p1_temp_1;
  assign temp_I_fu_227_p2 = $signed(add_ln54_reg_290) * $signed(temp_I_fu_227_p1__temp0);
  assign temp_R_fu_223_p1 = zext_ln45_reg_251;
  assign temp_R_fu_223_p1_temp_2 = 1'b0 << 1'd2;
  assign temp_R_fu_223_p1_temp_3 = temp_R_fu_223_p1_temp_2 | temp_R_fu_223_p1;
  assign temp_R_fu_223_p1__temp0 = temp_R_fu_223_p1_temp_3;
  assign temp_R_fu_223_p2 = $signed(sub_ln53_reg_285) * $signed(temp_R_fu_223_p1__temp0);
  assign i_0_reg_145_temp_3 = i_0_reg_145 >> 1'd10;
  assign i_0_reg_145_temp_4 = i_0_reg_145_temp_3 & 22'd4194303;
  assign tmp_1_fu_171_p4 = i_0_reg_145_temp_4;
  assign zext_ln45_fu_155_p1 = c_reg_134;

  always @(posedge ap_clk) begin
    zext_ln45_reg_251 <= zext_ln45_reg_251 & 31'd7 | 31'd0;
  end


endmodule

