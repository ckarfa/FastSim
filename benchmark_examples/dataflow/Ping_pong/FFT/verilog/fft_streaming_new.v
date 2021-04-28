
module fft_streaming
(
  ap_clk,
  ap_rst,
  X_R_address0,
  X_R_ce0,
  X_R_d0,
  X_R_q0,
  X_R_we0,
  X_R_address1,
  X_R_ce1,
  X_R_d1,
  X_R_q1,
  X_R_we1,
  X_I_address0,
  X_I_ce0,
  X_I_d0,
  X_I_q0,
  X_I_we0,
  X_I_address1,
  X_I_ce1,
  X_I_d1,
  X_I_q1,
  X_I_we1,
  OUT_R_address0,
  OUT_R_ce0,
  OUT_R_d0,
  OUT_R_q0,
  OUT_R_we0,
  OUT_R_address1,
  OUT_R_ce1,
  OUT_R_d1,
  OUT_R_q1,
  OUT_R_we1,
  OUT_I_address0,
  OUT_I_ce0,
  OUT_I_d0,
  OUT_I_q0,
  OUT_I_we0,
  OUT_I_address1,
  OUT_I_ce1,
  OUT_I_d1,
  OUT_I_q1,
  OUT_I_we1,
  ap_start,
  ap_done,
  ap_ready,
  ap_idle
);

  input ap_clk;
  input ap_rst;
  output [9:0] X_R_address0;
  output X_R_ce0;
  output [31:0] X_R_d0;
  input [31:0] X_R_q0;
  output X_R_we0;
  output [9:0] X_R_address1;
  output X_R_ce1;
  output [31:0] X_R_d1;
  input [31:0] X_R_q1;
  output X_R_we1;
  output [9:0] X_I_address0;
  output X_I_ce0;
  output [31:0] X_I_d0;
  input [31:0] X_I_q0;
  output X_I_we0;
  output [9:0] X_I_address1;
  output X_I_ce1;
  output [31:0] X_I_d1;
  input [31:0] X_I_q1;
  output X_I_we1;
  output [9:0] OUT_R_address0;
  output OUT_R_ce0;
  output [31:0] OUT_R_d0;
  input [31:0] OUT_R_q0;
  output OUT_R_we0;
  output [9:0] OUT_R_address1;
  output OUT_R_ce1;
  output [31:0] OUT_R_d1;
  input [31:0] OUT_R_q1;
  output OUT_R_we1;
  output [9:0] OUT_I_address0;
  output OUT_I_ce0;
  output [31:0] OUT_I_d0;
  input [31:0] OUT_I_q0;
  output OUT_I_we0;
  output [9:0] OUT_I_address1;
  output OUT_I_ce1;
  output [31:0] OUT_I_d1;
  input [31:0] OUT_I_q1;
  output OUT_I_we1;
  input ap_start;
  output ap_done;
  output ap_ready;
  output ap_idle;
  wire [31:0] Stage1_R_i_q0;
  wire [31:0] Stage1_R_t_q0;
  wire [31:0] Stage1_I_i_q0;
  wire [31:0] Stage1_I_t_q0;
  wire [31:0] Stage2_R_i_q0;
  wire [31:0] Stage2_R_t_q0;
  wire [31:0] Stage2_I_i_q0;
  wire [31:0] Stage2_I_t_q0;
  wire [31:0] Stage3_R_i_q0;
  wire [31:0] Stage3_R_t_q0;
  wire [31:0] Stage3_I_i_q0;
  wire [31:0] Stage3_I_t_q0;
  wire bit_reverse_U0_ap_start;
  wire bit_reverse_U0_ap_done;
  wire bit_reverse_U0_ap_continue;
  wire bit_reverse_U0_ap_idle;
  wire bit_reverse_U0_ap_ready;
  wire [9:0] bit_reverse_U0_X_R_address0;
  wire bit_reverse_U0_X_R_ce0;
  wire [9:0] bit_reverse_U0_X_I_address0;
  wire bit_reverse_U0_X_I_ce0;
  wire [9:0] bit_reverse_U0_OUT_R_address0;
  wire bit_reverse_U0_OUT_R_ce0;
  wire bit_reverse_U0_OUT_R_we0;
  wire [31:0] bit_reverse_U0_OUT_R_d0;
  wire [9:0] bit_reverse_U0_OUT_I_address0;
  wire bit_reverse_U0_OUT_I_ce0;
  wire bit_reverse_U0_OUT_I_we0;
  wire [31:0] bit_reverse_U0_OUT_I_d0;
  wire ap_channel_done_Stage1_I;
  wire bit_reverse_U0_OUT_I_full_n;
  reg ap_sync_reg_channel_write_Stage1_I;
  wire ap_sync_channel_write_Stage1_I;
  wire ap_channel_done_Stage1_R;
  wire bit_reverse_U0_OUT_R_full_n;
  reg ap_sync_reg_channel_write_Stage1_R;
  wire ap_sync_channel_write_Stage1_R;
  wire fft_stage6_U0_ap_start;
  wire fft_stage6_U0_ap_done;
  wire fft_stage6_U0_ap_continue;
  wire fft_stage6_U0_ap_idle;
  wire fft_stage6_U0_ap_ready;
  wire [9:0] fft_stage6_U0_X_R_address0;
  wire fft_stage6_U0_X_R_ce0;
  wire [9:0] fft_stage6_U0_X_I_address0;
  wire fft_stage6_U0_X_I_ce0;
  wire [9:0] fft_stage6_U0_Out_R_address0;
  wire fft_stage6_U0_Out_R_ce0;
  wire fft_stage6_U0_Out_R_we0;
  wire [31:0] fft_stage6_U0_Out_R_d0;
  wire [9:0] fft_stage6_U0_Out_R_address1;
  wire fft_stage6_U0_Out_R_ce1;
  wire fft_stage6_U0_Out_R_we1;
  wire [31:0] fft_stage6_U0_Out_R_d1;
  wire [9:0] fft_stage6_U0_Out_I_address0;
  wire fft_stage6_U0_Out_I_ce0;
  wire fft_stage6_U0_Out_I_we0;
  wire [31:0] fft_stage6_U0_Out_I_d0;
  wire [9:0] fft_stage6_U0_Out_I_address1;
  wire fft_stage6_U0_Out_I_ce1;
  wire fft_stage6_U0_Out_I_we1;
  wire [31:0] fft_stage6_U0_Out_I_d1;
  wire ap_channel_done_Stage2_I;
  wire fft_stage6_U0_Out_I_full_n;
  reg ap_sync_reg_channel_write_Stage2_I;
  wire ap_sync_channel_write_Stage2_I;
  wire ap_channel_done_Stage2_R;
  wire fft_stage6_U0_Out_R_full_n;
  reg ap_sync_reg_channel_write_Stage2_R;
  wire ap_sync_channel_write_Stage2_R;
  wire fft_stage7_U0_ap_start;
  wire fft_stage7_U0_ap_done;
  wire fft_stage7_U0_ap_continue;
  wire fft_stage7_U0_ap_idle;
  wire fft_stage7_U0_ap_ready;
  wire [9:0] fft_stage7_U0_X_R_address0;
  wire fft_stage7_U0_X_R_ce0;
  wire [9:0] fft_stage7_U0_X_I_address0;
  wire fft_stage7_U0_X_I_ce0;
  wire [9:0] fft_stage7_U0_Out_R_address0;
  wire fft_stage7_U0_Out_R_ce0;
  wire fft_stage7_U0_Out_R_we0;
  wire [31:0] fft_stage7_U0_Out_R_d0;
  wire [9:0] fft_stage7_U0_Out_R_address1;
  wire fft_stage7_U0_Out_R_ce1;
  wire fft_stage7_U0_Out_R_we1;
  wire [31:0] fft_stage7_U0_Out_R_d1;
  wire [9:0] fft_stage7_U0_Out_I_address0;
  wire fft_stage7_U0_Out_I_ce0;
  wire fft_stage7_U0_Out_I_we0;
  wire [31:0] fft_stage7_U0_Out_I_d0;
  wire [9:0] fft_stage7_U0_Out_I_address1;
  wire fft_stage7_U0_Out_I_ce1;
  wire fft_stage7_U0_Out_I_we1;
  wire [31:0] fft_stage7_U0_Out_I_d1;
  wire ap_channel_done_Stage3_I;
  wire fft_stage7_U0_Out_I_full_n;
  reg ap_sync_reg_channel_write_Stage3_I;
  wire ap_sync_channel_write_Stage3_I;
  wire ap_channel_done_Stage3_R;
  wire fft_stage7_U0_Out_R_full_n;
  reg ap_sync_reg_channel_write_Stage3_R;
  wire ap_sync_channel_write_Stage3_R;
  wire fft_stage8_U0_ap_start;
  wire fft_stage8_U0_ap_done;
  wire fft_stage8_U0_ap_continue;
  wire fft_stage8_U0_ap_idle;
  wire fft_stage8_U0_ap_ready;
  wire [9:0] fft_stage8_U0_X_R_address0;
  wire fft_stage8_U0_X_R_ce0;
  wire [9:0] fft_stage8_U0_X_I_address0;
  wire fft_stage8_U0_X_I_ce0;
  wire [9:0] fft_stage8_U0_Out_R_address0;
  wire fft_stage8_U0_Out_R_ce0;
  wire fft_stage8_U0_Out_R_we0;
  wire [31:0] fft_stage8_U0_Out_R_d0;
  wire [9:0] fft_stage8_U0_Out_R_address1;
  wire fft_stage8_U0_Out_R_ce1;
  wire fft_stage8_U0_Out_R_we1;
  wire [31:0] fft_stage8_U0_Out_R_d1;
  wire [9:0] fft_stage8_U0_Out_I_address0;
  wire fft_stage8_U0_Out_I_ce0;
  wire fft_stage8_U0_Out_I_we0;
  wire [31:0] fft_stage8_U0_Out_I_d0;
  wire [9:0] fft_stage8_U0_Out_I_address1;
  wire fft_stage8_U0_Out_I_ce1;
  wire fft_stage8_U0_Out_I_we1;
  wire [31:0] fft_stage8_U0_Out_I_d1;
  wire ap_sync_continue;
  wire Stage1_R_i_full_n;
  wire Stage1_R_t_empty_n;
  wire Stage1_I_i_full_n;
  wire Stage1_I_t_empty_n;
  wire Stage2_R_i_full_n;
  wire Stage2_R_t_empty_n;
  wire Stage2_I_i_full_n;
  wire Stage2_I_t_empty_n;
  wire Stage3_R_i_full_n;
  wire Stage3_R_t_empty_n;
  wire Stage3_I_i_full_n;
  wire Stage3_I_t_empty_n;
  wire ap_sync_done;
  wire ap_sync_ready;
  wire bit_reverse_U0_start_full_n;
  wire bit_reverse_U0_start_write;
  wire fft_stage6_U0_start_full_n;
  wire fft_stage6_U0_start_write;
  wire fft_stage7_U0_start_full_n;
  wire fft_stage7_U0_start_write;
  wire fft_stage8_U0_start_full_n;
  wire fft_stage8_U0_start_write;

  initial begin
    #0 ap_sync_reg_channel_write_Stage1_I = 1'b0;
    #0 ap_sync_reg_channel_write_Stage1_R = 1'b0;
    #0 ap_sync_reg_channel_write_Stage2_I = 1'b0;
    #0 ap_sync_reg_channel_write_Stage2_R = 1'b0;
    #0 ap_sync_reg_channel_write_Stage3_I = 1'b0;
    #0 ap_sync_reg_channel_write_Stage3_R = 1'b0;
  end


  fft_streaming_Stabkb
  #(
    .DataWidth(32),
    .AddressRange(1024),
    .AddressWidth(10)
  )
  Stage1_R_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(bit_reverse_U0_OUT_R_address0),
    .i_ce0(bit_reverse_U0_OUT_R_ce0),
    .i_we0(bit_reverse_U0_OUT_R_we0),
    .i_d0(bit_reverse_U0_OUT_R_d0),
    .i_q0(Stage1_R_i_q0),
    .t_address0(fft_stage6_U0_X_R_address0),
    .t_ce0(fft_stage6_U0_X_R_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(Stage1_R_t_q0),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(Stage1_R_i_full_n),
    .i_write(ap_channel_done_Stage1_R),
    .t_empty_n(Stage1_R_t_empty_n),
    .t_read(fft_stage6_U0_ap_ready)
  );


  fft_streaming_Stabkb
  #(
    .DataWidth(32),
    .AddressRange(1024),
    .AddressWidth(10)
  )
  Stage1_I_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(bit_reverse_U0_OUT_I_address0),
    .i_ce0(bit_reverse_U0_OUT_I_ce0),
    .i_we0(bit_reverse_U0_OUT_I_we0),
    .i_d0(bit_reverse_U0_OUT_I_d0),
    .i_q0(Stage1_I_i_q0),
    .t_address0(fft_stage6_U0_X_I_address0),
    .t_ce0(fft_stage6_U0_X_I_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(Stage1_I_t_q0),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(Stage1_I_i_full_n),
    .i_write(ap_channel_done_Stage1_I),
    .t_empty_n(Stage1_I_t_empty_n),
    .t_read(fft_stage6_U0_ap_ready)
  );


  fft_streaming_StadEe
  #(
    .DataWidth(32),
    .AddressRange(1024),
    .AddressWidth(10)
  )
  Stage2_R_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(fft_stage6_U0_Out_R_address0),
    .i_ce0(fft_stage6_U0_Out_R_ce0),
    .i_we0(fft_stage6_U0_Out_R_we0),
    .i_d0(fft_stage6_U0_Out_R_d0),
    .i_q0(Stage2_R_i_q0),
    .i_address1(fft_stage6_U0_Out_R_address1),
    .i_ce1(fft_stage6_U0_Out_R_ce1),
    .i_we1(fft_stage6_U0_Out_R_we1),
    .i_d1(fft_stage6_U0_Out_R_d1),
    .t_address0(fft_stage7_U0_X_R_address0),
    .t_ce0(fft_stage7_U0_X_R_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(Stage2_R_t_q0),
    .t_address1(10'd0),
    .t_ce1(1'b0),
    .t_we1(1'b0),
    .t_d1(32'd0),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(Stage2_R_i_full_n),
    .i_write(ap_channel_done_Stage2_R),
    .t_empty_n(Stage2_R_t_empty_n),
    .t_read(fft_stage7_U0_ap_ready)
  );


  fft_streaming_StadEe
  #(
    .DataWidth(32),
    .AddressRange(1024),
    .AddressWidth(10)
  )
  Stage2_I_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(fft_stage6_U0_Out_I_address0),
    .i_ce0(fft_stage6_U0_Out_I_ce0),
    .i_we0(fft_stage6_U0_Out_I_we0),
    .i_d0(fft_stage6_U0_Out_I_d0),
    .i_q0(Stage2_I_i_q0),
    .i_address1(fft_stage6_U0_Out_I_address1),
    .i_ce1(fft_stage6_U0_Out_I_ce1),
    .i_we1(fft_stage6_U0_Out_I_we1),
    .i_d1(fft_stage6_U0_Out_I_d1),
    .t_address0(fft_stage7_U0_X_I_address0),
    .t_ce0(fft_stage7_U0_X_I_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(Stage2_I_t_q0),
    .t_address1(10'd0),
    .t_ce1(1'b0),
    .t_we1(1'b0),
    .t_d1(32'd0),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(Stage2_I_i_full_n),
    .i_write(ap_channel_done_Stage2_I),
    .t_empty_n(Stage2_I_t_empty_n),
    .t_read(fft_stage7_U0_ap_ready)
  );


  fft_streaming_StadEe
  #(
    .DataWidth(32),
    .AddressRange(1024),
    .AddressWidth(10)
  )
  Stage3_R_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(fft_stage7_U0_Out_R_address0),
    .i_ce0(fft_stage7_U0_Out_R_ce0),
    .i_we0(fft_stage7_U0_Out_R_we0),
    .i_d0(fft_stage7_U0_Out_R_d0),
    .i_q0(Stage3_R_i_q0),
    .i_address1(fft_stage7_U0_Out_R_address1),
    .i_ce1(fft_stage7_U0_Out_R_ce1),
    .i_we1(fft_stage7_U0_Out_R_we1),
    .i_d1(fft_stage7_U0_Out_R_d1),
    .t_address0(fft_stage8_U0_X_R_address0),
    .t_ce0(fft_stage8_U0_X_R_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(Stage3_R_t_q0),
    .t_address1(10'd0),
    .t_ce1(1'b0),
    .t_we1(1'b0),
    .t_d1(32'd0),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(Stage3_R_i_full_n),
    .i_write(ap_channel_done_Stage3_R),
    .t_empty_n(Stage3_R_t_empty_n),
    .t_read(fft_stage8_U0_ap_ready)
  );


  fft_streaming_StadEe
  #(
    .DataWidth(32),
    .AddressRange(1024),
    .AddressWidth(10)
  )
  Stage3_I_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(fft_stage7_U0_Out_I_address0),
    .i_ce0(fft_stage7_U0_Out_I_ce0),
    .i_we0(fft_stage7_U0_Out_I_we0),
    .i_d0(fft_stage7_U0_Out_I_d0),
    .i_q0(Stage3_I_i_q0),
    .i_address1(fft_stage7_U0_Out_I_address1),
    .i_ce1(fft_stage7_U0_Out_I_ce1),
    .i_we1(fft_stage7_U0_Out_I_we1),
    .i_d1(fft_stage7_U0_Out_I_d1),
    .t_address0(fft_stage8_U0_X_I_address0),
    .t_ce0(fft_stage8_U0_X_I_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(Stage3_I_t_q0),
    .t_address1(10'd0),
    .t_ce1(1'b0),
    .t_we1(1'b0),
    .t_d1(32'd0),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(Stage3_I_i_full_n),
    .i_write(ap_channel_done_Stage3_I),
    .t_empty_n(Stage3_I_t_empty_n),
    .t_read(fft_stage8_U0_ap_ready)
  );


  bit_reverse
  bit_reverse_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(bit_reverse_U0_ap_start),
    .ap_done(bit_reverse_U0_ap_done),
    .ap_continue(bit_reverse_U0_ap_continue),
    .ap_idle(bit_reverse_U0_ap_idle),
    .ap_ready(bit_reverse_U0_ap_ready),
    .X_R_address0(bit_reverse_U0_X_R_address0),
    .X_R_ce0(bit_reverse_U0_X_R_ce0),
    .X_R_q0(X_R_q0),
    .X_I_address0(bit_reverse_U0_X_I_address0),
    .X_I_ce0(bit_reverse_U0_X_I_ce0),
    .X_I_q0(X_I_q0),
    .OUT_R_address0(bit_reverse_U0_OUT_R_address0),
    .OUT_R_ce0(bit_reverse_U0_OUT_R_ce0),
    .OUT_R_we0(bit_reverse_U0_OUT_R_we0),
    .OUT_R_d0(bit_reverse_U0_OUT_R_d0),
    .OUT_I_address0(bit_reverse_U0_OUT_I_address0),
    .OUT_I_ce0(bit_reverse_U0_OUT_I_ce0),
    .OUT_I_we0(bit_reverse_U0_OUT_I_we0),
    .OUT_I_d0(bit_reverse_U0_OUT_I_d0)
  );


  fft_stage6
  fft_stage6_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(fft_stage6_U0_ap_start),
    .ap_done(fft_stage6_U0_ap_done),
    .ap_continue(fft_stage6_U0_ap_continue),
    .ap_idle(fft_stage6_U0_ap_idle),
    .ap_ready(fft_stage6_U0_ap_ready),
    .X_R_address0(fft_stage6_U0_X_R_address0),
    .X_R_ce0(fft_stage6_U0_X_R_ce0),
    .X_R_q0(Stage1_R_t_q0),
    .X_I_address0(fft_stage6_U0_X_I_address0),
    .X_I_ce0(fft_stage6_U0_X_I_ce0),
    .X_I_q0(Stage1_I_t_q0),
    .Out_R_address0(fft_stage6_U0_Out_R_address0),
    .Out_R_ce0(fft_stage6_U0_Out_R_ce0),
    .Out_R_we0(fft_stage6_U0_Out_R_we0),
    .Out_R_d0(fft_stage6_U0_Out_R_d0),
    .Out_R_address1(fft_stage6_U0_Out_R_address1),
    .Out_R_ce1(fft_stage6_U0_Out_R_ce1),
    .Out_R_we1(fft_stage6_U0_Out_R_we1),
    .Out_R_d1(fft_stage6_U0_Out_R_d1),
    .Out_I_address0(fft_stage6_U0_Out_I_address0),
    .Out_I_ce0(fft_stage6_U0_Out_I_ce0),
    .Out_I_we0(fft_stage6_U0_Out_I_we0),
    .Out_I_d0(fft_stage6_U0_Out_I_d0),
    .Out_I_address1(fft_stage6_U0_Out_I_address1),
    .Out_I_ce1(fft_stage6_U0_Out_I_ce1),
    .Out_I_we1(fft_stage6_U0_Out_I_we1),
    .Out_I_d1(fft_stage6_U0_Out_I_d1)
  );


  fft_stage7
  fft_stage7_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(fft_stage7_U0_ap_start),
    .ap_done(fft_stage7_U0_ap_done),
    .ap_continue(fft_stage7_U0_ap_continue),
    .ap_idle(fft_stage7_U0_ap_idle),
    .ap_ready(fft_stage7_U0_ap_ready),
    .X_R_address0(fft_stage7_U0_X_R_address0),
    .X_R_ce0(fft_stage7_U0_X_R_ce0),
    .X_R_q0(Stage2_R_t_q0),
    .X_I_address0(fft_stage7_U0_X_I_address0),
    .X_I_ce0(fft_stage7_U0_X_I_ce0),
    .X_I_q0(Stage2_I_t_q0),
    .Out_R_address0(fft_stage7_U0_Out_R_address0),
    .Out_R_ce0(fft_stage7_U0_Out_R_ce0),
    .Out_R_we0(fft_stage7_U0_Out_R_we0),
    .Out_R_d0(fft_stage7_U0_Out_R_d0),
    .Out_R_address1(fft_stage7_U0_Out_R_address1),
    .Out_R_ce1(fft_stage7_U0_Out_R_ce1),
    .Out_R_we1(fft_stage7_U0_Out_R_we1),
    .Out_R_d1(fft_stage7_U0_Out_R_d1),
    .Out_I_address0(fft_stage7_U0_Out_I_address0),
    .Out_I_ce0(fft_stage7_U0_Out_I_ce0),
    .Out_I_we0(fft_stage7_U0_Out_I_we0),
    .Out_I_d0(fft_stage7_U0_Out_I_d0),
    .Out_I_address1(fft_stage7_U0_Out_I_address1),
    .Out_I_ce1(fft_stage7_U0_Out_I_ce1),
    .Out_I_we1(fft_stage7_U0_Out_I_we1),
    .Out_I_d1(fft_stage7_U0_Out_I_d1)
  );


  fft_stage8
  fft_stage8_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(fft_stage8_U0_ap_start),
    .ap_done(fft_stage8_U0_ap_done),
    .ap_continue(fft_stage8_U0_ap_continue),
    .ap_idle(fft_stage8_U0_ap_idle),
    .ap_ready(fft_stage8_U0_ap_ready),
    .X_R_address0(fft_stage8_U0_X_R_address0),
    .X_R_ce0(fft_stage8_U0_X_R_ce0),
    .X_R_q0(Stage3_R_t_q0),
    .X_I_address0(fft_stage8_U0_X_I_address0),
    .X_I_ce0(fft_stage8_U0_X_I_ce0),
    .X_I_q0(Stage3_I_t_q0),
    .Out_R_address0(fft_stage8_U0_Out_R_address0),
    .Out_R_ce0(fft_stage8_U0_Out_R_ce0),
    .Out_R_we0(fft_stage8_U0_Out_R_we0),
    .Out_R_d0(fft_stage8_U0_Out_R_d0),
    .Out_R_address1(fft_stage8_U0_Out_R_address1),
    .Out_R_ce1(fft_stage8_U0_Out_R_ce1),
    .Out_R_we1(fft_stage8_U0_Out_R_we1),
    .Out_R_d1(fft_stage8_U0_Out_R_d1),
    .Out_I_address0(fft_stage8_U0_Out_I_address0),
    .Out_I_ce0(fft_stage8_U0_Out_I_ce0),
    .Out_I_we0(fft_stage8_U0_Out_I_we0),
    .Out_I_d0(fft_stage8_U0_Out_I_d0),
    .Out_I_address1(fft_stage8_U0_Out_I_address1),
    .Out_I_ce1(fft_stage8_U0_Out_I_ce1),
    .Out_I_we1(fft_stage8_U0_Out_I_we1),
    .Out_I_d1(fft_stage8_U0_Out_I_d1)
  );


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_sync_reg_channel_write_Stage1_I <= 1'b0;
    end else
      if((bit_reverse_U0_ap_done & bit_reverse_U0_ap_continue) == 1'b1) begin
        ap_sync_reg_channel_write_Stage1_I <= 1'b0;
      end else begin
        ap_sync_reg_channel_write_Stage1_I <= ap_sync_channel_write_Stage1_I;
      end
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_sync_reg_channel_write_Stage1_R <= 1'b0;
    end else
      if((bit_reverse_U0_ap_done & bit_reverse_U0_ap_continue) == 1'b1) begin
        ap_sync_reg_channel_write_Stage1_R <= 1'b0;
      end else begin
        ap_sync_reg_channel_write_Stage1_R <= ap_sync_channel_write_Stage1_R;
      end
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_sync_reg_channel_write_Stage2_I <= 1'b0;
    end else
      if((fft_stage6_U0_ap_done & fft_stage6_U0_ap_continue) == 1'b1) begin
        ap_sync_reg_channel_write_Stage2_I <= 1'b0;
      end else begin
        ap_sync_reg_channel_write_Stage2_I <= ap_sync_channel_write_Stage2_I;
      end
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_sync_reg_channel_write_Stage2_R <= 1'b0;
    end else
      if((fft_stage6_U0_ap_done & fft_stage6_U0_ap_continue) == 1'b1) begin
        ap_sync_reg_channel_write_Stage2_R <= 1'b0;
      end else begin
        ap_sync_reg_channel_write_Stage2_R <= ap_sync_channel_write_Stage2_R;
      end
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_sync_reg_channel_write_Stage3_I <= 1'b0;
    end else
      if((fft_stage7_U0_ap_done & fft_stage7_U0_ap_continue) == 1'b1) begin
        ap_sync_reg_channel_write_Stage3_I <= 1'b0;
      end else begin
        ap_sync_reg_channel_write_Stage3_I <= ap_sync_channel_write_Stage3_I;
      end
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_sync_reg_channel_write_Stage3_R <= 1'b0;
    end else
      if((fft_stage7_U0_ap_done & fft_stage7_U0_ap_continue) == 1'b1) begin
        ap_sync_reg_channel_write_Stage3_R <= 1'b0;
      end else begin
        ap_sync_reg_channel_write_Stage3_R <= ap_sync_channel_write_Stage3_R;
      end
  end

  assign OUT_I_address0 = fft_stage8_U0_Out_I_address0;
  assign OUT_I_address1 = fft_stage8_U0_Out_I_address1;
  assign OUT_I_ce0 = fft_stage8_U0_Out_I_ce0;
  assign OUT_I_ce1 = fft_stage8_U0_Out_I_ce1;
  assign OUT_I_d0 = fft_stage8_U0_Out_I_d0;
  assign OUT_I_d1 = fft_stage8_U0_Out_I_d1;
  assign OUT_I_we0 = fft_stage8_U0_Out_I_we0;
  assign OUT_I_we1 = fft_stage8_U0_Out_I_we1;
  assign OUT_R_address0 = fft_stage8_U0_Out_R_address0;
  assign OUT_R_address1 = fft_stage8_U0_Out_R_address1;
  assign OUT_R_ce0 = fft_stage8_U0_Out_R_ce0;
  assign OUT_R_ce1 = fft_stage8_U0_Out_R_ce1;
  assign OUT_R_d0 = fft_stage8_U0_Out_R_d0;
  assign OUT_R_d1 = fft_stage8_U0_Out_R_d1;
  assign OUT_R_we0 = fft_stage8_U0_Out_R_we0;
  assign OUT_R_we1 = fft_stage8_U0_Out_R_we1;
  assign X_I_address0 = bit_reverse_U0_X_I_address0;
  assign X_I_address1 = 10'd0;
  assign X_I_ce0 = bit_reverse_U0_X_I_ce0;
  assign X_I_ce1 = 1'b0;
  assign X_I_d0 = 32'd0;
  assign X_I_d1 = 32'd0;
  assign X_I_we0 = 1'b0;
  assign X_I_we1 = 1'b0;
  assign X_R_address0 = bit_reverse_U0_X_R_address0;
  assign X_R_address1 = 10'd0;
  assign X_R_ce0 = bit_reverse_U0_X_R_ce0;
  assign X_R_ce1 = 1'b0;
  assign X_R_d0 = 32'd0;
  assign X_R_d1 = 32'd0;
  assign X_R_we0 = 1'b0;
  assign X_R_we1 = 1'b0;
  assign ap_channel_done_Stage1_I = (ap_sync_reg_channel_write_Stage1_I ^ 1'b1) & bit_reverse_U0_ap_done;
  assign ap_channel_done_Stage1_R = (ap_sync_reg_channel_write_Stage1_R ^ 1'b1) & bit_reverse_U0_ap_done;
  assign ap_channel_done_Stage2_I = fft_stage6_U0_ap_done & (ap_sync_reg_channel_write_Stage2_I ^ 1'b1);
  assign ap_channel_done_Stage2_R = fft_stage6_U0_ap_done & (ap_sync_reg_channel_write_Stage2_R ^ 1'b1);
  assign ap_channel_done_Stage3_I = fft_stage7_U0_ap_done & (ap_sync_reg_channel_write_Stage3_I ^ 1'b1);
  assign ap_channel_done_Stage3_R = fft_stage7_U0_ap_done & (ap_sync_reg_channel_write_Stage3_R ^ 1'b1);
  assign ap_done = fft_stage8_U0_ap_done;
  assign ap_idle = fft_stage8_U0_ap_idle & fft_stage7_U0_ap_idle & fft_stage6_U0_ap_idle & (1'b1 ^ Stage3_I_t_empty_n) & (1'b1 ^ Stage3_R_t_empty_n) & (1'b1 ^ Stage2_I_t_empty_n) & (1'b1 ^ Stage2_R_t_empty_n) & (1'b1 ^ Stage1_I_t_empty_n) & (1'b1 ^ Stage1_R_t_empty_n) & bit_reverse_U0_ap_idle;
  assign ap_ready = bit_reverse_U0_ap_ready;
  assign ap_sync_channel_write_Stage1_I = bit_reverse_U0_OUT_I_full_n & ap_channel_done_Stage1_I | ap_sync_reg_channel_write_Stage1_I;
  assign ap_sync_channel_write_Stage1_R = bit_reverse_U0_OUT_R_full_n & ap_channel_done_Stage1_R | ap_sync_reg_channel_write_Stage1_R;
  assign ap_sync_channel_write_Stage2_I = fft_stage6_U0_Out_I_full_n & ap_channel_done_Stage2_I | ap_sync_reg_channel_write_Stage2_I;
  assign ap_sync_channel_write_Stage2_R = fft_stage6_U0_Out_R_full_n & ap_channel_done_Stage2_R | ap_sync_reg_channel_write_Stage2_R;
  assign ap_sync_channel_write_Stage3_I = fft_stage7_U0_Out_I_full_n & ap_channel_done_Stage3_I | ap_sync_reg_channel_write_Stage3_I;
  assign ap_sync_channel_write_Stage3_R = fft_stage7_U0_Out_R_full_n & ap_channel_done_Stage3_R | ap_sync_reg_channel_write_Stage3_R;
  assign ap_sync_continue = 1'b1;
  assign ap_sync_done = fft_stage8_U0_ap_done;
  assign ap_sync_ready = bit_reverse_U0_ap_ready;
  assign bit_reverse_U0_OUT_I_full_n = Stage1_I_i_full_n;
  assign bit_reverse_U0_OUT_R_full_n = Stage1_R_i_full_n;
  assign bit_reverse_U0_ap_continue = ap_sync_channel_write_Stage1_R & ap_sync_channel_write_Stage1_I;
  assign bit_reverse_U0_ap_start = ap_start;
  assign bit_reverse_U0_start_full_n = 1'b1;
  assign bit_reverse_U0_start_write = 1'b0;
  assign fft_stage6_U0_Out_I_full_n = Stage2_I_i_full_n;
  assign fft_stage6_U0_Out_R_full_n = Stage2_R_i_full_n;
  assign fft_stage6_U0_ap_continue = ap_sync_channel_write_Stage2_R & ap_sync_channel_write_Stage2_I;
  assign fft_stage6_U0_ap_start = Stage1_R_t_empty_n & Stage1_I_t_empty_n;
  assign fft_stage6_U0_start_full_n = 1'b1;
  assign fft_stage6_U0_start_write = 1'b0;
  assign fft_stage7_U0_Out_I_full_n = Stage3_I_i_full_n;
  assign fft_stage7_U0_Out_R_full_n = Stage3_R_i_full_n;
  assign fft_stage7_U0_ap_continue = ap_sync_channel_write_Stage3_R & ap_sync_channel_write_Stage3_I;
  assign fft_stage7_U0_ap_start = Stage2_R_t_empty_n & Stage2_I_t_empty_n;
  assign fft_stage7_U0_start_full_n = 1'b1;
  assign fft_stage7_U0_start_write = 1'b0;
  assign fft_stage8_U0_ap_continue = 1'b1;
  assign fft_stage8_U0_ap_start = Stage3_R_t_empty_n & Stage3_I_t_empty_n;
  assign fft_stage8_U0_start_full_n = 1'b1;
  assign fft_stage8_U0_start_write = 1'b0;

endmodule

