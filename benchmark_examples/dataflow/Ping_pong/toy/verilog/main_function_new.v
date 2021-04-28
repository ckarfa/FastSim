
module main_function
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
  ap_start,
  ap_done,
  ap_ready,
  ap_idle
);

  input ap_clk;
  input ap_rst;
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
  input ap_start;
  output ap_done;
  output ap_ready;
  output ap_idle;
  wire [31:0] B_i_q0;
  wire [31:0] B_t_q0;
  wire [31:0] C_i_q0;
  wire [31:0] C_t_q0;
  wire [31:0] D_i_q0;
  wire [31:0] D_t_q0;
  wire [31:0] E_i_q0;
  wire [31:0] E_t_q0;
  wire module_1_U0_ap_start;
  wire module_1_U0_ap_done;
  wire module_1_U0_ap_continue;
  wire module_1_U0_ap_idle;
  wire module_1_U0_ap_ready;
  wire [2:0] module_1_U0_A_address0;
  wire module_1_U0_A_ce0;
  wire [2:0] module_1_U0_B_address0;
  wire module_1_U0_B_ce0;
  wire module_1_U0_B_we0;
  wire [31:0] module_1_U0_B_d0;
  wire [2:0] module_1_U0_C_address0;
  wire module_1_U0_C_ce0;
  wire module_1_U0_C_we0;
  wire [31:0] module_1_U0_C_d0;
  wire ap_channel_done_C;
  wire module_1_U0_C_full_n;
  reg ap_sync_reg_channel_write_C;
  wire ap_sync_channel_write_C;
  wire ap_channel_done_B;
  wire module_1_U0_B_full_n;
  reg ap_sync_reg_channel_write_B;
  wire ap_sync_channel_write_B;
  wire module_2_U0_ap_start;
  wire module_2_U0_ap_done;
  wire module_2_U0_ap_continue;
  wire module_2_U0_ap_idle;
  wire module_2_U0_ap_ready;
  wire [2:0] module_2_U0_B_address0;
  wire module_2_U0_B_ce0;
  wire [2:0] module_2_U0_D_address0;
  wire module_2_U0_D_ce0;
  wire module_2_U0_D_we0;
  wire [31:0] module_2_U0_D_d0;
  wire ap_channel_done_D;
  wire module_2_U0_D_full_n;
  wire module_3_U0_ap_start;
  wire module_3_U0_ap_done;
  wire module_3_U0_ap_continue;
  wire module_3_U0_ap_idle;
  wire module_3_U0_ap_ready;
  wire [2:0] module_3_U0_C_address0;
  wire module_3_U0_C_ce0;
  wire [2:0] module_3_U0_E_address0;
  wire module_3_U0_E_ce0;
  wire module_3_U0_E_we0;
  wire [31:0] module_3_U0_E_d0;
  wire ap_channel_done_E;
  wire module_3_U0_E_full_n;
  wire module_4_U0_ap_start;
  wire module_4_U0_ap_done;
  wire module_4_U0_ap_continue;
  wire module_4_U0_ap_idle;
  wire module_4_U0_ap_ready;
  wire [2:0] module_4_U0_D_address0;
  wire module_4_U0_D_ce0;
  wire [2:0] module_4_U0_E_address0;
  wire module_4_U0_E_ce0;
  wire [2:0] module_4_U0_F_address0;
  wire module_4_U0_F_ce0;
  wire module_4_U0_F_we0;
  wire [31:0] module_4_U0_F_d0;
  wire ap_sync_continue;
  wire B_i_full_n;
  wire B_t_empty_n;
  wire C_i_full_n;
  wire C_t_empty_n;
  wire D_i_full_n;
  wire D_t_empty_n;
  wire E_i_full_n;
  wire E_t_empty_n;
  wire ap_sync_done;
  wire ap_sync_ready;
  wire module_1_U0_start_full_n;
  wire module_1_U0_start_write;
  wire module_2_U0_start_full_n;
  wire module_2_U0_start_write;
  wire module_3_U0_start_full_n;
  wire module_3_U0_start_write;
  wire module_4_U0_start_full_n;
  wire module_4_U0_start_write;

  initial begin
    #0 ap_sync_reg_channel_write_C = 1'b0;
    #0 ap_sync_reg_channel_write_B = 1'b0;
  end


  main_function_B
  #(
    .DataWidth(32),
    .AddressRange(5),
    .AddressWidth(3)
  )
  B_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(module_1_U0_B_address0),
    .i_ce0(module_1_U0_B_ce0),
    .i_we0(module_1_U0_B_we0),
    .i_d0(module_1_U0_B_d0),
    .i_q0(B_i_q0),
    .t_address0(module_2_U0_B_address0),
    .t_ce0(module_2_U0_B_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(B_t_q0),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(B_i_full_n),
    .i_write(ap_channel_done_B),
    .t_empty_n(B_t_empty_n),
    .t_read(module_2_U0_ap_ready)
  );


  main_function_B
  #(
    .DataWidth(32),
    .AddressRange(5),
    .AddressWidth(3)
  )
  C_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(module_1_U0_C_address0),
    .i_ce0(module_1_U0_C_ce0),
    .i_we0(module_1_U0_C_we0),
    .i_d0(module_1_U0_C_d0),
    .i_q0(C_i_q0),
    .t_address0(module_3_U0_C_address0),
    .t_ce0(module_3_U0_C_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(C_t_q0),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(C_i_full_n),
    .i_write(ap_channel_done_C),
    .t_empty_n(C_t_empty_n),
    .t_read(module_3_U0_ap_ready)
  );


  main_function_B
  #(
    .DataWidth(32),
    .AddressRange(5),
    .AddressWidth(3)
  )
  D_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(module_2_U0_D_address0),
    .i_ce0(module_2_U0_D_ce0),
    .i_we0(module_2_U0_D_we0),
    .i_d0(module_2_U0_D_d0),
    .i_q0(D_i_q0),
    .t_address0(module_4_U0_D_address0),
    .t_ce0(module_4_U0_D_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(D_t_q0),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(D_i_full_n),
    .i_write(module_2_U0_ap_done),
    .t_empty_n(D_t_empty_n),
    .t_read(module_4_U0_ap_ready)
  );


  main_function_B
  #(
    .DataWidth(32),
    .AddressRange(5),
    .AddressWidth(3)
  )
  E_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(module_3_U0_E_address0),
    .i_ce0(module_3_U0_E_ce0),
    .i_we0(module_3_U0_E_we0),
    .i_d0(module_3_U0_E_d0),
    .i_q0(E_i_q0),
    .t_address0(module_4_U0_E_address0),
    .t_ce0(module_4_U0_E_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(E_t_q0),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(E_i_full_n),
    .i_write(module_3_U0_ap_done),
    .t_empty_n(E_t_empty_n),
    .t_read(module_4_U0_ap_ready)
  );


  module_1
  module_1_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(module_1_U0_ap_start),
    .ap_done(module_1_U0_ap_done),
    .ap_continue(module_1_U0_ap_continue),
    .ap_idle(module_1_U0_ap_idle),
    .ap_ready(module_1_U0_ap_ready),
    .A_address0(module_1_U0_A_address0),
    .A_ce0(module_1_U0_A_ce0),
    .A_q0(A_q0),
    .B_address0(module_1_U0_B_address0),
    .B_ce0(module_1_U0_B_ce0),
    .B_we0(module_1_U0_B_we0),
    .B_d0(module_1_U0_B_d0),
    .C_address0(module_1_U0_C_address0),
    .C_ce0(module_1_U0_C_ce0),
    .C_we0(module_1_U0_C_we0),
    .C_d0(module_1_U0_C_d0)
  );


  module_2
  module_2_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(module_2_U0_ap_start),
    .ap_done(module_2_U0_ap_done),
    .ap_continue(module_2_U0_ap_continue),
    .ap_idle(module_2_U0_ap_idle),
    .ap_ready(module_2_U0_ap_ready),
    .B_address0(module_2_U0_B_address0),
    .B_ce0(module_2_U0_B_ce0),
    .B_q0(B_t_q0),
    .D_address0(module_2_U0_D_address0),
    .D_ce0(module_2_U0_D_ce0),
    .D_we0(module_2_U0_D_we0),
    .D_d0(module_2_U0_D_d0)
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
    .C_address0(module_3_U0_C_address0),
    .C_ce0(module_3_U0_C_ce0),
    .C_q0(C_t_q0),
    .E_address0(module_3_U0_E_address0),
    .E_ce0(module_3_U0_E_ce0),
    .E_we0(module_3_U0_E_we0),
    .E_d0(module_3_U0_E_d0)
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
    .D_address0(module_4_U0_D_address0),
    .D_ce0(module_4_U0_D_ce0),
    .D_q0(D_t_q0),
    .E_address0(module_4_U0_E_address0),
    .E_ce0(module_4_U0_E_ce0),
    .E_q0(E_t_q0),
    .F_address0(module_4_U0_F_address0),
    .F_ce0(module_4_U0_F_ce0),
    .F_we0(module_4_U0_F_we0),
    .F_d0(module_4_U0_F_d0)
  );


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_sync_reg_channel_write_B <= 1'b0;
    end else
      if((module_1_U0_ap_done & module_1_U0_ap_continue) == 1'b1) begin
        ap_sync_reg_channel_write_B <= 1'b0;
      end else begin
        ap_sync_reg_channel_write_B <= ap_sync_channel_write_B;
      end
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_sync_reg_channel_write_C <= 1'b0;
    end else
      if((module_1_U0_ap_done & module_1_U0_ap_continue) == 1'b1) begin
        ap_sync_reg_channel_write_C <= 1'b0;
      end else begin
        ap_sync_reg_channel_write_C <= ap_sync_channel_write_C;
      end
  end

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
  assign ap_channel_done_B = module_1_U0_ap_done & (ap_sync_reg_channel_write_B ^ 1'b1);
  assign ap_channel_done_C = module_1_U0_ap_done & (ap_sync_reg_channel_write_C ^ 1'b1);
  assign ap_channel_done_D = module_2_U0_ap_done;
  assign ap_channel_done_E = module_3_U0_ap_done;
  assign ap_done = module_4_U0_ap_done;
  assign ap_idle = module_4_U0_ap_idle & module_3_U0_ap_idle & module_2_U0_ap_idle & module_1_U0_ap_idle & (1'b1 ^ E_t_empty_n) & (1'b1 ^ D_t_empty_n) & (1'b1 ^ C_t_empty_n) & (1'b1 ^ B_t_empty_n);
  assign ap_ready = module_1_U0_ap_ready;
  assign ap_sync_channel_write_B = module_1_U0_B_full_n & ap_channel_done_B | ap_sync_reg_channel_write_B;
  assign ap_sync_channel_write_C = module_1_U0_C_full_n & ap_channel_done_C | ap_sync_reg_channel_write_C;
  assign ap_sync_continue = 1'b1;
  assign ap_sync_done = module_4_U0_ap_done;
  assign ap_sync_ready = module_1_U0_ap_ready;
  assign module_1_U0_B_full_n = B_i_full_n;
  assign module_1_U0_C_full_n = C_i_full_n;
  assign module_1_U0_ap_continue = ap_sync_channel_write_C & ap_sync_channel_write_B;
  assign module_1_U0_ap_start = ap_start;
  assign module_1_U0_start_full_n = 1'b1;
  assign module_1_U0_start_write = 1'b0;
  assign module_2_U0_D_full_n = D_i_full_n;
  assign module_2_U0_ap_continue = D_i_full_n;
  assign module_2_U0_ap_start = B_t_empty_n;
  assign module_2_U0_start_full_n = 1'b1;
  assign module_2_U0_start_write = 1'b0;
  assign module_3_U0_E_full_n = E_i_full_n;
  assign module_3_U0_ap_continue = E_i_full_n;
  assign module_3_U0_ap_start = C_t_empty_n;
  assign module_3_U0_start_full_n = 1'b1;
  assign module_3_U0_start_write = 1'b0;
  assign module_4_U0_ap_continue = 1'b1;
  assign module_4_U0_ap_start = E_t_empty_n & D_t_empty_n;
  assign module_4_U0_start_full_n = 1'b1;
  assign module_4_U0_start_write = 1'b0;

endmodule

