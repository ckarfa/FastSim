
module histogram
(
  ap_clk,
  ap_rst,
  inputA_address0,
  inputA_ce0,
  inputA_d0,
  inputA_q0,
  inputA_we0,
  inputA_address1,
  inputA_ce1,
  inputA_d1,
  inputA_q1,
  inputA_we1,
  inputB_address0,
  inputB_ce0,
  inputB_d0,
  inputB_q0,
  inputB_we0,
  inputB_address1,
  inputB_ce1,
  inputB_d1,
  inputB_q1,
  inputB_we1,
  hist_address0,
  hist_ce0,
  hist_d0,
  hist_q0,
  hist_we0,
  hist_address1,
  hist_ce1,
  hist_d1,
  hist_q1,
  hist_we1,
  ap_start,
  ap_done,
  ap_ready,
  ap_idle
);

  input ap_clk;
  input ap_rst;
  output [1:0] inputA_address0;
  output inputA_ce0;
  output [31:0] inputA_d0;
  input [31:0] inputA_q0;
  output inputA_we0;
  output [1:0] inputA_address1;
  output inputA_ce1;
  output [31:0] inputA_d1;
  input [31:0] inputA_q1;
  output inputA_we1;
  output [1:0] inputB_address0;
  output inputB_ce0;
  output [31:0] inputB_d0;
  input [31:0] inputB_q0;
  output inputB_we0;
  output [1:0] inputB_address1;
  output inputB_ce1;
  output [31:0] inputB_d1;
  input [31:0] inputB_q1;
  output inputB_we1;
  output [7:0] hist_address0;
  output hist_ce0;
  output [31:0] hist_d0;
  input [31:0] hist_q0;
  output hist_we0;
  output [7:0] hist_address1;
  output hist_ce1;
  output [31:0] hist_d1;
  input [31:0] hist_q1;
  output hist_we1;
  input ap_start;
  output ap_done;
  output ap_ready;
  output ap_idle;
  wire [31:0] hist1_i_q0;
  wire [31:0] hist1_i_q1;
  wire [31:0] hist1_t_q0;
  wire [31:0] hist1_t_q1;
  wire [31:0] hist2_i_q0;
  wire [31:0] hist2_i_q1;
  wire [31:0] hist2_t_q0;
  wire [31:0] hist2_t_q1;
  wire histogram_map6_U0_ap_start;
  wire histogram_map6_U0_ap_done;
  wire histogram_map6_U0_ap_continue;
  wire histogram_map6_U0_ap_idle;
  wire histogram_map6_U0_ap_ready;
  wire [1:0] histogram_map6_U0_in_r_address0;
  wire histogram_map6_U0_in_r_ce0;
  wire [7:0] histogram_map6_U0_hist_address0;
  wire histogram_map6_U0_hist_ce0;
  wire histogram_map6_U0_hist_we0;
  wire [31:0] histogram_map6_U0_hist_d0;
  wire [7:0] histogram_map6_U0_hist_address1;
  wire histogram_map6_U0_hist_ce1;
  wire ap_channel_done_hist1;
  wire histogram_map6_U0_hist_full_n;
  wire histogram_map_U0_ap_start;
  wire histogram_map_U0_ap_done;
  wire histogram_map_U0_ap_continue;
  wire histogram_map_U0_ap_idle;
  wire histogram_map_U0_ap_ready;
  wire [1:0] histogram_map_U0_in_r_address0;
  wire histogram_map_U0_in_r_ce0;
  wire [7:0] histogram_map_U0_hist_address0;
  wire histogram_map_U0_hist_ce0;
  wire histogram_map_U0_hist_we0;
  wire [31:0] histogram_map_U0_hist_d0;
  wire [7:0] histogram_map_U0_hist_address1;
  wire histogram_map_U0_hist_ce1;
  wire ap_channel_done_hist2;
  wire histogram_map_U0_hist_full_n;
  wire histogram_reduce_U0_ap_start;
  wire histogram_reduce_U0_ap_done;
  wire histogram_reduce_U0_ap_continue;
  wire histogram_reduce_U0_ap_idle;
  wire histogram_reduce_U0_ap_ready;
  wire [7:0] histogram_reduce_U0_hist1_address0;
  wire histogram_reduce_U0_hist1_ce0;
  wire [7:0] histogram_reduce_U0_hist2_address0;
  wire histogram_reduce_U0_hist2_ce0;
  wire [7:0] histogram_reduce_U0_output_r_address0;
  wire histogram_reduce_U0_output_r_ce0;
  wire histogram_reduce_U0_output_r_we0;
  wire [31:0] histogram_reduce_U0_output_r_d0;
  wire ap_sync_continue;
  wire hist1_i_full_n;
  wire hist1_t_empty_n;
  wire [31:0] hist1_i_d1;
  wire hist1_i_we1;
  wire hist2_i_full_n;
  wire hist2_t_empty_n;
  wire [31:0] hist2_i_d1;
  wire hist2_i_we1;
  wire ap_sync_done;
  wire ap_sync_ready;
  reg ap_sync_reg_histogram_map6_U0_ap_ready;
  wire ap_sync_histogram_map6_U0_ap_ready;
  reg [1:0] histogram_map6_U0_ap_ready_count;
  reg ap_sync_reg_histogram_map_U0_ap_ready;
  wire ap_sync_histogram_map_U0_ap_ready;
  reg [1:0] histogram_map_U0_ap_ready_count;
  wire histogram_map6_U0_start_full_n;
  wire histogram_map6_U0_start_write;
  wire histogram_map_U0_start_full_n;
  wire histogram_map_U0_start_write;
  wire histogram_reduce_U0_start_full_n;
  wire histogram_reduce_U0_start_write;

  initial begin
    #0 ap_sync_reg_histogram_map6_U0_ap_ready = 1'b0;
    #0 histogram_map6_U0_ap_ready_count = 2'd0;
    #0 ap_sync_reg_histogram_map_U0_ap_ready = 1'b0;
    #0 histogram_map_U0_ap_ready_count = 2'd0;
  end


  histogram_hist1
  #(
    .DataWidth(32),
    .AddressRange(256),
    .AddressWidth(8)
  )
  hist1_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(histogram_map6_U0_hist_address0),
    .i_ce0(histogram_map6_U0_hist_ce0),
    .i_we0(histogram_map6_U0_hist_we0),
    .i_d0(histogram_map6_U0_hist_d0),
    .i_q0(hist1_i_q0),
    .i_address1(histogram_map6_U0_hist_address1),
    .i_ce1(histogram_map6_U0_hist_ce1),
    .i_q1(hist1_i_q1),
    .t_address0(histogram_reduce_U0_hist1_address0),
    .t_ce0(histogram_reduce_U0_hist1_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(hist1_t_q0),
    .t_address1(8'd0),
    .t_ce1(1'b0),
    .t_q1(hist1_t_q1),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(hist1_i_full_n),
    .i_write(histogram_map6_U0_ap_done),
    .t_empty_n(hist1_t_empty_n),
    .t_read(histogram_reduce_U0_ap_ready)
  );


  histogram_hist1
  #(
    .DataWidth(32),
    .AddressRange(256),
    .AddressWidth(8)
  )
  hist2_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(histogram_map_U0_hist_address0),
    .i_ce0(histogram_map_U0_hist_ce0),
    .i_we0(histogram_map_U0_hist_we0),
    .i_d0(histogram_map_U0_hist_d0),
    .i_q0(hist2_i_q0),
    .i_address1(histogram_map_U0_hist_address1),
    .i_ce1(histogram_map_U0_hist_ce1),
    .i_q1(hist2_i_q1),
    .t_address0(histogram_reduce_U0_hist2_address0),
    .t_ce0(histogram_reduce_U0_hist2_ce0),
    .t_we0(1'b0),
    .t_d0(32'd0),
    .t_q0(hist2_t_q0),
    .t_address1(8'd0),
    .t_ce1(1'b0),
    .t_q1(hist2_t_q1),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(hist2_i_full_n),
    .i_write(histogram_map_U0_ap_done),
    .t_empty_n(hist2_t_empty_n),
    .t_read(histogram_reduce_U0_ap_ready)
  );


  histogram_map6
  histogram_map6_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(histogram_map6_U0_ap_start),
    .ap_done(histogram_map6_U0_ap_done),
    .ap_continue(histogram_map6_U0_ap_continue),
    .ap_idle(histogram_map6_U0_ap_idle),
    .ap_ready(histogram_map6_U0_ap_ready),
    .in_r_address0(histogram_map6_U0_in_r_address0),
    .in_r_ce0(histogram_map6_U0_in_r_ce0),
    .in_r_q0(inputA_q0),
    .hist_address0(histogram_map6_U0_hist_address0),
    .hist_ce0(histogram_map6_U0_hist_ce0),
    .hist_we0(histogram_map6_U0_hist_we0),
    .hist_d0(histogram_map6_U0_hist_d0),
    .hist_address1(histogram_map6_U0_hist_address1),
    .hist_ce1(histogram_map6_U0_hist_ce1),
    .hist_q1(hist1_i_q1)
  );


  histogram_map
  histogram_map_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(histogram_map_U0_ap_start),
    .ap_done(histogram_map_U0_ap_done),
    .ap_continue(histogram_map_U0_ap_continue),
    .ap_idle(histogram_map_U0_ap_idle),
    .ap_ready(histogram_map_U0_ap_ready),
    .in_r_address0(histogram_map_U0_in_r_address0),
    .in_r_ce0(histogram_map_U0_in_r_ce0),
    .in_r_q0(inputB_q0),
    .hist_address0(histogram_map_U0_hist_address0),
    .hist_ce0(histogram_map_U0_hist_ce0),
    .hist_we0(histogram_map_U0_hist_we0),
    .hist_d0(histogram_map_U0_hist_d0),
    .hist_address1(histogram_map_U0_hist_address1),
    .hist_ce1(histogram_map_U0_hist_ce1),
    .hist_q1(hist2_i_q1)
  );


  histogram_reduce
  histogram_reduce_U0
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(histogram_reduce_U0_ap_start),
    .ap_done(histogram_reduce_U0_ap_done),
    .ap_continue(histogram_reduce_U0_ap_continue),
    .ap_idle(histogram_reduce_U0_ap_idle),
    .ap_ready(histogram_reduce_U0_ap_ready),
    .hist1_address0(histogram_reduce_U0_hist1_address0),
    .hist1_ce0(histogram_reduce_U0_hist1_ce0),
    .hist1_q0(hist1_t_q0),
    .hist2_address0(histogram_reduce_U0_hist2_address0),
    .hist2_ce0(histogram_reduce_U0_hist2_ce0),
    .hist2_q0(hist2_t_q0),
    .output_r_address0(histogram_reduce_U0_output_r_address0),
    .output_r_ce0(histogram_reduce_U0_output_r_ce0),
    .output_r_we0(histogram_reduce_U0_output_r_we0),
    .output_r_d0(histogram_reduce_U0_output_r_d0)
  );


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_sync_reg_histogram_map6_U0_ap_ready <= 1'b0;
    end else
      if((ap_sync_ready & ap_start) == 1'b1) begin
        ap_sync_reg_histogram_map6_U0_ap_ready <= 1'b0;
      end else begin
        ap_sync_reg_histogram_map6_U0_ap_ready <= ap_sync_histogram_map6_U0_ap_ready;
      end
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_sync_reg_histogram_map_U0_ap_ready <= 1'b0;
    end else
      if((ap_sync_ready & ap_start) == 1'b1) begin
        ap_sync_reg_histogram_map_U0_ap_ready <= 1'b0;
      end else begin
        ap_sync_reg_histogram_map_U0_ap_ready <= ap_sync_histogram_map_U0_ap_ready;
      end
  end


  always @(posedge ap_clk) begin
    if((histogram_map6_U0_ap_ready == 1'b0) & (ap_sync_ready == 1'b1)) begin
      histogram_map6_U0_ap_ready_count <= histogram_map6_U0_ap_ready_count - 2'd1;
    end else if((ap_sync_ready == 1'b0) & (histogram_map6_U0_ap_ready == 1'b1)) begin
      histogram_map6_U0_ap_ready_count <= histogram_map6_U0_ap_ready_count + 2'd1;
    end 
  end


  always @(posedge ap_clk) begin
    if((histogram_map_U0_ap_ready == 1'b0) & (ap_sync_ready == 1'b1)) begin
      histogram_map_U0_ap_ready_count <= histogram_map_U0_ap_ready_count - 2'd1;
    end else if((ap_sync_ready == 1'b0) & (histogram_map_U0_ap_ready == 1'b1)) begin
      histogram_map_U0_ap_ready_count <= histogram_map_U0_ap_ready_count + 2'd1;
    end 
  end

  assign ap_channel_done_hist1 = histogram_map6_U0_ap_done;
  assign ap_channel_done_hist2 = histogram_map_U0_ap_done;
  assign ap_done = histogram_reduce_U0_ap_done;
  assign ap_idle = histogram_reduce_U0_ap_idle & histogram_map_U0_ap_idle & histogram_map6_U0_ap_idle & (hist2_t_empty_n ^ 1'b1) & (hist1_t_empty_n ^ 1'b1);
  assign ap_ready = ap_sync_ready;
  assign ap_sync_continue = 1'b1;
  assign ap_sync_done = histogram_reduce_U0_ap_done;
  assign ap_sync_histogram_map6_U0_ap_ready = histogram_map6_U0_ap_ready | ap_sync_reg_histogram_map6_U0_ap_ready;
  assign ap_sync_histogram_map_U0_ap_ready = histogram_map_U0_ap_ready | ap_sync_reg_histogram_map_U0_ap_ready;
  assign ap_sync_ready = ap_sync_histogram_map_U0_ap_ready & ap_sync_histogram_map6_U0_ap_ready;
  assign hist1_i_d1 = 32'd0;
  assign hist1_i_we1 = 1'b0;
  assign hist2_i_d1 = 32'd0;
  assign hist2_i_we1 = 1'b0;
  assign hist_address0 = histogram_reduce_U0_output_r_address0;
  assign hist_address1 = 8'd0;
  assign hist_ce0 = histogram_reduce_U0_output_r_ce0;
  assign hist_ce1 = 1'b0;
  assign hist_d0 = histogram_reduce_U0_output_r_d0;
  assign hist_d1 = 32'd0;
  assign hist_we0 = histogram_reduce_U0_output_r_we0;
  assign hist_we1 = 1'b0;
  assign histogram_map6_U0_ap_continue = hist1_i_full_n;
  assign histogram_map6_U0_ap_start = (ap_sync_reg_histogram_map6_U0_ap_ready ^ 1'b1) & ap_start;
  assign histogram_map6_U0_hist_full_n = hist1_i_full_n;
  assign histogram_map6_U0_start_full_n = 1'b1;
  assign histogram_map6_U0_start_write = 1'b0;
  assign histogram_map_U0_ap_continue = hist2_i_full_n;
  assign histogram_map_U0_ap_start = (ap_sync_reg_histogram_map_U0_ap_ready ^ 1'b1) & ap_start;
  assign histogram_map_U0_hist_full_n = hist2_i_full_n;
  assign histogram_map_U0_start_full_n = 1'b1;
  assign histogram_map_U0_start_write = 1'b0;
  assign histogram_reduce_U0_ap_continue = 1'b1;
  assign histogram_reduce_U0_ap_start = hist2_t_empty_n & hist1_t_empty_n;
  assign histogram_reduce_U0_start_full_n = 1'b1;
  assign histogram_reduce_U0_start_write = 1'b0;
  assign inputA_address0 = histogram_map6_U0_in_r_address0;
  assign inputA_address1 = 2'd0;
  assign inputA_ce0 = histogram_map6_U0_in_r_ce0;
  assign inputA_ce1 = 1'b0;
  assign inputA_d0 = 32'd0;
  assign inputA_d1 = 32'd0;
  assign inputA_we0 = 1'b0;
  assign inputA_we1 = 1'b0;
  assign inputB_address0 = histogram_map_U0_in_r_address0;
  assign inputB_address1 = 2'd0;
  assign inputB_ce0 = histogram_map_U0_in_r_ce0;
  assign inputB_ce1 = 1'b0;
  assign inputB_d0 = 32'd0;
  assign inputB_d1 = 32'd0;
  assign inputB_we0 = 1'b0;
  assign inputB_we1 = 1'b0;

endmodule

