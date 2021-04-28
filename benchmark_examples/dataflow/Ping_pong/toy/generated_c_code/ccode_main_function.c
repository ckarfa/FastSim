#include<stdio.h>
#include"ccode_main_function_B_B_U.c"
#include"ccode_main_function_B_C_U.c"
#include"ccode_main_function_B_D_U.c"
#include"ccode_main_function_B_E_U.c"
#include"ccode_module_1.c"
#include"ccode_module_2.c"
#include"ccode_module_3.c"
#include"ccode_module_4.c"
#define A_DWIDTH 32
#define F_DWIDTH 32
void module_1(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,long long int * ,long long int * ,int dummy);
void module_2(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,long long int * ,int dummy);
void module_3(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,long long int * ,int dummy);
void module_4(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,long long int * ,long long int * ,int dummy);
void main_function_B_B_U(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void main_function_B_C_U(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void main_function_B_D_U(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void main_function_B_E_U(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void main_function(unsigned long long int *A_address0__1,unsigned long long int *A_address1__1,unsigned long long int *A_ce0__1,unsigned long long int *A_ce1__1,unsigned long long int *A_d0__1,unsigned long long int *A_d1__1,unsigned long long int *A_q0__1,unsigned long long int *A_q1__1,unsigned long long int *A_we0__1,unsigned long long int *A_we1__1,unsigned long long int *F_address0__1,unsigned long long int *F_address1__1,unsigned long long int *F_ce0__1,unsigned long long int *F_ce1__1,unsigned long long int *F_d0__1,unsigned long long int *F_d1__1,unsigned long long int *F_q0__1,unsigned long long int *F_q1__1,unsigned long long int *F_we0__1,unsigned long long int *F_we1__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int  *A_ram ,unsigned long long int  *F_ram , int dummy){
unsigned long long int A_address0=*A_address0__1;
unsigned long long int A_address1=*A_address1__1;
unsigned long long int A_ce0=*A_ce0__1;
unsigned long long int A_ce1=*A_ce1__1;
unsigned long long int A_d0=*A_d0__1;
unsigned long long int A_d1=*A_d1__1;
unsigned long long int A_q0=*A_q0__1;
unsigned long long int A_q1=*A_q1__1;
unsigned long long int A_we0=*A_we0__1;
unsigned long long int A_we1=*A_we1__1;
unsigned long long int F_address0=*F_address0__1;
unsigned long long int F_address1=*F_address1__1;
unsigned long long int F_ce0=*F_ce0__1;
unsigned long long int F_ce1=*F_ce1__1;
unsigned long long int F_d0=*F_d0__1;
unsigned long long int F_d1=*F_d1__1;
unsigned long long int F_q0=*F_q0__1;
unsigned long long int F_q1=*F_q1__1;
unsigned long long int F_we0=*F_we0__1;
unsigned long long int F_we1=*F_we1__1;
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_status_main_function_B_B_U=0;
   long long int ap_status_main_function_B_C_U=0;
   long long int ap_status_main_function_B_D_U=0;
   long long int ap_status_main_function_B_E_U=0;
   long long int ap_status_module_1_module_1_U0=1;
   long long int ap_status_module_2_module_2_U0=1;
   long long int ap_status_module_3_module_3_U0=1;
   long long int ap_status_module_4_module_4_U0=1;
   unsigned long long int A_address0__temp=0;
   unsigned long long int A_address1__temp=0;
   unsigned long long int A_ce0__temp=0;
   unsigned long long int A_ce1__temp=0;
   unsigned long long int A_d0__temp=0;
   unsigned long long int A_d1__temp=0;
   unsigned long long int A_q0__temp=0;
   unsigned long long int A_q1__temp=0;
   unsigned long long int A_we0__temp=0;
   unsigned long long int A_we1__temp=0;
   unsigned long long int B_i_full_n=0;
   unsigned long long int B_i_full_n__temp=0;
   unsigned long long int B_i_q0=0;
   unsigned long long int B_i_q0__temp=0;
   unsigned long long int B_t_empty_n=0;
   unsigned long long int B_t_empty_n__temp=0;
   unsigned long long int B_t_q0=0;
   unsigned long long int B_t_q0__temp=0;
   unsigned long long int C_i_full_n=0;
   unsigned long long int C_i_full_n__temp=0;
   unsigned long long int C_i_q0=0;
   unsigned long long int C_i_q0__temp=0;
   unsigned long long int C_t_empty_n=0;
   unsigned long long int C_t_empty_n__temp=0;
   unsigned long long int C_t_q0=0;
   unsigned long long int C_t_q0__temp=0;
   unsigned long long int D_i_full_n=0;
   unsigned long long int D_i_full_n__temp=0;
   unsigned long long int D_i_q0=0;
   unsigned long long int D_i_q0__temp=0;
   unsigned long long int D_t_empty_n=0;
   unsigned long long int D_t_empty_n__temp=0;
   unsigned long long int D_t_q0=0;
   unsigned long long int D_t_q0__temp=0;
   unsigned long long int E_i_full_n=0;
   unsigned long long int E_i_full_n__temp=0;
   unsigned long long int E_i_q0=0;
   unsigned long long int E_i_q0__temp=0;
   unsigned long long int E_t_empty_n=0;
   unsigned long long int E_t_empty_n__temp=0;
   unsigned long long int E_t_q0=0;
   unsigned long long int E_t_q0__temp=0;
   unsigned long long int F_address0__temp=0;
   unsigned long long int F_address1__temp=0;
   unsigned long long int F_ce0__temp=0;
   unsigned long long int F_ce1__temp=0;
   unsigned long long int F_d0__temp=0;
   unsigned long long int F_d1__temp=0;
   unsigned long long int F_q0__temp=0;
   unsigned long long int F_q1__temp=0;
   unsigned long long int F_we0__temp=0;
   unsigned long long int F_we1__temp=0;
   unsigned long long int ap_channel_done_B=0;
   unsigned long long int ap_channel_done_B__temp=0;
   unsigned long long int ap_channel_done_C=0;
   unsigned long long int ap_channel_done_C__temp=0;
   unsigned long long int ap_channel_done_D=0;
   unsigned long long int ap_channel_done_D__temp=0;
   unsigned long long int ap_channel_done_E=0;
   unsigned long long int ap_channel_done_E__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_done__temp=0;
   unsigned long long int ap_idle__temp=0;
   unsigned long long int ap_ready__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=0;
   unsigned long long int ap_sync_channel_write_B=0;
   unsigned long long int ap_sync_channel_write_B__temp=0;
   unsigned long long int ap_sync_channel_write_C=0;
   unsigned long long int ap_sync_channel_write_C__temp=0;
   unsigned long long int ap_sync_continue=0;
   unsigned long long int ap_sync_continue__temp=0;
   unsigned long long int ap_sync_done=0;
   unsigned long long int ap_sync_done__temp=0;
   unsigned long long int ap_sync_ready=0;
   unsigned long long int ap_sync_ready__temp=0;
   unsigned long long int ap_sync_reg_channel_write_B=0;
   unsigned long long int ap_sync_reg_channel_write_B__temp=0;
   unsigned long long int ap_sync_reg_channel_write_C=0;
   unsigned long long int ap_sync_reg_channel_write_C__temp=0;
   unsigned long long int module_1_U0_A_address0=0;
   unsigned long long int module_1_U0_A_address0__temp=0;
   unsigned long long int module_1_U0_A_ce0=0;
   unsigned long long int module_1_U0_A_ce0__temp=0;
   unsigned long long int module_1_U0_B_address0=0;
   unsigned long long int module_1_U0_B_address0__temp=0;
   unsigned long long int module_1_U0_B_ce0=0;
   unsigned long long int module_1_U0_B_ce0__temp=0;
   unsigned long long int module_1_U0_B_d0=0;
   unsigned long long int module_1_U0_B_d0__temp=0;
   unsigned long long int module_1_U0_B_full_n=0;
   unsigned long long int module_1_U0_B_full_n__temp=0;
   unsigned long long int module_1_U0_B_we0=0;
   unsigned long long int module_1_U0_B_we0__temp=0;
   unsigned long long int module_1_U0_C_address0=0;
   unsigned long long int module_1_U0_C_address0__temp=0;
   unsigned long long int module_1_U0_C_ce0=0;
   unsigned long long int module_1_U0_C_ce0__temp=0;
   unsigned long long int module_1_U0_C_d0=0;
   unsigned long long int module_1_U0_C_d0__temp=0;
   unsigned long long int module_1_U0_C_full_n=0;
   unsigned long long int module_1_U0_C_full_n__temp=0;
   unsigned long long int module_1_U0_C_we0=0;
   unsigned long long int module_1_U0_C_we0__temp=0;
   unsigned long long int module_1_U0_ap_continue=0;
   unsigned long long int module_1_U0_ap_continue__temp=0;
   unsigned long long int module_1_U0_ap_done=0;
   unsigned long long int module_1_U0_ap_done__temp=0;
   unsigned long long int module_1_U0_ap_idle=0;
   unsigned long long int module_1_U0_ap_idle__temp=0;
   unsigned long long int module_1_U0_ap_ready=0;
   unsigned long long int module_1_U0_ap_ready__temp=0;
   unsigned long long int module_1_U0_ap_start=0;
   unsigned long long int module_1_U0_ap_start__temp=0;
   unsigned long long int module_1_U0_start_full_n=0;
   unsigned long long int module_1_U0_start_full_n__temp=0;
   unsigned long long int module_1_U0_start_write=0;
   unsigned long long int module_1_U0_start_write__temp=0;
   unsigned long long int module_2_U0_B_address0=0;
   unsigned long long int module_2_U0_B_address0__temp=0;
   unsigned long long int module_2_U0_B_ce0=0;
   unsigned long long int module_2_U0_B_ce0__temp=0;
   unsigned long long int module_2_U0_D_address0=0;
   unsigned long long int module_2_U0_D_address0__temp=0;
   unsigned long long int module_2_U0_D_ce0=0;
   unsigned long long int module_2_U0_D_ce0__temp=0;
   unsigned long long int module_2_U0_D_d0=0;
   unsigned long long int module_2_U0_D_d0__temp=0;
   unsigned long long int module_2_U0_D_full_n=1;
   unsigned long long int module_2_U0_D_full_n__temp=0;
   unsigned long long int module_2_U0_D_we0=0;
   unsigned long long int module_2_U0_D_we0__temp=0;
   unsigned long long int module_2_U0_ap_continue=0;
   unsigned long long int module_2_U0_ap_continue__temp=0;
   unsigned long long int module_2_U0_ap_done=0;
   unsigned long long int module_2_U0_ap_done__temp=0;
   unsigned long long int module_2_U0_ap_idle=0;
   unsigned long long int module_2_U0_ap_idle__temp=0;
   unsigned long long int module_2_U0_ap_ready=0;
   unsigned long long int module_2_U0_ap_ready__temp=0;
   unsigned long long int module_2_U0_ap_start=0;
   unsigned long long int module_2_U0_ap_start__temp=0;
   unsigned long long int module_2_U0_start_full_n=1;
   unsigned long long int module_2_U0_start_full_n__temp=0;
   unsigned long long int module_2_U0_start_write=0;
   unsigned long long int module_2_U0_start_write__temp=0;
   unsigned long long int module_3_U0_C_address0=0;
   unsigned long long int module_3_U0_C_address0__temp=0;
   unsigned long long int module_3_U0_C_ce0=0;
   unsigned long long int module_3_U0_C_ce0__temp=0;
   unsigned long long int module_3_U0_E_address0=0;
   unsigned long long int module_3_U0_E_address0__temp=0;
   unsigned long long int module_3_U0_E_ce0=0;
   unsigned long long int module_3_U0_E_ce0__temp=0;
   unsigned long long int module_3_U0_E_d0=0;
   unsigned long long int module_3_U0_E_d0__temp=0;
   unsigned long long int module_3_U0_E_full_n=0;
   unsigned long long int module_3_U0_E_full_n__temp=0;
   unsigned long long int module_3_U0_E_we0=0;
   unsigned long long int module_3_U0_E_we0__temp=0;
   unsigned long long int module_3_U0_ap_continue=0;
   unsigned long long int module_3_U0_ap_continue__temp=0;
   unsigned long long int module_3_U0_ap_done=0;
   unsigned long long int module_3_U0_ap_done__temp=0;
   unsigned long long int module_3_U0_ap_idle=0;
   unsigned long long int module_3_U0_ap_idle__temp=0;
   unsigned long long int module_3_U0_ap_ready=0;
   unsigned long long int module_3_U0_ap_ready__temp=0;
   unsigned long long int module_3_U0_ap_start=0;
   unsigned long long int module_3_U0_ap_start__temp=0;
   unsigned long long int module_3_U0_start_full_n=1;
   unsigned long long int module_3_U0_start_full_n__temp=0;
   unsigned long long int module_3_U0_start_write=0;
   unsigned long long int module_3_U0_start_write__temp=0;
   unsigned long long int module_4_U0_D_address0=0;
   unsigned long long int module_4_U0_D_address0__temp=0;
   unsigned long long int module_4_U0_D_ce0=0;
   unsigned long long int module_4_U0_D_ce0__temp=0;
   unsigned long long int module_4_U0_E_address0=0;
   unsigned long long int module_4_U0_E_address0__temp=0;
   unsigned long long int module_4_U0_E_ce0=0;
   unsigned long long int module_4_U0_E_ce0__temp=0;
   unsigned long long int module_4_U0_F_address0=0;
   unsigned long long int module_4_U0_F_address0__temp=0;
   unsigned long long int module_4_U0_F_ce0=0;
   unsigned long long int module_4_U0_F_ce0__temp=0;
   unsigned long long int module_4_U0_F_d0=0;
   unsigned long long int module_4_U0_F_d0__temp=0;
   unsigned long long int module_4_U0_F_we0=0;
   unsigned long long int module_4_U0_F_we0__temp=0;
   unsigned long long int module_4_U0_ap_continue=1;
   unsigned long long int module_4_U0_ap_continue__temp=0;
   unsigned long long int module_4_U0_ap_done=0;
   unsigned long long int module_4_U0_ap_done__temp=0;
   unsigned long long int module_4_U0_ap_idle=0;
   unsigned long long int module_4_U0_ap_idle__temp=0;
   unsigned long long int module_4_U0_ap_ready=0;
   unsigned long long int module_4_U0_ap_ready__temp=0;
   unsigned long long int module_4_U0_ap_start=0;
   unsigned long long int module_4_U0_ap_start__temp=0;
   unsigned long long int module_4_U0_start_full_n=1;
   unsigned long long int module_4_U0_start_full_n__temp=0;
   unsigned long long int module_4_U0_start_write=0;
   unsigned long long int module_4_U0_start_write__temp=0;
   unsigned long long int t_we0_main_function_B_B_U=0;
   unsigned long long int t_we0_main_function_B_D_U=0;
   unsigned long long int t_we0_main_function_B_C_U=0;
   unsigned long long int t_we0_main_function_B_E_U=0;
   unsigned long long int t_d0_main_function_B_B_U=0;
   unsigned long long int t_d0_main_function_B_C_U=0;
   unsigned long long int t_d0_main_function_B_D_U=0;
   unsigned long long int t_d0_main_function_B_E_U=0;
   unsigned long long int t_ce_main_function_B_B_U=1;
   unsigned long long int t_ce_main_function_B_C_U=1;
   unsigned long long int t_ce_main_function_B_D_U=1;
   unsigned long long int t_ce_main_function_B_E_U=1;
   unsigned long long int i_ce_main_function_B_B_U=1;
   unsigned long long int i_ce_main_function_B_C_U=1;
   unsigned long long int i_ce_main_function_B_D_U=1;
   unsigned long long int i_ce_main_function_B_E_U=1;
   unsigned long long int i1 = 0;
   unsigned long long int i2 = 0;


   

    ap_done=0;
    ap_start=1;

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
   B_t_empty_n__temp = B_t_empty_n ;
   module_4_U0_start_write__temp = module_4_U0_start_write ;
   ap_sync_channel_write_C__temp = ap_sync_channel_write_C ;
   module_3_U0_E_ce0__temp = module_3_U0_E_ce0 ;
   module_4_U0_D_address0__temp = module_4_U0_D_address0 ;
   module_2_U0_D_ce0__temp = module_2_U0_D_ce0 ;
   module_3_U0_E_address0__temp = module_3_U0_E_address0 ;
   A_q0__temp = A_q0 ;
   module_1_U0_A_address0__temp = module_1_U0_A_address0 ;
   F_ce1__temp = F_ce1 ;
   module_3_U0_start_full_n__temp = module_3_U0_start_full_n ;
   E_t_q0__temp = E_t_q0 ;
   module_3_U0_ap_done__temp = module_3_U0_ap_done ;
   module_2_U0_D_d0__temp = module_2_U0_D_d0 ;
   C_t_q0__temp = C_t_q0 ;
   A_q1__temp = A_q1 ;
   module_3_U0_ap_idle__temp = module_3_U0_ap_idle ;
   module_1_U0_C_address0__temp = module_1_U0_C_address0 ;
   C_t_empty_n__temp = C_t_empty_n ;
   ap_channel_done_E__temp = ap_channel_done_E ;
   module_1_U0_B_full_n__temp = module_1_U0_B_full_n ;
   D_t_q0__temp = D_t_q0 ;
   F_d0__temp = F_d0 ;
   module_1_U0_start_write__temp = module_1_U0_start_write ;
   module_2_U0_ap_ready__temp = module_2_U0_ap_ready ;
   module_4_U0_F_ce0__temp = module_4_U0_F_ce0 ;
   module_1_U0_C_full_n__temp = module_1_U0_C_full_n ;
   module_2_U0_ap_start__temp = module_2_U0_ap_start ;
   ap_ready__temp = ap_ready ;
   ap_start__temp = ap_start ;
   module_4_U0_E_address0__temp = module_4_U0_E_address0 ;
   module_3_U0_E_d0__temp = module_3_U0_E_d0 ;
   F_address0__temp = F_address0 ;
   module_4_U0_D_ce0__temp = module_4_U0_D_ce0 ;
   module_2_U0_ap_idle__temp = module_2_U0_ap_idle ;
   F_d1__temp = F_d1 ;
   module_1_U0_start_full_n__temp = module_1_U0_start_full_n ;
   A_d1__temp = A_d1 ;
   ap_sync_channel_write_B__temp = ap_sync_channel_write_B ;
   C_i_full_n__temp = C_i_full_n ;
   module_2_U0_ap_done__temp = module_2_U0_ap_done ;
   A_we0__temp = A_we0 ;
   F_q0__temp = F_q0 ;
   module_4_U0_ap_start__temp = module_4_U0_ap_start ;
   A_d0__temp = A_d0 ;
   C_i_q0__temp = C_i_q0 ;
   module_1_U0_C_d0__temp = module_1_U0_C_d0 ;
   module_4_U0_E_ce0__temp = module_4_U0_E_ce0 ;
   A_ce0__temp = A_ce0 ;
   module_2_U0_B_address0__temp = module_2_U0_B_address0 ;
   module_3_U0_C_address0__temp = module_3_U0_C_address0 ;
   A_address1__temp = A_address1 ;
   module_2_U0_D_we0__temp = module_2_U0_D_we0 ;
   D_i_full_n__temp = D_i_full_n ;
   module_1_U0_C_ce0__temp = module_1_U0_C_ce0 ;
   module_4_U0_F_address0__temp = module_4_U0_F_address0 ;
   module_1_U0_B_address0__temp = module_1_U0_B_address0 ;
   F_we0__temp = F_we0 ;
   module_1_U0_B_d0__temp = module_1_U0_B_d0 ;
   module_1_U0_ap_idle__temp = module_1_U0_ap_idle ;
   module_2_U0_D_address0__temp = module_2_U0_D_address0 ;
   module_1_U0_ap_done__temp = module_1_U0_ap_done ;
   ap_sync_continue__temp = ap_sync_continue ;
   ap_sync_done__temp = ap_sync_done ;
   module_1_U0_C_we0__temp = module_1_U0_C_we0 ;
   D_t_empty_n__temp = D_t_empty_n ;
   module_4_U0_start_full_n__temp = module_4_U0_start_full_n ;
   module_3_U0_ap_ready__temp = module_3_U0_ap_ready ;
   A_address0__temp = A_address0 ;
   F_address1__temp = F_address1 ;
   ap_sync_ready__temp = ap_sync_ready ;
   A_we1__temp = A_we1 ;
   ap_sync_reg_channel_write_C__temp = ap_sync_reg_channel_write_C ;
   B_i_q0__temp = B_i_q0 ;
   ap_clk__temp = ap_clk ;
   module_3_U0_E_we0__temp = module_3_U0_E_we0 ;
   E_i_q0__temp = E_i_q0 ;
   module_4_U0_F_d0__temp = module_4_U0_F_d0 ;
   B_t_q0__temp = B_t_q0 ;
   module_1_U0_ap_start__temp = module_1_U0_ap_start ;
   ap_channel_done_C__temp = ap_channel_done_C ;
   module_4_U0_ap_idle__temp = module_4_U0_ap_idle ;
   F_we1__temp = F_we1 ;
   module_1_U0_B_we0__temp = module_1_U0_B_we0 ;
   module_2_U0_B_ce0__temp = module_2_U0_B_ce0 ;
   F_q1__temp = F_q1 ;
   B_i_full_n__temp = B_i_full_n ;
   A_ce1__temp = A_ce1 ;
   F_ce0__temp = F_ce0 ;
   ap_channel_done_D__temp = ap_channel_done_D ;
   module_4_U0_ap_ready__temp = module_4_U0_ap_ready ;
   module_4_U0_F_we0__temp = module_4_U0_F_we0 ;
   D_i_q0__temp = D_i_q0 ;
   module_2_U0_ap_continue__temp = module_2_U0_ap_continue ;
   module_4_U0_ap_continue__temp = module_4_U0_ap_continue ;
   module_1_U0_B_ce0__temp = module_1_U0_B_ce0 ;
   module_1_U0_ap_ready__temp = module_1_U0_ap_ready ;
   module_3_U0_ap_continue__temp = module_3_U0_ap_continue ;
   ap_sync_reg_channel_write_B__temp = ap_sync_reg_channel_write_B ;
   module_1_U0_ap_continue__temp = module_1_U0_ap_continue ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   module_3_U0_C_ce0__temp = module_3_U0_C_ce0 ;
   E_i_full_n__temp = E_i_full_n ;
   module_3_U0_E_full_n__temp = module_3_U0_E_full_n ;
   module_1_U0_A_ce0__temp = module_1_U0_A_ce0 ;
   module_2_U0_D_full_n__temp = module_2_U0_D_full_n ;
   module_3_U0_start_write__temp = module_3_U0_start_write ;
   module_4_U0_ap_done__temp = module_4_U0_ap_done ;
   E_t_empty_n__temp = E_t_empty_n ;
   module_3_U0_ap_start__temp = module_3_U0_ap_start ;
   module_2_U0_start_write__temp = module_2_U0_start_write ;
   ap_channel_done_B__temp = ap_channel_done_B ;
   module_2_U0_start_full_n__temp = module_2_U0_start_full_n ;
   ap_done__temp = ap_done ;

       A_ce0 = 0;
       A_we0 = 0;
       A_ce1 = 0;
       A_we1 = 0;
       A_address0 =   ( module_1_U0_A_address0 & 18446744073709551615 ) ;
       A_address1 =   ( 0 ) & 7;
       A_d0 =   ( 0 ) & 4294967295;
       A_d1 =   ( 0 ) & 4294967295;
       F_ce0 = 0;
       F_we0 = 0;
       F_ce1 = 0;
       F_we1 = 0;
       F_address0 =   ( module_4_U0_F_address0 & 18446744073709551615 ) ;
       F_address1 =   ( 0 ) & 7;
       F_d0 =   ( module_4_U0_F_d0 & 18446744073709551615 ) ;
       F_d1 =   ( 0 ) & 4294967295;
       if(!(ap_rst == 1)){
if(!((module_1_U0_ap_done && module_1_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_B =  ( (  ( (  ( B_i_full_n & 1 )  &  ( ( module_1_U0_ap_done &  ( ( ap_sync_reg_channel_write_B ^ 1 ) & 1 )  ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_B ) & 1 )  ; 

}

}
       if(!(ap_rst == 1)){
if(!((module_1_U0_ap_done && module_1_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_C =  ( (  ( (  ( C_i_full_n & 1 )  &  ( ( module_1_U0_ap_done &  ( ( ap_sync_reg_channel_write_C ^ 1 ) & 1 )  ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_C ) & 1 )  ; 

}

}
    if(module_1_U0_ap_done == 1 && module_1_U0_ap_continue == 1)
   {
       i1++;
       A_ram = input[i1];
   }

   if(module_4_U0_ap_done == 1)
   {
       i2++;
       F_ram = output[i2];
   }

   if(ap_done == 1 && i2 == SIZE){
       goto end;
   }
   
       goto ap_ST_fsm_state2;

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
   B_t_empty_n__temp = B_t_empty_n ;
   module_4_U0_start_write__temp = module_4_U0_start_write ;
   ap_sync_channel_write_C__temp = ap_sync_channel_write_C ;
   module_3_U0_E_ce0__temp = module_3_U0_E_ce0 ;
   module_4_U0_D_address0__temp = module_4_U0_D_address0 ;
   module_2_U0_D_ce0__temp = module_2_U0_D_ce0 ;
   module_3_U0_E_address0__temp = module_3_U0_E_address0 ;
   A_q0__temp = A_q0 ;
   module_1_U0_A_address0__temp = module_1_U0_A_address0 ;
   F_ce1__temp = F_ce1 ;
   module_3_U0_start_full_n__temp = module_3_U0_start_full_n ;
   E_t_q0__temp = E_t_q0 ;
   module_3_U0_ap_done__temp = module_3_U0_ap_done ;
   module_2_U0_D_d0__temp = module_2_U0_D_d0 ;
   C_t_q0__temp = C_t_q0 ;
   A_q1__temp = A_q1 ;
   module_3_U0_ap_idle__temp = module_3_U0_ap_idle ;
   module_1_U0_C_address0__temp = module_1_U0_C_address0 ;
   C_t_empty_n__temp = C_t_empty_n ;
   ap_channel_done_E__temp = ap_channel_done_E ;
   module_1_U0_B_full_n__temp = module_1_U0_B_full_n ;
   D_t_q0__temp = D_t_q0 ;
   F_d0__temp = F_d0 ;
   module_1_U0_start_write__temp = module_1_U0_start_write ;
   module_2_U0_ap_ready__temp = module_2_U0_ap_ready ;
   module_4_U0_F_ce0__temp = module_4_U0_F_ce0 ;
   module_1_U0_C_full_n__temp = module_1_U0_C_full_n ;
   module_2_U0_ap_start__temp = module_2_U0_ap_start ;
   ap_ready__temp = ap_ready ;
   ap_start__temp = ap_start ;
   module_4_U0_E_address0__temp = module_4_U0_E_address0 ;
   module_3_U0_E_d0__temp = module_3_U0_E_d0 ;
   F_address0__temp = F_address0 ;
   module_4_U0_D_ce0__temp = module_4_U0_D_ce0 ;
   module_2_U0_ap_idle__temp = module_2_U0_ap_idle ;
   F_d1__temp = F_d1 ;
   module_1_U0_start_full_n__temp = module_1_U0_start_full_n ;
   A_d1__temp = A_d1 ;
   ap_sync_channel_write_B__temp = ap_sync_channel_write_B ;
   C_i_full_n__temp = C_i_full_n ;
   module_2_U0_ap_done__temp = module_2_U0_ap_done ;
   A_we0__temp = A_we0 ;
   F_q0__temp = F_q0 ;
   module_4_U0_ap_start__temp = module_4_U0_ap_start ;
   A_d0__temp = A_d0 ;
   C_i_q0__temp = C_i_q0 ;
   module_1_U0_C_d0__temp = module_1_U0_C_d0 ;
   module_4_U0_E_ce0__temp = module_4_U0_E_ce0 ;
   A_ce0__temp = A_ce0 ;
   module_2_U0_B_address0__temp = module_2_U0_B_address0 ;
   module_3_U0_C_address0__temp = module_3_U0_C_address0 ;
   A_address1__temp = A_address1 ;
   module_2_U0_D_we0__temp = module_2_U0_D_we0 ;
   D_i_full_n__temp = D_i_full_n ;
   module_1_U0_C_ce0__temp = module_1_U0_C_ce0 ;
   module_4_U0_F_address0__temp = module_4_U0_F_address0 ;
   module_1_U0_B_address0__temp = module_1_U0_B_address0 ;
   F_we0__temp = F_we0 ;
   module_1_U0_B_d0__temp = module_1_U0_B_d0 ;
   module_1_U0_ap_idle__temp = module_1_U0_ap_idle ;
   module_2_U0_D_address0__temp = module_2_U0_D_address0 ;
   module_1_U0_ap_done__temp = module_1_U0_ap_done ;
   ap_sync_continue__temp = ap_sync_continue ;
   ap_sync_done__temp = ap_sync_done ;
   module_1_U0_C_we0__temp = module_1_U0_C_we0 ;
   D_t_empty_n__temp = D_t_empty_n ;
   module_4_U0_start_full_n__temp = module_4_U0_start_full_n ;
   module_3_U0_ap_ready__temp = module_3_U0_ap_ready ;
   A_address0__temp = A_address0 ;
   F_address1__temp = F_address1 ;
   ap_sync_ready__temp = ap_sync_ready ;
   A_we1__temp = A_we1 ;
   ap_sync_reg_channel_write_C__temp = ap_sync_reg_channel_write_C ;
   B_i_q0__temp = B_i_q0 ;
   ap_clk__temp = ap_clk ;
   module_3_U0_E_we0__temp = module_3_U0_E_we0 ;
   E_i_q0__temp = E_i_q0 ;
   module_4_U0_F_d0__temp = module_4_U0_F_d0 ;
   B_t_q0__temp = B_t_q0 ;
   module_1_U0_ap_start__temp = module_1_U0_ap_start ;
   ap_channel_done_C__temp = ap_channel_done_C ;
   module_4_U0_ap_idle__temp = module_4_U0_ap_idle ;
   F_we1__temp = F_we1 ;
   module_1_U0_B_we0__temp = module_1_U0_B_we0 ;
   module_2_U0_B_ce0__temp = module_2_U0_B_ce0 ;
   F_q1__temp = F_q1 ;
   B_i_full_n__temp = B_i_full_n ;
   A_ce1__temp = A_ce1 ;
   F_ce0__temp = F_ce0 ;
   ap_channel_done_D__temp = ap_channel_done_D ;
   module_4_U0_ap_ready__temp = module_4_U0_ap_ready ;
   module_4_U0_F_we0__temp = module_4_U0_F_we0 ;
   D_i_q0__temp = D_i_q0 ;
   module_2_U0_ap_continue__temp = module_2_U0_ap_continue ;
   module_4_U0_ap_continue__temp = module_4_U0_ap_continue ;
   module_1_U0_B_ce0__temp = module_1_U0_B_ce0 ;
   module_1_U0_ap_ready__temp = module_1_U0_ap_ready ;
   module_3_U0_ap_continue__temp = module_3_U0_ap_continue ;
   ap_sync_reg_channel_write_B__temp = ap_sync_reg_channel_write_B ;
   module_1_U0_ap_continue__temp = module_1_U0_ap_continue ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   module_3_U0_C_ce0__temp = module_3_U0_C_ce0 ;
   E_i_full_n__temp = E_i_full_n ;
   module_3_U0_E_full_n__temp = module_3_U0_E_full_n ;
   module_1_U0_A_ce0__temp = module_1_U0_A_ce0 ;
   module_2_U0_D_full_n__temp = module_2_U0_D_full_n ;
   module_3_U0_start_write__temp = module_3_U0_start_write ;
   module_4_U0_ap_done__temp = module_4_U0_ap_done ;
   E_t_empty_n__temp = E_t_empty_n ;
   module_3_U0_ap_start__temp = module_3_U0_ap_start ;
   module_2_U0_start_write__temp = module_2_U0_start_write ;
   ap_channel_done_B__temp = ap_channel_done_B ;
   module_2_U0_start_full_n__temp = module_2_U0_start_full_n ;
   ap_done__temp = ap_done ;

       A_ce0 = 0;
       A_we0 = 0;
       A_ce1 = 0;
       A_we1 = 0;
       A_address0 =   ( module_1_U0_A_address0 & 18446744073709551615 ) ;
       A_address1 =   ( 0 ) & 7;
       A_d0 =   ( 0 ) & 4294967295;
       A_d1 =   ( 0 ) & 4294967295;
       F_ce0 = 0;
       F_we0 = 0;
       F_ce1 = 0;
       F_we1 = 0;
       F_address0 =   ( module_4_U0_F_address0 & 18446744073709551615 ) ;
       F_address1 =   ( 0 ) & 7;
       F_d0 =   ( module_4_U0_F_d0 & 18446744073709551615 ) ;
       F_d1 =   ( 0 ) & 4294967295;
       
       if(!(ap_rst == 1)){
if(((module_1_U0_ap_done && module_1_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_B =  0 ;
}

}
       if(!(ap_rst == 1)){
if(!((module_1_U0_ap_done && module_1_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_B =  ( (  ( (  ( B_i_full_n & 1 )  &  ( ( module_1_U0_ap_done &  ( ( ap_sync_reg_channel_write_B ^ 1 ) & 1 )  ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_B ) & 1 )  ; 

}

}
if(!(ap_rst == 1)){
if(((module_1_U0_ap_done && module_1_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_C =  0;
}

}

       if(!(ap_rst == 1)){
if(!((module_1_U0_ap_done && module_1_U0_ap_continue) == 1)){
ap_sync_reg_channel_write_C =  ( (  ( (  ( C_i_full_n & 1 )  &  ( ( module_1_U0_ap_done &  ( ( ap_sync_reg_channel_write_C ^ 1 ) & 1 )  ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_C ) & 1 )  ; 

}

}
module_1(&module_1_U0_A_address0,&module_1_U0_A_ce0,&A_q0,&module_1_U0_B_address0,&module_1_U0_B_ce0,&module_1_U0_B_d0,&module_1_U0_B_we0,&module_1_U0_C_address0,&module_1_U0_C_ce0,&module_1_U0_C_d0,&module_1_U0_C_we0,&ap_clk,&module_1_U0_ap_continue,&module_1_U0_ap_done,&module_1_U0_ap_idle,&module_1_U0_ap_ready,&ap_rst,&module_1_U0_ap_start,&ap_status_module_1_module_1_U0, A_ram,dummy);
module_2(&module_2_U0_B_address0,&module_2_U0_B_ce0,&B_t_q0,&module_2_U0_D_address0,&module_2_U0_D_ce0,&module_2_U0_D_d0,&module_2_U0_D_we0,&ap_clk,&module_2_U0_ap_continue,&module_2_U0_ap_done,&module_2_U0_ap_idle,&module_2_U0_ap_ready,&ap_rst,&module_2_U0_ap_start,&ap_status_module_2_module_2_U0,dummy);
module_3(&module_3_U0_C_address0,&module_3_U0_C_ce0,&C_t_q0,&module_3_U0_E_address0,&module_3_U0_E_ce0,&module_3_U0_E_d0,&module_3_U0_E_we0,&ap_clk,&module_3_U0_ap_continue,&module_3_U0_ap_done,&module_3_U0_ap_idle,&module_3_U0_ap_ready,&ap_rst,&module_3_U0_ap_start,&ap_status_module_3_module_3_U0,dummy);
module_4(&module_4_U0_D_address0,&module_4_U0_D_ce0,&D_t_q0,&module_4_U0_E_address0,&module_4_U0_E_ce0,&E_t_q0,&module_4_U0_F_address0,&module_4_U0_F_ce0,&module_4_U0_F_d0,&module_4_U0_F_we0,&ap_clk,&module_4_U0_ap_continue,&module_4_U0_ap_done,&module_4_U0_ap_idle,&module_4_U0_ap_ready,&ap_rst,&module_4_U0_ap_start,&ap_status_module_4_module_4_U0, F_ram,dummy);

ap_channel_done_B = module_1_U0_ap_done & (ap_sync_reg_channel_write_B ^ 1);
ap_channel_done_C = module_1_U0_ap_done & (ap_sync_reg_channel_write_C ^ 1);


main_function_B_B_U(&ap_clk,&module_1_U0_B_address0,&i_ce_main_function_B_B_U,&module_1_U0_B_ce0,&module_1_U0_B_d0,&B_i_full_n,&B_i_q0,&module_1_U0_B_we0,&ap_channel_done_B,&ap_rst,&module_2_U0_B_address0,&t_ce_main_function_B_B_U,&module_2_U0_B_ce0,&t_d0_main_function_B_B_U,&B_t_empty_n,&B_t_q0,&module_2_U0_ap_ready,&t_we0_main_function_B_B_U,dummy);
main_function_B_C_U(&ap_clk,&module_1_U0_C_address0,&i_ce_main_function_B_C_U,&module_1_U0_C_ce0,&module_1_U0_C_d0,&C_i_full_n,&C_i_q0,&module_1_U0_C_we0,&ap_channel_done_C,&ap_rst,&module_3_U0_C_address0,&t_ce_main_function_B_C_U,&module_3_U0_C_ce0,&t_d0_main_function_B_C_U,&C_t_empty_n,&C_t_q0,&module_3_U0_ap_ready,&t_we0_main_function_B_C_U,dummy);
main_function_B_D_U(&ap_clk,&module_2_U0_D_address0,&i_ce_main_function_B_D_U,&module_2_U0_D_ce0,&module_2_U0_D_d0,&D_i_full_n,&D_i_q0,&module_2_U0_D_we0,&module_2_U0_ap_done,&ap_rst,&module_4_U0_D_address0,&t_ce_main_function_B_D_U,&module_4_U0_D_ce0,&t_d0_main_function_B_D_U,&D_t_empty_n,&D_t_q0,&module_4_U0_ap_ready,&t_we0_main_function_B_D_U,dummy);
main_function_B_E_U(&ap_clk,&module_3_U0_E_address0,&i_ce_main_function_B_E_U,&module_3_U0_E_ce0,&module_3_U0_E_d0,&E_i_full_n,&E_i_q0,&module_3_U0_E_we0,&module_3_U0_ap_done,&ap_rst,&module_4_U0_E_address0,&t_ce_main_function_B_E_U,&module_4_U0_E_ce0,&t_d0_main_function_B_E_U,&E_t_empty_n,&E_t_q0,&module_4_U0_ap_ready,&t_we0_main_function_B_E_U,dummy);
    
    module_1_U0_ap_continue = ( ( (  ( (  ( B_i_full_n & 1 )  &  ( ( module_1_U0_ap_done &  ( ( ap_sync_reg_channel_write_B ^ 1 ) & 1 )  ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_B ) & 1 ) & ( (  ( (  ( C_i_full_n & 1 )  &  ( ( module_1_U0_ap_done &  ( ( ap_sync_reg_channel_write_C ^ 1 ) & 1 )  ) & 1 )  ) & 1 )  | ap_sync_reg_channel_write_C ) & 1 ) ) ;
    module_1_U0_B_full_n = B_i_full_n;
    module_1_U0_C_full_n = C_i_full_n;
    module_2_U0_ap_continue = D_i_full_n;
    module_3_U0_E_full_n = E_i_full_n;
    module_3_U0_ap_continue = E_i_full_n;
    ap_done = module_4_U0_ap_done ;
    module_1_U0_ap_start = ap_start ;
    module_2_U0_ap_start = B_t_empty_n ;
    module_3_U0_ap_start = C_t_empty_n ;
    module_4_U0_ap_start = E_t_empty_n && D_t_empty_n ;
        goto ap_ST_fsm_state1;
   end:
    *A_address0__1=A_address0;
    *A_address1__1=A_address1;
    *A_ce0__1=A_ce0;
    *A_ce1__1=A_ce1;
    *A_d0__1=A_d0;
    *A_d1__1=A_d1;
    *A_q0__1=A_q0;
    *A_q1__1=A_q1;
    *A_we0__1=A_we0;
    *A_we1__1=A_we1;
    *F_address0__1=F_address0;
    *F_address1__1=F_address1;
    *F_ce0__1=F_ce0;
    *F_ce1__1=F_ce1;
    *F_d0__1=F_d0;
    *F_d1__1=F_d1;
    *F_q0__1=F_q0;
    *F_q1__1=F_q1;
    *F_we0__1=F_we0;
    *F_we1__1=F_we1;
    *ap_clk__1=ap_clk;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
       return;
}
