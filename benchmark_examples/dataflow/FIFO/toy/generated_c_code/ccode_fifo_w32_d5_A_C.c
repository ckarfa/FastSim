#include<stdio.h>
#define ADDR_WIDTH 3
#define DEPTH 5
void fifo_w32_d5_A_C(long long int *ap_status__1,unsigned long long int *clk__1,unsigned long long int *if_din__1,unsigned long long int *if_dout__1,unsigned long long int *if_empty_n__1,unsigned long long int *if_full_n__1,unsigned long long int *if_read__1,unsigned long long int *if_read_ce__1,unsigned long long int *if_write__1,unsigned long long int *if_write_ce__1,unsigned long long int *reset__1,int dummy){
long long int ap_status=*ap_status__1;
unsigned long long int clk=*clk__1;
unsigned long long int if_din=*if_din__1;
unsigned long long int if_dout=*if_dout__1;
unsigned long long int if_empty_n=*if_empty_n__1;
unsigned long long int if_full_n=*if_full_n__1;
unsigned long long int if_read=*if_read__1;
unsigned long long int if_read_ce=*if_read_ce__1;
unsigned long long int if_write=*if_write__1;
unsigned long long int if_write_ce=*if_write_ce__1;
unsigned long long int reset=*reset__1;
   static unsigned long long int ap_status__temp=0;
   static unsigned long long int clk__temp=0;
   static unsigned long long int if_din__temp=0;
   static unsigned long long int if_dout__temp=0;
   static unsigned long long int if_empty_n__temp=0;
   static unsigned long long int if_full_n__temp=0;
   static unsigned long long int if_read__temp=0;
   static unsigned long long int if_read_ce__temp=0;
   static unsigned long long int if_write__temp=0;
   static unsigned long long int if_write_ce__temp=0;
   static unsigned long long int internal_empty_n=0;
   static unsigned long long int internal_empty_n__temp=0;
   static unsigned long long int internal_full_n=1;
   static unsigned long long int internal_full_n__temp=0;
   static unsigned long long int mOutPtr=15;
   static unsigned long long int mOutPtr__temp=0;
   static unsigned long long int reset__temp=0;
   static unsigned long long int shiftReg_addr=0;
   static unsigned long long int shiftReg_addr__temp=0;
   static unsigned long long int shiftReg_ce=0;
   static unsigned long long int shiftReg_ce__temp=0;
   static unsigned long long int shiftReg_data=0;
   static unsigned long long int shiftReg_data__temp=0;
   static unsigned long long int shiftReg_q=0;
   static unsigned long long int shiftReg_q__temp=0;
    int i ;
    static unsigned long long int ram[5]; 
        shiftReg_data = if_din ;  

      
      
      
       
       if(reset == 1){
internal_empty_n = 0 ; 
internal_full_n = 1 ; 
}
if(!(reset == 1)){
if((((if_read__temp && if_read_ce__temp) == 1) && (internal_empty_n__temp == 1)) && (((if_write__temp && if_write_ce__temp) == 0) || (internal_full_n__temp == 0))){
mOutPtr =  ( ( mOutPtr__temp  - 1 ) & 15 )  ;
internal_full_n = 1 ;  
if(mOutPtr__temp == 0){
internal_empty_n = 0 ; 
}

}
if(!((((if_read__temp && if_read_ce__temp) == 1) && (internal_empty_n__temp == 1)) && (((if_write__temp && if_write_ce__temp) == 0) || (internal_full_n__temp == 0)))){
if((((if_read__temp && if_read_ce__temp) == 0) || (internal_empty_n__temp == 0)) && (((if_write__temp && if_write_ce__temp) == 1) && (internal_full_n__temp == 1))){
mOutPtr =  ( ( mOutPtr__temp + 1 ) & 15 )  ; 
internal_empty_n = 1 ; 
if(mOutPtr__temp == (DEPTH - 2)){
internal_full_n = 0 ; 
}
}
}
}

shiftReg_addr = (((mOutPtr>>ADDR_WIDTH) & 1) == 0) ? ((mOutPtr & 7)) : 0 ;  
shiftReg_ce = (if_write && if_write_ce) && internal_full_n ;  

      
      if(shiftReg_ce__temp)
      {
         for(i=DEPTH-2;i>=0;i=i-1)
         {
            ram[i+1]=ram[i];
         }
         ram[0]=shiftReg_data__temp;
      }
      shiftReg_q = ram[shiftReg_addr];
   if_dout = shiftReg_q ; 
   if_full_n = internal_full_n ;  
   if_empty_n = internal_empty_n ;  

    shiftReg_ce__temp = shiftReg_ce;
    shiftReg_data__temp = shiftReg_data; 

    mOutPtr__temp = mOutPtr;
       internal_empty_n__temp = internal_empty_n;
       internal_full_n__temp = internal_full_n;
       if_read__temp = if_read;
       if_read_ce__temp = if_read_ce;
       if_write__temp = if_write;
       if_write_ce__temp = if_write_ce; 
      
       
   end:
    *ap_status__1=ap_status;
    *clk__1=clk;
    *if_din__1=if_din;
    *if_dout__1=if_dout;
    *if_empty_n__1=if_empty_n;
    *if_full_n__1=if_full_n;
    *if_read__1=if_read;
    *if_read_ce__1=if_read_ce;
    *if_write__1=if_write;
    *if_write_ce__1=if_write_ce;
    *reset__1=reset;
       return;
}
