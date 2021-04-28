#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define COL 1024
#define SIZE 3000
unsigned long long int input_R[SIZE+5][COL],input_I[SIZE+5][COL],output_R[SIZE+5][COL],output_I[SIZE+5][COL],output_org_R[SIZE+5][COL],output_org_I[SIZE+5][COL];
#include"ccode_fft_streaming.c"


int main()
{
	int fail = 0;
	clock_t t;
	t = clock();
    FILE *fp,*fp1;
	fp=fopen("input_data.txt","r");
	fp1=fopen("output_data.txt","r");
	int index = 0,index1=0,index2 = 0,index12=0;
	while(!feof(fp))
	{			
		char line [ 1000 ];			
		fscanf(fp,"%s",&line);				
		input_R[index1][index]=atoll(line);
		char line1 [ 1000 ];			
		fscanf(fp,"%s",&line1);				
		input_I[index1][index]=atoll(line1);
		
		index = (index+1)%COL;
		if(index==0)
		{
			index1+=1;
		}
	}	
	index=0;
	index1=0;
	while(!feof(fp1))
	{			
		char line [ 1000 ];			
		char line1 [ 1000 ];			
		
		fscanf(fp1,"%s",&line);
		fscanf(fp1,"%s",&line1);				
		output_org_R[index1][index]=atoll(line);
		output_org_I[index1][index]=atoll(line1);
		
		index = (index+1)%COL;
		
		if(index==0)
		{
			index1+=1;
		}
	}
	/*for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<COL;j++)
		{
			input_R[i][j]=j;
			input_I[i][j]=0;
		}
	}*/
    
    unsigned long long int OUT_R_address0 = 0 ;
	unsigned long long int OUT_R_address1 = 0 ;
	unsigned long long int OUT_R_ce0 = 0 ;
	unsigned long long int OUT_R_ce1 = 0 ;
	unsigned long long int OUT_R_d0 = 0 ;
	unsigned long long int OUT_R_d1 = 0 ;
	unsigned long long int OUT_R_q0 = 0 ;
	unsigned long long int OUT_R_q1 = 0 ;
	unsigned long long int OUT_R_we0 = 0 ;
	unsigned long long int OUT_R_we1 = 0 ;
	
	unsigned long long int OUT_I_address0 = 0 ;
	unsigned long long int OUT_I_address1 = 0 ;
	unsigned long long int OUT_I_ce0 = 0 ;
	unsigned long long int OUT_I_ce1 = 0 ;
	unsigned long long int OUT_I_d0 = 0 ;
	unsigned long long int OUT_I_d1 = 0 ;
	unsigned long long int OUT_I_q0 = 0 ;
	unsigned long long int OUT_I_q1 = 0 ;
	unsigned long long int OUT_I_we0 = 0 ;
	unsigned long long int OUT_I_we1 = 0 ;
	
	unsigned long long int X_I_address0 = 0 ;
	unsigned long long int X_I_address1 = 0 ;
	unsigned long long int X_I_ce0 = 0 ;
	unsigned long long int X_I_ce1 = 0 ;
	unsigned long long int X_I_d0 = 0 ;
	unsigned long long int X_I_d1 = 0 ;
	unsigned long long int X_I_q0 = 0 ;
	unsigned long long int X_I_q1 = 0 ;
	unsigned long long int X_I_we0 = 0 ;
	unsigned long long int X_I_we1 = 0 ;
	
	unsigned long long int X_R_address0 = 0 ;
	unsigned long long int X_R_address1 = 0 ;
	unsigned long long int X_R_ce0 = 0 ;
	unsigned long long int X_R_ce1 = 0 ;
	unsigned long long int X_R_d0 = 0 ;
	unsigned long long int X_R_d1 = 0 ;
	unsigned long long int X_R_q0 = 0 ;
	unsigned long long int X_R_q1 = 0 ;
	unsigned long long int X_R_we0 = 0 ;
	unsigned long long int X_R_we1 = 0 ;
	
	unsigned long long int ap_clk = 0 ;
	unsigned long long int ap_done = 0 ;
	unsigned long long int ap_idle = 0 ;
	unsigned long long int ap_ready = 0 ;
	unsigned long long int ap_rst = 0 ;
	unsigned long long int ap_start = 1 ;

    
    unsigned long long int *OUT_I_address0__1 = &OUT_I_address0 ;
	unsigned long long int *OUT_I_address1__1 = &OUT_I_address1 ;
	unsigned long long int *OUT_I_ce0__1 = &OUT_I_ce0 ; 
	unsigned long long int *OUT_I_ce1__1 = &OUT_I_ce1 ;
	unsigned long long int *OUT_I_d0__1 = &OUT_I_d0 ; 
	unsigned long long int *OUT_I_d1__1 = &OUT_I_d1 ;
	unsigned long long int *OUT_I_q0__1 = &OUT_I_q0 ;
	unsigned long long int *OUT_I_q1__1 = &OUT_I_q1 ;
	unsigned long long int *OUT_I_we0__1 = &OUT_I_we0 ;
	unsigned long long int *OUT_I_we1__1 = &OUT_I_we1 ;
	
	unsigned long long int *OUT_R_address0__1 = &OUT_R_address0 ;
	unsigned long long int *OUT_R_address1__1 = &OUT_R_address1 ;
	unsigned long long int *OUT_R_ce0__1 = &OUT_R_ce0 ; 
	unsigned long long int *OUT_R_ce1__1 = &OUT_R_ce1 ;
	unsigned long long int *OUT_R_d0__1 = &OUT_R_d0 ; 
	unsigned long long int *OUT_R_d1__1 = &OUT_R_d1 ;
	unsigned long long int *OUT_R_q0__1 = &OUT_R_q0 ;
	unsigned long long int *OUT_R_q1__1 = &OUT_R_q1 ;
	unsigned long long int *OUT_R_we0__1 = &OUT_R_we0 ;
	unsigned long long int *OUT_R_we1__1 = &OUT_R_we1 ;
	
	unsigned long long int *X_R_address0__1 = &X_R_address0 ;
	unsigned long long int *X_R_address1__1 = &X_R_address1 ;
	unsigned long long int *X_R_ce0__1 = &X_R_ce0 ; 
	unsigned long long int *X_R_ce1__1 = &X_R_ce1 ;
	unsigned long long int *X_R_d0__1 = &X_R_d0 ; 
	unsigned long long int *X_R_d1__1 = &X_R_d1 ;
	unsigned long long int *X_R_q0__1 = &X_R_q0 ;
	unsigned long long int *X_R_q1__1 = &X_R_q1 ;
	unsigned long long int *X_R_we0__1 = &X_R_we0 ;
	unsigned long long int *X_R_we1__1 = &X_R_we1 ;
	
	unsigned long long int *X_I_address0__1 = &X_I_address0 ;
	unsigned long long int *X_I_address1__1 = &X_I_address1 ;
	unsigned long long int *X_I_ce0__1 = &X_I_ce0 ; 
	unsigned long long int *X_I_ce1__1 = &X_I_ce1 ;
	unsigned long long int *X_I_d0__1 = &X_I_d0 ; 
	unsigned long long int *X_I_d1__1 = &X_I_d1 ;
	unsigned long long int *X_I_q0__1 = &X_I_q0 ;
	unsigned long long int *X_I_q1__1 = &X_I_q1 ;
	unsigned long long int *X_I_we0__1 = &X_I_we0 ;
	unsigned long long int *X_I_we1__1 = &X_I_we1 ;
	
	unsigned long long int *ap_clk__1 = &ap_clk ; 
	unsigned long long int *ap_done__1 = &ap_done ; 
	unsigned long long int *ap_idle__1 = &ap_idle ; 
	unsigned long long int *ap_ready__1 = &ap_ready ; 
	unsigned long long int *ap_rst__1 = &ap_rst ;
	unsigned long long int *ap_start__1 = &ap_start ; 
	 int dummy;
    
	unsigned long long int *X_R_ram=input_R[0];
	unsigned long long int *X_I_ram=input_I[0];
	unsigned long long int *OUT_R_ram=output_R[0];
	unsigned long long int *OUT_I_ram=output_I[0];
		
fft_streaming(OUT_I_address0__1,OUT_I_address1__1,OUT_I_ce0__1,OUT_I_ce1__1,OUT_I_d0__1,OUT_I_d1__1,OUT_I_q0__1,OUT_I_q1__1,OUT_I_we0__1,OUT_I_we1__1,
OUT_R_address0__1,OUT_R_address1__1,OUT_R_ce0__1,OUT_R_ce1__1,OUT_R_d0__1,OUT_R_d1__1,OUT_R_q0__1,OUT_R_q1__1,OUT_R_we0__1,OUT_R_we1__1,
X_I_address0__1,X_I_address1__1,X_I_ce0__1,X_I_ce1__1,X_I_d0__1,X_I_d1__1,X_I_q0__1,X_I_q1__1,X_I_we0__1,X_I_we1__1,
X_R_address0__1,X_R_address1__1,X_R_ce0__1,X_R_ce1__1,X_R_d0__1,X_R_d1__1,X_R_q0__1,X_R_q1__1,X_R_we0__1,X_R_we1__1,
ap_clk__1,ap_done__1,ap_idle__1,ap_ready__1,ap_rst__1,ap_start__1,X_R_ram , X_I_ram , OUT_R_ram , OUT_I_ram ,  dummy);

 	printf("\n\n");
	int j,i;
	for(j=0;j<SIZE;j++)
    {
		//fprintf(fp1,"%lld ",output[j][0]);
		for( i = 0; i < COL; i++)
		{
			int x=output_I[j][i];
			int y=output_R[j][i];
			if(output_org_I[j][i]!=x)
			{
				fail=1;
				printf("OUTPUT mismatch! output_I ERROR on input %d of %d: \n",j,i);
				break;
			}
			if(output_org_R[j][i]!=y)
			{
				fail=1;
				printf("OUTPUT mismatch! output_R ERROR on input %d of %d: \n",j,i);
				break;
			}
			//printf("%d  %d\n",output_R[j][i],output_I[j][i]);
			//fprintf(fp1,"%lld ",output[j][i]);
		}
		//printf("\n");
		//fprintf(fp1,"\n");
       
	}

	if(fail == 1)
		printf("FAILED\n");
	else
		printf("PASS\n");

	printf("\nClock cycle : %d\n",ap_clk);

	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("Time taken: %f seconds \n", time_taken);
//	fclose(fp);
	fclose(fp1);
	return fail;

}

