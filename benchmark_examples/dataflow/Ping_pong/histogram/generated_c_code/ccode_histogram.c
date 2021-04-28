#include<stdio.h>
#include"ccode_histogram_hist1_hist1.c"
#include"ccode_histogram_hist1_hist2.c"
#include"ccode_histogram_map6.c"
#include"ccode_histogram_map.c"
#include"ccode_histogram_reduce.c"
#define inputA_DWIDTH 32
#define inputB_DWIDTH 32
#define hist_DWIDTH 32
void histogram_map6(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void histogram_map(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void histogram_reduce(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void histogram_hist1_hist1(long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void histogram_hist1_hist2(long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void histogram(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *hist_address0__1,unsigned long long int *hist_address1__1,unsigned long long int *hist_ce0__1,unsigned long long int *hist_ce1__1,unsigned long long int *hist_d0__1,unsigned long long int *hist_d1__1,unsigned long long int *hist_q0__1,unsigned long long int *hist_q1__1,unsigned long long int *hist_we0__1,unsigned long long int *hist_we1__1,unsigned long long int *inputA_address0__1,unsigned long long int *inputA_address1__1,unsigned long long int *inputA_ce0__1,unsigned long long int *inputA_ce1__1,unsigned long long int *inputA_d0__1,unsigned long long int *inputA_d1__1,unsigned long long int *inputA_q0__1,unsigned long long int *inputA_q1__1,unsigned long long int *inputA_we0__1,unsigned long long int *inputA_we1__1,unsigned long long int *inputB_address0__1,unsigned long long int *inputB_address1__1,unsigned long long int *inputB_ce0__1,unsigned long long int *inputB_ce1__1,unsigned long long int *inputB_d0__1,unsigned long long int *inputB_d1__1,unsigned long long int *inputB_q0__1,unsigned long long int *inputB_q1__1,unsigned long long int *inputB_we0__1,unsigned long long int *inputB_we1__1,unsigned long long int  *inputA_ram ,unsigned long long int  *inputB_ram ,unsigned long long int  *hist_ram , int dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int hist_address0=*hist_address0__1;
unsigned long long int hist_address1=*hist_address1__1;
unsigned long long int hist_ce0=*hist_ce0__1;
unsigned long long int hist_ce1=*hist_ce1__1;
unsigned long long int hist_d0=*hist_d0__1;
unsigned long long int hist_d1=*hist_d1__1;
unsigned long long int hist_q0=*hist_q0__1;
unsigned long long int hist_q1=*hist_q1__1;
unsigned long long int hist_we0=*hist_we0__1;
unsigned long long int hist_we1=*hist_we1__1;
unsigned long long int inputA_address0=*inputA_address0__1;
unsigned long long int inputA_address1=*inputA_address1__1;
unsigned long long int inputA_ce0=*inputA_ce0__1;
unsigned long long int inputA_ce1=*inputA_ce1__1;
unsigned long long int inputA_d0=*inputA_d0__1;
unsigned long long int inputA_d1=*inputA_d1__1;
unsigned long long int inputA_q0=*inputA_q0__1;
unsigned long long int inputA_q1=*inputA_q1__1;
unsigned long long int inputA_we0=*inputA_we0__1;
unsigned long long int inputA_we1=*inputA_we1__1;
unsigned long long int inputB_address0=*inputB_address0__1;
unsigned long long int inputB_address1=*inputB_address1__1;
unsigned long long int inputB_ce0=*inputB_ce0__1;
unsigned long long int inputB_ce1=*inputB_ce1__1;
unsigned long long int inputB_d0=*inputB_d0__1;
unsigned long long int inputB_d1=*inputB_d1__1;
unsigned long long int inputB_q0=*inputB_q0__1;
unsigned long long int inputB_q1=*inputB_q1__1;
unsigned long long int inputB_we0=*inputB_we0__1;
unsigned long long int inputB_we1=*inputB_we1__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_status_histogram_hist1_hist1_U=1;
   long long int ap_status_histogram_hist1_hist2_U=1;
   long long int ap_status_histogram_map6_histogram_map6_U0=1;
   long long int ap_status_histogram_map_histogram_map_U0=1;
   long long int ap_status_histogram_reduce_histogram_reduce_U0=1;
   unsigned long long int ap_channel_done_hist1=0;
   unsigned long long int ap_channel_done_hist1__temp=0;
   unsigned long long int ap_channel_done_hist2=0;
   unsigned long long int ap_channel_done_hist2__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_done__temp=0;
   unsigned long long int ap_idle__temp=0;
   unsigned long long int ap_ready__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=0;
   unsigned long long int ap_sync_continue=0;
   unsigned long long int ap_sync_continue__temp=0;
   unsigned long long int ap_sync_done=0;
   unsigned long long int ap_sync_done__temp=0;
   unsigned long long int ap_sync_histogram_map6_U0_ap_ready=0;
   unsigned long long int ap_sync_histogram_map6_U0_ap_ready__temp=0;
   unsigned long long int ap_sync_histogram_map_U0_ap_ready=0;
   unsigned long long int ap_sync_histogram_map_U0_ap_ready__temp=0;
   unsigned long long int ap_sync_ready=0;
   unsigned long long int ap_sync_ready__temp=0;
   unsigned long long int ap_sync_reg_histogram_map6_U0_ap_ready=0;
   unsigned long long int ap_sync_reg_histogram_map6_U0_ap_ready__temp=0;
   unsigned long long int ap_sync_reg_histogram_map_U0_ap_ready=0;
   unsigned long long int ap_sync_reg_histogram_map_U0_ap_ready__temp=0;
   unsigned long long int hist1_i_d1=0;
   unsigned long long int hist1_i_d1__temp=0;
   unsigned long long int hist1_i_full_n=0;
   unsigned long long int hist1_i_full_n__temp=0;
   unsigned long long int hist1_i_q0=0;
   unsigned long long int hist1_i_q0__temp=0;
   unsigned long long int hist1_i_q1=0;
   unsigned long long int hist1_i_q1__temp=0;
   unsigned long long int hist1_i_we1=0;
   unsigned long long int hist1_i_we1__temp=0;
   unsigned long long int hist1_t_empty_n=0;
   unsigned long long int hist1_t_empty_n__temp=0;
   unsigned long long int hist1_t_q0=0;
   unsigned long long int hist1_t_q0__temp=0;
   unsigned long long int hist1_t_q1=0;
   unsigned long long int hist1_t_q1__temp=0;
   unsigned long long int hist2_i_d1=0;
   unsigned long long int hist2_i_d1__temp=0;
   unsigned long long int hist2_i_full_n=0;
   unsigned long long int hist2_i_full_n__temp=0;
   unsigned long long int hist2_i_q0=0;
   unsigned long long int hist2_i_q0__temp=0;
   unsigned long long int hist2_i_q1=0;
   unsigned long long int hist2_i_q1__temp=0;
   unsigned long long int hist2_i_we1=0;
   unsigned long long int hist2_i_we1__temp=0;
   unsigned long long int hist2_t_empty_n=0;
   unsigned long long int hist2_t_empty_n__temp=0;
   unsigned long long int hist2_t_q0=0;
   unsigned long long int hist2_t_q0__temp=0;
   unsigned long long int hist2_t_q1=0;
   unsigned long long int hist2_t_q1__temp=0;
   unsigned long long int hist_address0__temp=0;
   unsigned long long int hist_address1__temp=0;
   unsigned long long int hist_ce0__temp=0;
   unsigned long long int hist_ce1__temp=0;
   unsigned long long int hist_d0__temp=0;
   unsigned long long int hist_d1__temp=0;
   unsigned long long int hist_q0__temp=0;
   unsigned long long int hist_q1__temp=0;
   unsigned long long int hist_we0__temp=0;
   unsigned long long int hist_we1__temp=0;
   unsigned long long int histogram_map6_U0_ap_continue=0;
   unsigned long long int histogram_map6_U0_ap_continue__temp=0;
   unsigned long long int histogram_map6_U0_ap_done=0;
   unsigned long long int histogram_map6_U0_ap_done__temp=0;
   unsigned long long int histogram_map6_U0_ap_idle=0;
   unsigned long long int histogram_map6_U0_ap_idle__temp=0;
   unsigned long long int histogram_map6_U0_ap_ready=0;
   unsigned long long int histogram_map6_U0_ap_ready__temp=0;
   unsigned long long int histogram_map6_U0_ap_ready_count=0;
   unsigned long long int histogram_map6_U0_ap_ready_count__temp=0;
   unsigned long long int histogram_map6_U0_ap_start=0;
   unsigned long long int histogram_map6_U0_ap_start__temp=0;
   unsigned long long int histogram_map6_U0_hist_address0=0;
   unsigned long long int histogram_map6_U0_hist_address0__temp=0;
   unsigned long long int histogram_map6_U0_hist_address1=0;
   unsigned long long int histogram_map6_U0_hist_address1__temp=0;
   unsigned long long int histogram_map6_U0_hist_ce0=0;
   unsigned long long int histogram_map6_U0_hist_ce0__temp=0;
   unsigned long long int histogram_map6_U0_hist_ce1=0;
   unsigned long long int histogram_map6_U0_hist_ce1__temp=0;
   unsigned long long int histogram_map6_U0_hist_d0=0;
   unsigned long long int histogram_map6_U0_hist_d0__temp=0;
   unsigned long long int histogram_map6_U0_hist_full_n=0;
   unsigned long long int histogram_map6_U0_hist_full_n__temp=0;
   unsigned long long int histogram_map6_U0_hist_we0=0;
   unsigned long long int histogram_map6_U0_hist_we0__temp=0;
   unsigned long long int histogram_map6_U0_in_r_address0=0;
   unsigned long long int histogram_map6_U0_in_r_address0__temp=0;
   unsigned long long int histogram_map6_U0_in_r_ce0=0;
   unsigned long long int histogram_map6_U0_in_r_ce0__temp=0;
   unsigned long long int histogram_map6_U0_start_full_n=1;
   unsigned long long int histogram_map6_U0_start_full_n__temp=0;
   unsigned long long int histogram_map6_U0_start_write=0;
   unsigned long long int histogram_map6_U0_start_write__temp=0;
   unsigned long long int histogram_map_U0_ap_continue=0;
   unsigned long long int histogram_map_U0_ap_continue__temp=0;
   unsigned long long int histogram_map_U0_ap_done=0;
   unsigned long long int histogram_map_U0_ap_done__temp=0;
   unsigned long long int histogram_map_U0_ap_idle=0;
   unsigned long long int histogram_map_U0_ap_idle__temp=0;
   unsigned long long int histogram_map_U0_ap_ready=0;
   unsigned long long int histogram_map_U0_ap_ready__temp=0;
   unsigned long long int histogram_map_U0_ap_ready_count=0;
   unsigned long long int histogram_map_U0_ap_ready_count__temp=0;
   unsigned long long int histogram_map_U0_ap_start=0;
   unsigned long long int histogram_map_U0_ap_start__temp=0;
   unsigned long long int histogram_map_U0_hist_address0=0;
   unsigned long long int histogram_map_U0_hist_address0__temp=0;
   unsigned long long int histogram_map_U0_hist_address1=0;
   unsigned long long int histogram_map_U0_hist_address1__temp=0;
   unsigned long long int histogram_map_U0_hist_ce0=0;
   unsigned long long int histogram_map_U0_hist_ce0__temp=0;
   unsigned long long int histogram_map_U0_hist_ce1=0;
   unsigned long long int histogram_map_U0_hist_ce1__temp=0;
   unsigned long long int histogram_map_U0_hist_d0=0;
   unsigned long long int histogram_map_U0_hist_d0__temp=0;
   unsigned long long int histogram_map_U0_hist_full_n=0;
   unsigned long long int histogram_map_U0_hist_full_n__temp=0;
   unsigned long long int histogram_map_U0_hist_we0=0;
   unsigned long long int histogram_map_U0_hist_we0__temp=0;
   unsigned long long int histogram_map_U0_in_r_address0=0;
   unsigned long long int histogram_map_U0_in_r_address0__temp=0;
   unsigned long long int histogram_map_U0_in_r_ce0=0;
   unsigned long long int histogram_map_U0_in_r_ce0__temp=0;
   unsigned long long int histogram_map_U0_start_full_n=1;
   unsigned long long int histogram_map_U0_start_full_n__temp=0;
   unsigned long long int histogram_map_U0_start_write=0;
   unsigned long long int histogram_map_U0_start_write__temp=0;
   unsigned long long int histogram_reduce_U0_ap_continue=1;
   unsigned long long int histogram_reduce_U0_ap_continue__temp=0;
   unsigned long long int histogram_reduce_U0_ap_done=0;
   unsigned long long int histogram_reduce_U0_ap_done__temp=0;
   unsigned long long int histogram_reduce_U0_ap_idle=0;
   unsigned long long int histogram_reduce_U0_ap_idle__temp=0;
   unsigned long long int histogram_reduce_U0_ap_ready=0;
   unsigned long long int histogram_reduce_U0_ap_ready__temp=0;
   unsigned long long int histogram_reduce_U0_ap_start=0;
   unsigned long long int histogram_reduce_U0_ap_start__temp=0;
   unsigned long long int histogram_reduce_U0_hist1_address0=0;
   unsigned long long int histogram_reduce_U0_hist1_address0__temp=0;
   unsigned long long int histogram_reduce_U0_hist1_ce0=0;
   unsigned long long int histogram_reduce_U0_hist1_ce0__temp=0;
   unsigned long long int histogram_reduce_U0_hist2_address0=0;
   unsigned long long int histogram_reduce_U0_hist2_address0__temp=0;
   unsigned long long int histogram_reduce_U0_hist2_ce0=0;
   unsigned long long int histogram_reduce_U0_hist2_ce0__temp=0;
   unsigned long long int histogram_reduce_U0_output_r_address0=0;
   unsigned long long int histogram_reduce_U0_output_r_address0__temp=0;
   unsigned long long int histogram_reduce_U0_output_r_ce0=0;
   unsigned long long int histogram_reduce_U0_output_r_ce0__temp=0;
   unsigned long long int histogram_reduce_U0_output_r_d0=0;
   unsigned long long int histogram_reduce_U0_output_r_d0__temp=0;
   unsigned long long int histogram_reduce_U0_output_r_we0=0;
   unsigned long long int histogram_reduce_U0_output_r_we0__temp=0;
   unsigned long long int histogram_reduce_U0_start_full_n=1;
   unsigned long long int histogram_reduce_U0_start_full_n__temp=0;
   unsigned long long int histogram_reduce_U0_start_write=0;
   unsigned long long int histogram_reduce_U0_start_write__temp=0;
   unsigned long long int inputA_address0__temp=0;
   unsigned long long int inputA_address1__temp=0;
   unsigned long long int inputA_ce0__temp=0;
   unsigned long long int inputA_ce1__temp=0;
   unsigned long long int inputA_d0__temp=0;
   unsigned long long int inputA_d1__temp=0;
   unsigned long long int inputA_q0__temp=0;
   unsigned long long int inputA_q1__temp=0;
   unsigned long long int inputA_we0__temp=0;
   unsigned long long int inputA_we1__temp=0;
   unsigned long long int inputB_address0__temp=0;
   unsigned long long int inputB_address1__temp=0;
   unsigned long long int inputB_ce0__temp=0;
   unsigned long long int inputB_ce1__temp=0;
   unsigned long long int inputB_d0__temp=0;
   unsigned long long int inputB_d1__temp=0;
   unsigned long long int inputB_q0__temp=0;
   unsigned long long int inputB_q1__temp=0;
   unsigned long long int inputB_we0__temp=0;
   unsigned long long int inputB_we1__temp=0;
   unsigned long long int t_we0_histogram_hist1_hist1_U=0;
   unsigned long long int t_we0_histogram_hist1_hist2_U=0;
   unsigned long long int t_d0_histogram_hist1_hist1_U=0;
   unsigned long long int t_d0_histogram_hist1_hist2_U=0;
   unsigned long long int t_ce1_histogram_hist1_hist1_U=0;
   unsigned long long int t_ce1_histogram_hist1_hist2_U=0;
   unsigned long long int t_ce_histogram_hist1_hist1_U=1;
   unsigned long long int t_ce_histogram_hist1_hist2_U=1;
   unsigned long long int t_address1_histogram_hist1_hist1_U=0;
   unsigned long long int t_address1_histogram_hist1_hist2_U=0;
   unsigned long long int i_ce_histogram_hist1_hist1_U=1;
   unsigned long long int i_ce_histogram_hist1_hist2_U=1;
   unsigned long long int i1=0;
   unsigned long long int i2=0;
    ap_done=0;
    ap_start=1;

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
   hist1_i_full_n__temp = hist1_i_full_n ;
   hist2_t_empty_n__temp = hist2_t_empty_n ;
   histogram_map6_U0_start_full_n__temp = histogram_map6_U0_start_full_n ;
   inputB_q1__temp = inputB_q1 ;
   ap_sync_ready__temp = ap_sync_ready ;
   histogram_map6_U0_ap_ready__temp = histogram_map6_U0_ap_ready ;
   histogram_reduce_U0_start_write__temp = histogram_reduce_U0_start_write ;
   inputA_d0__temp = inputA_d0 ;
   hist2_t_q1__temp = hist2_t_q1 ;
   histogram_map6_U0_in_r_address0__temp = histogram_map6_U0_in_r_address0 ;
   hist1_i_q0__temp = hist1_i_q0 ;
   hist2_i_q0__temp = hist2_i_q0 ;
   histogram_map_U0_hist_address0__temp = histogram_map_U0_hist_address0 ;
   histogram_reduce_U0_hist1_address0__temp = histogram_reduce_U0_hist1_address0 ;
   hist_ce0__temp = hist_ce0 ;
   histogram_map_U0_hist_full_n__temp = histogram_map_U0_hist_full_n ;
   ap_start__temp = ap_start ;
   histogram_reduce_U0_start_full_n__temp = histogram_reduce_U0_start_full_n ;
   histogram_map_U0_in_r_ce0__temp = histogram_map_U0_in_r_ce0 ;
   histogram_map_U0_ap_ready__temp = histogram_map_U0_ap_ready ;
   histogram_map6_U0_hist_d0__temp = histogram_map6_U0_hist_d0 ;
   hist_address0__temp = hist_address0 ;
   histogram_reduce_U0_ap_done__temp = histogram_reduce_U0_ap_done ;
   hist_address1__temp = hist_address1 ;
   histogram_map_U0_hist_ce0__temp = histogram_map_U0_hist_ce0 ;
   histogram_map_U0_ap_ready_count__temp = histogram_map_U0_ap_ready_count ;
   histogram_map_U0_ap_continue__temp = histogram_map_U0_ap_continue ;
   histogram_map6_U0_ap_idle__temp = histogram_map6_U0_ap_idle ;
   inputA_q0__temp = inputA_q0 ;
   inputA_ce1__temp = inputA_ce1 ;
   ap_channel_done_hist2__temp = ap_channel_done_hist2 ;
   ap_idle__temp = ap_idle ;
   ap_clk__temp = ap_clk ;
   inputA_we1__temp = inputA_we1 ;
   histogram_map_U0_start_full_n__temp = histogram_map_U0_start_full_n ;
   inputA_address0__temp = inputA_address0 ;
   hist1_t_q1__temp = hist1_t_q1 ;
   histogram_map6_U0_hist_we0__temp = histogram_map6_U0_hist_we0 ;
   hist_ce1__temp = hist_ce1 ;
   histogram_map6_U0_in_r_ce0__temp = histogram_map6_U0_in_r_ce0 ;
   ap_sync_continue__temp = ap_sync_continue ;
   hist1_t_q0__temp = hist1_t_q0 ;
   hist1_t_empty_n__temp = hist1_t_empty_n ;
   histogram_map6_U0_hist_address1__temp = histogram_map6_U0_hist_address1 ;
   inputB_we1__temp = inputB_we1 ;
   histogram_reduce_U0_ap_ready__temp = histogram_reduce_U0_ap_ready ;
   histogram_map_U0_in_r_address0__temp = histogram_map_U0_in_r_address0 ;
   ap_sync_histogram_map6_U0_ap_ready__temp = ap_sync_histogram_map6_U0_ap_ready ;
   histogram_map6_U0_start_write__temp = histogram_map6_U0_start_write ;
   histogram_map_U0_ap_start__temp = histogram_map_U0_ap_start ;
   ap_done__temp = ap_done ;
   hist1_i_q1__temp = hist1_i_q1 ;
   inputB_ce1__temp = inputB_ce1 ;
   ap_sync_reg_histogram_map_U0_ap_ready__temp = ap_sync_reg_histogram_map_U0_ap_ready ;
   hist2_i_d1__temp = hist2_i_d1 ;
   histogram_reduce_U0_ap_start__temp = histogram_reduce_U0_ap_start ;
   histogram_reduce_U0_hist1_ce0__temp = histogram_reduce_U0_hist1_ce0 ;
   histogram_map6_U0_hist_ce0__temp = histogram_map6_U0_hist_ce0 ;
   histogram_reduce_U0_ap_continue__temp = histogram_reduce_U0_ap_continue ;
   ap_sync_histogram_map_U0_ap_ready__temp = ap_sync_histogram_map_U0_ap_ready ;
   histogram_map6_U0_hist_full_n__temp = histogram_map6_U0_hist_full_n ;
   hist_q0__temp = hist_q0 ;
   inputA_ce0__temp = inputA_ce0 ;
   ap_rst__temp = ap_rst ;
   histogram_reduce_U0_output_r_we0__temp = histogram_reduce_U0_output_r_we0 ;
   histogram_map6_U0_ap_continue__temp = histogram_map6_U0_ap_continue ;
   inputB_ce0__temp = inputB_ce0 ;
   inputB_q0__temp = inputB_q0 ;
   hist_we1__temp = hist_we1 ;
   histogram_map_U0_hist_address1__temp = histogram_map_U0_hist_address1 ;
   histogram_map6_U0_hist_ce1__temp = histogram_map6_U0_hist_ce1 ;
   ap_channel_done_hist1__temp = ap_channel_done_hist1 ;
   histogram_map_U0_hist_ce1__temp = histogram_map_U0_hist_ce1 ;
   histogram_reduce_U0_output_r_ce0__temp = histogram_reduce_U0_output_r_ce0 ;
   inputB_address1__temp = inputB_address1 ;
   histogram_map6_U0_ap_ready_count__temp = histogram_map6_U0_ap_ready_count ;
   inputB_d0__temp = inputB_d0 ;
   histogram_reduce_U0_output_r_address0__temp = histogram_reduce_U0_output_r_address0 ;
   inputB_we0__temp = inputB_we0 ;
   hist_d1__temp = hist_d1 ;
   inputB_d1__temp = inputB_d1 ;
   hist_d0__temp = hist_d0 ;
   hist2_i_full_n__temp = hist2_i_full_n ;
   hist1_i_d1__temp = hist1_i_d1 ;
   hist1_i_we1__temp = hist1_i_we1 ;
   histogram_map6_U0_ap_start__temp = histogram_map6_U0_ap_start ;
   histogram_map6_U0_ap_done__temp = histogram_map6_U0_ap_done ;
   histogram_map_U0_start_write__temp = histogram_map_U0_start_write ;
   hist_q1__temp = hist_q1 ;
   hist2_i_q1__temp = hist2_i_q1 ;
   histogram_reduce_U0_hist2_ce0__temp = histogram_reduce_U0_hist2_ce0 ;
   histogram_map_U0_hist_we0__temp = histogram_map_U0_hist_we0 ;
   histogram_reduce_U0_ap_idle__temp = histogram_reduce_U0_ap_idle ;
   histogram_reduce_U0_output_r_d0__temp = histogram_reduce_U0_output_r_d0 ;
   hist2_i_we1__temp = hist2_i_we1 ;
   inputA_address1__temp = inputA_address1 ;
   histogram_map_U0_ap_done__temp = histogram_map_U0_ap_done ;
   ap_ready__temp = ap_ready ;
   inputB_address0__temp = inputB_address0 ;
   ap_sync_done__temp = ap_sync_done ;
   hist2_t_q0__temp = hist2_t_q0 ;
   inputA_we0__temp = inputA_we0 ;
   histogram_map_U0_ap_idle__temp = histogram_map_U0_ap_idle ;
   inputA_d1__temp = inputA_d1 ;
   inputA_q1__temp = inputA_q1 ;
   histogram_reduce_U0_hist2_address0__temp = histogram_reduce_U0_hist2_address0 ;
   histogram_map_U0_hist_d0__temp = histogram_map_U0_hist_d0 ;
   histogram_map6_U0_hist_address0__temp = histogram_map6_U0_hist_address0 ;
   ap_sync_reg_histogram_map6_U0_ap_ready__temp = ap_sync_reg_histogram_map6_U0_ap_ready ;
   hist_we0__temp = hist_we0 ;

       inputA_ce0 = 0;
       inputA_we0 = 0;
       inputA_ce1 = 0;
       inputA_we1 = 0;
       inputA_address0 =   ( histogram_map6_U0_in_r_address0 & 18446744073709551615 ) ;
       inputA_address1 =   ( 0 ) & 3;
       inputA_d0 =   ( 0 ) & 4294967295;
       inputA_d1 =   ( 0 ) & 4294967295;
       inputB_ce0 = 0;
       inputB_we0 = 0;
       inputB_ce1 = 0;
       inputB_we1 = 0;
       inputB_address0 =   ( histogram_map_U0_in_r_address0 & 18446744073709551615 ) ;
       inputB_address1 =   ( 0 ) & 3;
       inputB_d0 =   ( 0 ) & 4294967295;
       inputB_d1 =   ( 0 ) & 4294967295;
       hist_ce0 = 0;
       hist_we0 = 0;
       hist_ce1 = 0;
       hist_we1 = 0;
       hist_address0 =   ( histogram_reduce_U0_output_r_address0 & 18446744073709551615 ) ;
       hist_address1 =   ( 0 ) & 255;
       hist_d0 =   ( histogram_reduce_U0_output_r_d0 & 18446744073709551615 ) ;
       hist_d1 =   ( 0 ) & 4294967295;
       if(!(ap_rst == 1)){
if(!((ap_sync_ready && ap_start) == 1)){
ap_sync_reg_histogram_map6_U0_ap_ready =  ( ( histogram_map6_U0_ap_ready | ap_sync_reg_histogram_map6_U0_ap_ready ) & 1 )  ; 

}

}
       if(!(ap_rst == 1)){
if(!((ap_sync_ready && ap_start) == 1)){
ap_sync_reg_histogram_map_U0_ap_ready =  ( ( histogram_map_U0_ap_ready | ap_sync_reg_histogram_map_U0_ap_ready ) & 1 )  ; 

}

}
       if(!((histogram_map6_U0_ap_ready == 0) && (ap_sync_ready == 1))){
if((ap_sync_ready == 0) && (histogram_map6_U0_ap_ready == 1)){
histogram_map6_U0_ap_ready_count =  ( ( histogram_map6_U0_ap_ready_count + 1 ) & 3 )  ; 

}

}
       if(!((histogram_map_U0_ap_ready == 0) && (ap_sync_ready == 1))){
if((ap_sync_ready == 0) && (histogram_map_U0_ap_ready == 1)){
histogram_map_U0_ap_ready_count =  ( ( histogram_map_U0_ap_ready_count + 1 ) & 3 )  ; 

}

}
   
  if(histogram_map6_U0_ap_done == 1  && histogram_map6_U0_ap_continue == 1)
   {
       i1++;
       inputA_ram = input[i1];
       inputB_ram = input[i1]+INPUT_SIZE/2;
   }

   if(histogram_reduce_U0_ap_done == 1)
   {
       i2++;
       hist_ram = output[i2];
   }

   if(ap_done == 1 && i2 == SIZE){
       goto end;
   }
       goto ap_ST_fsm_state2;

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
   hist1_i_full_n__temp = hist1_i_full_n ;
   hist2_t_empty_n__temp = hist2_t_empty_n ;
   histogram_map6_U0_start_full_n__temp = histogram_map6_U0_start_full_n ;
   inputB_q1__temp = inputB_q1 ;
   ap_sync_ready__temp = ap_sync_ready ;
   histogram_map6_U0_ap_ready__temp = histogram_map6_U0_ap_ready ;
   histogram_reduce_U0_start_write__temp = histogram_reduce_U0_start_write ;
   inputA_d0__temp = inputA_d0 ;
   hist2_t_q1__temp = hist2_t_q1 ;
   histogram_map6_U0_in_r_address0__temp = histogram_map6_U0_in_r_address0 ;
   hist1_i_q0__temp = hist1_i_q0 ;
   hist2_i_q0__temp = hist2_i_q0 ;
   histogram_map_U0_hist_address0__temp = histogram_map_U0_hist_address0 ;
   histogram_reduce_U0_hist1_address0__temp = histogram_reduce_U0_hist1_address0 ;
   hist_ce0__temp = hist_ce0 ;
   histogram_map_U0_hist_full_n__temp = histogram_map_U0_hist_full_n ;
   ap_start__temp = ap_start ;
   histogram_reduce_U0_start_full_n__temp = histogram_reduce_U0_start_full_n ;
   histogram_map_U0_in_r_ce0__temp = histogram_map_U0_in_r_ce0 ;
   histogram_map_U0_ap_ready__temp = histogram_map_U0_ap_ready ;
   histogram_map6_U0_hist_d0__temp = histogram_map6_U0_hist_d0 ;
   hist_address0__temp = hist_address0 ;
   histogram_reduce_U0_ap_done__temp = histogram_reduce_U0_ap_done ;
   hist_address1__temp = hist_address1 ;
   histogram_map_U0_hist_ce0__temp = histogram_map_U0_hist_ce0 ;
   histogram_map_U0_ap_ready_count__temp = histogram_map_U0_ap_ready_count ;
   histogram_map_U0_ap_continue__temp = histogram_map_U0_ap_continue ;
   histogram_map6_U0_ap_idle__temp = histogram_map6_U0_ap_idle ;
   inputA_q0__temp = inputA_q0 ;
   inputA_ce1__temp = inputA_ce1 ;
   ap_channel_done_hist2__temp = ap_channel_done_hist2 ;
   ap_idle__temp = ap_idle ;
   ap_clk__temp = ap_clk ;
   inputA_we1__temp = inputA_we1 ;
   histogram_map_U0_start_full_n__temp = histogram_map_U0_start_full_n ;
   inputA_address0__temp = inputA_address0 ;
   hist1_t_q1__temp = hist1_t_q1 ;
   histogram_map6_U0_hist_we0__temp = histogram_map6_U0_hist_we0 ;
   hist_ce1__temp = hist_ce1 ;
   histogram_map6_U0_in_r_ce0__temp = histogram_map6_U0_in_r_ce0 ;
   ap_sync_continue__temp = ap_sync_continue ;
   hist1_t_q0__temp = hist1_t_q0 ;
   hist1_t_empty_n__temp = hist1_t_empty_n ;
   histogram_map6_U0_hist_address1__temp = histogram_map6_U0_hist_address1 ;
   inputB_we1__temp = inputB_we1 ;
   histogram_reduce_U0_ap_ready__temp = histogram_reduce_U0_ap_ready ;
   histogram_map_U0_in_r_address0__temp = histogram_map_U0_in_r_address0 ;
   ap_sync_histogram_map6_U0_ap_ready__temp = ap_sync_histogram_map6_U0_ap_ready ;
   histogram_map6_U0_start_write__temp = histogram_map6_U0_start_write ;
   histogram_map_U0_ap_start__temp = histogram_map_U0_ap_start ;
   ap_done__temp = ap_done ;
   hist1_i_q1__temp = hist1_i_q1 ;
   inputB_ce1__temp = inputB_ce1 ;
   ap_sync_reg_histogram_map_U0_ap_ready__temp = ap_sync_reg_histogram_map_U0_ap_ready ;
   hist2_i_d1__temp = hist2_i_d1 ;
   histogram_reduce_U0_ap_start__temp = histogram_reduce_U0_ap_start ;
   histogram_reduce_U0_hist1_ce0__temp = histogram_reduce_U0_hist1_ce0 ;
   histogram_map6_U0_hist_ce0__temp = histogram_map6_U0_hist_ce0 ;
   histogram_reduce_U0_ap_continue__temp = histogram_reduce_U0_ap_continue ;
   ap_sync_histogram_map_U0_ap_ready__temp = ap_sync_histogram_map_U0_ap_ready ;
   histogram_map6_U0_hist_full_n__temp = histogram_map6_U0_hist_full_n ;
   hist_q0__temp = hist_q0 ;
   inputA_ce0__temp = inputA_ce0 ;
   ap_rst__temp = ap_rst ;
   histogram_reduce_U0_output_r_we0__temp = histogram_reduce_U0_output_r_we0 ;
   histogram_map6_U0_ap_continue__temp = histogram_map6_U0_ap_continue ;
   inputB_ce0__temp = inputB_ce0 ;
   inputB_q0__temp = inputB_q0 ;
   hist_we1__temp = hist_we1 ;
   histogram_map_U0_hist_address1__temp = histogram_map_U0_hist_address1 ;
   histogram_map6_U0_hist_ce1__temp = histogram_map6_U0_hist_ce1 ;
   ap_channel_done_hist1__temp = ap_channel_done_hist1 ;
   histogram_map_U0_hist_ce1__temp = histogram_map_U0_hist_ce1 ;
   histogram_reduce_U0_output_r_ce0__temp = histogram_reduce_U0_output_r_ce0 ;
   inputB_address1__temp = inputB_address1 ;
   histogram_map6_U0_ap_ready_count__temp = histogram_map6_U0_ap_ready_count ;
   inputB_d0__temp = inputB_d0 ;
   histogram_reduce_U0_output_r_address0__temp = histogram_reduce_U0_output_r_address0 ;
   inputB_we0__temp = inputB_we0 ;
   hist_d1__temp = hist_d1 ;
   inputB_d1__temp = inputB_d1 ;
   hist_d0__temp = hist_d0 ;
   hist2_i_full_n__temp = hist2_i_full_n ;
   hist1_i_d1__temp = hist1_i_d1 ;
   hist1_i_we1__temp = hist1_i_we1 ;
   histogram_map6_U0_ap_start__temp = histogram_map6_U0_ap_start ;
   histogram_map6_U0_ap_done__temp = histogram_map6_U0_ap_done ;
   histogram_map_U0_start_write__temp = histogram_map_U0_start_write ;
   hist_q1__temp = hist_q1 ;
   hist2_i_q1__temp = hist2_i_q1 ;
   histogram_reduce_U0_hist2_ce0__temp = histogram_reduce_U0_hist2_ce0 ;
   histogram_map_U0_hist_we0__temp = histogram_map_U0_hist_we0 ;
   histogram_reduce_U0_ap_idle__temp = histogram_reduce_U0_ap_idle ;
   histogram_reduce_U0_output_r_d0__temp = histogram_reduce_U0_output_r_d0 ;
   hist2_i_we1__temp = hist2_i_we1 ;
   inputA_address1__temp = inputA_address1 ;
   histogram_map_U0_ap_done__temp = histogram_map_U0_ap_done ;
   ap_ready__temp = ap_ready ;
   inputB_address0__temp = inputB_address0 ;
   ap_sync_done__temp = ap_sync_done ;
   hist2_t_q0__temp = hist2_t_q0 ;
   inputA_we0__temp = inputA_we0 ;
   histogram_map_U0_ap_idle__temp = histogram_map_U0_ap_idle ;
   inputA_d1__temp = inputA_d1 ;
   inputA_q1__temp = inputA_q1 ;
   histogram_reduce_U0_hist2_address0__temp = histogram_reduce_U0_hist2_address0 ;
   histogram_map_U0_hist_d0__temp = histogram_map_U0_hist_d0 ;
   histogram_map6_U0_hist_address0__temp = histogram_map6_U0_hist_address0 ;
   ap_sync_reg_histogram_map6_U0_ap_ready__temp = ap_sync_reg_histogram_map6_U0_ap_ready ;
   hist_we0__temp = hist_we0 ;

       inputA_ce0 = 0;
       inputA_we0 = 0;
       inputA_ce1 = 0;
       inputA_we1 = 0;
       inputA_address0 =   ( histogram_map6_U0_in_r_address0 & 18446744073709551615 ) ;
       inputA_address1 =   ( 0 ) & 3;
       inputA_d0 =   ( 0 ) & 4294967295;
       inputA_d1 =   ( 0 ) & 4294967295;
       inputB_ce0 = 0;
       inputB_we0 = 0;
       inputB_ce1 = 0;
       inputB_we1 = 0;
       inputB_address0 =   ( histogram_map_U0_in_r_address0 & 18446744073709551615 ) ;
       inputB_address1 =   ( 0 ) & 3;
       inputB_d0 =   ( 0 ) & 4294967295;
       inputB_d1 =   ( 0 ) & 4294967295;
       hist_ce0 = 0;
       hist_we0 = 0;
       hist_ce1 = 0;
       hist_we1 = 0;
       hist_address0 =   ( histogram_reduce_U0_output_r_address0 & 18446744073709551615 ) ;
       hist_address1 =   ( 0 ) & 255;
       hist_d0 =   ( histogram_reduce_U0_output_r_d0 & 18446744073709551615 ) ;
       hist_d1 =   ( 0 ) & 4294967295;
       if(!(ap_rst == 1)){
              if((ap_sync_ready & ap_start) == 1){ 
                     ap_sync_reg_histogram_map6_U0_ap_ready = 0;
              }
              
if(!((ap_sync_ready && ap_start) == 1)){
ap_sync_reg_histogram_map6_U0_ap_ready =  ( ( histogram_map6_U0_ap_ready | ap_sync_reg_histogram_map6_U0_ap_ready ) & 1 )  ; 

}

}
       if(!(ap_rst == 1)){
              if((ap_sync_ready & ap_start) == 1){ 
                     ap_sync_reg_histogram_map_U0_ap_ready = 0;
              }
if(!((ap_sync_ready && ap_start) == 1)){
ap_sync_reg_histogram_map_U0_ap_ready =  ( ( histogram_map_U0_ap_ready | ap_sync_reg_histogram_map_U0_ap_ready ) & 1 )  ; 

}

}
       if(!((histogram_map6_U0_ap_ready == 0) && (ap_sync_ready == 1))){
if((ap_sync_ready == 0) && (histogram_map6_U0_ap_ready == 1)){
histogram_map6_U0_ap_ready_count =  ( ( histogram_map6_U0_ap_ready_count + 1 ) & 3 )  ; 

}

}
       if(!((histogram_map_U0_ap_ready == 0) && (ap_sync_ready == 1))){
if((ap_sync_ready == 0) && (histogram_map_U0_ap_ready == 1)){
histogram_map_U0_ap_ready_count =  ( ( histogram_map_U0_ap_ready_count + 1 ) & 3 )  ; 

}

}
histogram_map6(&ap_clk,&histogram_map6_U0_ap_continue,&histogram_map6_U0_ap_done,&histogram_map6_U0_ap_idle,&histogram_map6_U0_ap_ready,&ap_rst,&histogram_map6_U0_ap_start,&ap_status_histogram_map6_histogram_map6_U0,&histogram_map6_U0_hist_address0,&histogram_map6_U0_hist_address1,&histogram_map6_U0_hist_ce0,&histogram_map6_U0_hist_ce1,&histogram_map6_U0_hist_d0,&hist1_i_q1,&histogram_map6_U0_hist_we0,&histogram_map6_U0_in_r_address0,&histogram_map6_U0_in_r_ce0,&inputA_q0, inputA_ram,dummy);
histogram_map(&ap_clk,&histogram_map_U0_ap_continue,&histogram_map_U0_ap_done,&histogram_map_U0_ap_idle,&histogram_map_U0_ap_ready,&ap_rst,&histogram_map_U0_ap_start,&ap_status_histogram_map_histogram_map_U0,&histogram_map_U0_hist_address0,&histogram_map_U0_hist_address1,&histogram_map_U0_hist_ce0,&histogram_map_U0_hist_ce1,&histogram_map_U0_hist_d0,&hist2_i_q1,&histogram_map_U0_hist_we0,&histogram_map_U0_in_r_address0,&histogram_map_U0_in_r_ce0,&inputB_q0, inputB_ram,dummy);
histogram_reduce(&ap_clk,&histogram_reduce_U0_ap_continue,&histogram_reduce_U0_ap_done,&histogram_reduce_U0_ap_idle,&histogram_reduce_U0_ap_ready,&ap_rst,&histogram_reduce_U0_ap_start,&ap_status_histogram_reduce_histogram_reduce_U0,&histogram_reduce_U0_hist1_address0,&histogram_reduce_U0_hist1_ce0,&hist1_t_q0,&histogram_reduce_U0_hist2_address0,&histogram_reduce_U0_hist2_ce0,&hist2_t_q0,&histogram_reduce_U0_output_r_address0,&histogram_reduce_U0_output_r_ce0,&histogram_reduce_U0_output_r_d0,&histogram_reduce_U0_output_r_we0, hist_ram,dummy);
histogram_hist1_hist1(&ap_status_histogram_hist1_hist1_U,&ap_clk,&histogram_map6_U0_hist_address0,&histogram_map6_U0_hist_address1,&i_ce_histogram_hist1_hist1_U,&histogram_map6_U0_hist_ce0,&histogram_map6_U0_hist_ce1,&histogram_map6_U0_hist_d0,&hist1_i_full_n,&hist1_i_q0,&hist1_i_q1,&histogram_map6_U0_hist_we0,&histogram_map6_U0_ap_done,&ap_rst,&histogram_reduce_U0_hist1_address0,&t_address1_histogram_hist1_hist1_U,&t_ce_histogram_hist1_hist1_U,&histogram_reduce_U0_hist1_ce0,&t_ce1_histogram_hist1_hist1_U,&t_d0_histogram_hist1_hist1_U,&hist1_t_empty_n,&hist1_t_q0,&hist1_t_q1,&histogram_reduce_U0_ap_ready,&t_we0_histogram_hist1_hist1_U,dummy);
histogram_hist1_hist2(&ap_status_histogram_hist1_hist2_U,&ap_clk,&histogram_map_U0_hist_address0,&histogram_map_U0_hist_address1,&i_ce_histogram_hist1_hist2_U,&histogram_map_U0_hist_ce0,&histogram_map_U0_hist_ce1,&histogram_map_U0_hist_d0,&hist2_i_full_n,&hist2_i_q0,&hist2_i_q1,&histogram_map_U0_hist_we0,&histogram_map_U0_ap_done,&ap_rst,&histogram_reduce_U0_hist2_address0,&t_address1_histogram_hist1_hist2_U,&t_ce_histogram_hist1_hist2_U,&histogram_reduce_U0_hist2_ce0,&t_ce1_histogram_hist1_hist2_U,&t_d0_histogram_hist1_hist2_U,&hist2_t_empty_n,&hist2_t_q0,&hist2_t_q1,&histogram_reduce_U0_ap_ready,&t_we0_histogram_hist1_hist2_U,dummy);
    ap_done = histogram_reduce_U0_ap_done ;
     histogram_map6_U0_ap_start = (ap_sync_reg_histogram_map6_U0_ap_ready ^ 1) && ap_start ;
     histogram_map_U0_ap_start = (ap_sync_reg_histogram_map_U0_ap_ready ^ 1) && ap_start ;
     histogram_reduce_U0_ap_start = hist2_t_empty_n && hist1_t_empty_n ;

     histogram_map6_U0_ap_continue = hist1_i_full_n;
     histogram_map6_U0_hist_full_n = hist1_i_full_n;
     histogram_map_U0_ap_continue = hist2_i_full_n;
     histogram_map_U0_hist_full_n = hist2_i_full_n;
     ap_sync_ready = (histogram_map_U0_ap_ready || ap_sync_reg_histogram_map_U0_ap_ready) && (histogram_map6_U0_ap_ready || ap_sync_reg_histogram_map6_U0_ap_ready );

	ap_clk = ap_clk + 1 ; 
        goto ap_ST_fsm_state1;
   end:
    *ap_clk__1=ap_clk;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *hist_address0__1=hist_address0;
    *hist_address1__1=hist_address1;
    *hist_ce0__1=hist_ce0;
    *hist_ce1__1=hist_ce1;
    *hist_d0__1=hist_d0;
    *hist_d1__1=hist_d1;
    *hist_q0__1=hist_q0;
    *hist_q1__1=hist_q1;
    *hist_we0__1=hist_we0;
    *hist_we1__1=hist_we1;
    *inputA_address0__1=inputA_address0;
    *inputA_address1__1=inputA_address1;
    *inputA_ce0__1=inputA_ce0;
    *inputA_ce1__1=inputA_ce1;
    *inputA_d0__1=inputA_d0;
    *inputA_d1__1=inputA_d1;
    *inputA_q0__1=inputA_q0;
    *inputA_q1__1=inputA_q1;
    *inputA_we0__1=inputA_we0;
    *inputA_we1__1=inputA_we1;
    *inputB_address0__1=inputB_address0;
    *inputB_address1__1=inputB_address1;
    *inputB_ce0__1=inputB_ce0;
    *inputB_ce1__1=inputB_ce1;
    *inputB_d0__1=inputB_d0;
    *inputB_d1__1=inputB_d1;
    *inputB_q0__1=inputB_q0;
    *inputB_q1__1=inputB_q1;
    *inputB_we0__1=inputB_we0;
    *inputB_we1__1=inputB_we1;
       return;
}
