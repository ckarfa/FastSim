
module aes_func_call
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_idle,
  ap_ready,
  statemt1_address0,
  statemt1_ce0,
  statemt1_we0,
  statemt1_d0,
  statemt1_q0,
  round_val
);

  parameter ap_ST_fsm_state1 = 13'd1;
  parameter ap_ST_fsm_state2 = 13'd2;
  parameter ap_ST_fsm_state3 = 13'd4;
  parameter ap_ST_fsm_state4 = 13'd8;
  parameter ap_ST_fsm_state5 = 13'd16;
  parameter ap_ST_fsm_state6 = 13'd32;
  parameter ap_ST_fsm_state7 = 13'd64;
  parameter ap_ST_fsm_state8 = 13'd128;
  parameter ap_ST_fsm_state9 = 13'd256;
  parameter ap_ST_fsm_state10 = 13'd512;
  parameter ap_ST_fsm_state11 = 13'd1024;
  parameter ap_ST_fsm_state12 = 13'd2048;
  parameter ap_ST_fsm_state13 = 13'd4096;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [4:0] statemt1_address0;
  output statemt1_ce0;
  output statemt1_we0;
  output [31:0] statemt1_d0;
  input [31:0] statemt1_q0;
  input [31:0] round_val;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg [4:0] statemt1_address0;
  reg statemt1_ce0;
  reg statemt1_we0;
  reg [12:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [31:0] i_cast2_fu_136_p1;
  reg [31:0] i_cast2_reg_192;
  wire ap_CS_fsm_state2;
  wire [5:0] i_3_fu_147_p2;
  reg [5:0] i_3_reg_200;
  wire [0:0] exitcond1_fu_141_p2;
  wire [31:0] i_4_fu_169_p2;
  reg [31:0] i_4_reg_213;
  wire ap_CS_fsm_state7;
  wire [31:0] i_2_cast1_fu_175_p1;
  reg [31:0] i_2_cast1_reg_218;
  wire ap_CS_fsm_state12;
  wire [5:0] i_5_fu_186_p2;
  reg [5:0] i_5_reg_226;
  wire [0:0] exitcond_fu_180_p2;
  reg [4:0] statemt_1_address0;
  reg statemt_1_ce0;
  reg statemt_1_we0;
  reg [31:0] statemt_1_d0;
  wire [31:0] statemt_1_q0;
  reg [4:0] statemt_1_address1;
  reg statemt_1_ce1;
  reg statemt_1_we1;
  reg [31:0] statemt_1_d1;
  wire [31:0] statemt_1_q1;
  wire grp_MixColumn_AddRoundKe_fu_110_ap_start;
  wire grp_MixColumn_AddRoundKe_fu_110_ap_done;
  wire grp_MixColumn_AddRoundKe_fu_110_ap_idle;
  wire grp_MixColumn_AddRoundKe_fu_110_ap_ready;
  wire [4:0] grp_MixColumn_AddRoundKe_fu_110_statemt_address0;
  wire grp_MixColumn_AddRoundKe_fu_110_statemt_ce0;
  wire grp_MixColumn_AddRoundKe_fu_110_statemt_we0;
  wire [31:0] grp_MixColumn_AddRoundKe_fu_110_statemt_d0;
  wire [4:0] grp_MixColumn_AddRoundKe_fu_110_statemt_address1;
  wire grp_MixColumn_AddRoundKe_fu_110_statemt_ce1;
  wire grp_MixColumn_AddRoundKe_fu_110_statemt_we1;
  wire [31:0] grp_MixColumn_AddRoundKe_fu_110_statemt_d1;
  wire grp_ByteSub_ShiftRow_fu_119_ap_start;
  wire grp_ByteSub_ShiftRow_fu_119_ap_done;
  wire grp_ByteSub_ShiftRow_fu_119_ap_idle;
  wire grp_ByteSub_ShiftRow_fu_119_ap_ready;
  wire [4:0] grp_ByteSub_ShiftRow_fu_119_statemt_address0;
  wire grp_ByteSub_ShiftRow_fu_119_statemt_ce0;
  wire grp_ByteSub_ShiftRow_fu_119_statemt_we0;
  wire [31:0] grp_ByteSub_ShiftRow_fu_119_statemt_d0;
  wire [4:0] grp_ByteSub_ShiftRow_fu_119_statemt_address1;
  wire grp_ByteSub_ShiftRow_fu_119_statemt_ce1;
  wire grp_ByteSub_ShiftRow_fu_119_statemt_we1;
  wire [31:0] grp_ByteSub_ShiftRow_fu_119_statemt_d1;
  wire grp_AddRoundKey_fu_126_ap_start;
  wire grp_AddRoundKey_fu_126_ap_done;
  wire grp_AddRoundKey_fu_126_ap_idle;
  wire grp_AddRoundKey_fu_126_ap_ready;
  wire [4:0] grp_AddRoundKey_fu_126_statemt_address0;
  wire grp_AddRoundKey_fu_126_statemt_ce0;
  wire grp_AddRoundKey_fu_126_statemt_we0;
  wire [31:0] grp_AddRoundKey_fu_126_statemt_d0;
  wire [4:0] grp_AddRoundKey_fu_126_statemt_address1;
  wire grp_AddRoundKey_fu_126_statemt_ce1;
  wire grp_AddRoundKey_fu_126_statemt_we1;
  wire [31:0] grp_AddRoundKey_fu_126_statemt_d1;
  reg [31:0] grp_AddRoundKey_fu_126_n;
  reg [5:0] i_reg_76;
  wire ap_CS_fsm_state3;
  reg [31:0] i_1_reg_87;
  wire ap_CS_fsm_state4;
  wire ap_CS_fsm_state8;
  reg [5:0] i_2_reg_99;
  wire ap_CS_fsm_state11;
  wire ap_CS_fsm_state13;
  reg ap_reg_grp_MixColumn_AddRoundKe_fu_110_ap_start;
  reg ap_reg_grp_ByteSub_ShiftRow_fu_119_ap_start;
  wire ap_CS_fsm_state5;
  wire [0:0] tmp_1_fu_163_p2;
  wire ap_CS_fsm_state6;
  wire ap_CS_fsm_state9;
  reg ap_reg_grp_AddRoundKey_fu_126_ap_start;
  wire ap_CS_fsm_state10;
  wire [31:0] tmp_fu_157_p2;
  reg [12:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 13'd1;
    #0 ap_reg_grp_MixColumn_AddRoundKe_fu_110_ap_start = 1'b0;
    #0 ap_reg_grp_ByteSub_ShiftRow_fu_119_ap_start = 1'b0;
    #0 ap_reg_grp_AddRoundKey_fu_126_ap_start = 1'b0;
  end


  MixColumn_AddRounfYi
  #(
    .DataWidth(32),
    .AddressRange(32),
    .AddressWidth(5)
  )
  statemt_1_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(statemt_1_address0),
    .ce0(statemt_1_ce0),
    .we0(statemt_1_we0),
    .d0(statemt_1_d0),
    .q0(statemt_1_q0),
    .address1(statemt_1_address1),
    .ce1(statemt_1_ce1),
    .we1(statemt_1_we1),
    .d1(statemt_1_d1),
    .q1(statemt_1_q1)
  );


  MixColumn_AddRoundKe
  grp_MixColumn_AddRoundKe_fu_110
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_MixColumn_AddRoundKe_fu_110_ap_start),
    .ap_done(grp_MixColumn_AddRoundKe_fu_110_ap_done),
    .ap_idle(grp_MixColumn_AddRoundKe_fu_110_ap_idle),
    .ap_ready(grp_MixColumn_AddRoundKe_fu_110_ap_ready),
    .statemt_address0(grp_MixColumn_AddRoundKe_fu_110_statemt_address0),
    .statemt_ce0(grp_MixColumn_AddRoundKe_fu_110_statemt_ce0),
    .statemt_we0(grp_MixColumn_AddRoundKe_fu_110_statemt_we0),
    .statemt_d0(grp_MixColumn_AddRoundKe_fu_110_statemt_d0),
    .statemt_q0(statemt_1_q0),
    .statemt_address1(grp_MixColumn_AddRoundKe_fu_110_statemt_address1),
    .statemt_ce1(grp_MixColumn_AddRoundKe_fu_110_statemt_ce1),
    .statemt_we1(grp_MixColumn_AddRoundKe_fu_110_statemt_we1),
    .statemt_d1(grp_MixColumn_AddRoundKe_fu_110_statemt_d1),
    .statemt_q1(statemt_1_q1),
    .n(i_1_reg_87)
  );


  ByteSub_ShiftRow
  grp_ByteSub_ShiftRow_fu_119
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_ByteSub_ShiftRow_fu_119_ap_start),
    .ap_done(grp_ByteSub_ShiftRow_fu_119_ap_done),
    .ap_idle(grp_ByteSub_ShiftRow_fu_119_ap_idle),
    .ap_ready(grp_ByteSub_ShiftRow_fu_119_ap_ready),
    .statemt_address0(grp_ByteSub_ShiftRow_fu_119_statemt_address0),
    .statemt_ce0(grp_ByteSub_ShiftRow_fu_119_statemt_ce0),
    .statemt_we0(grp_ByteSub_ShiftRow_fu_119_statemt_we0),
    .statemt_d0(grp_ByteSub_ShiftRow_fu_119_statemt_d0),
    .statemt_q0(statemt_1_q0),
    .statemt_address1(grp_ByteSub_ShiftRow_fu_119_statemt_address1),
    .statemt_ce1(grp_ByteSub_ShiftRow_fu_119_statemt_ce1),
    .statemt_we1(grp_ByteSub_ShiftRow_fu_119_statemt_we1),
    .statemt_d1(grp_ByteSub_ShiftRow_fu_119_statemt_d1),
    .statemt_q1(statemt_1_q1)
  );


  AddRoundKey
  grp_AddRoundKey_fu_126
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_AddRoundKey_fu_126_ap_start),
    .ap_done(grp_AddRoundKey_fu_126_ap_done),
    .ap_idle(grp_AddRoundKey_fu_126_ap_idle),
    .ap_ready(grp_AddRoundKey_fu_126_ap_ready),
    .statemt_address0(grp_AddRoundKey_fu_126_statemt_address0),
    .statemt_ce0(grp_AddRoundKey_fu_126_statemt_ce0),
    .statemt_we0(grp_AddRoundKey_fu_126_statemt_we0),
    .statemt_d0(grp_AddRoundKey_fu_126_statemt_d0),
    .statemt_q0(statemt_1_q0),
    .statemt_address1(grp_AddRoundKey_fu_126_statemt_address1),
    .statemt_ce1(grp_AddRoundKey_fu_126_statemt_ce1),
    .statemt_we1(grp_AddRoundKey_fu_126_statemt_we1),
    .statemt_d1(grp_AddRoundKey_fu_126_statemt_d1),
    .statemt_q1(statemt_1_q1),
    .n(grp_AddRoundKey_fu_126_n)
  );


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_reg_grp_AddRoundKey_fu_126_ap_start <= 1'b0;
    end else
      if((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_141_p2 == 1'd1) | (1'b1 == ap_CS_fsm_state10)) begin
        ap_reg_grp_AddRoundKey_fu_126_ap_start <= 1'b1;
      end else if(1'b1 == grp_AddRoundKey_fu_126_ap_ready) begin
        ap_reg_grp_AddRoundKey_fu_126_ap_start <= 1'b0;
      end 
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_reg_grp_ByteSub_ShiftRow_fu_119_ap_start <= 1'b0;
    end else
      if((1'b1 == ap_CS_fsm_state5) & (1'd0 == tmp_1_fu_163_p2) | (1'b1 == ap_CS_fsm_state5) & (tmp_1_fu_163_p2 == 1'd1)) begin
        ap_reg_grp_ByteSub_ShiftRow_fu_119_ap_start <= 1'b1;
      end else if(1'b1 == grp_ByteSub_ShiftRow_fu_119_ap_ready) begin
        ap_reg_grp_ByteSub_ShiftRow_fu_119_ap_start <= 1'b0;
      end 
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_reg_grp_MixColumn_AddRoundKe_fu_110_ap_start <= 1'b0;
    end else
      if(1'b1 == ap_CS_fsm_state7) begin
        ap_reg_grp_MixColumn_AddRoundKe_fu_110_ap_start <= 1'b1;
      end else if(1'b1 == grp_MixColumn_AddRoundKe_fu_110_ap_ready) begin
        ap_reg_grp_MixColumn_AddRoundKe_fu_110_ap_start <= 1'b0;
      end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state8) & (grp_MixColumn_AddRoundKe_fu_110_ap_done == 1'b1)) begin
      i_1_reg_87 <= i_4_reg_213;
    end else if((1'b1 == ap_CS_fsm_state4) & (grp_AddRoundKey_fu_126_ap_done == 1'b1)) begin
      i_1_reg_87 <= 32'd1;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state13) begin
      i_2_reg_99 <= i_5_reg_226;
    end else if((grp_AddRoundKey_fu_126_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state11)) begin
      i_2_reg_99 <= 6'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      i_reg_76 <= i_3_reg_200;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      i_reg_76 <= 6'd0;
    end 
  end

  assign i_2_cast1_fu_175_p1_temp_70 = i_2_cast1_fu_175_p1 & 6'd63;
  assign i_2_cast1_reg_218_temp_71 = i_2_cast1_reg_218 & 6'd4294967232;
  assign i_2_cast1_fu_175_p1_temp_70_temp_72 = i_2_cast1_fu_175_p1_temp_70 | i_2_cast1_reg_218_temp_71;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state12) begin
      i_2_cast1_reg_218 <= i_2_cast1_fu_175_p1_temp_70_temp_72;
      i_5_reg_226 <= i_5_fu_186_p2;
    end 
  end

  assign i_cast2_fu_136_p1_temp_73 = i_cast2_fu_136_p1 & 6'd63;
  assign i_cast2_reg_192_temp_74 = i_cast2_reg_192 & 6'd4294967232;
  assign i_cast2_fu_136_p1_temp_73_temp_75 = i_cast2_fu_136_p1_temp_73 | i_cast2_reg_192_temp_74;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      i_3_reg_200 <= i_3_fu_147_p2;
      i_cast2_reg_192 <= i_cast2_fu_136_p1_temp_73_temp_75;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state7) begin
      i_4_reg_213 <= i_4_fu_169_p2;
    end 
  end


  always @(*) begin
    if((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1) | (1'b1 == ap_CS_fsm_state12) & (exitcond_fu_180_p2 == 1'd1)) begin
      ap_done = 1'b1;
    end else begin
      ap_done = 1'b0;
    end
  end


  always @(*) begin
    if((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1)) begin
      ap_idle = 1'b1;
    end else begin
      ap_idle = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state12) & (exitcond_fu_180_p2 == 1'd1)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state11) begin
      grp_AddRoundKey_fu_126_n = i_1_reg_87;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      grp_AddRoundKey_fu_126_n = 32'd0;
    end else begin
      grp_AddRoundKey_fu_126_n = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state13) begin
      statemt1_address0 = i_2_cast1_reg_218;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt1_address0 = i_cast2_fu_136_p1;
    end else begin
      statemt1_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state13)) begin
      statemt1_ce0 = 1'b1;
    end else begin
      statemt1_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state13) begin
      statemt1_we0 = 1'b1;
    end else begin
      statemt1_we0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state12) begin
      statemt_1_address0 = i_2_cast1_fu_175_p1;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_1_address0 = i_cast2_reg_192;
    end else if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state11)) begin
      statemt_1_address0 = grp_AddRoundKey_fu_126_statemt_address0;
    end else if((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state9)) begin
      statemt_1_address0 = grp_ByteSub_ShiftRow_fu_119_statemt_address0;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_1_address0 = grp_MixColumn_AddRoundKe_fu_110_statemt_address0;
    end else begin
      statemt_1_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state11)) begin
      statemt_1_address1 = grp_AddRoundKey_fu_126_statemt_address1;
    end else if((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state9)) begin
      statemt_1_address1 = grp_ByteSub_ShiftRow_fu_119_statemt_address1;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_1_address1 = grp_MixColumn_AddRoundKe_fu_110_statemt_address1;
    end else begin
      statemt_1_address1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state3)) begin
      statemt_1_ce0 = 1'b1;
    end else if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state11)) begin
      statemt_1_ce0 = grp_AddRoundKey_fu_126_statemt_ce0;
    end else if((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state9)) begin
      statemt_1_ce0 = grp_ByteSub_ShiftRow_fu_119_statemt_ce0;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_1_ce0 = grp_MixColumn_AddRoundKe_fu_110_statemt_ce0;
    end else begin
      statemt_1_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state11)) begin
      statemt_1_ce1 = grp_AddRoundKey_fu_126_statemt_ce1;
    end else if((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state9)) begin
      statemt_1_ce1 = grp_ByteSub_ShiftRow_fu_119_statemt_ce1;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_1_ce1 = grp_MixColumn_AddRoundKe_fu_110_statemt_ce1;
    end else begin
      statemt_1_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      statemt_1_d0 = statemt1_q0;
    end else if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state11)) begin
      statemt_1_d0 = grp_AddRoundKey_fu_126_statemt_d0;
    end else if((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state9)) begin
      statemt_1_d0 = grp_ByteSub_ShiftRow_fu_119_statemt_d0;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_1_d0 = grp_MixColumn_AddRoundKe_fu_110_statemt_d0;
    end else begin
      statemt_1_d0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state11)) begin
      statemt_1_d1 = grp_AddRoundKey_fu_126_statemt_d1;
    end else if((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state9)) begin
      statemt_1_d1 = grp_ByteSub_ShiftRow_fu_119_statemt_d1;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_1_d1 = grp_MixColumn_AddRoundKe_fu_110_statemt_d1;
    end else begin
      statemt_1_d1 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      statemt_1_we0 = 1'b1;
    end else if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state11)) begin
      statemt_1_we0 = grp_AddRoundKey_fu_126_statemt_we0;
    end else if((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state9)) begin
      statemt_1_we0 = grp_ByteSub_ShiftRow_fu_119_statemt_we0;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_1_we0 = grp_MixColumn_AddRoundKe_fu_110_statemt_we0;
    end else begin
      statemt_1_we0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state11)) begin
      statemt_1_we1 = grp_AddRoundKey_fu_126_statemt_we1;
    end else if((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state9)) begin
      statemt_1_we1 = grp_ByteSub_ShiftRow_fu_119_statemt_we1;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_1_we1 = grp_MixColumn_AddRoundKe_fu_110_statemt_we1;
    end else begin
      statemt_1_we1 = 1'b0;
    end
  end


  always @(*) begin
    case(ap_CS_fsm)
      ap_ST_fsm_state1: begin
        if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end
      end
      ap_ST_fsm_state2: begin
        if((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_141_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state4;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        ap_NS_fsm = ap_ST_fsm_state2;
      end
      ap_ST_fsm_state4: begin
        if((1'b1 == ap_CS_fsm_state4) & (grp_AddRoundKey_fu_126_ap_done == 1'b1)) begin
          ap_NS_fsm = ap_ST_fsm_state5;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state4;
        end
      end
      ap_ST_fsm_state5: begin
        if((1'b1 == ap_CS_fsm_state5) & (tmp_1_fu_163_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state9;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state6;
        end
      end
      ap_ST_fsm_state6: begin
        if((1'b1 == ap_CS_fsm_state6) & (grp_ByteSub_ShiftRow_fu_119_ap_done == 1'b1)) begin
          ap_NS_fsm = ap_ST_fsm_state7;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state6;
        end
      end
      ap_ST_fsm_state7: begin
        ap_NS_fsm = ap_ST_fsm_state8;
      end
      ap_ST_fsm_state8: begin
        if((1'b1 == ap_CS_fsm_state8) & (grp_MixColumn_AddRoundKe_fu_110_ap_done == 1'b1)) begin
          ap_NS_fsm = ap_ST_fsm_state5;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state8;
        end
      end
      ap_ST_fsm_state9: begin
        if((1'b1 == ap_CS_fsm_state9) & (grp_ByteSub_ShiftRow_fu_119_ap_done == 1'b1)) begin
          ap_NS_fsm = ap_ST_fsm_state10;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state9;
        end
      end
      ap_ST_fsm_state10: begin
        ap_NS_fsm = ap_ST_fsm_state11;
      end
      ap_ST_fsm_state11: begin
        if((grp_AddRoundKey_fu_126_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state11)) begin
          ap_NS_fsm = ap_ST_fsm_state12;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state11;
        end
      end
      ap_ST_fsm_state12: begin
        if((1'b1 == ap_CS_fsm_state12) & (exitcond_fu_180_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state13;
        end
      end
      ap_ST_fsm_state13: begin
        ap_NS_fsm = ap_ST_fsm_state12;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];
  assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];
  assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];
  assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];
  assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];
  assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];
  assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];
  assign exitcond1_fu_141_p2 = (i_reg_76 == 6'd32)? 1'b1 : 1'b0;
  assign exitcond_fu_180_p2 = (i_2_reg_99 == 6'd32)? 1'b1 : 1'b0;
  assign grp_AddRoundKey_fu_126_ap_start = ap_reg_grp_AddRoundKey_fu_126_ap_start;
  assign grp_ByteSub_ShiftRow_fu_119_ap_start = ap_reg_grp_ByteSub_ShiftRow_fu_119_ap_start;
  assign grp_MixColumn_AddRoundKe_fu_110_ap_start = ap_reg_grp_MixColumn_AddRoundKe_fu_110_ap_start;
  assign i_2_cast1_fu_175_p1 = i_2_reg_99;
  assign i_3_fu_147_p2 = i_reg_76 + 6'd1;
  assign i_4_fu_169_p2 = i_1_reg_87 + 32'd1;
  assign i_5_fu_186_p2 = i_2_reg_99 + 6'd1;
  assign i_cast2_fu_136_p1 = i_reg_76;
  assign statemt1_d0 = statemt_1_q0;
  assign tmp_1_fu_163_p2 = ($signed(i_1_reg_87) > $signed(tmp_fu_157_p2))? 1'b1 : 1'b0;
  assign tmp_fu_157_p2 = round_val + 32'd9;

  always @(posedge ap_clk) begin
    i_cast2_reg_192 <= i_cast2_reg_192 & 31'd63;
    i_2_cast1_reg_218 <= i_2_cast1_reg_218 & 31'd63;
  end


endmodule

