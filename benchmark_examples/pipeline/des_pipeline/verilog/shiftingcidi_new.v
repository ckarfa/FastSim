
module shiftingcidi
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_idle,
  ap_ready,
  C,
  D,
  L,
  R,
  ap_return
);

  parameter ap_ST_fsm_state1 = 8'd1;
  parameter ap_ST_fsm_state2 = 8'd2;
  parameter ap_ST_fsm_state3 = 8'd4;
  parameter ap_ST_fsm_state4 = 8'd8;
  parameter ap_ST_fsm_state5 = 8'd16;
  parameter ap_ST_fsm_state6 = 8'd32;
  parameter ap_ST_fsm_state7 = 8'd64;
  parameter ap_ST_fsm_state8 = 8'd128;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  input [27:0] C;
  input [27:0] D;
  input [31:0] L;
  input [31:0] R;
  output [63:0] ap_return;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg [63:0] ap_return;
  reg [7:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [3:0] iteration_shift_address0;
  reg iteration_shift_ce0;
  wire [1:0] iteration_shift_q0;
  reg [3:0] sub_key_address0;
  reg sub_key_ce0;
  reg sub_key_we0;
  wire [63:0] sub_key_q0;
  wire [5:0] PC2_address0;
  reg PC2_ce0;
  wire [5:0] PC2_q0;
  wire [4:0] i_fu_239_p2;
  reg [4:0] i_reg_422;
  wire ap_CS_fsm_state2;
  wire [63:0] zext_ln108_fu_245_p1;
  reg [63:0] zext_ln108_reg_427;
  wire [0:0] icmp_ln105_fu_233_p2;
  reg [1:0] iteration_shift_load_reg_437;
  wire ap_CS_fsm_state3;
  wire [1:0] j_fu_255_p2;
  wire ap_CS_fsm_state4;
  wire [59:0] tmp_2_fu_341_p3;
  reg [59:0] tmp_2_reg_450;
  wire [0:0] icmp_ln108_fu_250_p2;
  reg [3:0] sub_key_addr_reg_455;
  wire [5:0] j_2_fu_355_p2;
  reg [5:0] j_2_reg_463;
  wire ap_CS_fsm_state5;
  wire [0:0] icmp_ln121_fu_349_p2;
  wire [62:0] trunc_ln125_1_fu_366_p1;
  reg [62:0] trunc_ln125_1_reg_473;
  reg [5:0] PC2_load_reg_478;
  wire ap_CS_fsm_state6;
  wire [63:0] or_ln_fu_388_p3;
  wire ap_CS_fsm_state7;
  wire grp_calculationofkeys_fu_193_ap_start;
  wire grp_calculationofkeys_fu_193_ap_done;
  wire grp_calculationofkeys_fu_193_ap_idle;
  wire grp_calculationofkeys_fu_193_ap_ready;
  wire [3:0] grp_calculationofkeys_fu_193_sub_key_address0;
  wire grp_calculationofkeys_fu_193_sub_key_ce0;
  wire [63:0] grp_calculationofkeys_fu_193_ap_return;
  reg [4:0] i_0_reg_148;
  reg [1:0] j_0_reg_159;
  reg [63:0] sub_key_load_reg_170;
  reg [5:0] j_1_reg_182;
  reg grp_calculationofkeys_fu_193_ap_start_reg;
  wire ap_CS_fsm_state8;
  wire [63:0] zext_ln125_fu_361_p1;
  reg [31:0] D_assign_fu_78;
  wire [31:0] D_cast_fu_215_p1;
  wire [31:0] zext_ln113_fu_305_p1;
  reg [31:0] C_assign_fu_82;
  wire [31:0] C_cast_fu_219_p1;
  wire [31:0] zext_ln111_fu_281_p1;
  wire [26:0] trunc_ln111_fu_269_p1;
  wire [0:0] tmp_3_fu_261_p3;
  wire [27:0] C1_fu_273_p3;
  wire [26:0] trunc_ln113_fu_293_p1;
  wire [0:0] tmp_4_fu_285_p3;
  wire [27:0] D1_fu_297_p3;
  wire [31:0] shl_ln118_fu_319_p2;
  wire [27:0] tmp_1_fu_331_p4;
  wire [31:0] or_ln118_fu_325_p2;
  wire [5:0] sub_ln125_fu_370_p2;
  wire [59:0] zext_ln125_1_fu_375_p1;
  wire [59:0] lshr_ln125_fu_379_p2;
  wire [0:0] trunc_ln125_fu_384_p1;
  reg [63:0] ap_return_preg;
  reg [7:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 8'd1;
    #0 grp_calculationofkeys_fu_193_ap_start_reg = 1'b0;
    #0 ap_return_preg = 64'd0;
  end


  shiftingcidi_itercud
  #(
    .DataWidth(2),
    .AddressRange(16),
    .AddressWidth(4)
  )
  iteration_shift_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(iteration_shift_address0),
    .ce0(iteration_shift_ce0),
    .q0(iteration_shift_q0)
  );


  shiftingcidi_sub_dEe
  #(
    .DataWidth(64),
    .AddressRange(16),
    .AddressWidth(4)
  )
  sub_key_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(sub_key_address0),
    .ce0(sub_key_ce0),
    .we0(sub_key_we0),
    .d0(sub_key_load_reg_170),
    .q0(sub_key_q0)
  );


  shiftingcidi_PC2
  #(
    .DataWidth(6),
    .AddressRange(48),
    .AddressWidth(6)
  )
  PC2_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(PC2_address0),
    .ce0(PC2_ce0),
    .q0(PC2_q0)
  );


  calculationofkeys
  grp_calculationofkeys_fu_193
  (
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_calculationofkeys_fu_193_ap_start),
    .ap_done(grp_calculationofkeys_fu_193_ap_done),
    .ap_idle(grp_calculationofkeys_fu_193_ap_idle),
    .ap_ready(grp_calculationofkeys_fu_193_ap_ready),
    .L(L),
    .R(R),
    .sub_key_address0(grp_calculationofkeys_fu_193_sub_key_address0),
    .sub_key_ce0(grp_calculationofkeys_fu_193_sub_key_ce0),
    .sub_key_q0(sub_key_q0),
    .ap_return(grp_calculationofkeys_fu_193_ap_return)
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
      ap_return_preg <= 64'd0;
    end else if((1'b1 == ap_CS_fsm_state8) & (grp_calculationofkeys_fu_193_ap_done == 1'b1)) begin
      ap_return_preg <= grp_calculationofkeys_fu_193_ap_return;
    end 
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      grp_calculationofkeys_fu_193_ap_start_reg <= 1'b0;
    end else if((icmp_ln105_fu_233_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      grp_calculationofkeys_fu_193_ap_start_reg <= 1'b1;
    end else if(grp_calculationofkeys_fu_193_ap_ready == 1'b1) begin
      grp_calculationofkeys_fu_193_ap_start_reg <= 1'b0;
    end 
  end

  assign zext_ln111_fu_281_p1_temp_24 = zext_ln111_fu_281_p1 & 28'd268435455;
  assign C_assign_fu_82_temp_25 = C_assign_fu_82 & 28'd4026531840;
  assign zext_ln111_fu_281_p1_temp_24_temp_26 = zext_ln111_fu_281_p1_temp_24 | C_assign_fu_82_temp_25;

  assign C_cast_fu_219_p1_temp_0 = C_cast_fu_219_p1 & 28'd268435455;
  assign C_assign_fu_82_temp_1 = C_assign_fu_82 & 28'd4026531840;
  assign C_cast_fu_219_p1_temp_0_temp_2 = C_cast_fu_219_p1_temp_0 | C_assign_fu_82_temp_1;


  always @(posedge ap_clk) begin
    if((icmp_ln108_fu_250_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4)) begin
      C_assign_fu_82 <= zext_ln111_fu_281_p1_temp_24_temp_26;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
       C_assign_fu_82 <= C_cast_fu_219_p1_temp_0_temp_2;
    end 
  end


  assign zext_ln113_fu_305_p1_temp_27 = zext_ln113_fu_305_p1 & 28'd268435455;
  assign D_assign_fu_78_temp_28 = D_assign_fu_78 & 28'd4026531840;
  assign zext_ln113_fu_305_p1_temp_27_temp_29 = zext_ln113_fu_305_p1_temp_27 | D_assign_fu_78_temp_28;

  assign D_cast_fu_215_p1_temp_3 = D_cast_fu_215_p1 & 28'd268435455;
  assign D_assign_fu_78_temp_4 = D_assign_fu_78 & 28'd4026531840;
  assign D_cast_fu_215_p1_temp_3_temp_5 = D_cast_fu_215_p1_temp_3 | D_assign_fu_78_temp_4;

  always @(posedge ap_clk) begin
    if((icmp_ln108_fu_250_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4)) begin
      D_assign_fu_78 <= zext_ln113_fu_305_p1_temp_27_temp_29;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      D_assign_fu_78 <= D_cast_fu_215_p1_temp_3_temp_5;
    end 
  end



  always @(posedge ap_clk) begin
    if((icmp_ln121_fu_349_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5)) begin
      i_0_reg_148 <= i_reg_422;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      i_0_reg_148 <= 5'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      j_0_reg_159 <= 2'd0;
    end else if((icmp_ln108_fu_250_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4)) begin
      j_0_reg_159 <= j_fu_255_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state7) begin
      j_1_reg_182 <= j_2_reg_463;
    end else if((icmp_ln108_fu_250_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) begin
      j_1_reg_182 <= 6'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state7) begin
      sub_key_load_reg_170 <= or_ln_fu_388_p3;
    end else if((icmp_ln108_fu_250_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) begin
      sub_key_load_reg_170 <= 64'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      PC2_load_reg_478 <= PC2_q0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      i_reg_422 <= i_fu_239_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      iteration_shift_load_reg_437 <= iteration_shift_q0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      j_2_reg_463 <= j_2_fu_355_p2;
    end 
  end

  assign tmp_2_fu_341_p3_temp_30 = tmp_2_fu_341_p3 & 56'd72057594037927935;
  assign tmp_2_reg_450_temp_31 = tmp_2_reg_450 & 56'd1080863910568919040;
  assign tmp_2_fu_341_p3_temp_30_temp_32 = tmp_2_fu_341_p3_temp_30 | tmp_2_reg_450_temp_31;

  always @(posedge ap_clk) begin
    if((icmp_ln108_fu_250_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) begin
      sub_key_addr_reg_455 <= zext_ln108_reg_427;
      tmp_2_reg_450 <= tmp_2_fu_341_p3_temp_30_temp_32;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln121_fu_349_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5)) begin
      trunc_ln125_1_reg_473 <= trunc_ln125_1_fu_366_p1;
    end 
  end

  assign zext_ln108_fu_245_p1_temp_33 = zext_ln108_fu_245_p1 & 5'd31;
  assign zext_ln108_reg_427_temp_34 = zext_ln108_reg_427 & 5'd18446744073709551584;
  assign zext_ln108_fu_245_p1_temp_33_temp_35 = zext_ln108_fu_245_p1_temp_33 | zext_ln108_reg_427_temp_34;

  always @(posedge ap_clk) begin
    if((icmp_ln105_fu_233_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      zext_ln108_reg_427 <= zext_ln108_fu_245_p1_temp_33_temp_35;
    end 
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      PC2_ce0 = 1'b1;
    end else begin
      PC2_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state8) & (grp_calculationofkeys_fu_193_ap_done == 1'b1) | (ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) begin
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
    if((1'b1 == ap_CS_fsm_state8) & (grp_calculationofkeys_fu_193_ap_done == 1'b1)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state8) & (grp_calculationofkeys_fu_193_ap_done == 1'b1)) begin
      ap_return = grp_calculationofkeys_fu_193_ap_return;
    end else begin
      ap_return = ap_return_preg;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      iteration_shift_ce0 = 1'b1;
    end else begin
      iteration_shift_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      sub_key_address0 = sub_key_addr_reg_455;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      sub_key_address0 = grp_calculationofkeys_fu_193_sub_key_address0;
    end else begin
      sub_key_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      sub_key_ce0 = 1'b1;
    end else if(1'b1 == ap_CS_fsm_state8) begin
      sub_key_ce0 = grp_calculationofkeys_fu_193_sub_key_ce0;
    end else begin
      sub_key_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      sub_key_we0 = 1'b1;
    end else begin
      sub_key_we0 = 1'b0;
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
        if((icmp_ln105_fu_233_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state8;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        ap_NS_fsm = ap_ST_fsm_state4;
      end
      ap_ST_fsm_state4: begin
        if((icmp_ln108_fu_250_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) begin
          ap_NS_fsm = ap_ST_fsm_state5;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state4;
        end
      end
      ap_ST_fsm_state5: begin
        if((icmp_ln121_fu_349_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state6;
        end
      end
      ap_ST_fsm_state6: begin
        ap_NS_fsm = ap_ST_fsm_state7;
      end
      ap_ST_fsm_state7: begin
        ap_NS_fsm = ap_ST_fsm_state5;
      end
      ap_ST_fsm_state8: begin
        if((1'b1 == ap_CS_fsm_state8) & (grp_calculationofkeys_fu_193_ap_done == 1'b1)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state8;
        end
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign trunc_ln111_fu_269_p1_temp_36 = trunc_ln111_fu_269_p1 << 1'd1;
  assign trunc_ln111_fu_269_p1_temp_37 = trunc_ln111_fu_269_p1_temp_36 | tmp_3_fu_261_p3;
  assign C1_fu_273_p3 = trunc_ln111_fu_269_p1_temp_37;
  assign C_cast_fu_219_p1 = C;
  assign trunc_ln113_fu_293_p1_temp_38 = trunc_ln113_fu_293_p1 << 1'd1;
  assign trunc_ln113_fu_293_p1_temp_39 = trunc_ln113_fu_293_p1_temp_38 | tmp_4_fu_285_p3;
  assign D1_fu_297_p3 = trunc_ln113_fu_293_p1_temp_39;
  assign D_cast_fu_215_p1 = D;
  assign PC2_address0 = zext_ln125_fu_361_p1;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];
  assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];
  assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];
  assign grp_calculationofkeys_fu_193_ap_start = grp_calculationofkeys_fu_193_ap_start_reg;
  assign i_fu_239_p2 = i_0_reg_148 + 5'd1;
  assign icmp_ln105_fu_233_p2 = (i_0_reg_148 == 5'd16)? 1'b1 : 1'b0;
  assign icmp_ln108_fu_250_p2 = (j_0_reg_159 == iteration_shift_load_reg_437)? 1'b1 : 1'b0;
  assign icmp_ln121_fu_349_p2 = (j_1_reg_182 == 6'd48)? 1'b1 : 1'b0;
  assign iteration_shift_address0 = zext_ln108_fu_245_p1;
  assign j_2_fu_355_p2 = j_1_reg_182 + 6'd1;
  assign j_fu_255_p2 = j_0_reg_159 + 2'd1;
  assign lshr_ln125_fu_379_p2 = tmp_2_reg_450 >> zext_ln125_1_fu_375_p1;
  assign or_ln118_fu_325_p2 = shl_ln118_fu_319_p2 | D_assign_fu_78;
  assign trunc_ln125_1_reg_473_temp_40 = trunc_ln125_1_reg_473 << 1'd1;
  assign trunc_ln125_1_reg_473_temp_41 = trunc_ln125_1_reg_473_temp_40 | trunc_ln125_fu_384_p1;
  assign or_ln_fu_388_p3 = trunc_ln125_1_reg_473_temp_41;
  assign shl_ln118_fu_319_p2 = C_assign_fu_82 << 32'd28;
  assign sub_ln125_fu_370_p2 = $signed(6'd56) - $signed(PC2_load_reg_478);
  assign C_assign_fu_82_temp_42 = C_assign_fu_82 >> 1'd4;
  assign C_assign_fu_82_temp_43 = C_assign_fu_82_temp_42 & 28'd268435455;
  assign tmp_1_fu_331_p4 = C_assign_fu_82_temp_43;
  assign tmp_1_fu_331_p4_temp_44 = tmp_1_fu_331_p4 << 1'd32;
  assign tmp_1_fu_331_p4_temp_45 = tmp_1_fu_331_p4_temp_44 | or_ln118_fu_325_p2;
  assign tmp_2_fu_341_p3 = tmp_1_fu_331_p4_temp_45;
  assign C_assign_fu_82_temp_46 = C_assign_fu_82 >> 32'd27;
  assign tmp_3_fu_261_p3 = C_assign_fu_82_temp_46 & 1'd1;
  assign D_assign_fu_78_temp_47 = D_assign_fu_78 >> 32'd27;
  assign tmp_4_fu_285_p3 = D_assign_fu_78_temp_47 & 1'd1;
  assign trunc_ln111_fu_269_p1 = C_assign_fu_82 & 27'd134217727;
  assign trunc_ln113_fu_293_p1 = D_assign_fu_78 & 27'd134217727;
  assign trunc_ln125_1_fu_366_p1 = sub_key_load_reg_170 & 63'd9223372036854775807;
  assign trunc_ln125_fu_384_p1 = lshr_ln125_fu_379_p2 & 1'd1;
  assign zext_ln108_fu_245_p1 = i_0_reg_148;
  assign zext_ln111_fu_281_p1 = C1_fu_273_p3;
  assign zext_ln113_fu_305_p1 = D1_fu_297_p3;
  assign zext_ln125_1_fu_375_p1 = sub_ln125_fu_370_p2;
  assign zext_ln125_fu_361_p1 = j_1_reg_182;

  always @(posedge ap_clk) begin
    zext_ln108_reg_427 <= zext_ln108_reg_427 & 63'd31;
    tmp_2_reg_450 <= tmp_2_reg_450 & 59'd72057594037927935;
    D_assign_fu_78 <= D_assign_fu_78 & 31'd268435455;
    C_assign_fu_82 <= C_assign_fu_82 & 31'd268435455;
  end


endmodule

