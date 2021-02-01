
module AddRoundKey
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_idle,
  ap_ready,
  statemt_address0,
  statemt_ce0,
  statemt_we0,
  statemt_d0,
  statemt_q0,
  statemt_address1,
  statemt_ce1,
  statemt_we1,
  statemt_d1,
  statemt_q1,
  n,
  word_address0,
  word_ce0,
  word_q0,
  word_address1,
  word_ce1,
  word_q1
);

  parameter ap_ST_fsm_state1 = 16'd1;
  parameter ap_ST_fsm_state2 = 16'd2;
  parameter ap_ST_fsm_state3 = 16'd4;
  parameter ap_ST_fsm_state4 = 16'd8;
  parameter ap_ST_fsm_state5 = 16'd16;
  parameter ap_ST_fsm_state6 = 16'd32;
  parameter ap_ST_fsm_state7 = 16'd64;
  parameter ap_ST_fsm_state8 = 16'd128;
  parameter ap_ST_fsm_state9 = 16'd256;
  parameter ap_ST_fsm_state10 = 16'd512;
  parameter ap_ST_fsm_state11 = 16'd1024;
  parameter ap_ST_fsm_state12 = 16'd2048;
  parameter ap_ST_fsm_state13 = 16'd4096;
  parameter ap_ST_fsm_state14 = 16'd8192;
  parameter ap_ST_fsm_state15 = 16'd16384;
  parameter ap_ST_fsm_state16 = 16'd32768;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [4:0] statemt_address0;
  output statemt_ce0;
  output statemt_we0;
  output [31:0] statemt_d0;
  input [31:0] statemt_q0;
  output [4:0] statemt_address1;
  output statemt_ce1;
  output statemt_we1;
  output [31:0] statemt_d1;
  input [31:0] statemt_q1;
  input [4:0] n;
  output [8:0] word_address0;
  output word_ce0;
  input [31:0] word_q0;
  output [8:0] word_address1;
  output word_ce1;
  input [31:0] word_q1;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg [4:0] statemt_address0;
  reg statemt_ce0;
  reg statemt_we0;
  reg [31:0] statemt_d0;
  reg [4:0] statemt_address1;
  reg statemt_ce1;
  reg statemt_we1;
  reg [31:0] statemt_d1;
  reg [8:0] word_address0;
  reg word_ce0;
  reg [8:0] word_address1;
  reg word_ce1;
  reg [15:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  reg [31:0] reg_352;
  wire ap_CS_fsm_state2;
  wire ap_CS_fsm_state9;
  reg [31:0] reg_356;
  wire [4:0] statemt_addr_reg_653;
  wire [4:0] statemt_addr_25_reg_658;
  wire [4:0] statemt_addr_26_reg_663;
  wire [4:0] statemt_addr_27_reg_668;
  reg [31:0] statemt_load_33_reg_673;
  wire ap_CS_fsm_state3;
  reg [31:0] statemt_load_34_reg_678;
  wire [4:0] statemt_addr_28_reg_683;
  wire [4:0] statemt_addr_29_reg_688;
  reg [31:0] statemt_load_1_reg_693;
  wire ap_CS_fsm_state4;
  reg [31:0] statemt_load_35_reg_698;
  wire [4:0] statemt_addr_30_reg_703;
  wire [4:0] statemt_addr_31_reg_708;
  reg [31:0] statemt_load_36_reg_713;
  wire ap_CS_fsm_state5;
  reg [31:0] statemt_load_37_reg_718;
  wire [4:0] statemt_addr_32_reg_723;
  wire [4:0] statemt_addr_33_reg_728;
  reg [31:0] statemt_load_2_reg_733;
  wire ap_CS_fsm_state6;
  reg [31:0] statemt_load_38_reg_738;
  wire [4:0] statemt_addr_34_reg_743;
  wire [4:0] statemt_addr_35_reg_748;
  reg [31:0] statemt_load_39_reg_753;
  wire ap_CS_fsm_state7;
  reg [31:0] statemt_load_40_reg_758;
  wire [4:0] statemt_addr_36_reg_763;
  wire [4:0] statemt_addr_37_reg_768;
  wire [5:0] shl_ln_fu_378_p3;
  reg [5:0] shl_ln_reg_773;
  wire ap_CS_fsm_state8;
  reg [31:0] statemt_load_3_reg_791;
  reg [31:0] statemt_load_41_reg_796;
  wire [4:0] statemt_addr_38_reg_801;
  wire [4:0] statemt_addr_39_reg_806;
  wire [5:0] or_ln566_fu_443_p2;
  reg [5:0] or_ln566_reg_821;
  wire ap_CS_fsm_state10;
  wire ap_CS_fsm_state11;
  wire [5:0] or_ln566_1_fu_517_p2;
  reg [5:0] or_ln566_1_reg_846;
  wire ap_CS_fsm_state12;
  wire ap_CS_fsm_state13;
  wire [5:0] or_ln566_2_fu_591_p2;
  reg [5:0] or_ln566_2_reg_871;
  wire ap_CS_fsm_state14;
  wire ap_CS_fsm_state15;
  wire [63:0] zext_ln566_fu_386_p1;
  wire [63:0] zext_ln567_fu_401_p1;
  wire [63:0] zext_ln568_fu_415_p1;
  wire [63:0] zext_ln569_fu_426_p1;
  wire [63:0] zext_ln566_1_fu_448_p1;
  wire [63:0] zext_ln567_1_fu_463_p1;
  wire [63:0] zext_ln568_1_fu_477_p1;
  wire [63:0] zext_ln569_1_fu_488_p1;
  wire [63:0] zext_ln566_2_fu_522_p1;
  wire [63:0] zext_ln567_2_fu_537_p1;
  wire [63:0] zext_ln568_2_fu_551_p1;
  wire [63:0] zext_ln569_2_fu_562_p1;
  wire [63:0] zext_ln566_3_fu_596_p1;
  wire [63:0] zext_ln567_3_fu_611_p1;
  wire [63:0] zext_ln568_3_fu_625_p1;
  wire [63:0] zext_ln569_3_fu_636_p1;
  wire [31:0] grp_fu_360_p2;
  wire [31:0] grp_fu_367_p2;
  wire [31:0] xor_ln568_fu_431_p2;
  wire [31:0] xor_ln569_fu_437_p2;
  wire [31:0] xor_ln566_1_fu_493_p2;
  wire [31:0] xor_ln567_1_fu_499_p2;
  wire [31:0] xor_ln568_1_fu_505_p2;
  wire [31:0] xor_ln569_1_fu_511_p2;
  wire [31:0] xor_ln566_2_fu_567_p2;
  wire [31:0] xor_ln567_2_fu_573_p2;
  wire [31:0] xor_ln568_2_fu_579_p2;
  wire [31:0] xor_ln569_2_fu_585_p2;
  wire [31:0] xor_ln566_3_fu_641_p2;
  wire [31:0] xor_ln567_3_fu_647_p2;
  wire ap_CS_fsm_state16;
  wire [3:0] trunc_ln566_fu_374_p1;
  wire [7:0] zext_ln566_5_fu_391_p1;
  wire [7:0] add_ln567_fu_395_p2;
  wire [8:0] zext_ln566_4_fu_406_p1;
  wire [8:0] add_ln568_fu_409_p2;
  wire [8:0] add_ln569_fu_420_p2;
  wire [7:0] zext_ln566_7_fu_453_p1;
  wire [7:0] add_ln567_1_fu_457_p2;
  wire [8:0] zext_ln566_6_fu_468_p1;
  wire [8:0] add_ln568_1_fu_471_p2;
  wire [8:0] add_ln569_1_fu_482_p2;
  wire [7:0] zext_ln566_9_fu_527_p1;
  wire [7:0] add_ln567_2_fu_531_p2;
  wire [8:0] zext_ln566_8_fu_542_p1;
  wire [8:0] add_ln568_2_fu_545_p2;
  wire [8:0] add_ln569_2_fu_556_p2;
  wire [7:0] zext_ln566_11_fu_601_p1;
  wire [7:0] add_ln567_3_fu_605_p2;
  wire [8:0] zext_ln566_10_fu_616_p1;
  wire [8:0] add_ln568_3_fu_619_p2;
  wire [8:0] add_ln569_3_fu_630_p2;
  reg [15:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 16'd1;
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end

  assign or_ln566_1_fu_517_p2_temp_106 = or_ln566_1_fu_517_p2 & 5'd60;
  assign or_ln566_1_reg_846_temp_107 = or_ln566_1_reg_846 & 5'd3;
  assign or_ln566_1_fu_517_p2_temp_106_temp_108 = or_ln566_1_fu_517_p2_temp_106 | or_ln566_1_reg_846_temp_107;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state12) begin
      or_ln566_1_reg_846 <= or_ln566_1_fu_517_p2_temp_106_temp_108;
    end 
  end

  assign or_ln566_2_fu_591_p2_temp_109 = or_ln566_2_fu_591_p2 & 5'd60;
  assign or_ln566_2_reg_871_temp_110 = or_ln566_2_reg_871 & 5'd3;
  assign or_ln566_2_fu_591_p2_temp_109_temp_111 = or_ln566_2_fu_591_p2_temp_109 | or_ln566_2_reg_871_temp_110;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state14) begin
      or_ln566_2_reg_871 <= or_ln566_2_fu_591_p2_temp_109_temp_111;
    end 
  end

  assign or_ln566_fu_443_p2_temp_112 = or_ln566_fu_443_p2 & 5'd60;
  assign or_ln566_reg_821_temp_113 = or_ln566_reg_821 & 5'd3;
  assign or_ln566_fu_443_p2_temp_112_temp_114 = or_ln566_fu_443_p2_temp_112 | or_ln566_reg_821_temp_113;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state10) begin
      or_ln566_reg_821 <= or_ln566_fu_443_p2_temp_112_temp_114;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state2)) begin
      reg_352 <= statemt_q0;
      reg_356 <= statemt_q1;
    end 
  end

  assign shl_ln_fu_378_p3_temp_115 = shl_ln_fu_378_p3 & 5'd60;
  assign shl_ln_reg_773_temp_116 = shl_ln_reg_773 & 5'd3;
  assign shl_ln_fu_378_p3_temp_115_temp_117 = shl_ln_fu_378_p3_temp_115 | shl_ln_reg_773_temp_116;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state8) begin
      shl_ln_reg_773 <= shl_ln_fu_378_p3_temp_115_temp_117;
      statemt_load_3_reg_791 <= statemt_q0;
      statemt_load_41_reg_796 <= statemt_q1;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      statemt_load_1_reg_693 <= statemt_q0;
      statemt_load_35_reg_698 <= statemt_q1;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      statemt_load_2_reg_733 <= statemt_q0;
      statemt_load_38_reg_738 <= statemt_q1;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      statemt_load_33_reg_673 <= statemt_q0;
      statemt_load_34_reg_678 <= statemt_q1;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      statemt_load_36_reg_713 <= statemt_q0;
      statemt_load_37_reg_718 <= statemt_q1;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state7) begin
      statemt_load_39_reg_753 <= statemt_q0;
      statemt_load_40_reg_758 <= statemt_q1;
    end 
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state16) | (ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) begin
      ap_done = 1'b1;
    end else begin
      ap_done = 1'b0;
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
    if(1'b1 == ap_CS_fsm_state16) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state16) begin
      statemt_address0 = statemt_addr_38_reg_801;
    end else if(1'b1 == ap_CS_fsm_state15) begin
      statemt_address0 = statemt_addr_36_reg_763;
    end else if(1'b1 == ap_CS_fsm_state14) begin
      statemt_address0 = statemt_addr_34_reg_743;
    end else if(1'b1 == ap_CS_fsm_state13) begin
      statemt_address0 = statemt_addr_32_reg_723;
    end else if(1'b1 == ap_CS_fsm_state12) begin
      statemt_address0 = statemt_addr_30_reg_703;
    end else if(1'b1 == ap_CS_fsm_state11) begin
      statemt_address0 = statemt_addr_28_reg_683;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      statemt_address0 = statemt_addr_26_reg_663;
    end else if(1'b1 == ap_CS_fsm_state9) begin
      statemt_address0 = statemt_addr_reg_653;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_address0 = 64'd14;
    end else if(1'b1 == ap_CS_fsm_state7) begin
      statemt_address0 = 64'd12;
    end else if(1'b1 == ap_CS_fsm_state6) begin
      statemt_address0 = 64'd10;
    end else if(1'b1 == ap_CS_fsm_state5) begin
      statemt_address0 = 64'd8;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      statemt_address0 = 64'd6;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address0 = 64'd4;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address0 = 64'd2;
    end else if(1'b1 == ap_CS_fsm_state1) begin
      statemt_address0 = 64'd0;
    end else begin
      statemt_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state16) begin
      statemt_address1 = statemt_addr_39_reg_806;
    end else if(1'b1 == ap_CS_fsm_state15) begin
      statemt_address1 = statemt_addr_37_reg_768;
    end else if(1'b1 == ap_CS_fsm_state14) begin
      statemt_address1 = statemt_addr_35_reg_748;
    end else if(1'b1 == ap_CS_fsm_state13) begin
      statemt_address1 = statemt_addr_33_reg_728;
    end else if(1'b1 == ap_CS_fsm_state12) begin
      statemt_address1 = statemt_addr_31_reg_708;
    end else if(1'b1 == ap_CS_fsm_state11) begin
      statemt_address1 = statemt_addr_29_reg_688;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      statemt_address1 = statemt_addr_27_reg_668;
    end else if(1'b1 == ap_CS_fsm_state9) begin
      statemt_address1 = statemt_addr_25_reg_658;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      statemt_address1 = 64'd15;
    end else if(1'b1 == ap_CS_fsm_state7) begin
      statemt_address1 = 64'd13;
    end else if(1'b1 == ap_CS_fsm_state6) begin
      statemt_address1 = 64'd11;
    end else if(1'b1 == ap_CS_fsm_state5) begin
      statemt_address1 = 64'd9;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      statemt_address1 = 64'd7;
    end else if(1'b1 == ap_CS_fsm_state3) begin
      statemt_address1 = 64'd5;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      statemt_address1 = 64'd3;
    end else if(1'b1 == ap_CS_fsm_state1) begin
      statemt_address1 = 64'd1;
    end else begin
      statemt_address1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) begin
      statemt_ce0 = 1'b1;
    end else begin
      statemt_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) begin
      statemt_ce1 = 1'b1;
    end else begin
      statemt_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state15) begin
      statemt_d0 = xor_ln566_3_fu_641_p2;
    end else if(1'b1 == ap_CS_fsm_state14) begin
      statemt_d0 = xor_ln568_2_fu_579_p2;
    end else if(1'b1 == ap_CS_fsm_state13) begin
      statemt_d0 = xor_ln566_2_fu_567_p2;
    end else if(1'b1 == ap_CS_fsm_state12) begin
      statemt_d0 = xor_ln568_1_fu_505_p2;
    end else if(1'b1 == ap_CS_fsm_state11) begin
      statemt_d0 = xor_ln566_1_fu_493_p2;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      statemt_d0 = xor_ln568_fu_431_p2;
    end else if((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state16)) begin
      statemt_d0 = grp_fu_360_p2;
    end else begin
      statemt_d0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state15) begin
      statemt_d1 = xor_ln567_3_fu_647_p2;
    end else if(1'b1 == ap_CS_fsm_state14) begin
      statemt_d1 = xor_ln569_2_fu_585_p2;
    end else if(1'b1 == ap_CS_fsm_state13) begin
      statemt_d1 = xor_ln567_2_fu_573_p2;
    end else if(1'b1 == ap_CS_fsm_state12) begin
      statemt_d1 = xor_ln569_1_fu_511_p2;
    end else if(1'b1 == ap_CS_fsm_state11) begin
      statemt_d1 = xor_ln567_1_fu_499_p2;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      statemt_d1 = xor_ln569_fu_437_p2;
    end else if((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state16)) begin
      statemt_d1 = grp_fu_367_p2;
    end else begin
      statemt_d1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10)) begin
      statemt_we0 = 1'b1;
    end else begin
      statemt_we0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10)) begin
      statemt_we1 = 1'b1;
    end else begin
      statemt_we1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state15) begin
      word_address0 = zext_ln568_3_fu_625_p1;
    end else if(1'b1 == ap_CS_fsm_state14) begin
      word_address0 = zext_ln566_3_fu_596_p1;
    end else if(1'b1 == ap_CS_fsm_state13) begin
      word_address0 = zext_ln568_2_fu_551_p1;
    end else if(1'b1 == ap_CS_fsm_state12) begin
      word_address0 = zext_ln566_2_fu_522_p1;
    end else if(1'b1 == ap_CS_fsm_state11) begin
      word_address0 = zext_ln568_1_fu_477_p1;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      word_address0 = zext_ln566_1_fu_448_p1;
    end else if(1'b1 == ap_CS_fsm_state9) begin
      word_address0 = zext_ln568_fu_415_p1;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      word_address0 = zext_ln566_fu_386_p1;
    end else begin
      word_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state15) begin
      word_address1 = zext_ln569_3_fu_636_p1;
    end else if(1'b1 == ap_CS_fsm_state14) begin
      word_address1 = zext_ln567_3_fu_611_p1;
    end else if(1'b1 == ap_CS_fsm_state13) begin
      word_address1 = zext_ln569_2_fu_562_p1;
    end else if(1'b1 == ap_CS_fsm_state12) begin
      word_address1 = zext_ln567_2_fu_537_p1;
    end else if(1'b1 == ap_CS_fsm_state11) begin
      word_address1 = zext_ln569_1_fu_488_p1;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      word_address1 = zext_ln567_1_fu_463_p1;
    end else if(1'b1 == ap_CS_fsm_state9) begin
      word_address1 = zext_ln569_fu_426_p1;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      word_address1 = zext_ln567_fu_401_p1;
    end else begin
      word_address1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state8)) begin
      word_ce0 = 1'b1;
    end else begin
      word_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state8)) begin
      word_ce1 = 1'b1;
    end else begin
      word_ce1 = 1'b0;
    end
  end


  always @(*) begin
    case(ap_CS_fsm)
      ap_ST_fsm_state1: begin
        if((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end
      end
      ap_ST_fsm_state2: begin
        ap_NS_fsm = ap_ST_fsm_state3;
      end
      ap_ST_fsm_state3: begin
        ap_NS_fsm = ap_ST_fsm_state4;
      end
      ap_ST_fsm_state4: begin
        ap_NS_fsm = ap_ST_fsm_state5;
      end
      ap_ST_fsm_state5: begin
        ap_NS_fsm = ap_ST_fsm_state6;
      end
      ap_ST_fsm_state6: begin
        ap_NS_fsm = ap_ST_fsm_state7;
      end
      ap_ST_fsm_state7: begin
        ap_NS_fsm = ap_ST_fsm_state8;
      end
      ap_ST_fsm_state8: begin
        ap_NS_fsm = ap_ST_fsm_state9;
      end
      ap_ST_fsm_state9: begin
        ap_NS_fsm = ap_ST_fsm_state10;
      end
      ap_ST_fsm_state10: begin
        ap_NS_fsm = ap_ST_fsm_state11;
      end
      ap_ST_fsm_state11: begin
        ap_NS_fsm = ap_ST_fsm_state12;
      end
      ap_ST_fsm_state12: begin
        ap_NS_fsm = ap_ST_fsm_state13;
      end
      ap_ST_fsm_state13: begin
        ap_NS_fsm = ap_ST_fsm_state14;
      end
      ap_ST_fsm_state14: begin
        ap_NS_fsm = ap_ST_fsm_state15;
      end
      ap_ST_fsm_state15: begin
        ap_NS_fsm = ap_ST_fsm_state16;
      end
      ap_ST_fsm_state16: begin
        ap_NS_fsm = ap_ST_fsm_state1;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign add_ln567_1_fu_457_p2 = 8'd120 + zext_ln566_7_fu_453_p1;
  assign add_ln567_2_fu_531_p2 = 8'd120 + zext_ln566_9_fu_527_p1;
  assign add_ln567_3_fu_605_p2 = 8'd120 + zext_ln566_11_fu_601_p1;
  assign add_ln567_fu_395_p2 = 8'd120 + zext_ln566_5_fu_391_p1;
  assign add_ln568_1_fu_471_p2 = 9'd240 + zext_ln566_6_fu_468_p1;
  assign add_ln568_2_fu_545_p2 = 9'd240 + zext_ln566_8_fu_542_p1;
  assign add_ln568_3_fu_619_p2 = 9'd240 + zext_ln566_10_fu_616_p1;
  assign add_ln568_fu_409_p2 = 9'd240 + zext_ln566_4_fu_406_p1;
  assign add_ln569_1_fu_482_p2 = $signed(9'd360) + $signed(zext_ln566_6_fu_468_p1);
  assign add_ln569_2_fu_556_p2 = $signed(9'd360) + $signed(zext_ln566_8_fu_542_p1);
  assign add_ln569_3_fu_630_p2 = $signed(9'd360) + $signed(zext_ln566_10_fu_616_p1);
  assign add_ln569_fu_420_p2 = $signed(9'd360) + $signed(zext_ln566_4_fu_406_p1);
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];
  assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];
  assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];
  assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];
  assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];
  assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];
  assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];
  assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];
  assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];
  assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];
  assign grp_fu_360_p2 = word_q0 ^ reg_352;
  assign grp_fu_367_p2 = word_q1 ^ reg_356;
  assign or_ln566_1_fu_517_p2 = shl_ln_reg_773 | 6'd2;
  assign or_ln566_2_fu_591_p2 = shl_ln_reg_773 | 6'd3;
  assign or_ln566_fu_443_p2 = shl_ln_reg_773 | 6'd1;
  assign trunc_ln566_fu_374_p1_temp_118 = trunc_ln566_fu_374_p1 << 1'd2;
  assign shl_ln_fu_378_p3 = trunc_ln566_fu_374_p1_temp_118;
  assign statemt_addr_25_reg_658 = 64'd1;
  assign statemt_addr_26_reg_663 = 64'd2;
  assign statemt_addr_27_reg_668 = 64'd3;
  assign statemt_addr_28_reg_683 = 64'd4;
  assign statemt_addr_29_reg_688 = 64'd5;
  assign statemt_addr_30_reg_703 = 64'd6;
  assign statemt_addr_31_reg_708 = 64'd7;
  assign statemt_addr_32_reg_723 = 64'd8;
  assign statemt_addr_33_reg_728 = 64'd9;
  assign statemt_addr_34_reg_743 = 64'd10;
  assign statemt_addr_35_reg_748 = 64'd11;
  assign statemt_addr_36_reg_763 = 64'd12;
  assign statemt_addr_37_reg_768 = 64'd13;
  assign statemt_addr_38_reg_801 = 64'd14;
  assign statemt_addr_39_reg_806 = 64'd15;
  assign statemt_addr_reg_653 = 64'd0;
  assign trunc_ln566_fu_374_p1 = (n & 4'd15);
  assign xor_ln566_1_fu_493_p2 = word_q0 ^ statemt_load_1_reg_693;
  assign xor_ln566_2_fu_567_p2 = word_q0 ^ statemt_load_2_reg_733;
  assign xor_ln566_3_fu_641_p2 = word_q0 ^ statemt_load_3_reg_791;
  assign xor_ln567_1_fu_499_p2 = word_q1 ^ statemt_load_35_reg_698;
  assign xor_ln567_2_fu_573_p2 = word_q1 ^ statemt_load_38_reg_738;
  assign xor_ln567_3_fu_647_p2 = word_q1 ^ statemt_load_41_reg_796;
  assign xor_ln568_1_fu_505_p2 = word_q0 ^ statemt_load_36_reg_713;
  assign xor_ln568_2_fu_579_p2 = word_q0 ^ statemt_load_39_reg_753;
  assign xor_ln568_fu_431_p2 = word_q0 ^ statemt_load_33_reg_673;
  assign xor_ln569_1_fu_511_p2 = word_q1 ^ statemt_load_37_reg_718;
  assign xor_ln569_2_fu_585_p2 = word_q1 ^ statemt_load_40_reg_758;
  assign xor_ln569_fu_437_p2 = word_q1 ^ statemt_load_34_reg_678;
  assign zext_ln566_10_fu_616_p1 = or_ln566_2_reg_871;
  assign zext_ln566_11_fu_601_p1 = or_ln566_2_fu_591_p2;
  assign zext_ln566_1_fu_448_p1 = or_ln566_fu_443_p2;
  assign zext_ln566_2_fu_522_p1 = or_ln566_1_fu_517_p2;
  assign zext_ln566_3_fu_596_p1 = or_ln566_2_fu_591_p2;
  assign zext_ln566_4_fu_406_p1 = shl_ln_reg_773;
  assign zext_ln566_5_fu_391_p1 = shl_ln_fu_378_p3;
  assign zext_ln566_6_fu_468_p1 = or_ln566_reg_821;
  assign zext_ln566_7_fu_453_p1 = or_ln566_fu_443_p2;
  assign zext_ln566_8_fu_542_p1 = or_ln566_1_reg_846;
  assign zext_ln566_9_fu_527_p1 = or_ln566_1_fu_517_p2;
  assign zext_ln566_fu_386_p1 = shl_ln_fu_378_p3;
  assign zext_ln567_1_fu_463_p1 = add_ln567_1_fu_457_p2;
  assign zext_ln567_2_fu_537_p1 = add_ln567_2_fu_531_p2;
  assign zext_ln567_3_fu_611_p1 = add_ln567_3_fu_605_p2;
  assign zext_ln567_fu_401_p1 = add_ln567_fu_395_p2;
  assign zext_ln568_1_fu_477_p1 = add_ln568_1_fu_471_p2;
  assign zext_ln568_2_fu_551_p1 = add_ln568_2_fu_545_p2;
  assign zext_ln568_3_fu_625_p1 = add_ln568_3_fu_619_p2;
  assign zext_ln568_fu_415_p1 = add_ln568_fu_409_p2;
  assign zext_ln569_1_fu_488_p1 = add_ln569_1_fu_482_p2;
  assign zext_ln569_2_fu_562_p1 = add_ln569_2_fu_556_p2;
  assign zext_ln569_3_fu_636_p1 = add_ln569_3_fu_630_p2;
  assign zext_ln569_fu_426_p1 = add_ln569_fu_420_p2;

  always @(posedge ap_clk) begin
    shl_ln_reg_773 <= shl_ln_reg_773 & 1'd60;
    or_ln566_reg_821 <= or_ln566_reg_821 & 1'd61;
    or_ln566_1_reg_846 <= or_ln566_1_reg_846 & 1'd62;
    or_ln566_2_reg_871 <= or_ln566_2_reg_871 & 1'd63;
  end


endmodule

