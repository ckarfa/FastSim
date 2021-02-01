
module top_function
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_idle,
  ap_ready,
  inputdata,
  ap_return
);

  parameter ap_ST_fsm_state1 = 7'd1;
  parameter ap_ST_fsm_state2 = 7'd2;
  parameter ap_ST_fsm_pp0_stage0 = 7'd4;
  parameter ap_ST_fsm_state6 = 7'd8;
  parameter ap_ST_fsm_pp1_stage0 = 7'd16;
  parameter ap_ST_fsm_state10 = 7'd32;
  parameter ap_ST_fsm_state11 = 7'd64;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  input [31:0] inputdata;
  output [63:0] ap_return;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg [6:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [5:0] IP_address0;
  reg IP_ce0;
  wire [6:0] IP_q0;
  wire [5:0] PC1_address0;
  reg PC1_ce0;
  wire [5:0] PC1_q0;
  reg [6:0] i_0_i_reg_141;
  reg [63:0] init_perm_res_0_i_reg_152;
  reg [5:0] i_0_i_i_reg_164;
  reg [63:0] permuted_choice_1_0_s_reg_175;
  wire signed [63:0] sext_ln321_fu_209_p1;
  wire [0:0] icmp_ln329_fu_213_p2;
  wire ap_CS_fsm_state2;
  wire [4:0] i_1_fu_219_p2;
  reg [4:0] i_1_reg_364;
  wire [0:0] icmp_ln35_fu_225_p2;
  reg [0:0] icmp_ln35_reg_369;
  wire ap_CS_fsm_pp0_stage0;
  wire ap_block_state3_pp0_stage0_iter0;
  wire ap_block_state4_pp0_stage0_iter1;
  wire ap_block_state5_pp0_stage0_iter2;
  wire ap_block_pp0_stage0_11001;
  reg [0:0] icmp_ln35_reg_369_pp0_iter1_reg;
  wire [6:0] i_fu_231_p2;
  reg ap_enable_reg_pp0_iter0;
  reg [6:0] IP_load_reg_383;
  wire [63:0] init_perm_res_fu_265_p3;
  reg ap_enable_reg_pp0_iter2;
  reg [31:0] L1_reg_393;
  wire ap_CS_fsm_state6;
  wire [31:0] R1_fu_283_p1;
  reg [31:0] R1_reg_398;
  wire [0:0] icmp_ln66_fu_287_p2;
  reg [0:0] icmp_ln66_reg_403;
  wire ap_CS_fsm_pp1_stage0;
  wire ap_block_state7_pp1_stage0_iter0;
  wire ap_block_state8_pp1_stage0_iter1;
  wire ap_block_state9_pp1_stage0_iter2;
  wire ap_block_pp1_stage0_11001;
  reg [0:0] icmp_ln66_reg_403_pp1_iter1_reg;
  wire [5:0] i_2_fu_293_p2;
  reg ap_enable_reg_pp1_iter0;
  reg [5:0] PC1_load_reg_417;
  wire [63:0] permuted_choice_1_fu_331_p3;
  reg ap_enable_reg_pp1_iter2;
  reg [27:0] C_assign_reg_427;
  wire ap_CS_fsm_state10;
  wire [27:0] trunc_ln74_fu_350_p1;
  reg [27:0] trunc_ln74_reg_432;
  wire [63:0] grp_shiftingcidi_fu_187_ap_return;
  wire ap_CS_fsm_state11;
  wire grp_shiftingcidi_fu_187_ap_ready;
  wire grp_shiftingcidi_fu_187_ap_done;
  wire ap_block_pp0_stage0_subdone;
  reg ap_condition_pp0_exit_iter0_state3;
  reg ap_enable_reg_pp0_iter1;
  wire ap_block_pp1_stage0_subdone;
  reg ap_condition_pp1_exit_iter0_state7;
  reg ap_enable_reg_pp1_iter1;
  wire grp_shiftingcidi_fu_187_ap_start;
  wire grp_shiftingcidi_fu_187_ap_idle;
  reg [63:0] input_assign_reg_120;
  reg [4:0] i_0_reg_130;
  reg grp_shiftingcidi_fu_187_ap_start_reg;
  wire [63:0] zext_ln39_fu_237_p1;
  wire ap_block_pp0_stage0;
  wire [63:0] zext_ln70_fu_299_p1;
  wire ap_block_pp1_stage0;
  wire [6:0] sub_ln39_fu_242_p2;
  wire [63:0] zext_ln39_1_fu_247_p1;
  wire [63:0] lshr_ln39_fu_251_p2;
  wire [62:0] trunc_ln39_1_fu_261_p1;
  wire [0:0] trunc_ln39_fu_257_p1;
  wire [6:0] zext_ln70_1_fu_304_p1;
  wire [6:0] sub_ln70_fu_307_p2;
  wire [63:0] zext_ln70_2_fu_313_p1;
  wire [63:0] lshr_ln70_fu_317_p2;
  wire [62:0] trunc_ln70_1_fu_327_p1;
  wire [0:0] trunc_ln70_fu_323_p1;
  reg [6:0] ap_NS_fsm;
  reg ap_idle_pp0;
  wire ap_enable_pp0;
  reg ap_idle_pp1;
  wire ap_enable_pp1;

  initial begin
    #0 ap_CS_fsm = 7'd1;
    #0 ap_enable_reg_pp0_iter0 = 1'b0;
    #0 ap_enable_reg_pp0_iter2 = 1'b0;
    #0 ap_enable_reg_pp1_iter0 = 1'b0;
    #0 ap_enable_reg_pp1_iter2 = 1'b0;
    #0 ap_enable_reg_pp0_iter1 = 1'b0;
    #0 ap_enable_reg_pp1_iter1 = 1'b0;
    #0 grp_shiftingcidi_fu_187_ap_start_reg = 1'b0;
  end


  top_function_IP
  #(
    .DataWidth(7),
    .AddressRange(64),
    .AddressWidth(6)
  )
  IP_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(IP_address0),
    .ce0(IP_ce0),
    .q0(IP_q0)
  );


  top_function_PC1
  #(
    .DataWidth(6),
    .AddressRange(56),
    .AddressWidth(6)
  )
  PC1_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(PC1_address0),
    .ce0(PC1_ce0),
    .q0(PC1_q0)
  );


  shiftingcidi
  grp_shiftingcidi_fu_187
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_shiftingcidi_fu_187_ap_start),
    .ap_done(grp_shiftingcidi_fu_187_ap_done),
    .ap_idle(grp_shiftingcidi_fu_187_ap_idle),
    .ap_ready(grp_shiftingcidi_fu_187_ap_ready),
    .C(C_assign_reg_427),
    .D(trunc_ln74_reg_432),
    .L(L1_reg_393),
    .R(R1_reg_398),
    .ap_return(grp_shiftingcidi_fu_187_ap_return)
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
      ap_enable_reg_pp0_iter0 <= 1'b0;
    end else
      if((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state3) & (1'b0 == ap_block_pp0_stage0_subdone)) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
      end else if((icmp_ln329_fu_213_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
        ap_enable_reg_pp0_iter0 <= 1'b1;
      end 
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_enable_reg_pp0_iter1 <= 1'b0;
    end else
        if((1'b1 == ap_condition_pp0_exit_iter0_state3) & (1'b0 == ap_block_pp0_stage0_subdone)) begin
          ap_enable_reg_pp0_iter1 <= 1'b1 ^ ap_condition_pp0_exit_iter0_state3;
        end else if((1'b1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)) begin
          ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end  
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_enable_reg_pp0_iter2 <= 1'b0;
    end else
      if(1'b0 == ap_block_pp0_stage0_subdone) begin
        ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
      end else if((icmp_ln329_fu_213_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
      end 
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_enable_reg_pp1_iter0 <= 1'b0;
    end else
      if((1'b1 == ap_condition_pp1_exit_iter0_state7) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_subdone)) begin
        ap_enable_reg_pp1_iter0 <= 1'b0;
      end else if(1'b1 == ap_CS_fsm_state6) begin
        ap_enable_reg_pp1_iter0 <= 1'b1;
      end 
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_enable_reg_pp1_iter1 <= 1'b0;
    end else
        if((1'b1 == ap_condition_pp1_exit_iter0_state7) & (1'b0 == ap_block_pp1_stage0_subdone)) begin
          ap_enable_reg_pp1_iter1 <= 1'b1 ^ ap_condition_pp1_exit_iter0_state7;
        end else if((1'b1 == 1'b1) & (1'b0 == ap_block_pp1_stage0_subdone)) begin
          ap_enable_reg_pp1_iter1 <= ap_enable_reg_pp1_iter0;
        end  
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_enable_reg_pp1_iter2 <= 1'b0;
    end else
      if(1'b0 == ap_block_pp1_stage0_subdone) begin
        ap_enable_reg_pp1_iter2 <= ap_enable_reg_pp1_iter1;
      end else if(1'b1 == ap_CS_fsm_state6) begin
        ap_enable_reg_pp1_iter2 <= 1'b0;
      end 
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      grp_shiftingcidi_fu_187_ap_start_reg <= 1'b0;
    end else
      if(1'b1 == ap_CS_fsm_state10) begin
        grp_shiftingcidi_fu_187_ap_start_reg <= 1'b1;
      end else if(grp_shiftingcidi_fu_187_ap_ready == 1'b1) begin
        grp_shiftingcidi_fu_187_ap_start_reg <= 1'b0;
      end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln66_fu_287_p2 == 1'd0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001)) begin
      i_0_i_i_reg_164 <= i_2_fu_293_p2;
    end else if(1'b1 == ap_CS_fsm_state6) begin
      i_0_i_i_reg_164 <= 6'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln329_fu_213_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      i_0_i_reg_141 <= 7'd0;
    end else if((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln35_fu_225_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) begin
      i_0_i_reg_141 <= i_fu_231_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state11) & (grp_shiftingcidi_fu_187_ap_done == 1'b1)) begin
      i_0_reg_130 <= i_1_reg_364;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      i_0_reg_130 <= 5'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln329_fu_213_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      init_perm_res_0_i_reg_152 <= 64'd0;
    end else if((icmp_ln35_reg_369_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1)) begin
      init_perm_res_0_i_reg_152 <= init_perm_res_fu_265_p3;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state11) & (grp_shiftingcidi_fu_187_ap_done == 1'b1)) begin
      input_assign_reg_120 <= grp_shiftingcidi_fu_187_ap_return;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      input_assign_reg_120 <= sext_ln321_fu_209_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln66_reg_403_pp1_iter1_reg == 1'd0) & (ap_enable_reg_pp1_iter2 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001)) begin
      permuted_choice_1_0_s_reg_175 <= permuted_choice_1_fu_331_p3;
    end else if(1'b1 == ap_CS_fsm_state6) begin
      permuted_choice_1_0_s_reg_175 <= 64'd0;
    end 
  end

  assign permuted_choice_1_0_s_reg_175_temp_48 = permuted_choice_1_0_s_reg_175 >> 1'd28;
  assign permuted_choice_1_0_s_reg_175_temp_49 = permuted_choice_1_0_s_reg_175_temp_48 & 28'd268435455;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state10) begin
      C_assign_reg_427 <= permuted_choice_1_0_s_reg_175_temp_49;
      trunc_ln74_reg_432 <= trunc_ln74_fu_350_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln35_reg_369 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0)) begin
      IP_load_reg_383 <= IP_q0;
    end 
  end

  assign init_perm_res_0_i_reg_152_temp_50 = init_perm_res_0_i_reg_152 >> 1'd32;
  assign init_perm_res_0_i_reg_152_temp_51 = init_perm_res_0_i_reg_152_temp_50 & 32'd4294967295;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      L1_reg_393 <= init_perm_res_0_i_reg_152_temp_51;
      R1_reg_398 <= R1_fu_283_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln66_reg_403 == 1'd0) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001)) begin
      PC1_load_reg_417 <= PC1_q0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      i_1_reg_364 <= i_1_fu_219_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0)) begin
      icmp_ln35_reg_369 <= icmp_ln35_fu_225_p2;
      icmp_ln35_reg_369_pp0_iter1_reg <= icmp_ln35_reg_369;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001)) begin
      icmp_ln66_reg_403 <= icmp_ln66_fu_287_p2;
      icmp_ln66_reg_403_pp1_iter1_reg <= icmp_ln66_reg_403;
    end 
  end


  always @(*) begin
    if((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) begin
      IP_ce0 = 1'b1;
    end else begin
      IP_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001)) begin
      PC1_ce0 = 1'b1;
    end else begin
      PC1_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(icmp_ln35_fu_225_p2 == 1'd1) begin
      ap_condition_pp0_exit_iter0_state3 = 1'b1;
    end else begin
      ap_condition_pp0_exit_iter0_state3 = 1'b0;
    end
  end


  always @(*) begin
    if(icmp_ln66_fu_287_p2 == 1'd1) begin
      ap_condition_pp1_exit_iter0_state7 = 1'b1;
    end else begin
      ap_condition_pp1_exit_iter0_state7 = 1'b0;
    end
  end


  always @(*) begin
    if((icmp_ln329_fu_213_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
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
    if((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0)) begin
      ap_idle_pp0 = 1'b1;
    end else begin
      ap_idle_pp0 = 1'b0;
    end
  end


  always @(*) begin
    if((ap_enable_reg_pp1_iter1 == 1'b0) & (ap_enable_reg_pp1_iter2 == 1'b0) & (ap_enable_reg_pp1_iter0 == 1'b0)) begin
      ap_idle_pp1 = 1'b1;
    end else begin
      ap_idle_pp1 = 1'b0;
    end
  end


  always @(*) begin
    if((icmp_ln329_fu_213_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
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
        if((icmp_ln329_fu_213_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
      end
      ap_ST_fsm_pp0_stage0: begin
        if(~((icmp_ln35_fu_225_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone)) & ~((ap_enable_reg_pp0_iter2 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
          ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end else if((ap_enable_reg_pp0_iter2 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) | (icmp_ln35_fu_225_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone)) begin
          ap_NS_fsm = ap_ST_fsm_state6;
        end else begin
          ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
      end
      ap_ST_fsm_state6: begin
        ap_NS_fsm = ap_ST_fsm_pp1_stage0;
      end
      ap_ST_fsm_pp1_stage0: begin
        if(~((ap_enable_reg_pp1_iter0 == 1'b1) & (ap_enable_reg_pp1_iter1 == 1'b0) & (1'b0 == ap_block_pp1_stage0_subdone) & (icmp_ln66_fu_287_p2 == 1'd1)) & ~((ap_enable_reg_pp1_iter2 == 1'b1) & (ap_enable_reg_pp1_iter1 == 1'b0) & (1'b0 == ap_block_pp1_stage0_subdone))) begin
          ap_NS_fsm = ap_ST_fsm_pp1_stage0;
        end else if((ap_enable_reg_pp1_iter2 == 1'b1) & (ap_enable_reg_pp1_iter1 == 1'b0) & (1'b0 == ap_block_pp1_stage0_subdone) | (ap_enable_reg_pp1_iter0 == 1'b1) & (ap_enable_reg_pp1_iter1 == 1'b0) & (1'b0 == ap_block_pp1_stage0_subdone) & (icmp_ln66_fu_287_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state10;
        end else begin
          ap_NS_fsm = ap_ST_fsm_pp1_stage0;
        end
      end
      ap_ST_fsm_state10: begin
        ap_NS_fsm = ap_ST_fsm_state11;
      end
      ap_ST_fsm_state11: begin
        if((1'b1 == ap_CS_fsm_state11) & (grp_shiftingcidi_fu_187_ap_done == 1'b1)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state11;
        end
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign IP_address0 = zext_ln39_fu_237_p1;
  assign PC1_address0 = zext_ln70_fu_299_p1;
  assign R1_fu_283_p1 = (init_perm_res_0_i_reg_152 & 32'd4294967295);
  assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_pp1_stage0 = ap_CS_fsm[32'd4];
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state10 = ap_CS_fsm[32'd5];
  assign ap_CS_fsm_state11 = ap_CS_fsm[32'd6];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state6 = ap_CS_fsm[32'd3];
  assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);
  assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);
  assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);
  assign ap_block_pp1_stage0 = ~(1'b1 == 1'b1);
  assign ap_block_pp1_stage0_11001 = ~(1'b1 == 1'b1);
  assign ap_block_pp1_stage0_subdone = ~(1'b1 == 1'b1);
  assign ap_block_state3_pp0_stage0_iter0 = ~(1'b1 == 1'b1);
  assign ap_block_state4_pp0_stage0_iter1 = ~(1'b1 == 1'b1);
  assign ap_block_state5_pp0_stage0_iter2 = ~(1'b1 == 1'b1);
  assign ap_block_state7_pp1_stage0_iter0 = ~(1'b1 == 1'b1);
  assign ap_block_state8_pp1_stage0_iter1 = ~(1'b1 == 1'b1);
  assign ap_block_state9_pp1_stage0_iter2 = ~(1'b1 == 1'b1);
  assign ap_enable_pp0 = ap_idle_pp0 ^ 1'b1;
  assign ap_enable_pp1 = ap_idle_pp1 ^ 1'b1;
  assign ap_return = input_assign_reg_120;
  assign grp_shiftingcidi_fu_187_ap_start = grp_shiftingcidi_fu_187_ap_start_reg;
  assign i_1_fu_219_p2 = i_0_reg_130 + 5'd1;
  assign i_2_fu_293_p2 = i_0_i_i_reg_164 + 6'd1;
  assign i_fu_231_p2 = i_0_i_reg_141 + 7'd1;
  assign icmp_ln329_fu_213_p2 = (i_0_reg_130 == 5'd16)? 1'b1 : 1'b0;
  assign icmp_ln35_fu_225_p2 = (i_0_i_reg_141 == 7'd64)? 1'b1 : 1'b0;
  assign icmp_ln66_fu_287_p2 = (i_0_i_i_reg_164 == 6'd56)? 1'b1 : 1'b0;
  assign trunc_ln39_1_fu_261_p1_temp_52 = trunc_ln39_1_fu_261_p1 << 1'd1;
  assign trunc_ln39_1_fu_261_p1_temp_53 = trunc_ln39_1_fu_261_p1_temp_52 | trunc_ln39_fu_257_p1;
  assign init_perm_res_fu_265_p3 = trunc_ln39_1_fu_261_p1_temp_53;
  assign lshr_ln39_fu_251_p2 = input_assign_reg_120 >> zext_ln39_1_fu_247_p1;
  assign lshr_ln70_fu_317_p2 = input_assign_reg_120 >> zext_ln70_2_fu_313_p1;
  assign trunc_ln70_1_fu_327_p1_temp_54 = trunc_ln70_1_fu_327_p1 << 1'd1;
  assign trunc_ln70_1_fu_327_p1_temp_55 = trunc_ln70_1_fu_327_p1_temp_54 | trunc_ln70_fu_323_p1;
  assign permuted_choice_1_fu_331_p3 = trunc_ln70_1_fu_327_p1_temp_55;
  assign sext_ln321_fu_209_p1 = $signed(inputdata);
  assign sub_ln39_fu_242_p2 = $signed(7'd64) - $signed(IP_load_reg_383);
  assign sub_ln70_fu_307_p2 = $signed(7'd64) - $signed(zext_ln70_1_fu_304_p1);
  assign trunc_ln39_1_fu_261_p1 = (init_perm_res_0_i_reg_152 & 63'd9223372036854775807);
  assign trunc_ln39_fu_257_p1 = (lshr_ln39_fu_251_p2 & 1'd1);
  assign trunc_ln70_1_fu_327_p1 = (permuted_choice_1_0_s_reg_175 & 63'd9223372036854775807);
  assign trunc_ln70_fu_323_p1 = (lshr_ln70_fu_317_p2 & 1'd1);
  assign trunc_ln74_fu_350_p1 = (permuted_choice_1_0_s_reg_175 & 28'd268435455);
  assign zext_ln39_1_fu_247_p1 = sub_ln39_fu_242_p2;
  assign zext_ln39_fu_237_p1 = i_0_i_reg_141;
  assign zext_ln70_1_fu_304_p1 = PC1_load_reg_417;
  assign zext_ln70_2_fu_313_p1 = sub_ln70_fu_307_p2;
  assign zext_ln70_fu_299_p1 = i_0_i_i_reg_164;

endmodule

