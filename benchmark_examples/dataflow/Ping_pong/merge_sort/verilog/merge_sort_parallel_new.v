
module merge_sort_parallel
(
  ap_clk,
  ap_rst,
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
  B_address0,
  B_ce0,
  B_d0,
  B_q0,
  B_we0,
  B_address1,
  B_ce1,
  B_d1,
  B_q1,
  B_we1,
  ap_start,
  ap_done,
  ap_ready,
  ap_idle
);

  input ap_clk;
  input ap_rst;
  output [3:0] A_address0;
  output A_ce0;
  output [31:0] A_d0;
  input [31:0] A_q0;
  output A_we0;
  output [3:0] A_address1;
  output A_ce1;
  output [31:0] A_d1;
  input [31:0] A_q1;
  output A_we1;
  output [3:0] B_address0;
  output B_ce0;
  output [31:0] B_d0;
  input [31:0] B_q0;
  output B_we0;
  output [3:0] B_address1;
  output B_ce1;
  output [31:0] B_d1;
  input [31:0] B_q1;
  output B_we1;
  input ap_start;
  output ap_done;
  output ap_ready;
  output ap_idle;
  wire [31:0] input1_i_q0;
  wire [31:0] input1_i_q1;
  wire [31:0] input1_t_q0;
  wire [31:0] input1_t_q1;
  wire [31:0] input2_i_q0;
  wire [31:0] input2_i_q1;
  wire [31:0] input2_t_q0;
  wire [31:0] input2_t_q1;
  wire [31:0] input3_i_q0;
  wire [31:0] input3_i_q1;
  wire [31:0] input3_t_q0;
  wire [31:0] input3_t_q1;
  wire merge1_U0_ap_start;
  wire merge1_U0_ap_done;
  wire merge1_U0_ap_continue;
  wire merge1_U0_ap_idle;
  wire merge1_U0_ap_ready;
  wire [3:0] merge1_U0_A_address0;
  wire merge1_U0_A_ce0;
  wire [3:0] merge1_U0_A_address1;
  wire merge1_U0_A_ce1;
  wire [3:0] merge1_U0_input1_address0;
  wire merge1_U0_input1_ce0;
  wire merge1_U0_input1_we0;
  wire [31:0] merge1_U0_input1_d0;
  wire ap_channel_done_input1;
  wire merge1_U0_input1_full_n;
  wire merge2_U0_ap_start;
  wire merge2_U0_ap_done;
  wire merge2_U0_ap_continue;
  wire merge2_U0_ap_idle;
  wire merge2_U0_ap_ready;
  wire [3:0] merge2_U0_input1_address0;
  wire merge2_U0_input1_ce0;
  wire [3:0] merge2_U0_input1_address1;
  wire merge2_U0_input1_ce1;
  wire [3:0] merge2_U0_input2_address0;
  wire merge2_U0_input2_ce0;
  wire merge2_U0_input2_we0;
  wire [31:0] merge2_U0_input2_d0;
  wire ap_channel_done_input2;
  wire merge2_U0_input2_full_n;
  wire merge3_U0_ap_start;
  wire merge3_U0_ap_done;
  wire merge3_U0_ap_continue;
  wire merge3_U0_ap_idle;
  wire merge3_U0_ap_ready;
  wire [3:0] merge3_U0_input2_address0;
  wire merge3_U0_input2_ce0;
  wire [3:0] merge3_U0_input2_address1;
  wire merge3_U0_input2_ce1;
  wire [3:0] merge3_U0_input3_address0;
  wire merge3_U0_input3_ce0;
  wire merge3_U0_input3_we0;
  wire [31:0] merge3_U0_input3_d0;
  wire ap_channel_done_input3;
  wire merge3_U0_input3_full_n;
  wire merge4_U0_ap_start;
  wire merge4_U0_ap_done;
  wire merge4_U0_ap_continue;
  wire merge4_U0_ap_idle;
  wire merge4_U0_ap_ready;
  wire [3:0] merge4_U0_input3_address0;
  wire merge4_U0_input3_ce0;
  wire [3:0] merge4_U0_input3_address1;
  wire merge4_U0_input3_ce1;
  wire [3:0] merge4_U0_B_address0;
  wire merge4_U0_B_ce0;
  wire merge4_U0_B_we0;
  wire [31:0] merge4_U0_B_d0;
  wire ap_sync_continue;
  wire input1_i_full_n;
  wire input1_t_empty_n;
  wire [31:0] input1_t_d1;
  wire input1_t_we1;
  wire input2_i_full_n;
  wire input2_t_empty_n;
  wire [31:0] input2_t_d1;
  wire input2_t_we1;
  wire input3_i_full_n;
  wire input3_t_empty_n;
  wire [31:0] input3_t_d1;
  wire input3_t_we1;
  wire ap_sync_done;
  wire ap_sync_ready;
  wire merge1_U0_start_full_n;
  wire merge1_U0_start_write;
  wire merge2_U0_start_full_n;
  wire merge2_U0_start_write;
  wire merge3_U0_start_full_n;
  wire merge3_U0_start_write;
  wire merge4_U0_start_full_n;
  wire merge4_U0_start_write;

  merge_sort_parallbkb
  #(
    .DataWidth(32),
    .AddressRange(16),
    .AddressWidth(4)
  )
  input1_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(merge1_U0_input1_address0),
    .i_ce0(merge1_U0_input1_ce0),
    .i_we0(merge1_U0_input1_we0),
    .i_d0(merge1_U0_input1_d0),
    .i_q0(input1_i_q0),
    .i_address1(4'd0),
    .i_ce1(1'b0),
    .i_q1(input1_i_q1),
    .t_address0(merge2_U0_input1_address0),
    .t_ce0(merge2_U0_input1_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(input1_t_q0),
    .t_address1(merge2_U0_input1_address1),
    .t_ce1(merge2_U0_input1_ce1),
    .t_q1(input1_t_q1),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(input1_i_full_n),
    .i_write(merge1_U0_ap_done),
    .t_empty_n(input1_t_empty_n),
    .t_read(merge2_U0_ap_ready)
  );


  merge_sort_parallbkb
  #(
    .DataWidth(32),
    .AddressRange(16),
    .AddressWidth(4)
  )
  input2_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(merge2_U0_input2_address0),
    .i_ce0(merge2_U0_input2_ce0),
    .i_we0(merge2_U0_input2_we0),
    .i_d0(merge2_U0_input2_d0),
    .i_q0(input2_i_q0),
    .i_address1(4'd0),
    .i_ce1(1'b0),
    .i_q1(input2_i_q1),
    .t_address0(merge3_U0_input2_address0),
    .t_ce0(merge3_U0_input2_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(input2_t_q0),
    .t_address1(merge3_U0_input2_address1),
    .t_ce1(merge3_U0_input2_ce1),
    .t_q1(input2_t_q1),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(input2_i_full_n),
    .i_write(merge2_U0_ap_done),
    .t_empty_n(input2_t_empty_n),
    .t_read(merge3_U0_ap_ready)
  );


  merge_sort_parallbkb
  #(
    .DataWidth(32),
    .AddressRange(16),
    .AddressWidth(4)
  )
  input3_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(merge3_U0_input3_address0),
    .i_ce0(merge3_U0_input3_ce0),
    .i_we0(merge3_U0_input3_we0),
    .i_d0(merge3_U0_input3_d0),
    .i_q0(input3_i_q0),
    .i_address1(4'd0),
    .i_ce1(1'b0),
    .i_q1(input3_i_q1),
    .t_address0(merge4_U0_input3_address0),
    .t_ce0(merge4_U0_input3_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(input3_t_q0),
    .t_address1(merge4_U0_input3_address1),
    .t_ce1(merge4_U0_input3_ce1),
    .t_q1(input3_t_q1),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(input3_i_full_n),
    .i_write(merge3_U0_ap_done),
    .t_empty_n(input3_t_empty_n),
    .t_read(merge4_U0_ap_ready)
  );


  merge1
  merge1_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(merge1_U0_ap_start),
    .ap_done(merge1_U0_ap_done),
    .ap_continue(merge1_U0_ap_continue),
    .ap_idle(merge1_U0_ap_idle),
    .ap_ready(merge1_U0_ap_ready),
    .A_address0(merge1_U0_A_address0),
    .A_ce0(merge1_U0_A_ce0),
    .A_q0(A_q0),
    .A_address1(merge1_U0_A_address1),
    .A_ce1(merge1_U0_A_ce1),
    .A_q1(A_q1),
    .input1_address0(merge1_U0_input1_address0),
    .input1_ce0(merge1_U0_input1_ce0),
    .input1_we0(merge1_U0_input1_we0),
    .input1_d0(merge1_U0_input1_d0)
  );


  merge2
  merge2_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(merge2_U0_ap_start),
    .ap_done(merge2_U0_ap_done),
    .ap_continue(merge2_U0_ap_continue),
    .ap_idle(merge2_U0_ap_idle),
    .ap_ready(merge2_U0_ap_ready),
    .input1_address0(merge2_U0_input1_address0),
    .input1_ce0(merge2_U0_input1_ce0),
    .input1_q0(input1_t_q0),
    .input1_address1(merge2_U0_input1_address1),
    .input1_ce1(merge2_U0_input1_ce1),
    .input1_q1(input1_t_q1),
    .input2_address0(merge2_U0_input2_address0),
    .input2_ce0(merge2_U0_input2_ce0),
    .input2_we0(merge2_U0_input2_we0),
    .input2_d0(merge2_U0_input2_d0)
  );


  merge3
  merge3_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(merge3_U0_ap_start),
    .ap_done(merge3_U0_ap_done),
    .ap_continue(merge3_U0_ap_continue),
    .ap_idle(merge3_U0_ap_idle),
    .ap_ready(merge3_U0_ap_ready),
    .input2_address0(merge3_U0_input2_address0),
    .input2_ce0(merge3_U0_input2_ce0),
    .input2_q0(input2_t_q0),
    .input2_address1(merge3_U0_input2_address1),
    .input2_ce1(merge3_U0_input2_ce1),
    .input2_q1(input2_t_q1),
    .input3_address0(merge3_U0_input3_address0),
    .input3_ce0(merge3_U0_input3_ce0),
    .input3_we0(merge3_U0_input3_we0),
    .input3_d0(merge3_U0_input3_d0)
  );


  merge4
  merge4_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(merge4_U0_ap_start),
    .ap_done(merge4_U0_ap_done),
    .ap_continue(merge4_U0_ap_continue),
    .ap_idle(merge4_U0_ap_idle),
    .ap_ready(merge4_U0_ap_ready),
    .input3_address0(merge4_U0_input3_address0),
    .input3_ce0(merge4_U0_input3_ce0),
    .input3_q0(input3_t_q0),
    .input3_address1(merge4_U0_input3_address1),
    .input3_ce1(merge4_U0_input3_ce1),
    .input3_q1(input3_t_q1),
    .B_address0(merge4_U0_B_address0),
    .B_ce0(merge4_U0_B_ce0),
    .B_we0(merge4_U0_B_we0),
    .B_d0(merge4_U0_B_d0)
  );

  assign A_address0 = merge1_U0_A_address0;
  assign A_address1 = merge1_U0_A_address1;
  assign A_ce0 = merge1_U0_A_ce0;
  assign A_ce1 = merge1_U0_A_ce1;
  assign A_d0 = 32'd0;
  assign A_d1 = 32'd0;
  assign A_we0 = 1'b0;
  assign A_we1 = 1'b0;
  assign B_address0 = merge4_U0_B_address0;
  assign B_address1 = 4'd0;
  assign B_ce0 = merge4_U0_B_ce0;
  assign B_ce1 = 1'b0;
  assign B_d0 = merge4_U0_B_d0;
  assign B_d1 = 32'd0;
  assign B_we0 = merge4_U0_B_we0;
  assign B_we1 = 1'b0;
  assign ap_channel_done_input1 = merge1_U0_ap_done;
  assign ap_channel_done_input2 = merge2_U0_ap_done;
  assign ap_channel_done_input3 = merge3_U0_ap_done;
  assign ap_done = merge4_U0_ap_done;
  assign ap_idle = merge4_U0_ap_idle & merge3_U0_ap_idle & merge2_U0_ap_idle & merge1_U0_ap_idle & (input3_t_empty_n ^ 1'b1) & (input2_t_empty_n ^ 1'b1) & (input1_t_empty_n ^ 1'b1);
  assign ap_ready = merge1_U0_ap_ready;
  assign ap_sync_continue = 1'b1;
  assign ap_sync_done = merge4_U0_ap_done;
  assign ap_sync_ready = merge1_U0_ap_ready;
  assign input1_t_d1 = 32'd0;
  assign input1_t_we1 = 1'b0;
  assign input2_t_d1 = 32'd0;
  assign input2_t_we1 = 1'b0;
  assign input3_t_d1 = 32'd0;
  assign input3_t_we1 = 1'b0;
  assign merge1_U0_ap_continue = input1_i_full_n;
  assign merge1_U0_ap_start = ap_start;
  assign merge1_U0_input1_full_n = input1_i_full_n;
  assign merge1_U0_start_full_n = 1'b1;
  assign merge1_U0_start_write = 1'b0;
  assign merge2_U0_ap_continue = input2_i_full_n;
  assign merge2_U0_ap_start = input1_t_empty_n;
  assign merge2_U0_input2_full_n = input2_i_full_n;
  assign merge2_U0_start_full_n = 1'b1;
  assign merge2_U0_start_write = 1'b0;
  assign merge3_U0_ap_continue = input3_i_full_n;
  assign merge3_U0_ap_start = input2_t_empty_n;
  assign merge3_U0_input3_full_n = input3_i_full_n;
  assign merge3_U0_start_full_n = 1'b1;
  assign merge3_U0_start_write = 1'b0;
  assign merge4_U0_ap_continue = 1'b1;
  assign merge4_U0_ap_start = input3_t_empty_n;
  assign merge4_U0_start_full_n = 1'b1;
  assign merge4_U0_start_write = 1'b0;

endmodule
