#include<stdio.h>
#define main_function_B_memcore_DataWidth 32
#define main_function_B_memcore_AddressRange 10
#define main_function_B_memcore_AddressWidth 4
#define main_function_B_memcore_DWIDTH 32
#define main_function_B_memcore_AWIDTH 4
#define main_function_B_memcore_MEM_SIZE 10
#define BufferCount 2
long long int do_twos_complement( unsigned long long int a ,int width){
    int msb = (a >> (width-1)) & 1;
    if(msb==1){
        int bit[width];int ans[width];
        unsigned long long int a1=a;
        int i=0;
        for(i=0;i<width;i++){
            bit[i]=0;
            ans[i]=0;
        }
        i=0;
        while(a1>0){
            bit[i]=a1%2;
            i++;
            a1/=2;
        }
        int flag=0;
        for(i=0;i<width;i++){
            if(bit[i]==1 && flag==0){
                ans[i]=1;
                flag=1;
            }
            else if(flag==0)
                ans[i]=bit[i];
            else
                ans[i]=1 ^ bit[i];
        }
        long long int fans=0;
        for(i=0;i<width;i++)
            fans+=ans[i]*(1<<i);
        fans = -fans;    
        return fans;
    }else{     
        return a;
    }
}
void main_function_B_B_U(unsigned long long int *clk__1,unsigned long long int *i_address0__1,unsigned long long int *i_ce__1,unsigned long long int *i_ce0__1,unsigned long long int *i_d0__1,unsigned long long int *i_full_n__1,unsigned long long int *i_q0__1,unsigned long long int *i_we0__1,unsigned long long int *i_write__1,unsigned long long int *reset__1,unsigned long long int *t_address0__1,unsigned long long int *t_ce__1,unsigned long long int *t_ce0__1,unsigned long long int *t_d0__1,unsigned long long int *t_empty_n__1,unsigned long long int *t_q0__1,unsigned long long int *t_read__1,unsigned long long int *t_we0__1,int dummy){
unsigned long long int clk=*clk__1;
unsigned long long int i_address0=*i_address0__1;
unsigned long long int i_ce=*i_ce__1;
unsigned long long int i_ce0=*i_ce0__1;
unsigned long long int i_d0=*i_d0__1;
unsigned long long int i_full_n=*i_full_n__1;
unsigned long long int i_q0=*i_q0__1;
unsigned long long int i_we0=*i_we0__1;
unsigned long long int i_write=*i_write__1;
unsigned long long int reset=*reset__1;
unsigned long long int t_address0=*t_address0__1;
unsigned long long int t_ce=*t_ce__1;
unsigned long long int t_ce0=*t_ce0__1;
unsigned long long int t_d0=*t_d0__1;
unsigned long long int t_empty_n=*t_empty_n__1;
unsigned long long int t_q0=*t_q0__1;
unsigned long long int t_read=*t_read__1;
unsigned long long int t_we0=*t_we0__1;
   static unsigned long long int clk__temp=0;
   static unsigned long long int count=0;
   static unsigned long long int count__temp=0;
   static unsigned long long int empty_n=0;
   static unsigned long long int empty_n__temp=0;
   static unsigned long long int full_n=1;
   static unsigned long long int full_n__temp=0;
   static unsigned long long int i_address0__temp=0;
   static unsigned long long int i_ce0__temp=0;
   static unsigned long long int i_ce__temp=0;
   static unsigned long long int i_d0__temp=0;
   static unsigned long long int i_full_n__temp=0;
   static unsigned long long int i_q0__temp=0;
   static unsigned long long int i_we0__temp=0;
   static unsigned long long int i_write__temp=0;
   static unsigned long long int iptr=0;
   static unsigned long long int iptr__temp=0;
   static unsigned long long int memcore_iaddr=0;
   static unsigned long long int memcore_iaddr__temp=0;
   static unsigned long long int memcore_taddr=0;
   static unsigned long long int memcore_taddr__temp=0;
   static unsigned long long int pop_buf=0;
   static unsigned long long int pop_buf__temp=0;
   static unsigned long long int push_buf=0;
   static unsigned long long int push_buf__temp=0;
   static unsigned long long int reset__temp=0;
   static unsigned long long int t_address0__temp=0;
   static unsigned long long int t_ce0__temp=0;
   static unsigned long long int t_ce__temp=0;
   static unsigned long long int t_d0__temp=0;
   static unsigned long long int t_empty_n__temp=0;
   static unsigned long long int t_q0__temp=0;
   static unsigned long long int t_read__temp=0;
   static unsigned long long int t_we0__temp=0;
   static unsigned long long int tptr=0;
   static unsigned long long int tptr__temp=0;
    unsigned long long int i_address0_temp_0=0;
    unsigned long long int i_address0_temp_1=0;
    unsigned long long int t_address0_temp_2=0;
    unsigned long long int t_address0_temp_3=0;
   static unsigned long long int main_function_B_memcore_ram[main_function_B_memcore_MEM_SIZE];
        count__temp = count ;
        full_n__temp = full_n ;
        empty_n__temp = empty_n ;
       i_address0_temp_0 = i_address0 << 1 ;  
       i_address0_temp_1 = i_address0_temp_0 | iptr ;  
       memcore_iaddr = i_address0_temp_1 ;  
       t_address0_temp_2 = t_address0 << 1 ;  
       t_address0_temp_3 = t_address0_temp_2 | tptr ;  
       memcore_taddr = t_address0_temp_3 ;  
       
       push_buf = (i_ce && i_write) && full_n ;  
       pop_buf = (t_ce && t_read) && empty_n ;  
       if(reset == 1){
iptr = 0 ; 
}
if(!(reset == 1)){
if((iptr == (BufferCount - 1)) && push_buf){
iptr = 0 ; 
}
else{
if(push_buf){
iptr =  ( ( iptr + 1 ) & 1 )  ; 
}
}
}
 
       if(reset == 1){
tptr = 0 ; 
}
if(!(reset == 1)){
if((tptr == (BufferCount - 1)) && pop_buf){
tptr = 0 ; 
}
else{
if(pop_buf){
tptr =  ( ( tptr + 1 ) & 1 )  ; 
} 
}
}
 
       if(reset == 1){
count = 0 ; 
}
if(!(reset == 1)){
if(push_buf && ~(pop_buf)){
count =  ( ( count__temp + 1 ) & 3 )  ; 
}
if(!(push_buf && ~(pop_buf))){
if(~(push_buf) && pop_buf){
count =  ( ( count__temp - 1 ) & 3 )  ; 
}
}
}
 
       if(reset == 1){
full_n = 1 ; 
}
if(!(reset == 1)){
if((push_buf && ~(pop_buf)) && (count__temp == (BufferCount - 2))){
full_n = 0 ; 
}
if(!((push_buf && ~(pop_buf)) && (count__temp == (BufferCount - 2)))){
if(~(push_buf) && pop_buf){
full_n = 1 ; 
}
}
}
 
       if(reset == 1){
empty_n = 0 ; 
}
if(!(reset == 1)){
if(push_buf && ~(pop_buf)){
empty_n = 1 ; 
}
if(!(push_buf && ~(pop_buf))){
if((~(push_buf) && pop_buf) && (count__temp == 1)){
empty_n = 0 ; 
}
}
}
 i_full_n = full_n__temp ;  
t_empty_n = empty_n ;  
       if(i_ce0){
          i_q0=main_function_B_memcore_ram[memcore_iaddr];
           if(i_we0){
              main_function_B_memcore_ram[memcore_iaddr]=i_d0;
           }
       }
       if(t_ce0){
          t_q0=main_function_B_memcore_ram[memcore_taddr];
           if(t_we0){
              main_function_B_memcore_ram[memcore_taddr]=t_d0;
           }
       }
   end:
    *clk__1=clk;
    *i_address0__1=i_address0;
    *i_ce__1=i_ce;
    *i_ce0__1=i_ce0;
    *i_d0__1=i_d0;
    *i_full_n__1=i_full_n;
    *i_q0__1=i_q0;
    *i_we0__1=i_we0;
    *i_write__1=i_write;
    *reset__1=reset;
    *t_address0__1=t_address0;
    *t_ce__1=t_ce;
    *t_ce0__1=t_ce0;
    *t_d0__1=t_d0;
    *t_empty_n__1=t_empty_n;
    *t_q0__1=t_q0;
    *t_read__1=t_read;
    *t_we0__1=t_we0;
       return;
}
