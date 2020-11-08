#include<stdio.h>
#include<string.h>
#include<time.h>
#define COL 20
int main(){
	  clock_t t;
	  t = clock();
	  FILE *fp;
	  fp=fopen("input_data.txt","r");
	  char line [ 1000 ];
	
	  int index=0;
	  int input[COL];
	  int i1=1,i;	  
	  while(!feof(fp))
		{
			fscanf(fp,"%s",line);
			//printf("%s\n",line);
			input[index]=atoi(line);
			index = (index+1)%COL;
			if(index==0){								
				int out131;
				int out301;
				int out311;
				int *out13=&out131;
				int *out30=&out301;
				int *out31=&out311;
				int *a1,*a2,*a3,*a4,*a5,*a6,*a7;
				int ap_clk=1;
				int ap_done=0;
				int ap_idle=0;
				int ap_ready=1;
				int ap_return=0;
				int ap_rst=1;
				int ap_start=1;
				a1=&ap_clk;
				a2=&ap_done;
				a3=&ap_idle;
				a4=&ap_ready;
				a5=&ap_return;
				a6=&ap_rst;
				a7=&ap_start;
				int dummy=0;				
				//hls_macc(a1,a2,a3,a4,a5,a6,a7,&input[0],&input[7],&input[9],&input[8],&input[10],&input[11],&input[12],&input[1],&input[13],&input[14],&input[15],&input[16],&input[17],&input[18],&input[2],&input[19],&input[3],&input[4],&input[5],&input[6],out13,out30,out31,dummy);

				int ans=hls_macc(input[0],input[1],input[2],input[3],input[4],input[5],input[6],input[7],input[8],input[9],input[10],input[11],input[12],input[13],input[14],input[15],input[16],input[17],input[18],input[19],out13,out30,out31);


				int in1=input[0]; int in2=input[1]; int in3=input[2]; int in4=input[3]; int in7=input[4]; int in8=input[5];
				int in9=input[6]; int in10=input[7]; int in14=input[8]; int in12=input[9];int in15=input[10];
				int in17=input[11]; int in19=input[12]; int in20=input[13];	int in22=input[14]; int in24=input[15];
				int in27=input[16]; int in28=input[17]; int in29=input[18]; int in32=input[19];
				int t5, t6, t11, t16, t18, t21, t23, t25, t26;//temporary

					//*out30 = 0;
					t5 = in3 - in4;      /* b */
					t6 = in7 + in8;      /* a */
					*out13 = in14 - in15;   /* k - output node */
					t11 = t6 + in12;    /* d */
					if (in2 == in1)    /* p */
					 t16 = t11 - in17;  /* f */
					else
					{
					 t18 = in19 + in20;  /* c */
					 if (in9 < in10)     /* q */
					 {
					  t21 = t11 + in22; /* g */
					  t23 = t5 - in24;  /* e */
					  t25 = t21 + t23; /* i */
					  t26 = t25 + in27; /* j */
					 }
					 else
					  t26 = t5 + t18;  /* h */
					  t16 = t26 - in28;  /* m */
					  *out30 = t26 + in29;  /* l - output node  */
					}
					*out31 = t16 + in32;   /* n - output node  */

				//printf("%d Generated C Code : %d\n",*out13+*out30+*out31,i1++);

			}
		}
	  t = clock() - t;
	  double time_taken = ((double)t)/CLOCKS_PER_SEC;
	  printf("Time taken: %f seconds \n", time_taken);
	  return 0;
}
