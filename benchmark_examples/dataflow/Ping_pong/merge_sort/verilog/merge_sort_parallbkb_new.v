
module merge_sort_parallbkb #
(
  parameter DataWidth = 32,
  parameter AddressRange = 32,
  parameter AddressWidth = 4,
  parameter BufferCount = 2,
  parameter MemLatency = 1,
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
  input wire i_ce1,
  input wire [AddressWidth-1:0] i_address1,
  output wire [DataWidth-1:0] i_q1,
  input wire t_ce,
  input wire t_read,
  output wire t_empty_n,
  input wire t_ce0,
  input wire t_we0,
  input wire [AddressWidth-1:0] t_address0,
  input wire [DataWidth-1:0] t_d0,
  output wire [DataWidth-1:0] t_q0,
  input wire t_ce1,
  input wire [AddressWidth-1:0] t_address1,
  output wire [DataWidth-1:0] t_q1
);

input  clk;
  input  reset;
  input  i_ce;
  input  i_write;
  output  i_full_n;
  input  i_ce0;
  input  i_we0;
  input  [AddressWidth-1:0] i_address0;
  input  [DataWidth-1:0] i_d0;
  output  [DataWidth-1:0] i_q0;
  input  i_ce1;
  input  [AddressWidth-1:0] i_address1;
  output  [DataWidth-1:0] i_q1;
  input  t_ce;
  input  t_read;
  output  t_empty_n;
  input  t_ce0;
  input  t_we0;
  input  [AddressWidth-1:0] t_address0;
  input  [DataWidth-1:0] t_d0;
  output  [DataWidth-1:0] t_q0;
  input  t_ce1;
  input  [AddressWidth-1:0] t_address1;
  output  [DataWidth-1:0] t_q1;

  reg [IndexWidth-1:0] iptr;
  //assign iptr = 1'b0;
  reg [IndexWidth-1:0] tptr;
  //assign tptr = 1'b0;
  reg [IndexWidth-1:0] prev_iptr;
  //assign prev_iptr = 1'b0;
  reg [IndexWidth-1:0] prev_tptr;
 // assign prev_tptr = 1'b0;
  reg [IndexWidth:0] count;
 // assign count = 1'b0;
  reg full_n;
 // assign full_n = 1'b1;
  reg empty_n;
 // assign empty_n = 1'b0;
  wire push_buf;
  wire pop_buf;
  wire buf_ce0 [0:BufferCount-1];
  wire buf_we0 [0:BufferCount-1];
  wire [AddressWidth-1:0] buf_a0 [0:BufferCount-1];
  wire [DataWidth-1:0] buf_d0 [0:BufferCount-1];
  wire [DataWidth-1:0] buf_q0 [0:BufferCount-1];
  wire buf_ce1 [0:BufferCount-1];
  wire [AddressWidth-1:0] buf_a1 [0:BufferCount-1];
  wire [DataWidth-1:0] buf_q1 [0:BufferCount-1];
  genvar i;

  generate for(i=0; i<BufferCount; i=i+1) begin : gen_buffer

    merge_sort_parallbkb_memcore
    merge_sort_parallbkb_memcore_U
    (
      .clk(clk),
      .reset(reset),
      .ce0(buf_ce0[i]),
      .we0(buf_we0[i]),
      .address0(buf_a0[i]),
      .d0(buf_d0[i]),
      .q0(buf_q0[i]),
      .ce1(buf_ce1[i]),
      .address1(buf_a1[i]),
      .q1(buf_q1[i])
    );

  end
  endgenerate


  generate for(i=0; i<BufferCount; i=i+1) begin : connect_buffer
    assign buf_ce0[i] = (iptr == i)? i_ce0 : 
                        ((tptr == i) && empty_n)? t_ce0 : 1'b0;
    assign buf_we0[i] = (iptr == i)? i_we0 : 
                        ((tptr == i) && empty_n)? t_we0 : 1'b0;
    assign buf_a0[i] = (iptr == i)? i_address0 : t_address0;
    assign buf_d0[i] = (iptr == i)? i_d0 : t_d0;
    assign buf_ce1[i] = (iptr == i)? i_ce1 : 
                        ((tptr == i) && empty_n)? t_ce1 : 1'b0;
    assign buf_a1[i] = (iptr == i)? i_address1 : t_address1;
  end
  endgenerate

  assign i_full_n = full_n;
  assign t_empty_n = empty_n;
  assign push_buf = i_ce & i_write & full_n;
  assign pop_buf = t_ce & t_read & empty_n;

  always @(posedge clk) begin
    if(reset == 1'b1) begin
     iptr <= 1'b0; 
   end else
      if((iptr == BufferCount - 1'b1) & (push_buf)) begin
       iptr <= 1'b0; 
     end else if(push_buf) begin
      iptr <= iptr + 1'b1;
    end 
  end


  always @(posedge clk) begin
    if(reset == 1'b1) begin
     prev_iptr <= 1'b0; 
    end else begin
      prev_iptr <= iptr;
    end
  end


  always @(posedge clk) begin
    if(reset == 1'b1) begin
     prev_tptr <= 1'b0; 
    end else begin
      prev_tptr <= tptr;
    end
  end


  always @(posedge clk) begin
    if(reset == 1'b1) begin
     tptr <= 1'b0; 
   end else
      if((tptr == BufferCount - 1'b1) & (pop_buf)) begin
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

