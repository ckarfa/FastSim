#include<stdio.h>
#define BufferCount 2
void histogram_hist1_hist2(long long int *ap_status__1,unsigned long long int *clk__1,unsigned long long int *i_address0__1,unsigned long long int *i_address1__1,unsigned long long int *i_ce__1,unsigned long long int *i_ce0__1,unsigned long long int *i_ce1__1,unsigned long long int *i_d0__1,unsigned long long int *i_full_n__1,unsigned long long int *i_q0__1,unsigned long long int *i_q1__1,unsigned long long int *i_we0__1,unsigned long long int *i_write__1,unsigned long long int *reset__1,unsigned long long int *t_address0__1,unsigned long long int *t_address1__1,unsigned long long int *t_ce__1,unsigned long long int *t_ce0__1,unsigned long long int *t_ce1__1,unsigned long long int *t_d0__1,unsigned long long int *t_empty_n__1,unsigned long long int *t_q0__1,unsigned long long int *t_q1__1,unsigned long long int *t_read__1,unsigned long long int *t_we0__1,int dummy){
long long int ap_status=*ap_status__1;
unsigned long long int clk=*clk__1;
unsigned long long int i_address0=*i_address0__1;
unsigned long long int i_address1=*i_address1__1;
unsigned long long int i_ce=*i_ce__1;
unsigned long long int i_ce0=*i_ce0__1;
unsigned long long int i_ce1=*i_ce1__1;
unsigned long long int i_d0=*i_d0__1;
unsigned long long int i_full_n=*i_full_n__1;
unsigned long long int i_q0=*i_q0__1;
unsigned long long int i_q1=*i_q1__1;
unsigned long long int i_we0=*i_we0__1;
unsigned long long int i_write=*i_write__1;
unsigned long long int reset=*reset__1;
unsigned long long int t_address0=*t_address0__1;
unsigned long long int t_address1=*t_address1__1;
unsigned long long int t_ce=*t_ce__1;
unsigned long long int t_ce0=*t_ce0__1;
unsigned long long int t_ce1=*t_ce1__1;
unsigned long long int t_d0=*t_d0__1;
unsigned long long int t_empty_n=*t_empty_n__1;
unsigned long long int t_q0=*t_q0__1;
unsigned long long int t_q1=*t_q1__1;
unsigned long long int t_read=*t_read__1;
unsigned long long int t_we0=*t_we0__1;
   static unsigned long long int ap_status__temp=0;
   static unsigned long long int buf_a0[2];
   static unsigned long long int buf_a1[2];
   static unsigned long long int buf_ce0[2];
   static unsigned long long int buf_ce1[2];
   static unsigned long long int buf_d0[2];
   static unsigned long long int buf_q0[2];
   static unsigned long long int buf_q1[2];
   static unsigned long long int buf_we0[2];
   static unsigned long long int clk__temp=0;
   static unsigned long long int count=0;
   static unsigned long long int count__temp=0;
   static unsigned long long int empty_n=0;
   static unsigned long long int empty_n__temp=0;
   static unsigned long long int full_n=1;
   static unsigned long long int full_n__temp=0;
   static unsigned long long int i_address0__temp=0;
   static unsigned long long int i_address1__temp=0;
   static unsigned long long int i_ce0__temp=0;
   static unsigned long long int i_ce1__temp=0;
   static unsigned long long int i_ce__temp=0;
   static unsigned long long int i_d0__temp=0;
   static unsigned long long int i_full_n__temp=0;
   static unsigned long long int i_q0__temp=0;
   static unsigned long long int i_q1__temp=0;
   static unsigned long long int i_we0__temp=0;
   static unsigned long long int i_write__temp=0;
   static unsigned long long int iptr=0;
   static unsigned long long int iptr__temp=0;
   static unsigned long long int pop_buf=0;
   static unsigned long long int pop_buf__temp=0;
   static unsigned long long int prev_iptr=0;
   static unsigned long long int prev_iptr__temp=0;
   static unsigned long long int prev_tptr=0;
   static unsigned long long int prev_tptr__temp=0;
   static unsigned long long int push_buf=0;
   static unsigned long long int push_buf__temp=0;
   static unsigned long long int reset__temp=0;
   static unsigned long long int t_address0__temp=0;
   static unsigned long long int t_address1__temp=0;
   static unsigned long long int t_ce0__temp=0;
   static unsigned long long int t_ce1__temp=0;
   static unsigned long long int t_ce__temp=0;
   static unsigned long long int t_d0__temp=0;
   static unsigned long long int t_empty_n__temp=0;
   static unsigned long long int t_q0__temp=0;
   static unsigned long long int t_q1__temp=0;
   static unsigned long long int t_read__temp=0;
   static unsigned long long int t_we0__temp=0;
   static unsigned long long int tptr=0;
   static unsigned long long int tptr__temp=0;
   unsigned long long int i=0;
    static unsigned long long int ram[BufferCount][256];
       push_buf__temp = push_buf;
       pop_buf__temp =  pop_buf;
       full_n__temp = full_n;
       empty_n__temp = empty_n;
       count__temp = count;
       iptr__temp = iptr;
       tptr__temp = tptr;
       
       if(reset == 1){
iptr = 0 ; 
}
if(!(reset == 1)){
if((iptr__temp == (BufferCount - 1)) && push_buf__temp){
iptr = 0 ; 
}
else{
if(push_buf__temp){
iptr =  ( ( iptr__temp + 1 ) & 1 )  ; 
}
}
}
 
       if(reset == 1){
prev_iptr = 0 ; 
}
if(!(reset == 1)){
prev_iptr = iptr__temp ; 
}
 
       if(reset == 1){
prev_tptr = 0 ; 
}
if(!(reset == 1)){
prev_tptr = tptr__temp ; 
}
 
       if(reset == 1){
tptr = 0 ; 
}
if((tptr__temp == (BufferCount - 1)) && pop_buf__temp){
tptr = 0 ; 
}
else{
if(pop_buf__temp){
tptr =  ( ( tptr__temp + 1 ) & 1 )  ; 
}
}
 
       if(reset == 1){
count = 0 ; 
}
if(!(reset == 1)){
if(push_buf__temp && ~(pop_buf__temp)){
count =  ( ( count__temp + 1 ) & 3 )  ; 
}
if(!(push_buf__temp && ~(pop_buf__temp))){
if(!(push_buf__temp) && pop_buf__temp){
count =  ( ( count__temp - 1 ) & 3 )  ; 
}
}
}
 
       if(reset == 1){
full_n = 1 ; 
}
if(!(reset == 1)){
if((push_buf__temp && ~(pop_buf__temp)) && (count__temp == (BufferCount - 2))){
full_n = 0 ; 
}
if(!((push_buf__temp && ~(pop_buf__temp)) && (count__temp == (BufferCount - 2)))){
if(!(push_buf__temp) && pop_buf__temp){
full_n = 1 ; 
}
}
}
 
       if(reset == 1){
empty_n = 0 ; 
}
if(!(reset == 1)){
if(push_buf__temp && ~(pop_buf__temp)){
empty_n = 1 ; 
}
if(!(push_buf__temp && ~(pop_buf__temp))){
if((!(push_buf__temp) && pop_buf__temp) && (count__temp == 1)){
empty_n = 0 ; 
}
}
}
       push_buf = (i_ce && i_write) && full_n ;  
       pop_buf = (t_ce && t_read) && empty_n ;  
       for(i = 0 ; i < BufferCount ; i = (i + 1)){
       buf_ce0[i] = ((iptr == i) ? i_ce0 : (((tptr == i) && empty_n) ? t_ce0 : 0)) ;
	   buf_we0[i] = ((iptr == i) ? i_we0 : (((tptr == i) && empty_n) ? t_we0 : 0)) ;
	   buf_a0[i] = ((iptr == i) ? i_address0 : t_address0) ;
	   buf_d0[i] = ((iptr == i) ? i_d0 : t_d0) ;
	   buf_ce1[i] = ((iptr == i) ? i_ce1 : (((tptr == i) && empty_n) ? t_ce1 : 0)) ;
	   buf_a1[i] = ((iptr == i) ? i_address1 : t_address1) ;
       if(buf_ce0[i]){
			if(buf_we0[i]){
				ram[i][buf_a0[i]] = buf_d0[i];

			}
			buf_q0[i] = ram[i][buf_a0[i]];
	   }
       if(buf_ce1[i]){
			buf_q1[i] = ram[i][buf_a1[i]];

		}

}
   i_q0 = buf_q0[prev_iptr] ;  
   t_q0 = buf_q0[prev_tptr] ;  
   i_q1 = buf_q1[prev_iptr] ;  
   t_q1 = buf_q1[prev_tptr] ;  
   i_full_n = full_n ;  
   t_empty_n = empty_n ;  
   end:
    *ap_status__1=ap_status;
    *clk__1=clk;
    *i_address0__1=i_address0;
    *i_address1__1=i_address1;
    *i_ce__1=i_ce;
    *i_ce0__1=i_ce0;
    *i_ce1__1=i_ce1;
    *i_d0__1=i_d0;
    *i_full_n__1=i_full_n;
    *i_q0__1=i_q0;
    *i_q1__1=i_q1;
    *i_we0__1=i_we0;
    *i_write__1=i_write;
    *reset__1=reset;
    *t_address0__1=t_address0;
    *t_address1__1=t_address1;
    *t_ce__1=t_ce;
    *t_ce0__1=t_ce0;
    *t_ce1__1=t_ce1;
    *t_d0__1=t_d0;
    *t_empty_n__1=t_empty_n;
    *t_q0__1=t_q0;
    *t_q1__1=t_q1;
    *t_read__1=t_read;
    *t_we0__1=t_we0;
       return;
}
