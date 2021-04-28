
module main_function_B #
(
  parameter DataWidth = 32,
  parameter AddressRange = 32,
  parameter AddressWidth = 3,
  parameter BufferCount = 2,
  parameter IndexWidth = 1
)
(
  input wire clk,
  input wire reset,
  input wire i_ce,
  input wire i_write,
  output wire i_full_n,
  input wire i_ce0,
  input wire i_we0,
  input wire [AddressWidth-1:0] i_address0,
  input wire [DataWidth-1:0] i_d0,
  output wire [DataWidth-1:0] i_q0,
  input wire t_ce,
  input wire t_read,
  output wire t_empty_n,
  input wire t_ce0,
  input wire t_we0,
  input wire [AddressWidth-1:0] t_address0,
  input wire [DataWidth-1:0] t_d0,
  output wire [DataWidth-1:0] t_q0
);

  input clk;
  input reset;
  input i_ce;
  input i_write;
  output i_full_n;
  input i_ce0;
  input i_we0;
  input [AddressWidth-1:0] i_address0;
  input [DataWidth-1:0] i_d0;
  output [DataWidth-1:0] i_q0;
  input t_ce;
  input t_read;
  output t_empty_n;
  input t_ce0;
  input t_we0;
  input [AddressWidth-1:0] t_address0;
  input [DataWidth-1:0] t_d0;
  output [DataWidth-1:0] t_q0;
  reg [IndexWidth-1:0] iptr;
  //assign iptr = 1'b0;
  reg [IndexWidth-1:0] tptr;
  //assign tptr = 1'b0;
  reg [IndexWidth:0] count;
 // assign count = 1'b0;
  reg full_n;
 // assign full_n = 1'b1;
  reg empty_n;
 // assign empty_n = 1'b0;
  wire push_buf;
  wire pop_buf;
  wire [AddressWidth+IndexWidth-1:0] memcore_iaddr;
  wire [AddressWidth+IndexWidth-1:0] memcore_taddr;
  assign i_address0_temp_0 = i_address0 << 1'd1;
  assign i_address0_temp_1 = i_address0_temp_0 | iptr;
  assign memcore_iaddr = i_address0_temp_1;
  assign t_address0_temp_2 = t_address0 << 1'd1;
  assign t_address0_temp_3 = t_address0_temp_2 | tptr;
  assign memcore_taddr = t_address0_temp_3;

  main_function_B_memcore
  main_function_B_memcore_U
  (
    .clk(clk),
    .reset(reset),
    .ce0(i_ce0),
    .we0(i_we0),
    .address0(memcore_iaddr),
    .d0(i_d0),
    .q0(i_q0),
    .ce1(t_ce0),
    .we1(t_we0),
    .address1(memcore_taddr),
    .d1(t_d0),
    .q1(t_q0)
  );

  assign i_full_n = full_n;
  assign t_empty_n = empty_n;
  assign push_buf = i_ce & i_write & full_n;
  assign pop_buf = t_ce & t_read & empty_n;

  always @(posedge clk) begin
    if(reset == 1'b1) begin
      iptr <= 1'b0;
    end else if((iptr == BufferCount - 1'b1) & push_buf) begin
      iptr <= 1'b0;
    end else if(push_buf) begin
      iptr <= iptr + 1'b1;
    end 
  end


  always @(posedge clk) begin
    if(reset == 1'b1) begin
      tptr <= 1'b0;
    end else if((tptr == BufferCount - 1'b1) & pop_buf) begin
      tptr <= 1'b0;
    end else if(pop_buf) begin
      tptr <= tptr + 1'b1;
    end
  end


  always @(posedge clk) begin
    if(reset == 1'b1) begin
      count <= 1'b0;
    end else if(push_buf && !pop_buf) begin
      count <= count + 1'b1;
    end else if(!push_buf && pop_buf) begin
      count <= count - 1'b1;
    end 
  end


  always @(posedge clk) begin
    if(reset == 1'b1) begin
      full_n <= 1'b1;
    end else if(push_buf && !pop_buf && (count == BufferCount - 2'd2)) begin
      full_n <= 1'b0;
    end else if(!push_buf && pop_buf) begin
      full_n <= 1'b1;
    end 
  end


  always @(posedge clk) begin
    if(reset == 1'b1) begin
      empty_n <= 1'b0;
    end else if(push_buf && !pop_buf) begin
      empty_n <= 1'b1;
    end else if(!push_buf && pop_buf && (count == 1'b1)) begin
      empty_n <= 1'b0;
    end 
  end


endmodule

