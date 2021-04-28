
module main_function
(
  A_address0,
  A_ce0,
  A_d0,
  A_q0,
  A_we0,
  A_address1,
  A_ce1,
  A_d1,
  A_q1,
  A_we1,
  F_address0,
  F_ce0,
  F_d0,
  F_q0,
  F_we0,
  F_address1,
  F_ce1,
  F_d1,
  F_q1,
  F_we1,
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_ready,
  ap_idle
);

  output [2:0] A_address0;
  output A_ce0;
  output [31:0] A_d0;
  input [31:0] A_q0;
  output A_we0;
  output [2:0] A_address1;
  output A_ce1;
  output [31:0] A_d1;
  input [31:0] A_q1;
  output A_we1;
  output [2:0] F_address0;
  output F_ce0;
  output [31:0] F_d0;
  input [31:0] F_q0;
  output F_we0;
  output [2:0] F_address1;
  output F_ce1;
  output [31:0] F_d1;
  input [31:0] F_q1;
  output F_we1;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_ready;
  output ap_idle;
  wire module_1_U0_ap_start;
  wire module_1_U0_start_full_n;
  wire module_1_U0_ap_done;
  wire module_1_U0_ap_continue;
  wire module_1_U0_ap_idle;
  wire module_1_U0_ap_ready;
  wire module_1_U0_start_out;
  wire module_1_U0_start_write;
  wire [2:0] module_1_U0_A_address0;
  wire module_1_U0_A_ce0;
  wire [31:0] module_1_U0_B_din;
  wire module_1_U0_B_write;
  wire [31:0] module_1_U0_C_din;
  wire module_1_U0_C_write;
  wire module_2_U0_ap_start;
  wire module_2_U0_ap_done;
  wire module_2_U0_ap_continue;
  wire module_2_U0_ap_idle;
  wire module_2_U0_ap_ready;
  wire module_2_U0_start_out;
  wire module_2_U0_start_write;
  wire module_2_U0_B_read;
  wire [31:0] module_2_U0_D_din;
  wire module_2_U0_D_write;
  wire module_3_U0_ap_start;
  wire module_3_U0_ap_done;
  wire module_3_U0_ap_continue;
  wire module_3_U0_ap_idle;
  wire module_3_U0_ap_ready;
  wire module_3_U0_C_read;
  wire [31:0] module_3_U0_E_din;
  wire module_3_U0_E_write;
  wire module_4_U0_ap_start;
  wire module_4_U0_ap_done;
  wire module_4_U0_ap_continue;
  wire module_4_U0_ap_idle;
  wire module_4_U0_ap_ready;
  wire module_4_U0_D_read;
  wire module_4_U0_E_read;
  wire [2:0] module_4_U0_F_address0;
  wire module_4_U0_F_ce0;
  wire module_4_U0_F_we0;
  wire [31:0] module_4_U0_F_d0;
  wire ap_sync_continue;
  wire B_full_n;
  wire [31:0] B_dout;
  wire B_empty_n;
  wire C_full_n;
  wire [31:0] C_dout;
  wire C_empty_n;
  wire D_full_n;
  wire [31:0] D_dout;
  wire D_empty_n;
  wire E_full_n;
  wire [31:0] E_dout;
  wire E_empty_n;
  wire ap_sync_done;
  wire ap_sync_ready;
  wire [0:0] start_for_module_2_U0_din;
  wire start_for_module_2_U0_full_n;
  wire [0:0] start_for_module_2_U0_dout;
  wire start_for_module_2_U0_empty_n;
  wire [0:0] start_for_module_3_U0_din;
  wire start_for_module_3_U0_full_n;
  wire [0:0] start_for_module_3_U0_dout;
  wire start_for_module_3_U0_empty_n;
  wire [0:0] start_for_module_4_U0_din;
  wire start_for_module_4_U0_full_n;
  wire [0:0] start_for_module_4_U0_dout;
  wire start_for_module_4_U0_empty_n;
  wire module_3_U0_start_full_n;
  wire module_3_U0_start_write;
  wire module_4_U0_start_full_n;
  wire module_4_U0_start_write;

  module_1
  module_1_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(module_1_U0_ap_start),
    .start_full_n(module_1_U0_start_full_n),
    .ap_done(module_1_U0_ap_done),
    .ap_continue(module_1_U0_ap_continue),
    .ap_idle(module_1_U0_ap_idle),
    .ap_ready(module_1_U0_ap_ready),
    .start_out(module_1_U0_start_out),
    .start_write(module_1_U0_start_write),
    .A_address0(module_1_U0_A_address0),
    .A_ce0(module_1_U0_A_ce0),
    .A_q0(A_q0),
    .B_din(module_1_U0_B_din),
    .B_full_n(B_full_n),
    .B_write(module_1_U0_B_write),
    .C_din(module_1_U0_C_din),
    .C_full_n(C_full_n),
    .C_write(module_1_U0_C_write)
  );


  module_2
  module_2_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(module_2_U0_ap_start),
    .start_full_n(start_for_module_4_U0_full_n),
    .ap_done(module_2_U0_ap_done),
    .ap_continue(module_2_U0_ap_continue),
    .ap_idle(module_2_U0_ap_idle),
    .ap_ready(module_2_U0_ap_ready),
    .start_out(module_2_U0_start_out),
    .start_write(module_2_U0_start_write),
    .B_dout(B_dout),
    .B_empty_n(B_empty_n),
    .B_read(module_2_U0_B_read),
    .D_din(module_2_U0_D_din),
    .D_full_n(D_full_n),
    .D_write(module_2_U0_D_write)
  );


  module_3
  module_3_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(module_3_U0_ap_start),
    .ap_done(module_3_U0_ap_done),
    .ap_continue(module_3_U0_ap_continue),
    .ap_idle(module_3_U0_ap_idle),
    .ap_ready(module_3_U0_ap_ready),
    .C_dout(C_dout),
    .C_empty_n(C_empty_n),
    .C_read(module_3_U0_C_read),
    .E_din(module_3_U0_E_din),
    .E_full_n(E_full_n),
    .E_write(module_3_U0_E_write)
  );


  module_4
  module_4_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(module_4_U0_ap_start),
    .ap_done(module_4_U0_ap_done),
    .ap_continue(module_4_U0_ap_continue),
    .ap_idle(module_4_U0_ap_idle),
    .ap_ready(module_4_U0_ap_ready),
    .D_dout(D_dout),
    .D_empty_n(D_empty_n),
    .D_read(module_4_U0_D_read),
    .E_dout(E_dout),
    .E_empty_n(E_empty_n),
    .E_read(module_4_U0_E_read),
    .F_address0(module_4_U0_F_address0),
    .F_ce0(module_4_U0_F_ce0),
    .F_we0(module_4_U0_F_we0),
    .F_d0(module_4_U0_F_d0)
  );


  fifo_w32_d5_A
  B_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(module_1_U0_B_din),
    .if_full_n(B_full_n),
    .if_write(module_1_U0_B_write),
    .if_dout(B_dout),
    .if_empty_n(B_empty_n),
    .if_read(module_2_U0_B_read)
  );


  fifo_w32_d5_A
  C_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(module_1_U0_C_din),
    .if_full_n(C_full_n),
    .if_write(module_1_U0_C_write),
    .if_dout(C_dout),
    .if_empty_n(C_empty_n),
    .if_read(module_3_U0_C_read)
  );


  fifo_w32_d5_A
  D_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(module_2_U0_D_din),
    .if_full_n(D_full_n),
    .if_write(module_2_U0_D_write),
    .if_dout(D_dout),
    .if_empty_n(D_empty_n),
    .if_read(module_4_U0_D_read)
  );


  fifo_w32_d5_A
  E_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(module_3_U0_E_din),
    .if_full_n(E_full_n),
    .if_write(module_3_U0_E_write),
    .if_dout(E_dout),
    .if_empty_n(E_empty_n),
    .if_read(module_4_U0_E_read)
  );


  start_for_module_bkb
  start_for_module_bkb_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(start_for_module_2_U0_din),
    .if_full_n(start_for_module_2_U0_full_n),
    .if_write(module_1_U0_start_write),
    .if_dout(start_for_module_2_U0_dout),
    .if_empty_n(start_for_module_2_U0_empty_n),
    .if_read(module_2_U0_ap_ready)
  );


  start_for_module_cud
  start_for_module_cud_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(start_for_module_3_U0_din),
    .if_full_n(start_for_module_3_U0_full_n),
    .if_write(module_1_U0_start_write),
    .if_dout(start_for_module_3_U0_dout),
    .if_empty_n(start_for_module_3_U0_empty_n),
    .if_read(module_3_U0_ap_ready)
  );


  start_for_module_dEe
  start_for_module_dEe_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(start_for_module_4_U0_din),
    .if_full_n(start_for_module_4_U0_full_n),
    .if_write(module_2_U0_start_write),
    .if_dout(start_for_module_4_U0_dout),
    .if_empty_n(start_for_module_4_U0_empty_n),
    .if_read(module_4_U0_ap_ready)
  );

  assign A_address0 = module_1_U0_A_address0;
  assign A_address1 = 3'd0;
  assign A_ce0 = module_1_U0_A_ce0;
  assign A_ce1 = 1'b0;
  assign A_d0 = 32'd0;
  assign A_d1 = 32'd0;
  assign A_we0 = 1'b0;
  assign A_we1 = 1'b0;
  assign F_address0 = module_4_U0_F_address0;
  assign F_address1 = 3'd0;
  assign F_ce0 = module_4_U0_F_ce0;
  assign F_ce1 = 1'b0;
  assign F_d0 = module_4_U0_F_d0;
  assign F_d1 = 32'd0;
  assign F_we0 = module_4_U0_F_we0;
  assign F_we1 = 1'b0;
  assign ap_done = module_4_U0_ap_done;
  assign ap_idle = module_4_U0_ap_idle & module_3_U0_ap_idle & module_2_U0_ap_idle & module_1_U0_ap_idle;
  assign ap_ready = module_1_U0_ap_ready;
  assign ap_sync_continue = 1'b1;
  assign ap_sync_done = module_4_U0_ap_done;
  assign ap_sync_ready = module_1_U0_ap_ready;
  assign module_1_U0_ap_continue = 1'b1;
  assign module_1_U0_ap_start = ap_start;
  assign module_1_U0_start_full_n = start_for_module_3_U0_full_n & start_for_module_2_U0_full_n;
  assign module_2_U0_ap_continue = 1'b1;
  assign module_2_U0_ap_start = start_for_module_2_U0_empty_n;
  assign module_3_U0_ap_continue = 1'b1;
  assign module_3_U0_ap_start = start_for_module_3_U0_empty_n;
  assign module_3_U0_start_full_n = 1'b1;
  assign module_3_U0_start_write = 1'b0;
  assign module_4_U0_ap_continue = 1'b1;
  assign module_4_U0_ap_start = start_for_module_4_U0_empty_n;
  assign module_4_U0_start_full_n = 1'b1;
  assign module_4_U0_start_write = 1'b0;
  assign start_for_module_2_U0_din = 1'b1;
  assign start_for_module_3_U0_din = 1'b1;
  assign start_for_module_4_U0_din = 1'b1;

endmodule

