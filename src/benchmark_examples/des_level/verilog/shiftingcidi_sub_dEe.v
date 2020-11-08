// ==============================================================
// File generated on Sat Apr 11 15:14:52 +0530 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps
module shiftingcidi_sub_dEe_ram (addr0, ce0, d0, we0, q0,  clk);

parameter DWIDTH = 64;
parameter AWIDTH = 4;
parameter MEM_SIZE = 16;

input[AWIDTH-1:0] addr0;
input ce0;
input[DWIDTH-1:0] d0;
input we0;
output reg[DWIDTH-1:0] q0;
input clk;

(* ram_style = "block" *)reg [DWIDTH-1:0] ram[0:MEM_SIZE-1];

initial begin
    $readmemh("./shiftingcidi_sub_dEe_ram.dat", ram);
end



always @(posedge clk)  
begin 
    if (ce0) 
    begin
        if (we0) 
        begin 
            ram[addr0] <= d0; 
        end 
        q0 <= ram[addr0];
    end
end


endmodule

`timescale 1 ns / 1 ps
module shiftingcidi_sub_dEe(
    reset,
    clk,
    address0,
    ce0,
    we0,
    d0,
    q0);

parameter DataWidth = 32'd64;
parameter AddressRange = 32'd16;
parameter AddressWidth = 32'd4;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
input we0;
input[DataWidth - 1:0] d0;
output[DataWidth - 1:0] q0;



shiftingcidi_sub_dEe_ram shiftingcidi_sub_dEe_ram_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .we0( we0 ),
    .d0( d0 ),
    .q0( q0 ));

endmodule

