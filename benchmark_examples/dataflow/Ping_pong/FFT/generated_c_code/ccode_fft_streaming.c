#include<stdio.h>
#include"ccode_fft_streaming_Stabkb_Stage1_I_U.c"
#include"ccode_fft_streaming_Stabkb_Stage1_R_U.c"
#include"ccode_fft_streaming_StadEe_Stage2_I_U.c"
#include"ccode_fft_streaming_StadEe_Stage2_R_U.c"
#include"ccode_fft_streaming_StadEe_Stage3_I_U.c"
#include"ccode_fft_streaming_StadEe_Stage3_R_U.c"
#include"ccode_bit_reverse.c"
#include"ccode_fft_stage6.c"
#include"ccode_fft_stage7.c"
#include"ccode_fft_stage8.c"


#define X_R_DWIDTH 32
#define X_I_DWIDTH 32
#define OUT_R_DWIDTH 32
#define OUT_I_DWIDTH 32
void fft_streaming_Stabkb_Stage1_R_U(long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void fft_streaming_Stabkb_Stage1_I_U(long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void fft_streaming_StadEe_Stage2_R_U(long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void fft_streaming_StadEe_Stage2_I_U(long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void fft_streaming_StadEe_Stage3_R_U(long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void fft_streaming_StadEe_Stage3_I_U(long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void bit_reverse(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void fft_stage6(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,long long int * ,int dummy);
void fft_stage7(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,long long int * ,int dummy);
void fft_stage8(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void fft_streaming(unsigned long long int *OUT_I_address0__1,unsigned long long int *OUT_I_address1__1,unsigned long long int *OUT_I_ce0__1,unsigned long long int *OUT_I_ce1__1,unsigned long long int *OUT_I_d0__1,unsigned long long int *OUT_I_d1__1,unsigned long long int *OUT_I_q0__1,unsigned long long int *OUT_I_q1__1,unsigned long long int *OUT_I_we0__1,unsigned long long int *OUT_I_we1__1,unsigned long long int *OUT_R_address0__1,unsigned long long int *OUT_R_address1__1,unsigned long long int *OUT_R_ce0__1,unsigned long long int *OUT_R_ce1__1,unsigned long long int *OUT_R_d0__1,unsigned long long int *OUT_R_d1__1,unsigned long long int *OUT_R_q0__1,unsigned long long int *OUT_R_q1__1,unsigned long long int *OUT_R_we0__1,unsigned long long int *OUT_R_we1__1,unsigned long long int *X_I_address0__1,unsigned long long int *X_I_address1__1,unsigned long long int *X_I_ce0__1,unsigned long long int *X_I_ce1__1,unsigned long long int *X_I_d0__1,unsigned long long int *X_I_d1__1,unsigned long long int *X_I_q0__1,unsigned long long int *X_I_q1__1,unsigned long long int *X_I_we0__1,unsigned long long int *X_I_we1__1,unsigned long long int *X_R_address0__1,unsigned long long int *X_R_address1__1,unsigned long long int *X_R_ce0__1,unsigned long long int *X_R_ce1__1,unsigned long long int *X_R_d0__1,unsigned long long int *X_R_d1__1,unsigned long long int *X_R_q0__1,unsigned long long int *X_R_q1__1,unsigned long long int *X_R_we0__1,unsigned long long int *X_R_we1__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int  *X_R_ram ,unsigned long long int  *X_I_ram ,unsigned long long int  *OUT_R_ram ,unsigned long long int  *OUT_I_ram , int dummy){
unsigned long long int OUT_I_address0=*OUT_I_address0__1;
unsigned long long int OUT_I_address1=*OUT_I_address1__1;
unsigned long long int OUT_I_ce0=*OUT_I_ce0__1;
unsigned long long int OUT_I_ce1=*OUT_I_ce1__1;
unsigned long long int OUT_I_d0=*OUT_I_d0__1;
unsigned long long int OUT_I_d1=*OUT_I_d1__1;
unsigned long long int OUT_I_q0=*OUT_I_q0__1;
unsigned long long int OUT_I_q1=*OUT_I_q1__1;
unsigned long long int OUT_I_we0=*OUT_I_we0__1;
unsigned long long int OUT_I_we1=*OUT_I_we1__1;
unsigned long long int OUT_R_address0=*OUT_R_address0__1;
unsigned long long int OUT_R_address1=*OUT_R_address1__1;
unsigned long long int OUT_R_ce0=*OUT_R_ce0__1;
unsigned long long int OUT_R_ce1=*OUT_R_ce1__1;
unsigned long long int OUT_R_d0=*OUT_R_d0__1;
unsigned long long int OUT_R_d1=*OUT_R_d1__1;
unsigned long long int OUT_R_q0=*OUT_R_q0__1;
unsigned long long int OUT_R_q1=*OUT_R_q1__1;
unsigned long long int OUT_R_we0=*OUT_R_we0__1;
unsigned long long int OUT_R_we1=*OUT_R_we1__1;
unsigned long long int X_I_address0=*X_I_address0__1;
unsigned long long int X_I_address1=*X_I_address1__1;
unsigned long long int X_I_ce0=*X_I_ce0__1;
unsigned long long int X_I_ce1=*X_I_ce1__1;
unsigned long long int X_I_d0=*X_I_d0__1;
unsigned long long int X_I_d1=*X_I_d1__1;
unsigned long long int X_I_q0=*X_I_q0__1;
unsigned long long int X_I_q1=*X_I_q1__1;
unsigned long long int X_I_we0=*X_I_we0__1;
unsigned long long int X_I_we1=*X_I_we1__1;
unsigned long long int X_R_address0=*X_R_address0__1;
unsigned long long int X_R_address1=*X_R_address1__1;
unsigned long long int X_R_ce0=*X_R_ce0__1;
unsigned long long int X_R_ce1=*X_R_ce1__1;
unsigned long long int X_R_d0=*X_R_d0__1;
unsigned long long int X_R_d1=*X_R_d1__1;
unsigned long long int X_R_q0=*X_R_q0__1;
unsigned long long int X_R_q1=*X_R_q1__1;
unsigned long long int X_R_we0=*X_R_we0__1;
unsigned long long int X_R_we1=*X_R_we1__1;
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_status_bit_reverse_bit_reverse_U0=1;
   long long int ap_status_fft_stage6_fft_stage6_U0=1;
   long long int ap_status_fft_stage7_fft_stage7_U0=1;
   long long int ap_status_fft_stage8_fft_stage8_U0=1;
   long long int ap_status_fft_streaming_Stabkb_Stage1_I_U=1;
   long long int ap_status_fft_streaming_Stabkb_Stage1_R_U=1;
   long long int ap_status_fft_streaming_StadEe_Stage2_I_U=1;
   long long int ap_status_fft_streaming_StadEe_Stage2_R_U=1;
   long long int ap_status_fft_streaming_StadEe_Stage3_I_U=1;
   long long int ap_status_fft_streaming_StadEe_Stage3_R_U=1;
   unsigned long long int OUT_I_address0__temp=0;
   unsigned long long int OUT_I_address1__temp=0;
   unsigned long long int OUT_I_ce0__temp=0;
   unsigned long long int OUT_I_ce1__temp=0;
   unsigned long long int OUT_I_d0__temp=0;
   unsigned long long int OUT_I_d1__temp=0;
   unsigned long long int OUT_I_q0__temp=0;
   unsigned long long int OUT_I_q1__temp=0;
   unsigned long long int OUT_I_we0__temp=0;
   unsigned long long int OUT_I_we1__temp=0;
   unsigned long long int OUT_R_address0__temp=0;
   unsigned long long int OUT_R_address1__temp=0;
   unsigned long long int OUT_R_ce0__temp=0;
   unsigned long long int OUT_R_ce1__temp=0;
   unsigned long long int OUT_R_d0__temp=0;
   unsigned long long int OUT_R_d1__temp=0;
   unsigned long long int OUT_R_q0__temp=0;
   unsigned long long int OUT_R_q1__temp=0;
   unsigned long long int OUT_R_we0__temp=0;
   unsigned long long int OUT_R_we1__temp=0;
   unsigned long long int Stage1_I_i_full_n=0;
   unsigned long long int Stage1_I_i_full_n__temp=0;
   unsigned long long int Stage1_I_i_q0=0;
   unsigned long long int Stage1_I_i_q0__temp=0;
   unsigned long long int Stage1_I_t_empty_n=0;
   unsigned long long int Stage1_I_t_empty_n__temp=0;
   unsigned long long int Stage1_I_t_q0=0;
   unsigned long long int Stage1_I_t_q0__temp=0;
   unsigned long long int Stage1_R_i_full_n=0;
   unsigned long long int Stage1_R_i_full_n__temp=0;
   unsigned long long int Stage1_R_i_q0=0;
   unsigned long long int Stage1_R_i_q0__temp=0;
   unsigned long long int Stage1_R_t_empty_n=0;
   unsigned long long int Stage1_R_t_empty_n__temp=0;
   unsigned long long int Stage1_R_t_q0=0;
   unsigned long long int Stage1_R_t_q0__temp=0;
   unsigned long long int Stage2_I_i_full_n=0;
   unsigned long long int Stage2_I_i_full_n__temp=0;
   unsigned long long int Stage2_I_i_q0=0;
   unsigned long long int Stage2_I_i_q0__temp=0;
   unsigned long long int Stage2_I_t_empty_n=0;
   unsigned long long int Stage2_I_t_empty_n__temp=0;
   unsigned long long int Stage2_I_t_q0=0;
   unsigned long long int Stage2_I_t_q0__temp=0;
   unsigned long long int Stage2_R_i_full_n=0;
   unsigned long long int Stage2_R_i_full_n__temp=0;
   unsigned long long int Stage2_R_i_q0=0;
   unsigned long long int Stage2_R_i_q0__temp=0;
   unsigned long long int Stage2_R_t_empty_n=0;
   unsigned long long int Stage2_R_t_empty_n__temp=0;
   unsigned long long int Stage2_R_t_q0=0;
   unsigned long long int Stage2_R_t_q0__temp=0;
   unsigned long long int Stage3_I_i_full_n=0;
   unsigned long long int Stage3_I_i_full_n__temp=0;
   unsigned long long int Stage3_I_i_q0=0;
   unsigned long long int Stage3_I_i_q0__temp=0;
   unsigned long long int Stage3_I_t_empty_n=0;
   unsigned long long int Stage3_I_t_empty_n__temp=0;
   unsigned long long int Stage3_I_t_q0=0;
   unsigned long long int Stage3_I_t_q0__temp=0;
   unsigned long long int Stage3_R_i_full_n=0;
   unsigned long long int Stage3_R_i_full_n__temp=0;
   unsigned long long int Stage3_R_i_q0=0;
   unsigned long long int Stage3_R_i_q0__temp=0;
   unsigned long long int Stage3_R_t_empty_n=0;
   unsigned long long int Stage3_R_t_empty_n__temp=0;
   unsigned long long int Stage3_R_t_q0=0;
   unsigned long long int Stage3_R_t_q0__temp=0;
   unsigned long long int X_I_address0__temp=0;
   unsigned long long int X_I_address1__temp=0;
   unsigned long long int X_I_ce0__temp=0;
   unsigned long long int X_I_ce1__temp=0;
   unsigned long long int X_I_d0__temp=0;
   unsigned long long int X_I_d1__temp=0;
   unsigned long long int X_I_q0__temp=0;
   unsigned long long int X_I_q1__temp=0;
   unsigned long long int X_I_we0__temp=0;
   unsigned long long int X_I_we1__temp=0;
   unsigned long long int X_R_address0__temp=0;
   unsigned long long int X_R_address1__temp=0;
   unsigned long long int X_R_ce0__temp=0;
   unsigned long long int X_R_ce1__temp=0;
   unsigned long long int X_R_d0__temp=0;
   unsigned long long int X_R_d1__temp=0;
   unsigned long long int X_R_q0__temp=0;
   unsigned long long int X_R_q1__temp=0;
   unsigned long long int X_R_we0__temp=0;
   unsigned long long int X_R_we1__temp=0;
   unsigned long long int ap_channel_done_Stage1_I=0;
   unsigned long long int ap_channel_done_Stage1_I__temp=0;
   unsigned long long int ap_channel_done_Stage1_R=0;
   unsigned long long int ap_channel_done_Stage1_R__temp=0;
   unsigned long long int ap_channel_done_Stage2_I=0;
   unsigned long long int ap_channel_done_Stage2_I__temp=0;
   unsigned long long int ap_channel_done_Stage2_R=0;
   unsigned long long int ap_channel_done_Stage2_R__temp=0;
   unsigned long long int ap_channel_done_Stage3_I=0;
   unsigned long long int ap_channel_done_Stage3_I__temp=0;
   unsigned long long int ap_channel_done_Stage3_R=0;
   unsigned long long int ap_channel_done_Stage3_R__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_done__temp=0;
   unsigned long long int ap_idle__temp=0;
   unsigned long long int ap_ready__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=0;
   unsigned long long int ap_sync_channel_write_Stage1_I=0;
   unsigned long long int ap_sync_channel_write_Stage1_I__temp=0;
   unsigned long long int ap_sync_channel_write_Stage1_R=0;
   unsigned long long int ap_sync_channel_write_Stage1_R__temp=0;
   unsigned long long int ap_sync_channel_write_Stage2_I=0;
   unsigned long long int ap_sync_channel_write_Stage2_I__temp=0;
   unsigned long long int ap_sync_channel_write_Stage2_R=0;
   unsigned long long int ap_sync_channel_write_Stage2_R__temp=0;
   unsigned long long int ap_sync_channel_write_Stage3_I=0;
   unsigned long long int ap_sync_channel_write_Stage3_I__temp=0;
   unsigned long long int ap_sync_channel_write_Stage3_R=0;
   unsigned long long int ap_sync_channel_write_Stage3_R__temp=0;
   unsigned long long int ap_sync_continue=1;
   unsigned long long int ap_sync_continue__temp=0;
   unsigned long long int ap_sync_done=0;
   unsigned long long int ap_sync_done__temp=0;
   unsigned long long int ap_sync_ready=0;
   unsigned long long int ap_sync_ready__temp=0;
   unsigned long long int ap_sync_reg_channel_write_Stage1_I=0;
   unsigned long long int ap_sync_reg_channel_write_Stage1_I__temp=0;
   unsigned long long int ap_sync_reg_channel_write_Stage1_R=0;
   unsigned long long int ap_sync_reg_channel_write_Stage1_R__temp=0;
   unsigned long long int ap_sync_reg_channel_write_Stage2_I=0;
   unsigned long long int ap_sync_reg_channel_write_Stage2_I__temp=0;
   unsigned long long int ap_sync_reg_channel_write_Stage2_R=0;
   unsigned long long int ap_sync_reg_channel_write_Stage2_R__temp=0;
   unsigned long long int ap_sync_reg_channel_write_Stage3_I=0;
   unsigned long long int ap_sync_reg_channel_write_Stage3_I__temp=0;
   unsigned long long int ap_sync_reg_channel_write_Stage3_R=0;
   unsigned long long int ap_sync_reg_channel_write_Stage3_R__temp=0;
   unsigned long long int bit_reverse_U0_OUT_I_address0=0;
   unsigned long long int bit_reverse_U0_OUT_I_address0__temp=0;
   unsigned long long int bit_reverse_U0_OUT_I_ce0=0;
   unsigned long long int bit_reverse_U0_OUT_I_ce0__temp=0;
   unsigned long long int bit_reverse_U0_OUT_I_d0=0;
   unsigned long long int bit_reverse_U0_OUT_I_d0__temp=0;
   unsigned long long int bit_reverse_U0_OUT_I_full_n=0;
   unsigned long long int bit_reverse_U0_OUT_I_full_n__temp=0;
   unsigned long long int bit_reverse_U0_OUT_I_we0=0;
   unsigned long long int bit_reverse_U0_OUT_I_we0__temp=0;
   unsigned long long int bit_reverse_U0_OUT_R_address0=0;
   unsigned long long int bit_reverse_U0_OUT_R_address0__temp=0;
   unsigned long long int bit_reverse_U0_OUT_R_ce0=0;
   unsigned long long int bit_reverse_U0_OUT_R_ce0__temp=0;
   unsigned long long int bit_reverse_U0_OUT_R_d0=0;
   unsigned long long int bit_reverse_U0_OUT_R_d0__temp=0;
   unsigned long long int bit_reverse_U0_OUT_R_full_n=0;
   unsigned long long int bit_reverse_U0_OUT_R_full_n__temp=0;
   unsigned long long int bit_reverse_U0_OUT_R_we0=0;
   unsigned long long int bit_reverse_U0_OUT_R_we0__temp=0;
   unsigned long long int bit_reverse_U0_X_I_address0=0;
   unsigned long long int bit_reverse_U0_X_I_address0__temp=0;
   unsigned long long int bit_reverse_U0_X_I_ce0=0;
   unsigned long long int bit_reverse_U0_X_I_ce0__temp=0;
   unsigned long long int bit_reverse_U0_X_R_address0=0;
   unsigned long long int bit_reverse_U0_X_R_address0__temp=0;
   unsigned long long int bit_reverse_U0_X_R_ce0=0;
   unsigned long long int bit_reverse_U0_X_R_ce0__temp=0;
   unsigned long long int bit_reverse_U0_ap_continue=0;
   unsigned long long int bit_reverse_U0_ap_continue__temp=0;
   unsigned long long int bit_reverse_U0_ap_done=0;
   unsigned long long int bit_reverse_U0_ap_done__temp=0;
   unsigned long long int bit_reverse_U0_ap_idle=0;
   unsigned long long int bit_reverse_U0_ap_idle__temp=0;
   unsigned long long int bit_reverse_U0_ap_ready=0;
   unsigned long long int bit_reverse_U0_ap_ready__temp=0;
   unsigned long long int bit_reverse_U0_ap_start=0;
   unsigned long long int bit_reverse_U0_ap_start__temp=0;
   unsigned long long int bit_reverse_U0_start_full_n=1;
   unsigned long long int bit_reverse_U0_start_full_n__temp=0;
   unsigned long long int bit_reverse_U0_start_write=0;
   unsigned long long int bit_reverse_U0_start_write__temp=0;
   unsigned long long int fft_stage6_U0_Out_I_address0=0;
   unsigned long long int fft_stage6_U0_Out_I_address0__temp=0;
   unsigned long long int fft_stage6_U0_Out_I_address1=0;
   unsigned long long int fft_stage6_U0_Out_I_address1__temp=0;
   unsigned long long int fft_stage6_U0_Out_I_ce0=0;
   unsigned long long int fft_stage6_U0_Out_I_ce0__temp=0;
   unsigned long long int fft_stage6_U0_Out_I_ce1=0;
   unsigned long long int fft_stage6_U0_Out_I_ce1__temp=0;
   unsigned long long int fft_stage6_U0_Out_I_d0=0;
   unsigned long long int fft_stage6_U0_Out_I_d0__temp=0;
   unsigned long long int fft_stage6_U0_Out_I_d1=0;
   unsigned long long int fft_stage6_U0_Out_I_d1__temp=0;
   unsigned long long int fft_stage6_U0_Out_I_full_n=0;
   unsigned long long int fft_stage6_U0_Out_I_full_n__temp=0;
   unsigned long long int fft_stage6_U0_Out_I_we0=0;
   unsigned long long int fft_stage6_U0_Out_I_we0__temp=0;
   unsigned long long int fft_stage6_U0_Out_I_we1=0;
   unsigned long long int fft_stage6_U0_Out_I_we1__temp=0;
   unsigned long long int fft_stage6_U0_Out_R_address0=0;
   unsigned long long int fft_stage6_U0_Out_R_address0__temp=0;
   unsigned long long int fft_stage6_U0_Out_R_address1=0;
   unsigned long long int fft_stage6_U0_Out_R_address1__temp=0;
   unsigned long long int fft_stage6_U0_Out_R_ce0=0;
   unsigned long long int fft_stage6_U0_Out_R_ce0__temp=0;
   unsigned long long int fft_stage6_U0_Out_R_ce1=0;
   unsigned long long int fft_stage6_U0_Out_R_ce1__temp=0;
   unsigned long long int fft_stage6_U0_Out_R_d0=0;
   unsigned long long int fft_stage6_U0_Out_R_d0__temp=0;
   unsigned long long int fft_stage6_U0_Out_R_d1=0;
   unsigned long long int fft_stage6_U0_Out_R_d1__temp=0;
   unsigned long long int fft_stage6_U0_Out_R_full_n=0;
   unsigned long long int fft_stage6_U0_Out_R_full_n__temp=0;
   unsigned long long int fft_stage6_U0_Out_R_we0=0;
   unsigned long long int fft_stage6_U0_Out_R_we0__temp=0;
   unsigned long long int fft_stage6_U0_Out_R_we1=0;
   unsigned long long int fft_stage6_U0_Out_R_we1__temp=0;
   unsigned long long int fft_stage6_U0_X_I_address0=0;
   unsigned long long int fft_stage6_U0_X_I_address0__temp=0;
   unsigned long long int fft_stage6_U0_X_I_ce0=0;
   unsigned long long int fft_stage6_U0_X_I_ce0__temp=0;
   unsigned long long int fft_stage6_U0_X_R_address0=0;
   unsigned long long int fft_stage6_U0_X_R_address0__temp=0;
   unsigned long long int fft_stage6_U0_X_R_ce0=0;
   unsigned long long int fft_stage6_U0_X_R_ce0__temp=0;
   unsigned long long int fft_stage6_U0_ap_continue=0;
   unsigned long long int fft_stage6_U0_ap_continue__temp=0;
   unsigned long long int fft_stage6_U0_ap_done=0;
   unsigned long long int fft_stage6_U0_ap_done__temp=0;
   unsigned long long int fft_stage6_U0_ap_idle=0;
   unsigned long long int fft_stage6_U0_ap_idle__temp=0;
   unsigned long long int fft_stage6_U0_ap_ready=0;
   unsigned long long int fft_stage6_U0_ap_ready__temp=0;
   unsigned long long int fft_stage6_U0_ap_start=0;
   unsigned long long int fft_stage6_U0_ap_start__temp=0;
   unsigned long long int fft_stage6_U0_start_full_n=1;
   unsigned long long int fft_stage6_U0_start_full_n__temp=0;
   unsigned long long int fft_stage6_U0_start_write=0;
   unsigned long long int fft_stage6_U0_start_write__temp=0;
   unsigned long long int fft_stage7_U0_Out_I_address0=0;
   unsigned long long int fft_stage7_U0_Out_I_address0__temp=0;
   unsigned long long int fft_stage7_U0_Out_I_address1=0;
   unsigned long long int fft_stage7_U0_Out_I_address1__temp=0;
   unsigned long long int fft_stage7_U0_Out_I_ce0=0;
   unsigned long long int fft_stage7_U0_Out_I_ce0__temp=0;
   unsigned long long int fft_stage7_U0_Out_I_ce1=0;
   unsigned long long int fft_stage7_U0_Out_I_ce1__temp=0;
   unsigned long long int fft_stage7_U0_Out_I_d0=0;
   unsigned long long int fft_stage7_U0_Out_I_d0__temp=0;
   unsigned long long int fft_stage7_U0_Out_I_d1=0;
   unsigned long long int fft_stage7_U0_Out_I_d1__temp=0;
   unsigned long long int fft_stage7_U0_Out_I_full_n=0;
   unsigned long long int fft_stage7_U0_Out_I_full_n__temp=0;
   unsigned long long int fft_stage7_U0_Out_I_we0=0;
   unsigned long long int fft_stage7_U0_Out_I_we0__temp=0;
   unsigned long long int fft_stage7_U0_Out_I_we1=0;
   unsigned long long int fft_stage7_U0_Out_I_we1__temp=0;
   unsigned long long int fft_stage7_U0_Out_R_address0=0;
   unsigned long long int fft_stage7_U0_Out_R_address0__temp=0;
   unsigned long long int fft_stage7_U0_Out_R_address1=0;
   unsigned long long int fft_stage7_U0_Out_R_address1__temp=0;
   unsigned long long int fft_stage7_U0_Out_R_ce0=0;
   unsigned long long int fft_stage7_U0_Out_R_ce0__temp=0;
   unsigned long long int fft_stage7_U0_Out_R_ce1=0;
   unsigned long long int fft_stage7_U0_Out_R_ce1__temp=0;
   unsigned long long int fft_stage7_U0_Out_R_d0=0;
   unsigned long long int fft_stage7_U0_Out_R_d0__temp=0;
   unsigned long long int fft_stage7_U0_Out_R_d1=0;
   unsigned long long int fft_stage7_U0_Out_R_d1__temp=0;
   unsigned long long int fft_stage7_U0_Out_R_full_n=0;
   unsigned long long int fft_stage7_U0_Out_R_full_n__temp=0;
   unsigned long long int fft_stage7_U0_Out_R_we0=0;
   unsigned long long int fft_stage7_U0_Out_R_we0__temp=0;
   unsigned long long int fft_stage7_U0_Out_R_we1=0;
   unsigned long long int fft_stage7_U0_Out_R_we1__temp=0;
   unsigned long long int fft_stage7_U0_X_I_address0=0;
   unsigned long long int fft_stage7_U0_X_I_address0__temp=0;
   unsigned long long int fft_stage7_U0_X_I_ce0=0;
   unsigned long long int fft_stage7_U0_X_I_ce0__temp=0;
   unsigned long long int fft_stage7_U0_X_R_address0=0;
   unsigned long long int fft_stage7_U0_X_R_address0__temp=0;
   unsigned long long int fft_stage7_U0_X_R_ce0=0;
   unsigned long long int fft_stage7_U0_X_R_ce0__temp=0;
   unsigned long long int fft_stage7_U0_ap_continue=0;
   unsigned long long int fft_stage7_U0_ap_continue__temp=0;
   unsigned long long int fft_stage7_U0_ap_done=0;
   unsigned long long int fft_stage7_U0_ap_done__temp=0;
   unsigned long long int fft_stage7_U0_ap_idle=0;
   unsigned long long int fft_stage7_U0_ap_idle__temp=0;
   unsigned long long int fft_stage7_U0_ap_ready=0;
   unsigned long long int fft_stage7_U0_ap_ready__temp=0;
   unsigned long long int fft_stage7_U0_ap_start=0;
   unsigned long long int fft_stage7_U0_ap_start__temp=0;
   unsigned long long int fft_stage7_U0_start_full_n=1;
   unsigned long long int fft_stage7_U0_start_full_n__temp=0;
   unsigned long long int fft_stage7_U0_start_write=0;
   unsigned long long int fft_stage7_U0_start_write__temp=0;
   unsigned long long int fft_stage8_U0_Out_I_address0=0;
   unsigned long long int fft_stage8_U0_Out_I_address0__temp=0;
   unsigned long long int fft_stage8_U0_Out_I_address1=0;
   unsigned long long int fft_stage8_U0_Out_I_address1__temp=0;
   unsigned long long int fft_stage8_U0_Out_I_ce0=0;
   unsigned long long int fft_stage8_U0_Out_I_ce0__temp=0;
   unsigned long long int fft_stage8_U0_Out_I_ce1=0;
   unsigned long long int fft_stage8_U0_Out_I_ce1__temp=0;
   unsigned long long int fft_stage8_U0_Out_I_d0=0;
   unsigned long long int fft_stage8_U0_Out_I_d0__temp=0;
   unsigned long long int fft_stage8_U0_Out_I_d1=0;
   unsigned long long int fft_stage8_U0_Out_I_d1__temp=0;
   unsigned long long int fft_stage8_U0_Out_I_we0=0;
   unsigned long long int fft_stage8_U0_Out_I_we0__temp=0;
   unsigned long long int fft_stage8_U0_Out_I_we1=0;
   unsigned long long int fft_stage8_U0_Out_I_we1__temp=0;
   unsigned long long int fft_stage8_U0_Out_R_address0=0;
   unsigned long long int fft_stage8_U0_Out_R_address0__temp=0;
   unsigned long long int fft_stage8_U0_Out_R_address1=0;
   unsigned long long int fft_stage8_U0_Out_R_address1__temp=0;
   unsigned long long int fft_stage8_U0_Out_R_ce0=0;
   unsigned long long int fft_stage8_U0_Out_R_ce0__temp=0;
   unsigned long long int fft_stage8_U0_Out_R_ce1=0;
   unsigned long long int fft_stage8_U0_Out_R_ce1__temp=0;
   unsigned long long int fft_stage8_U0_Out_R_d0=0;
   unsigned long long int fft_stage8_U0_Out_R_d0__temp=0;
   unsigned long long int fft_stage8_U0_Out_R_d1=0;
   unsigned long long int fft_stage8_U0_Out_R_d1__temp=0;
   unsigned long long int fft_stage8_U0_Out_R_we0=0;
   unsigned long long int fft_stage8_U0_Out_R_we0__temp=0;
   unsigned long long int fft_stage8_U0_Out_R_we1=0;
   unsigned long long int fft_stage8_U0_Out_R_we1__temp=0;
   unsigned long long int fft_stage8_U0_X_I_address0=0;
   unsigned long long int fft_stage8_U0_X_I_address0__temp=0;
   unsigned long long int fft_stage8_U0_X_I_ce0=0;
   unsigned long long int fft_stage8_U0_X_I_ce0__temp=0;
   unsigned long long int fft_stage8_U0_X_R_address0=0;
   unsigned long long int fft_stage8_U0_X_R_address0__temp=0;
   unsigned long long int fft_stage8_U0_X_R_ce0=0;
   unsigned long long int fft_stage8_U0_X_R_ce0__temp=0;
   unsigned long long int fft_stage8_U0_ap_continue=1;
   unsigned long long int fft_stage8_U0_ap_continue__temp=0;
   unsigned long long int fft_stage8_U0_ap_done=0;
   unsigned long long int fft_stage8_U0_ap_done__temp=0;
   unsigned long long int fft_stage8_U0_ap_idle=0;
   unsigned long long int fft_stage8_U0_ap_idle__temp=0;
   unsigned long long int fft_stage8_U0_ap_ready=0;
   unsigned long long int fft_stage8_U0_ap_ready__temp=0;
   unsigned long long int fft_stage8_U0_ap_start=0;
   unsigned long long int fft_stage8_U0_ap_start__temp=0;
   unsigned long long int fft_stage8_U0_start_full_n=1;
   unsigned long long int fft_stage8_U0_start_full_n__temp=0;
   unsigned long long int fft_stage8_U0_start_write=0;
   unsigned long long int fft_stage8_U0_start_write__temp=0;
   unsigned long long int t_we1_fft_streaming_StadEe_Stage2_R_U=0;
   unsigned long long int t_we1_fft_streaming_StadEe_Stage2_I_U=0;
   unsigned long long int t_we1_fft_streaming_StadEe_Stage3_R_U=0;
   unsigned long long int t_we1_fft_streaming_StadEe_Stage3_I_U=0;
   unsigned long long int t_we0_fft_streaming_StadEe_Stage2_R_U=0;
   unsigned long long int t_we0_fft_streaming_StadEe_Stage2_I_U=0;
   unsigned long long int t_we0_fft_streaming_StadEe_Stage3_R_U=0;
   unsigned long long int t_we0_fft_streaming_StadEe_Stage3_I_U=0;
   unsigned long long int t_d1_fft_streaming_StadEe_Stage2_R_U=0;
   unsigned long long int t_d1_fft_streaming_StadEe_Stage2_I_U=0;
   unsigned long long int t_d1_fft_streaming_StadEe_Stage3_R_U=0;
   unsigned long long int t_d1_fft_streaming_StadEe_Stage3_I_U=0;
   unsigned long long int t_d0_fft_streaming_StadEe_Stage2_R_U=0;
   unsigned long long int t_d0_fft_streaming_StadEe_Stage2_I_U=0;
   unsigned long long int t_d0_fft_streaming_StadEe_Stage3_R_U=0;
   unsigned long long int t_d0_fft_streaming_StadEe_Stage3_I_U=0;
   unsigned long long int t_ce1_fft_streaming_StadEe_Stage2_R_U=0;
   unsigned long long int t_ce1_fft_streaming_StadEe_Stage2_I_U=0;
   unsigned long long int t_ce1_fft_streaming_StadEe_Stage3_R_U=0;
   unsigned long long int t_ce1_fft_streaming_StadEe_Stage3_I_U=0;
   unsigned long long int t_ce_fft_streaming_StadEe_Stage2_R_U=1;
   unsigned long long int t_ce_fft_streaming_StadEe_Stage2_I_U=1;
   unsigned long long int t_ce_fft_streaming_StadEe_Stage3_R_U=1;
   unsigned long long int t_ce_fft_streaming_StadEe_Stage3_I_U=1;
   unsigned long long int t_address1_fft_streaming_StadEe_Stage2_R_U=0;
   unsigned long long int t_address1_fft_streaming_StadEe_Stage2_I_U=0;
   unsigned long long int t_address1_fft_streaming_StadEe_Stage3_R_U=0;
   unsigned long long int t_address1_fft_streaming_StadEe_Stage3_I_U=0;
   unsigned long long int i_ce_fft_streaming_StadEe_Stage2_R_U=1;
   unsigned long long int i_ce_fft_streaming_StadEe_Stage2_I_U=1;
   unsigned long long int i_ce_fft_streaming_StadEe_Stage3_R_U=1;
   unsigned long long int i_ce_fft_streaming_StadEe_Stage3_I_U=1;
   unsigned long long int t_we0_fft_streaming_Stabkb_Stage1_R_U=0;
   unsigned long long int t_we0_fft_streaming_Stabkb_Stage1_I_U=0;
   unsigned long long int t_d0_fft_streaming_Stabkb_Stage1_R_U=0;
   unsigned long long int t_d0_fft_streaming_Stabkb_Stage1_I_U=0;
   unsigned long long int t_ce_fft_streaming_Stabkb_Stage1_R_U=1;
   unsigned long long int t_ce_fft_streaming_Stabkb_Stage1_I_U=1;
   unsigned long long int i_ce_fft_streaming_Stabkb_Stage1_R_U=1;
   unsigned long long int i_ce_fft_streaming_Stabkb_Stage1_I_U=1;
   unsigned long long int i1=0;
   unsigned long long int i2=0;


   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
   X_R_ce0__temp = X_R_ce0 ;
   fft_stage8_U0_Out_R_we1__temp = fft_stage8_U0_Out_R_we1 ;
   fft_stage6_U0_Out_R_d0__temp = fft_stage6_U0_Out_R_d0 ;
   OUT_R_q0__temp = OUT_R_q0 ;
   OUT_I_we0__temp = OUT_I_we0 ;
   fft_stage7_U0_X_I_ce0__temp = fft_stage7_U0_X_I_ce0 ;
   fft_stage8_U0_Out_R_ce0__temp = fft_stage8_U0_Out_R_ce0 ;
   fft_stage6_U0_Out_R_d1__temp = fft_stage6_U0_Out_R_d1 ;
   OUT_I_address1__temp = OUT_I_address1 ;
   Stage3_I_i_full_n__temp = Stage3_I_i_full_n ;
   bit_reverse_U0_ap_start__temp = bit_reverse_U0_ap_start ;
   X_R_address0__temp = X_R_address0 ;
   X_I_we0__temp = X_I_we0 ;
   bit_reverse_U0_OUT_R_d0__temp = bit_reverse_U0_OUT_R_d0 ;
   fft_stage7_U0_Out_R_we0__temp = fft_stage7_U0_Out_R_we0 ;
   Stage1_R_t_empty_n__temp = Stage1_R_t_empty_n ;
   Stage3_I_t_empty_n__temp = Stage3_I_t_empty_n ;
   ap_channel_done_Stage3_I__temp = ap_channel_done_Stage3_I ;
   OUT_R_q1__temp = OUT_R_q1 ;
   fft_stage6_U0_X_I_address0__temp = fft_stage6_U0_X_I_address0 ;
   ap_rst__temp = ap_rst ;
   fft_stage7_U0_Out_I_address0__temp = fft_stage7_U0_Out_I_address0 ;
   fft_stage6_U0_start_full_n__temp = fft_stage6_U0_start_full_n ;
   fft_stage8_U0_Out_I_address0__temp = fft_stage8_U0_Out_I_address0 ;
   Stage3_R_i_full_n__temp = Stage3_R_i_full_n ;
   Stage2_I_i_q0__temp = Stage2_I_i_q0 ;
   fft_stage8_U0_Out_I_we0__temp = fft_stage8_U0_Out_I_we0 ;
   fft_stage6_U0_Out_I_we0__temp = fft_stage6_U0_Out_I_we0 ;
   fft_stage6_U0_Out_I_we1__temp = fft_stage6_U0_Out_I_we1 ;
   bit_reverse_U0_start_full_n__temp = bit_reverse_U0_start_full_n ;
   OUT_I_we1__temp = OUT_I_we1 ;
   X_R_q1__temp = X_R_q1 ;
   X_I_we1__temp = X_I_we1 ;
   bit_reverse_U0_ap_idle__temp = bit_reverse_U0_ap_idle ;
   fft_stage6_U0_Out_I_ce1__temp = fft_stage6_U0_Out_I_ce1 ;
   fft_stage7_U0_Out_I_we1__temp = fft_stage7_U0_Out_I_we1 ;
   fft_stage8_U0_ap_idle__temp = fft_stage8_U0_ap_idle ;
   Stage1_R_i_full_n__temp = Stage1_R_i_full_n ;
   ap_sync_reg_channel_write_Stage3_I__temp = ap_sync_reg_channel_write_Stage3_I ;
   OUT_R_address1__temp = OUT_R_address1 ;
   OUT_R_we0__temp = OUT_R_we0 ;
   fft_stage6_U0_Out_R_ce1__temp = fft_stage6_U0_Out_R_ce1 ;
   bit_reverse_U0_OUT_I_d0__temp = bit_reverse_U0_OUT_I_d0 ;
   fft_stage6_U0_Out_I_d0__temp = fft_stage6_U0_Out_I_d0 ;
   fft_stage8_U0_start_write__temp = fft_stage8_U0_start_write ;
   fft_stage8_U0_X_I_address0__temp = fft_stage8_U0_X_I_address0 ;
   OUT_R_d1__temp = OUT_R_d1 ;
   bit_reverse_U0_X_I_ce0__temp = bit_reverse_U0_X_I_ce0 ;
   Stage3_R_t_empty_n__temp = Stage3_R_t_empty_n ;
   OUT_R_ce0__temp = OUT_R_ce0 ;
   fft_stage8_U0_Out_I_ce1__temp = fft_stage8_U0_Out_I_ce1 ;
   bit_reverse_U0_OUT_R_address0__temp = bit_reverse_U0_OUT_R_address0 ;
   Stage2_I_i_full_n__temp = Stage2_I_i_full_n ;
   ap_sync_channel_write_Stage1_R__temp = ap_sync_channel_write_Stage1_R ;
   X_I_d0__temp = X_I_d0 ;
   Stage3_I_t_q0__temp = Stage3_I_t_q0 ;
   fft_stage7_U0_ap_continue__temp = fft_stage7_U0_ap_continue ;
   ap_ready__temp = ap_ready ;
   bit_reverse_U0_X_R_address0__temp = bit_reverse_U0_X_R_address0 ;
   fft_stage7_U0_Out_I_d0__temp = fft_stage7_U0_Out_I_d0 ;
   Stage2_R_t_empty_n__temp = Stage2_R_t_empty_n ;
   OUT_I_q1__temp = OUT_I_q1 ;
   ap_sync_reg_channel_write_Stage2_R__temp = ap_sync_reg_channel_write_Stage2_R ;
   fft_stage6_U0_ap_ready__temp = fft_stage6_U0_ap_ready ;
   X_R_ce1__temp = X_R_ce1 ;
   fft_stage8_U0_ap_continue__temp = fft_stage8_U0_ap_continue ;
   OUT_I_q0__temp = OUT_I_q0 ;
   fft_stage6_U0_ap_start__temp = fft_stage6_U0_ap_start ;
   fft_stage7_U0_start_full_n__temp = fft_stage7_U0_start_full_n ;
   OUT_R_address0__temp = OUT_R_address0 ;
   ap_channel_done_Stage1_R__temp = ap_channel_done_Stage1_R ;
   fft_stage8_U0_Out_I_address1__temp = fft_stage8_U0_Out_I_address1 ;
   bit_reverse_U0_X_I_address0__temp = bit_reverse_U0_X_I_address0 ;
   fft_stage7_U0_Out_I_address1__temp = fft_stage7_U0_Out_I_address1 ;
   OUT_I_address0__temp = OUT_I_address0 ;
   OUT_I_ce0__temp = OUT_I_ce0 ;
   fft_stage6_U0_start_write__temp = fft_stage6_U0_start_write ;
   fft_stage6_U0_Out_R_address1__temp = fft_stage6_U0_Out_R_address1 ;
   X_I_address1__temp = X_I_address1 ;
   fft_stage8_U0_Out_R_d1__temp = fft_stage8_U0_Out_R_d1 ;
   Stage2_R_t_q0__temp = Stage2_R_t_q0 ;
   fft_stage7_U0_Out_I_full_n__temp = fft_stage7_U0_Out_I_full_n ;
   Stage2_I_t_q0__temp = Stage2_I_t_q0 ;
   ap_sync_ready__temp = ap_sync_ready ;
   ap_channel_done_Stage2_I__temp = ap_channel_done_Stage2_I ;
   Stage2_R_i_full_n__temp = Stage2_R_i_full_n ;
   ap_sync_done__temp = ap_sync_done ;
   fft_stage8_U0_Out_I_ce0__temp = fft_stage8_U0_Out_I_ce0 ;
   Stage2_I_t_empty_n__temp = Stage2_I_t_empty_n ;
   bit_reverse_U0_OUT_I_address0__temp = bit_reverse_U0_OUT_I_address0 ;
   fft_stage6_U0_ap_done__temp = fft_stage6_U0_ap_done ;
   Stage1_R_t_q0__temp = Stage1_R_t_q0 ;
   Stage1_R_i_q0__temp = Stage1_R_i_q0 ;
   fft_stage7_U0_ap_done__temp = fft_stage7_U0_ap_done ;
   fft_stage6_U0_Out_R_we0__temp = fft_stage6_U0_Out_R_we0 ;
   fft_stage7_U0_Out_R_address0__temp = fft_stage7_U0_Out_R_address0 ;
   X_I_d1__temp = X_I_d1 ;
   fft_stage7_U0_ap_start__temp = fft_stage7_U0_ap_start ;
   fft_stage7_U0_Out_R_ce1__temp = fft_stage7_U0_Out_R_ce1 ;
   fft_stage6_U0_Out_I_address1__temp = fft_stage6_U0_Out_I_address1 ;
   fft_stage8_U0_X_R_ce0__temp = fft_stage8_U0_X_R_ce0 ;
   X_R_d0__temp = X_R_d0 ;
   X_R_we0__temp = X_R_we0 ;
   fft_stage7_U0_Out_R_address1__temp = fft_stage7_U0_Out_R_address1 ;
   fft_stage8_U0_Out_R_address1__temp = fft_stage8_U0_Out_R_address1 ;
   ap_sync_channel_write_Stage2_I__temp = ap_sync_channel_write_Stage2_I ;
   ap_sync_channel_write_Stage3_R__temp = ap_sync_channel_write_Stage3_R ;
   fft_stage6_U0_Out_I_address0__temp = fft_stage6_U0_Out_I_address0 ;
   fft_stage8_U0_ap_start__temp = fft_stage8_U0_ap_start ;
   fft_stage8_U0_Out_R_address0__temp = fft_stage8_U0_Out_R_address0 ;
   fft_stage8_U0_Out_I_d1__temp = fft_stage8_U0_Out_I_d1 ;
   fft_stage8_U0_ap_done__temp = fft_stage8_U0_ap_done ;
   fft_stage8_U0_Out_I_d0__temp = fft_stage8_U0_Out_I_d0 ;
   ap_sync_reg_channel_write_Stage1_I__temp = ap_sync_reg_channel_write_Stage1_I ;
   bit_reverse_U0_OUT_I_we0__temp = bit_reverse_U0_OUT_I_we0 ;
   fft_stage7_U0_Out_I_d1__temp = fft_stage7_U0_Out_I_d1 ;
   Stage3_R_i_q0__temp = Stage3_R_i_q0 ;
   ap_channel_done_Stage2_R__temp = ap_channel_done_Stage2_R ;
   X_I_address0__temp = X_I_address0 ;
   Stage1_I_i_full_n__temp = Stage1_I_i_full_n ;
   bit_reverse_U0_start_write__temp = bit_reverse_U0_start_write ;
   ap_sync_reg_channel_write_Stage2_I__temp = ap_sync_reg_channel_write_Stage2_I ;
   X_I_ce1__temp = X_I_ce1 ;
   bit_reverse_U0_OUT_I_ce0__temp = bit_reverse_U0_OUT_I_ce0 ;
   fft_stage7_U0_X_R_address0__temp = fft_stage7_U0_X_R_address0 ;
   fft_stage7_U0_X_I_address0__temp = fft_stage7_U0_X_I_address0 ;
   X_R_address1__temp = X_R_address1 ;
   fft_stage6_U0_ap_idle__temp = fft_stage6_U0_ap_idle ;
   bit_reverse_U0_OUT_R_we0__temp = bit_reverse_U0_OUT_R_we0 ;
   bit_reverse_U0_ap_ready__temp = bit_reverse_U0_ap_ready ;
   fft_stage6_U0_Out_I_full_n__temp = fft_stage6_U0_Out_I_full_n ;
   ap_sync_channel_write_Stage2_R__temp = ap_sync_channel_write_Stage2_R ;
   fft_stage7_U0_X_R_ce0__temp = fft_stage7_U0_X_R_ce0 ;
   ap_start__temp = ap_start ;
   fft_stage6_U0_Out_I_ce0__temp = fft_stage6_U0_Out_I_ce0 ;
   ap_sync_channel_write_Stage1_I__temp = ap_sync_channel_write_Stage1_I ;
   bit_reverse_U0_ap_done__temp = bit_reverse_U0_ap_done ;
   fft_stage7_U0_Out_R_full_n__temp = fft_stage7_U0_Out_R_full_n ;
   fft_stage8_U0_Out_I_we1__temp = fft_stage8_U0_Out_I_we1 ;
   ap_sync_continue__temp = ap_sync_continue ;
   ap_sync_reg_channel_write_Stage1_R__temp = ap_sync_reg_channel_write_Stage1_R ;
   fft_stage7_U0_Out_R_d1__temp = fft_stage7_U0_Out_R_d1 ;
   fft_stage6_U0_X_R_ce0__temp = fft_stage6_U0_X_R_ce0 ;
   Stage3_R_t_q0__temp = Stage3_R_t_q0 ;
   X_R_d1__temp = X_R_d1 ;
   fft_stage8_U0_ap_ready__temp = fft_stage8_U0_ap_ready ;
   bit_reverse_U0_OUT_R_full_n__temp = bit_reverse_U0_OUT_R_full_n ;
   OUT_R_we1__temp = OUT_R_we1 ;
   fft_stage8_U0_start_full_n__temp = fft_stage8_U0_start_full_n ;
   Stage2_R_i_q0__temp = Stage2_R_i_q0 ;
   fft_stage6_U0_Out_R_ce0__temp = fft_stage6_U0_Out_R_ce0 ;
   fft_stage7_U0_Out_I_we0__temp = fft_stage7_U0_Out_I_we0 ;
   fft_stage7_U0_ap_idle__temp = fft_stage7_U0_ap_idle ;
   X_I_q1__temp = X_I_q1 ;
   bit_reverse_U0_X_R_ce0__temp = bit_reverse_U0_X_R_ce0 ;
   fft_stage7_U0_ap_ready__temp = fft_stage7_U0_ap_ready ;
   fft_stage8_U0_Out_R_we0__temp = fft_stage8_U0_Out_R_we0 ;
   ap_channel_done_Stage1_I__temp = ap_channel_done_Stage1_I ;
   OUT_I_d1__temp = OUT_I_d1 ;
   Stage3_I_i_q0__temp = Stage3_I_i_q0 ;
   fft_stage6_U0_Out_R_address0__temp = fft_stage6_U0_Out_R_address0 ;
   X_R_we1__temp = X_R_we1 ;
   OUT_I_ce1__temp = OUT_I_ce1 ;
   ap_sync_channel_write_Stage3_I__temp = ap_sync_channel_write_Stage3_I ;
   bit_reverse_U0_OUT_R_ce0__temp = bit_reverse_U0_OUT_R_ce0 ;
   OUT_R_ce1__temp = OUT_R_ce1 ;
   Stage1_I_t_empty_n__temp = Stage1_I_t_empty_n ;
   bit_reverse_U0_ap_continue__temp = bit_reverse_U0_ap_continue ;
   X_I_q0__temp = X_I_q0 ;
   fft_stage8_U0_X_I_ce0__temp = fft_stage8_U0_X_I_ce0 ;
   OUT_R_d0__temp = OUT_R_d0 ;
   fft_stage6_U0_ap_continue__temp = fft_stage6_U0_ap_continue ;
   ap_clk__temp = ap_clk ;
   X_R_q0__temp = X_R_q0 ;
   ap_done__temp = ap_done ;
   fft_stage6_U0_Out_R_full_n__temp = fft_stage6_U0_Out_R_full_n ;
   fft_stage8_U0_Out_R_ce1__temp = fft_stage8_U0_Out_R_ce1 ;
   fft_stage8_U0_Out_R_d0__temp = fft_stage8_U0_Out_R_d0 ;
   fft_stage7_U0_Out_R_ce0__temp = fft_stage7_U0_Out_R_ce0 ;
   ap_channel_done_Stage3_R__temp = ap_channel_done_Stage3_R ;
   fft_stage6_U0_Out_R_we1__temp = fft_stage6_U0_Out_R_we1 ;
   X_I_ce0__temp = X_I_ce0 ;
   bit_reverse_U0_OUT_I_full_n__temp = bit_reverse_U0_OUT_I_full_n ;
   fft_stage6_U0_Out_I_d1__temp = fft_stage6_U0_Out_I_d1 ;
   fft_stage8_U0_X_R_address0__temp = fft_stage8_U0_X_R_address0 ;
   fft_stage7_U0_start_write__temp = fft_stage7_U0_start_write ;
   fft_stage6_U0_X_R_address0__temp = fft_stage6_U0_X_R_address0 ;
   fft_stage7_U0_Out_I_ce1__temp = fft_stage7_U0_Out_I_ce1 ;
   ap_sync_reg_channel_write_Stage3_R__temp = ap_sync_reg_channel_write_Stage3_R ;
   fft_stage7_U0_Out_I_ce0__temp = fft_stage7_U0_Out_I_ce0 ;
   Stage1_I_t_q0__temp = Stage1_I_t_q0 ;
   fft_stage6_U0_X_I_ce0__temp = fft_stage6_U0_X_I_ce0 ;
   Stage1_I_i_q0__temp = Stage1_I_i_q0 ;
   ap_idle__temp = ap_idle ;
   fft_stage7_U0_Out_R_we1__temp = fft_stage7_U0_Out_R_we1 ;
   fft_stage7_U0_Out_R_d0__temp = fft_stage7_U0_Out_R_d0 ;
   OUT_I_d0__temp = OUT_I_d0 ;

       X_R_ce0 = 0;
       X_R_we0 = 0;
       X_R_ce1 = 0;
       X_R_we1 = 0;
       X_R_address0 =   ( bit_reverse_U0_X_R_address0 & 18446744073709551615 ) ;
       X_R_address1 =   ( 0 ) & 1023;
       X_R_d0 =   ( 0 ) & 4294967295;
       X_R_d1 =   ( 0 ) & 4294967295;
       X_I_ce0 = 0;
       X_I_we0 = 0;
       X_I_ce1 = 0;
       X_I_we1 = 0;
       X_I_address0 =   ( bit_reverse_U0_X_I_address0 & 18446744073709551615 ) ;
       X_I_address1 =   ( 0 ) & 1023;
       X_I_d0 =   ( 0 ) & 4294967295;
       X_I_d1 =   ( 0 ) & 4294967295;
       OUT_R_ce0 = 0;
       OUT_R_we0 = 0;
       OUT_R_ce1 = 0;
       OUT_R_we1 = 0;
       OUT_R_address0 =   ( fft_stage8_U0_Out_R_address0 & 18446744073709551615 ) ;
       OUT_R_address1 =   ( fft_stage8_U0_Out_R_address1 & 18446744073709551615 ) ;
       OUT_R_d0 =   ( fft_stage8_U0_Out_R_d0 & 18446744073709551615 ) ;
       OUT_R_d1 =   ( fft_stage8_U0_Out_R_d1 & 18446744073709551615 ) ;
       OUT_I_ce0 = 0;
       OUT_I_we0 = 0;
       OUT_I_ce1 = 0;
       OUT_I_we1 = 0;
       OUT_I_address0 =   ( fft_stage8_U0_Out_I_address0 & 18446744073709551615 ) ;
       OUT_I_address1 =   ( fft_stage8_U0_Out_I_address1 & 18446744073709551615 ) ;
       OUT_I_d0 =   ( fft_stage8_U0_Out_I_d0 & 18446744073709551615 ) ;
       OUT_I_d1 =   ( fft_stage8_U0_Out_I_d1 & 18446744073709551615 ) ;
       if(!(ap_rst == 1)){
if(!((bit_reverse_U0_ap_done && bit_reverse_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_Stage1_I =  ( (  ( (  ( Stage1_I_i_full_n & 1 )  &  ( (  ( ( ap_sync_reg_channel_write_Stage1_I ^ 1 ) & 1 )  & bit_reverse_U0_ap_done ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_Stage1_I ) & 1 )  ; 

}

}
       if(!(ap_rst == 1)){
if(!((bit_reverse_U0_ap_done && bit_reverse_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_Stage1_R =  ( (  ( (  ( Stage1_R_i_full_n & 1 )  &  ( (  ( ( ap_sync_reg_channel_write_Stage1_R ^ 1 ) & 1 )  & bit_reverse_U0_ap_done ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_Stage1_R ) & 1 )  ; 

}

}
       if(!(ap_rst == 1)){
if(!((fft_stage6_U0_ap_done && fft_stage6_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_Stage2_I =  ( (  ( (  ( Stage2_I_i_full_n & 1 )  &  ( ( fft_stage6_U0_ap_done &  ( ( ap_sync_reg_channel_write_Stage2_I ^ 1 ) & 1 )  ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_Stage2_I ) & 1 )  ; 

}

}
       if(!(ap_rst == 1)){
if(!((fft_stage6_U0_ap_done && fft_stage6_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_Stage2_R =  ( (  ( (  ( Stage2_R_i_full_n & 1 )  &  ( ( fft_stage6_U0_ap_done &  ( ( ap_sync_reg_channel_write_Stage2_R ^ 1 ) & 1 )  ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_Stage2_R ) & 1 )  ; 

}

}
       if(!(ap_rst == 1)){
if(!((fft_stage7_U0_ap_done && fft_stage7_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_Stage3_I =  ( (  ( (  ( Stage3_I_i_full_n & 1 )  &  ( ( fft_stage7_U0_ap_done &  ( ( ap_sync_reg_channel_write_Stage3_I ^ 1 ) & 1 )  ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_Stage3_I ) & 1 )  ; 

}

}
       if(!(ap_rst == 1)){
if(!((fft_stage7_U0_ap_done && fft_stage7_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_Stage3_R =  ( (  ( (  ( Stage3_R_i_full_n & 1 )  &  ( ( fft_stage7_U0_ap_done &  ( ( ap_sync_reg_channel_write_Stage3_R ^ 1 ) & 1 )  ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_Stage3_R ) & 1 )  ; 

}

}

   if(ap_channel_done_Stage1_I == 1  && bit_reverse_U0_ap_continue == 1 && ap_channel_done_Stage1_R)
   {
       i1++;
       X_R_ram = input_R[i1];
       X_I_ram = input_I[i1];
   }

   if(fft_stage8_U0_ap_done == 1)
   {
       i2++;
       OUT_R_ram = output_R[i2];
       OUT_I_ram = output_I[i2];
   }

   if(ap_done == 1 && i2 == SIZE){
       goto end;
   }
       goto ap_ST_fsm_state2;

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
   X_R_ce0__temp = X_R_ce0 ;
   fft_stage8_U0_Out_R_we1__temp = fft_stage8_U0_Out_R_we1 ;
   fft_stage6_U0_Out_R_d0__temp = fft_stage6_U0_Out_R_d0 ;
   OUT_R_q0__temp = OUT_R_q0 ;
   OUT_I_we0__temp = OUT_I_we0 ;
   fft_stage7_U0_X_I_ce0__temp = fft_stage7_U0_X_I_ce0 ;
   fft_stage8_U0_Out_R_ce0__temp = fft_stage8_U0_Out_R_ce0 ;
   fft_stage6_U0_Out_R_d1__temp = fft_stage6_U0_Out_R_d1 ;
   OUT_I_address1__temp = OUT_I_address1 ;
   Stage3_I_i_full_n__temp = Stage3_I_i_full_n ;
   bit_reverse_U0_ap_start__temp = bit_reverse_U0_ap_start ;
   X_R_address0__temp = X_R_address0 ;
   X_I_we0__temp = X_I_we0 ;
   bit_reverse_U0_OUT_R_d0__temp = bit_reverse_U0_OUT_R_d0 ;
   fft_stage7_U0_Out_R_we0__temp = fft_stage7_U0_Out_R_we0 ;
   Stage1_R_t_empty_n__temp = Stage1_R_t_empty_n ;
   Stage3_I_t_empty_n__temp = Stage3_I_t_empty_n ;
   ap_channel_done_Stage3_I__temp = ap_channel_done_Stage3_I ;
   OUT_R_q1__temp = OUT_R_q1 ;
   fft_stage6_U0_X_I_address0__temp = fft_stage6_U0_X_I_address0 ;
   ap_rst__temp = ap_rst ;
   fft_stage7_U0_Out_I_address0__temp = fft_stage7_U0_Out_I_address0 ;
   fft_stage6_U0_start_full_n__temp = fft_stage6_U0_start_full_n ;
   fft_stage8_U0_Out_I_address0__temp = fft_stage8_U0_Out_I_address0 ;
   Stage3_R_i_full_n__temp = Stage3_R_i_full_n ;
   Stage2_I_i_q0__temp = Stage2_I_i_q0 ;
   fft_stage8_U0_Out_I_we0__temp = fft_stage8_U0_Out_I_we0 ;
   fft_stage6_U0_Out_I_we0__temp = fft_stage6_U0_Out_I_we0 ;
   fft_stage6_U0_Out_I_we1__temp = fft_stage6_U0_Out_I_we1 ;
   bit_reverse_U0_start_full_n__temp = bit_reverse_U0_start_full_n ;
   OUT_I_we1__temp = OUT_I_we1 ;
   X_R_q1__temp = X_R_q1 ;
   X_I_we1__temp = X_I_we1 ;
   bit_reverse_U0_ap_idle__temp = bit_reverse_U0_ap_idle ;
   fft_stage6_U0_Out_I_ce1__temp = fft_stage6_U0_Out_I_ce1 ;
   fft_stage7_U0_Out_I_we1__temp = fft_stage7_U0_Out_I_we1 ;
   fft_stage8_U0_ap_idle__temp = fft_stage8_U0_ap_idle ;
   Stage1_R_i_full_n__temp = Stage1_R_i_full_n ;
   ap_sync_reg_channel_write_Stage3_I__temp = ap_sync_reg_channel_write_Stage3_I ;
   OUT_R_address1__temp = OUT_R_address1 ;
   OUT_R_we0__temp = OUT_R_we0 ;
   fft_stage6_U0_Out_R_ce1__temp = fft_stage6_U0_Out_R_ce1 ;
   bit_reverse_U0_OUT_I_d0__temp = bit_reverse_U0_OUT_I_d0 ;
   fft_stage6_U0_Out_I_d0__temp = fft_stage6_U0_Out_I_d0 ;
   fft_stage8_U0_start_write__temp = fft_stage8_U0_start_write ;
   fft_stage8_U0_X_I_address0__temp = fft_stage8_U0_X_I_address0 ;
   OUT_R_d1__temp = OUT_R_d1 ;
   bit_reverse_U0_X_I_ce0__temp = bit_reverse_U0_X_I_ce0 ;
   Stage3_R_t_empty_n__temp = Stage3_R_t_empty_n ;
   OUT_R_ce0__temp = OUT_R_ce0 ;
   fft_stage8_U0_Out_I_ce1__temp = fft_stage8_U0_Out_I_ce1 ;
   bit_reverse_U0_OUT_R_address0__temp = bit_reverse_U0_OUT_R_address0 ;
   Stage2_I_i_full_n__temp = Stage2_I_i_full_n ;
   ap_sync_channel_write_Stage1_R__temp = ap_sync_channel_write_Stage1_R ;
   X_I_d0__temp = X_I_d0 ;
   Stage3_I_t_q0__temp = Stage3_I_t_q0 ;
   fft_stage7_U0_ap_continue__temp = fft_stage7_U0_ap_continue ;
   ap_ready__temp = ap_ready ;
   bit_reverse_U0_X_R_address0__temp = bit_reverse_U0_X_R_address0 ;
   fft_stage7_U0_Out_I_d0__temp = fft_stage7_U0_Out_I_d0 ;
   Stage2_R_t_empty_n__temp = Stage2_R_t_empty_n ;
   OUT_I_q1__temp = OUT_I_q1 ;
   ap_sync_reg_channel_write_Stage2_R__temp = ap_sync_reg_channel_write_Stage2_R ;
   fft_stage6_U0_ap_ready__temp = fft_stage6_U0_ap_ready ;
   X_R_ce1__temp = X_R_ce1 ;
   fft_stage8_U0_ap_continue__temp = fft_stage8_U0_ap_continue ;
   OUT_I_q0__temp = OUT_I_q0 ;
   fft_stage6_U0_ap_start__temp = fft_stage6_U0_ap_start ;
   fft_stage7_U0_start_full_n__temp = fft_stage7_U0_start_full_n ;
   OUT_R_address0__temp = OUT_R_address0 ;
   ap_channel_done_Stage1_R__temp = ap_channel_done_Stage1_R ;
   fft_stage8_U0_Out_I_address1__temp = fft_stage8_U0_Out_I_address1 ;
   bit_reverse_U0_X_I_address0__temp = bit_reverse_U0_X_I_address0 ;
   fft_stage7_U0_Out_I_address1__temp = fft_stage7_U0_Out_I_address1 ;
   OUT_I_address0__temp = OUT_I_address0 ;
   OUT_I_ce0__temp = OUT_I_ce0 ;
   fft_stage6_U0_start_write__temp = fft_stage6_U0_start_write ;
   fft_stage6_U0_Out_R_address1__temp = fft_stage6_U0_Out_R_address1 ;
   X_I_address1__temp = X_I_address1 ;
   fft_stage8_U0_Out_R_d1__temp = fft_stage8_U0_Out_R_d1 ;
   Stage2_R_t_q0__temp = Stage2_R_t_q0 ;
   fft_stage7_U0_Out_I_full_n__temp = fft_stage7_U0_Out_I_full_n ;
   Stage2_I_t_q0__temp = Stage2_I_t_q0 ;
   ap_sync_ready__temp = ap_sync_ready ;
   ap_channel_done_Stage2_I__temp = ap_channel_done_Stage2_I ;
   Stage2_R_i_full_n__temp = Stage2_R_i_full_n ;
   ap_sync_done__temp = ap_sync_done ;
   fft_stage8_U0_Out_I_ce0__temp = fft_stage8_U0_Out_I_ce0 ;
   Stage2_I_t_empty_n__temp = Stage2_I_t_empty_n ;
   bit_reverse_U0_OUT_I_address0__temp = bit_reverse_U0_OUT_I_address0 ;
   fft_stage6_U0_ap_done__temp = fft_stage6_U0_ap_done ;
   Stage1_R_t_q0__temp = Stage1_R_t_q0 ;
   Stage1_R_i_q0__temp = Stage1_R_i_q0 ;
   fft_stage7_U0_ap_done__temp = fft_stage7_U0_ap_done ;
   fft_stage6_U0_Out_R_we0__temp = fft_stage6_U0_Out_R_we0 ;
   fft_stage7_U0_Out_R_address0__temp = fft_stage7_U0_Out_R_address0 ;
   X_I_d1__temp = X_I_d1 ;
   fft_stage7_U0_ap_start__temp = fft_stage7_U0_ap_start ;
   fft_stage7_U0_Out_R_ce1__temp = fft_stage7_U0_Out_R_ce1 ;
   fft_stage6_U0_Out_I_address1__temp = fft_stage6_U0_Out_I_address1 ;
   fft_stage8_U0_X_R_ce0__temp = fft_stage8_U0_X_R_ce0 ;
   X_R_d0__temp = X_R_d0 ;
   X_R_we0__temp = X_R_we0 ;
   fft_stage7_U0_Out_R_address1__temp = fft_stage7_U0_Out_R_address1 ;
   fft_stage8_U0_Out_R_address1__temp = fft_stage8_U0_Out_R_address1 ;
   ap_sync_channel_write_Stage2_I__temp = ap_sync_channel_write_Stage2_I ;
   ap_sync_channel_write_Stage3_R__temp = ap_sync_channel_write_Stage3_R ;
   fft_stage6_U0_Out_I_address0__temp = fft_stage6_U0_Out_I_address0 ;
   fft_stage8_U0_ap_start__temp = fft_stage8_U0_ap_start ;
   fft_stage8_U0_Out_R_address0__temp = fft_stage8_U0_Out_R_address0 ;
   fft_stage8_U0_Out_I_d1__temp = fft_stage8_U0_Out_I_d1 ;
   fft_stage8_U0_ap_done__temp = fft_stage8_U0_ap_done ;
   fft_stage8_U0_Out_I_d0__temp = fft_stage8_U0_Out_I_d0 ;
   ap_sync_reg_channel_write_Stage1_I__temp = ap_sync_reg_channel_write_Stage1_I ;
   bit_reverse_U0_OUT_I_we0__temp = bit_reverse_U0_OUT_I_we0 ;
   fft_stage7_U0_Out_I_d1__temp = fft_stage7_U0_Out_I_d1 ;
   Stage3_R_i_q0__temp = Stage3_R_i_q0 ;
   ap_channel_done_Stage2_R__temp = ap_channel_done_Stage2_R ;
   X_I_address0__temp = X_I_address0 ;
   Stage1_I_i_full_n__temp = Stage1_I_i_full_n ;
   bit_reverse_U0_start_write__temp = bit_reverse_U0_start_write ;
   ap_sync_reg_channel_write_Stage2_I__temp = ap_sync_reg_channel_write_Stage2_I ;
   X_I_ce1__temp = X_I_ce1 ;
   bit_reverse_U0_OUT_I_ce0__temp = bit_reverse_U0_OUT_I_ce0 ;
   fft_stage7_U0_X_R_address0__temp = fft_stage7_U0_X_R_address0 ;
   fft_stage7_U0_X_I_address0__temp = fft_stage7_U0_X_I_address0 ;
   X_R_address1__temp = X_R_address1 ;
   fft_stage6_U0_ap_idle__temp = fft_stage6_U0_ap_idle ;
   bit_reverse_U0_OUT_R_we0__temp = bit_reverse_U0_OUT_R_we0 ;
   bit_reverse_U0_ap_ready__temp = bit_reverse_U0_ap_ready ;
   fft_stage6_U0_Out_I_full_n__temp = fft_stage6_U0_Out_I_full_n ;
   ap_sync_channel_write_Stage2_R__temp = ap_sync_channel_write_Stage2_R ;
   fft_stage7_U0_X_R_ce0__temp = fft_stage7_U0_X_R_ce0 ;
   ap_start__temp = ap_start ;
   fft_stage6_U0_Out_I_ce0__temp = fft_stage6_U0_Out_I_ce0 ;
   ap_sync_channel_write_Stage1_I__temp = ap_sync_channel_write_Stage1_I ;
   bit_reverse_U0_ap_done__temp = bit_reverse_U0_ap_done ;
   fft_stage7_U0_Out_R_full_n__temp = fft_stage7_U0_Out_R_full_n ;
   fft_stage8_U0_Out_I_we1__temp = fft_stage8_U0_Out_I_we1 ;
   ap_sync_continue__temp = ap_sync_continue ;
   ap_sync_reg_channel_write_Stage1_R__temp = ap_sync_reg_channel_write_Stage1_R ;
   fft_stage7_U0_Out_R_d1__temp = fft_stage7_U0_Out_R_d1 ;
   fft_stage6_U0_X_R_ce0__temp = fft_stage6_U0_X_R_ce0 ;
   Stage3_R_t_q0__temp = Stage3_R_t_q0 ;
   X_R_d1__temp = X_R_d1 ;
   fft_stage8_U0_ap_ready__temp = fft_stage8_U0_ap_ready ;
   bit_reverse_U0_OUT_R_full_n__temp = bit_reverse_U0_OUT_R_full_n ;
   OUT_R_we1__temp = OUT_R_we1 ;
   fft_stage8_U0_start_full_n__temp = fft_stage8_U0_start_full_n ;
   Stage2_R_i_q0__temp = Stage2_R_i_q0 ;
   fft_stage6_U0_Out_R_ce0__temp = fft_stage6_U0_Out_R_ce0 ;
   fft_stage7_U0_Out_I_we0__temp = fft_stage7_U0_Out_I_we0 ;
   fft_stage7_U0_ap_idle__temp = fft_stage7_U0_ap_idle ;
   X_I_q1__temp = X_I_q1 ;
   bit_reverse_U0_X_R_ce0__temp = bit_reverse_U0_X_R_ce0 ;
   fft_stage7_U0_ap_ready__temp = fft_stage7_U0_ap_ready ;
   fft_stage8_U0_Out_R_we0__temp = fft_stage8_U0_Out_R_we0 ;
   ap_channel_done_Stage1_I__temp = ap_channel_done_Stage1_I ;
   OUT_I_d1__temp = OUT_I_d1 ;
   Stage3_I_i_q0__temp = Stage3_I_i_q0 ;
   fft_stage6_U0_Out_R_address0__temp = fft_stage6_U0_Out_R_address0 ;
   X_R_we1__temp = X_R_we1 ;
   OUT_I_ce1__temp = OUT_I_ce1 ;
   ap_sync_channel_write_Stage3_I__temp = ap_sync_channel_write_Stage3_I ;
   bit_reverse_U0_OUT_R_ce0__temp = bit_reverse_U0_OUT_R_ce0 ;
   OUT_R_ce1__temp = OUT_R_ce1 ;
   Stage1_I_t_empty_n__temp = Stage1_I_t_empty_n ;
   bit_reverse_U0_ap_continue__temp = bit_reverse_U0_ap_continue ;
   X_I_q0__temp = X_I_q0 ;
   fft_stage8_U0_X_I_ce0__temp = fft_stage8_U0_X_I_ce0 ;
   OUT_R_d0__temp = OUT_R_d0 ;
   fft_stage6_U0_ap_continue__temp = fft_stage6_U0_ap_continue ;
   ap_clk__temp = ap_clk ;
   X_R_q0__temp = X_R_q0 ;
   ap_done__temp = ap_done ;
   fft_stage6_U0_Out_R_full_n__temp = fft_stage6_U0_Out_R_full_n ;
   fft_stage8_U0_Out_R_ce1__temp = fft_stage8_U0_Out_R_ce1 ;
   fft_stage8_U0_Out_R_d0__temp = fft_stage8_U0_Out_R_d0 ;
   fft_stage7_U0_Out_R_ce0__temp = fft_stage7_U0_Out_R_ce0 ;
   ap_channel_done_Stage3_R__temp = ap_channel_done_Stage3_R ;
   fft_stage6_U0_Out_R_we1__temp = fft_stage6_U0_Out_R_we1 ;
   X_I_ce0__temp = X_I_ce0 ;
   bit_reverse_U0_OUT_I_full_n__temp = bit_reverse_U0_OUT_I_full_n ;
   fft_stage6_U0_Out_I_d1__temp = fft_stage6_U0_Out_I_d1 ;
   fft_stage8_U0_X_R_address0__temp = fft_stage8_U0_X_R_address0 ;
   fft_stage7_U0_start_write__temp = fft_stage7_U0_start_write ;
   fft_stage6_U0_X_R_address0__temp = fft_stage6_U0_X_R_address0 ;
   fft_stage7_U0_Out_I_ce1__temp = fft_stage7_U0_Out_I_ce1 ;
   ap_sync_reg_channel_write_Stage3_R__temp = ap_sync_reg_channel_write_Stage3_R ;
   fft_stage7_U0_Out_I_ce0__temp = fft_stage7_U0_Out_I_ce0 ;
   Stage1_I_t_q0__temp = Stage1_I_t_q0 ;
   fft_stage6_U0_X_I_ce0__temp = fft_stage6_U0_X_I_ce0 ;
   Stage1_I_i_q0__temp = Stage1_I_i_q0 ;
   ap_idle__temp = ap_idle ;
   fft_stage7_U0_Out_R_we1__temp = fft_stage7_U0_Out_R_we1 ;
   fft_stage7_U0_Out_R_d0__temp = fft_stage7_U0_Out_R_d0 ;
   OUT_I_d0__temp = OUT_I_d0 ;

       X_R_ce0 = 0;
       X_R_we0 = 0;
       X_R_ce1 = 0;
       X_R_we1 = 0;
       X_R_address0 =   ( bit_reverse_U0_X_R_address0 & 18446744073709551615 ) ;
       X_R_address1 =   ( 0 ) & 1023;
       X_R_d0 =   ( 0 ) & 4294967295;
       X_R_d1 =   ( 0 ) & 4294967295;
       X_I_ce0 = 0;
       X_I_we0 = 0;
       X_I_ce1 = 0;
       X_I_we1 = 0;
       X_I_address0 =   ( bit_reverse_U0_X_I_address0 & 18446744073709551615 ) ;
       X_I_address1 =   ( 0 ) & 1023;
       X_I_d0 =   ( 0 ) & 4294967295;
       X_I_d1 =   ( 0 ) & 4294967295;
       OUT_R_ce0 = 0;
       OUT_R_we0 = 0;
       OUT_R_ce1 = 0;
       OUT_R_we1 = 0;
       OUT_R_address0 =   ( fft_stage8_U0_Out_R_address0 & 18446744073709551615 ) ;
       OUT_R_address1 =   ( fft_stage8_U0_Out_R_address1 & 18446744073709551615 ) ;
       OUT_R_d0 =   ( fft_stage8_U0_Out_R_d0 & 18446744073709551615 ) ;
       OUT_R_d1 =   ( fft_stage8_U0_Out_R_d1 & 18446744073709551615 ) ;
       OUT_I_ce0 = 0;
       OUT_I_we0 = 0;
       OUT_I_ce1 = 0;
       OUT_I_we1 = 0;
       OUT_I_address0 =   ( fft_stage8_U0_Out_I_address0 & 18446744073709551615 ) ;
       OUT_I_address1 =   ( fft_stage8_U0_Out_I_address1 & 18446744073709551615 ) ;
       OUT_I_d0 =   ( fft_stage8_U0_Out_I_d0 & 18446744073709551615 ) ;
       OUT_I_d1 =   ( fft_stage8_U0_Out_I_d1 & 18446744073709551615 ) ;
       if(!(ap_rst == 1)){
       if((bit_reverse_U0_ap_done && bit_reverse_U0_ap_continue) == 1){
  	     ap_sync_reg_channel_write_Stage1_I = 0;
  }
       
if(!((bit_reverse_U0_ap_done && bit_reverse_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_Stage1_I =  ( (  ( (  ( Stage1_I_i_full_n & 1 )  &  ( (  ( ( ap_sync_reg_channel_write_Stage1_I ^ 1 ) & 1 )  & bit_reverse_U0_ap_done ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_Stage1_I ) & 1 )  ; 

}

}
       if(!(ap_rst == 1)){
       
       if((bit_reverse_U0_ap_done && bit_reverse_U0_ap_continue) == 1)
       {
       	ap_sync_reg_channel_write_Stage1_R = 0;
       }
if(!((bit_reverse_U0_ap_done && bit_reverse_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_Stage1_R =  ( (  ( (  ( Stage1_R_i_full_n & 1 )  &  ( (  ( ( ap_sync_reg_channel_write_Stage1_R ^ 1 ) & 1 )  & bit_reverse_U0_ap_done ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_Stage1_R ) & 1 )  ; 

}

}
       if(!(ap_rst == 1)){
    if((fft_stage6_U0_ap_done && fft_stage6_U0_ap_continue) == 1)
    {
    	ap_sync_reg_channel_write_Stage2_I = 0;
    }   
if(!((fft_stage6_U0_ap_done && fft_stage6_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_Stage2_I =  ( (  ( (  ( Stage2_I_i_full_n & 1 )  &  ( ( fft_stage6_U0_ap_done &  ( ( ap_sync_reg_channel_write_Stage2_I ^ 1 ) & 1 )  ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_Stage2_I ) & 1 )  ; 

}

}
       if(!(ap_rst == 1)){
    if((fft_stage6_U0_ap_done && fft_stage6_U0_ap_continue) == 1)
    {
    	ap_sync_reg_channel_write_Stage2_R = 0;
    }   
if(!((fft_stage6_U0_ap_done && fft_stage6_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_Stage2_R =  ( (  ( (  ( Stage2_R_i_full_n & 1 )  &  ( ( fft_stage6_U0_ap_done &  ( ( ap_sync_reg_channel_write_Stage2_R ^ 1 ) & 1 )  ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_Stage2_R ) & 1 )  ; 

}

}
       if(!(ap_rst == 1)){
       
       if((fft_stage7_U0_ap_done && fft_stage7_U0_ap_continue) == 1)
       {
       		ap_sync_reg_channel_write_Stage3_I = 0;
       }
if(!((fft_stage7_U0_ap_done && fft_stage7_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_Stage3_I =  ( (  ( (  ( Stage3_I_i_full_n & 1 )  &  ( ( fft_stage7_U0_ap_done &  ( ( ap_sync_reg_channel_write_Stage3_I ^ 1 ) & 1 )  ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_Stage3_I ) & 1 )  ; 

}

}
       if(!(ap_rst == 1)){
       
       if((fft_stage7_U0_ap_done && fft_stage7_U0_ap_continue) == 1)
       {
       		ap_sync_reg_channel_write_Stage3_R = 0;
       }
if(!((fft_stage7_U0_ap_done && fft_stage7_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_Stage3_R =  ( (  ( (  ( Stage3_R_i_full_n & 1 )  &  ( ( fft_stage7_U0_ap_done &  ( ( ap_sync_reg_channel_write_Stage3_R ^ 1 ) & 1 )  ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_Stage3_R ) & 1 )  ; 

}

}
bit_reverse(&bit_reverse_U0_OUT_I_address0,&bit_reverse_U0_OUT_I_ce0,&bit_reverse_U0_OUT_I_d0,&bit_reverse_U0_OUT_I_we0,&bit_reverse_U0_OUT_R_address0,&bit_reverse_U0_OUT_R_ce0,&bit_reverse_U0_OUT_R_d0,&bit_reverse_U0_OUT_R_we0,&bit_reverse_U0_X_I_address0,&bit_reverse_U0_X_I_ce0,&X_I_q0,&bit_reverse_U0_X_R_address0,&bit_reverse_U0_X_R_ce0,&X_R_q0,&ap_clk,&bit_reverse_U0_ap_continue,&bit_reverse_U0_ap_done,&bit_reverse_U0_ap_idle,&bit_reverse_U0_ap_ready,&ap_rst,&bit_reverse_U0_ap_start,&ap_status_bit_reverse_bit_reverse_U0, X_R_ram, X_I_ram,dummy);
fft_stage6(&fft_stage6_U0_Out_I_address0,&fft_stage6_U0_Out_I_address1,&fft_stage6_U0_Out_I_ce0,&fft_stage6_U0_Out_I_ce1,&fft_stage6_U0_Out_I_d0,&fft_stage6_U0_Out_I_d1,&fft_stage6_U0_Out_I_we0,&fft_stage6_U0_Out_I_we1,&fft_stage6_U0_Out_R_address0,&fft_stage6_U0_Out_R_address1,&fft_stage6_U0_Out_R_ce0,&fft_stage6_U0_Out_R_ce1,&fft_stage6_U0_Out_R_d0,&fft_stage6_U0_Out_R_d1,&fft_stage6_U0_Out_R_we0,&fft_stage6_U0_Out_R_we1,&fft_stage6_U0_X_I_address0,&fft_stage6_U0_X_I_ce0,&Stage1_I_t_q0,&fft_stage6_U0_X_R_address0,&fft_stage6_U0_X_R_ce0,&Stage1_R_t_q0,&ap_clk,&fft_stage6_U0_ap_continue,&fft_stage6_U0_ap_done,&fft_stage6_U0_ap_idle,&fft_stage6_U0_ap_ready,&ap_rst,&fft_stage6_U0_ap_start,&ap_status_fft_stage6_fft_stage6_U0,dummy);
fft_stage7(&fft_stage7_U0_Out_I_address0,&fft_stage7_U0_Out_I_address1,&fft_stage7_U0_Out_I_ce0,&fft_stage7_U0_Out_I_ce1,&fft_stage7_U0_Out_I_d0,&fft_stage7_U0_Out_I_d1,&fft_stage7_U0_Out_I_we0,&fft_stage7_U0_Out_I_we1,&fft_stage7_U0_Out_R_address0,&fft_stage7_U0_Out_R_address1,&fft_stage7_U0_Out_R_ce0,&fft_stage7_U0_Out_R_ce1,&fft_stage7_U0_Out_R_d0,&fft_stage7_U0_Out_R_d1,&fft_stage7_U0_Out_R_we0,&fft_stage7_U0_Out_R_we1,&fft_stage7_U0_X_I_address0,&fft_stage7_U0_X_I_ce0,&Stage2_I_t_q0,&fft_stage7_U0_X_R_address0,&fft_stage7_U0_X_R_ce0,&Stage2_R_t_q0,&ap_clk,&fft_stage7_U0_ap_continue,&fft_stage7_U0_ap_done,&fft_stage7_U0_ap_idle,&fft_stage7_U0_ap_ready,&ap_rst,&fft_stage7_U0_ap_start,&ap_status_fft_stage7_fft_stage7_U0,dummy);
fft_stage8(&fft_stage8_U0_Out_I_address0,&fft_stage8_U0_Out_I_address1,&fft_stage8_U0_Out_I_ce0,&fft_stage8_U0_Out_I_ce1,&fft_stage8_U0_Out_I_d0,&fft_stage8_U0_Out_I_d1,&fft_stage8_U0_Out_I_we0,&fft_stage8_U0_Out_I_we1,&fft_stage8_U0_Out_R_address0,&fft_stage8_U0_Out_R_address1,&fft_stage8_U0_Out_R_ce0,&fft_stage8_U0_Out_R_ce1,&fft_stage8_U0_Out_R_d0,&fft_stage8_U0_Out_R_d1,&fft_stage8_U0_Out_R_we0,&fft_stage8_U0_Out_R_we1,&fft_stage8_U0_X_I_address0,&fft_stage8_U0_X_I_ce0,&Stage3_I_t_q0,&fft_stage8_U0_X_R_address0,&fft_stage8_U0_X_R_ce0,&Stage3_R_t_q0,&ap_clk,&fft_stage8_U0_ap_continue,&fft_stage8_U0_ap_done,&fft_stage8_U0_ap_idle,&fft_stage8_U0_ap_ready,&ap_rst,&fft_stage8_U0_ap_start,&ap_status_fft_stage8_fft_stage8_U0, OUT_R_ram, OUT_I_ram,dummy);

ap_channel_done_Stage1_I = (ap_sync_reg_channel_write_Stage1_I ^ 1) & bit_reverse_U0_ap_done;
     ap_channel_done_Stage1_R = (ap_sync_reg_channel_write_Stage1_R ^ 1) & bit_reverse_U0_ap_done;
     ap_channel_done_Stage2_I = fft_stage6_U0_ap_done & (ap_sync_reg_channel_write_Stage2_I ^ 1);
     ap_channel_done_Stage2_R = fft_stage6_U0_ap_done & (ap_sync_reg_channel_write_Stage2_R ^1);
     ap_channel_done_Stage3_I = fft_stage7_U0_ap_done & (ap_sync_reg_channel_write_Stage3_I ^ 1);
     ap_channel_done_Stage3_R = fft_stage7_U0_ap_done & (ap_sync_reg_channel_write_Stage3_R ^ 1);

fft_streaming_Stabkb_Stage1_R_U(&ap_status_fft_streaming_Stabkb_Stage1_R_U,&ap_clk,&bit_reverse_U0_OUT_R_address0,&i_ce_fft_streaming_Stabkb_Stage1_R_U,&bit_reverse_U0_OUT_R_ce0,&bit_reverse_U0_OUT_R_d0,&Stage1_R_i_full_n,&Stage1_R_i_q0,&bit_reverse_U0_OUT_R_we0,&ap_channel_done_Stage1_R,&ap_rst,&fft_stage6_U0_X_R_address0,&t_ce_fft_streaming_Stabkb_Stage1_R_U,&fft_stage6_U0_X_R_ce0,&t_d0_fft_streaming_Stabkb_Stage1_R_U,&Stage1_R_t_empty_n,&Stage1_R_t_q0,&fft_stage6_U0_ap_ready,&t_we0_fft_streaming_Stabkb_Stage1_R_U,dummy);
fft_streaming_Stabkb_Stage1_I_U(&ap_status_fft_streaming_Stabkb_Stage1_I_U,&ap_clk,&bit_reverse_U0_OUT_I_address0,&i_ce_fft_streaming_Stabkb_Stage1_I_U,&bit_reverse_U0_OUT_I_ce0,&bit_reverse_U0_OUT_I_d0,&Stage1_I_i_full_n,&Stage1_I_i_q0,&bit_reverse_U0_OUT_I_we0,&ap_channel_done_Stage1_I,&ap_rst,&fft_stage6_U0_X_I_address0,&t_ce_fft_streaming_Stabkb_Stage1_I_U,&fft_stage6_U0_X_I_ce0,&t_d0_fft_streaming_Stabkb_Stage1_I_U,&Stage1_I_t_empty_n,&Stage1_I_t_q0,&fft_stage6_U0_ap_ready,&t_we0_fft_streaming_Stabkb_Stage1_I_U,dummy);
fft_streaming_StadEe_Stage2_R_U(&ap_status_fft_streaming_StadEe_Stage2_R_U,&ap_clk,&fft_stage6_U0_Out_R_address0,&fft_stage6_U0_Out_R_address1,&i_ce_fft_streaming_StadEe_Stage2_R_U,&fft_stage6_U0_Out_R_ce0,&fft_stage6_U0_Out_R_ce1,&fft_stage6_U0_Out_R_d0,&fft_stage6_U0_Out_R_d1,&Stage2_R_i_full_n,&Stage2_R_i_q0,&fft_stage6_U0_Out_R_we0,&fft_stage6_U0_Out_R_we1,&ap_channel_done_Stage2_R,&ap_rst,&fft_stage7_U0_X_R_address0,&t_address1_fft_streaming_StadEe_Stage2_R_U,&t_ce_fft_streaming_StadEe_Stage2_R_U,&fft_stage7_U0_X_R_ce0,&t_ce1_fft_streaming_StadEe_Stage2_R_U,&t_d0_fft_streaming_StadEe_Stage2_R_U,&t_d1_fft_streaming_StadEe_Stage2_R_U,&Stage2_R_t_empty_n,&Stage2_R_t_q0,&fft_stage7_U0_ap_ready,&t_we0_fft_streaming_StadEe_Stage2_R_U,&t_we1_fft_streaming_StadEe_Stage2_R_U,dummy);
fft_streaming_StadEe_Stage2_I_U(&ap_status_fft_streaming_StadEe_Stage2_I_U,&ap_clk,&fft_stage6_U0_Out_I_address0,&fft_stage6_U0_Out_I_address1,&i_ce_fft_streaming_StadEe_Stage2_I_U,&fft_stage6_U0_Out_I_ce0,&fft_stage6_U0_Out_I_ce1,&fft_stage6_U0_Out_I_d0,&fft_stage6_U0_Out_I_d1,&Stage2_I_i_full_n,&Stage2_I_i_q0,&fft_stage6_U0_Out_I_we0,&fft_stage6_U0_Out_I_we1,&ap_channel_done_Stage2_I,&ap_rst,&fft_stage7_U0_X_I_address0,&t_address1_fft_streaming_StadEe_Stage2_I_U,&t_ce_fft_streaming_StadEe_Stage2_I_U,&fft_stage7_U0_X_I_ce0,&t_ce1_fft_streaming_StadEe_Stage2_I_U,&t_d0_fft_streaming_StadEe_Stage2_I_U,&t_d1_fft_streaming_StadEe_Stage2_I_U,&Stage2_I_t_empty_n,&Stage2_I_t_q0,&fft_stage7_U0_ap_ready,&t_we0_fft_streaming_StadEe_Stage2_I_U,&t_we1_fft_streaming_StadEe_Stage2_I_U,dummy);
fft_streaming_StadEe_Stage3_R_U(&ap_status_fft_streaming_StadEe_Stage3_R_U,&ap_clk,&fft_stage7_U0_Out_R_address0,&fft_stage7_U0_Out_R_address1,&i_ce_fft_streaming_StadEe_Stage3_R_U,&fft_stage7_U0_Out_R_ce0,&fft_stage7_U0_Out_R_ce1,&fft_stage7_U0_Out_R_d0,&fft_stage7_U0_Out_R_d1,&Stage3_R_i_full_n,&Stage3_R_i_q0,&fft_stage7_U0_Out_R_we0,&fft_stage7_U0_Out_R_we1,&ap_channel_done_Stage3_R,&ap_rst,&fft_stage8_U0_X_R_address0,&t_address1_fft_streaming_StadEe_Stage3_R_U,&t_ce_fft_streaming_StadEe_Stage3_R_U,&fft_stage8_U0_X_R_ce0,&t_ce1_fft_streaming_StadEe_Stage3_R_U,&t_d0_fft_streaming_StadEe_Stage3_R_U,&t_d1_fft_streaming_StadEe_Stage3_R_U,&Stage3_R_t_empty_n,&Stage3_R_t_q0,&fft_stage8_U0_ap_ready,&t_we0_fft_streaming_StadEe_Stage3_R_U,&t_we1_fft_streaming_StadEe_Stage3_R_U,dummy);
fft_streaming_StadEe_Stage3_I_U(&ap_status_fft_streaming_StadEe_Stage3_I_U,&ap_clk,&fft_stage7_U0_Out_I_address0,&fft_stage7_U0_Out_I_address1,&i_ce_fft_streaming_StadEe_Stage3_I_U,&fft_stage7_U0_Out_I_ce0,&fft_stage7_U0_Out_I_ce1,&fft_stage7_U0_Out_I_d0,&fft_stage7_U0_Out_I_d1,&Stage3_I_i_full_n,&Stage3_I_i_q0,&fft_stage7_U0_Out_I_we0,&fft_stage7_U0_Out_I_we1,&ap_channel_done_Stage3_I,&ap_rst,&fft_stage8_U0_X_I_address0,&t_address1_fft_streaming_StadEe_Stage3_I_U,&t_ce_fft_streaming_StadEe_Stage3_I_U,&fft_stage8_U0_X_I_ce0,&t_ce1_fft_streaming_StadEe_Stage3_I_U,&t_d0_fft_streaming_StadEe_Stage3_I_U,&t_d1_fft_streaming_StadEe_Stage3_I_U,&Stage3_I_t_empty_n,&Stage3_I_t_q0,&fft_stage8_U0_ap_ready,&t_we0_fft_streaming_StadEe_Stage3_I_U,&t_we1_fft_streaming_StadEe_Stage3_I_U,dummy);


    ap_done = fft_stage8_U0_ap_done ;
     bit_reverse_U0_ap_start = ap_start ;
     fft_stage6_U0_ap_start = Stage1_R_t_empty_n && Stage1_I_t_empty_n ;
     fft_stage7_U0_ap_start = Stage2_R_t_empty_n && Stage2_I_t_empty_n ;
     fft_stage8_U0_ap_start = Stage3_R_t_empty_n && Stage3_I_t_empty_n ;
     
     
     
     bit_reverse_U0_ap_continue = ( Stage1_R_i_full_n & ap_channel_done_Stage1_R | ap_sync_reg_channel_write_Stage1_R ) & ( Stage1_I_i_full_n & ap_channel_done_Stage1_I | ap_sync_reg_channel_write_Stage1_I );
     
     fft_stage6_U0_ap_continue = ( Stage2_R_i_full_n & ap_channel_done_Stage2_R | ap_sync_reg_channel_write_Stage2_R ) & ( Stage2_I_i_full_n & ap_channel_done_Stage2_I | ap_sync_reg_channel_write_Stage2_I );
     
     
     fft_stage7_U0_ap_continue = ( Stage3_R_i_full_n & ap_channel_done_Stage3_R | ap_sync_reg_channel_write_Stage3_R ) & ( Stage3_I_i_full_n & ap_channel_done_Stage3_I | ap_sync_reg_channel_write_Stage3_I );
     
     ap_clk = ap_clk + 1;
        goto ap_ST_fsm_state1;
   end:
    *OUT_I_address0__1=OUT_I_address0;
    *OUT_I_address1__1=OUT_I_address1;
    *OUT_I_ce0__1=OUT_I_ce0;
    *OUT_I_ce1__1=OUT_I_ce1;
    *OUT_I_d0__1=OUT_I_d0;
    *OUT_I_d1__1=OUT_I_d1;
    *OUT_I_q0__1=OUT_I_q0;
    *OUT_I_q1__1=OUT_I_q1;
    *OUT_I_we0__1=OUT_I_we0;
    *OUT_I_we1__1=OUT_I_we1;
    *OUT_R_address0__1=OUT_R_address0;
    *OUT_R_address1__1=OUT_R_address1;
    *OUT_R_ce0__1=OUT_R_ce0;
    *OUT_R_ce1__1=OUT_R_ce1;
    *OUT_R_d0__1=OUT_R_d0;
    *OUT_R_d1__1=OUT_R_d1;
    *OUT_R_q0__1=OUT_R_q0;
    *OUT_R_q1__1=OUT_R_q1;
    *OUT_R_we0__1=OUT_R_we0;
    *OUT_R_we1__1=OUT_R_we1;
    *X_I_address0__1=X_I_address0;
    *X_I_address1__1=X_I_address1;
    *X_I_ce0__1=X_I_ce0;
    *X_I_ce1__1=X_I_ce1;
    *X_I_d0__1=X_I_d0;
    *X_I_d1__1=X_I_d1;
    *X_I_q0__1=X_I_q0;
    *X_I_q1__1=X_I_q1;
    *X_I_we0__1=X_I_we0;
    *X_I_we1__1=X_I_we1;
    *X_R_address0__1=X_R_address0;
    *X_R_address1__1=X_R_address1;
    *X_R_ce0__1=X_R_ce0;
    *X_R_ce1__1=X_R_ce1;
    *X_R_d0__1=X_R_d0;
    *X_R_d1__1=X_R_d1;
    *X_R_q0__1=X_R_q0;
    *X_R_q1__1=X_R_q1;
    *X_R_we0__1=X_R_we0;
    *X_R_we1__1=X_R_we1;
    *ap_clk__1=ap_clk;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
       return;
}
