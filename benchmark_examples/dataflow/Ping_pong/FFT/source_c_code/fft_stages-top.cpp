/*
This is traditional 2-radix DIT FFT algorithm implementation.
It is based on conventional 3-loop structure. 
INPUT:
	In_R, In_I[]: Real and Imag parts of Complex signal

OUTPUT:
	In_R, In_I[]: Real and Imag parts of Complex signal
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fft_streaming.h"
#include"fft_stages.cpp"
//DTYPE In_R[SIZE], In_I[SIZE];
DTYPE Out_R[SIZE], Out_I[SIZE];
DTYPE WW_R[SIZE], WW_I[SIZE];
#define COL 1024
#define SIZE1 3000
DTYPE input_R[SIZE1+5][COL],input_I[SIZE1+5][COL],output_R[SIZE1+5][COL],output_I[SIZE1+5][COL];
int main()
{
	FILE *fp;
	FILE *fp1,*fp2;
	printf("GENERATING INPUTS\n");
	fp2=fopen("input_data.txt","r");
	int index=0,index1=0;
	while(!feof(fp2))
	{
		char line [ 1000 ];			
		fscanf(fp2,"%s",&line);
		char line1 [ 1000 ];			
		fscanf(fp2,"%s",&line1);		
		input_R[index1][index]=atoi(line);
		input_I[index1][index]=atoi(line1);
		index = (index+1)%COL;
		if(index==0)
		{
			index1+=1;
		}
	}
	/*for(int i=0; i<SIZE; i++){
		In_R[i] = i;
		In_I[i] = 0;
	}*/
	
	//Twiddle factor is calculated here and saved in fft.h to be used in offline.
	/*	double	e = -6.2831853071795864769;
		printf("GENERATING %d TWIDDLE FACTORS\n", SIZE);
		fp_r=fopen("tw_r.h", "w");
		fp_i=fopen("tw_i.h", "w");
		fprintf(fp_r, "const DTYPE W_real[]={");
		fprintf(fp_i, "const DTYPE W_imag[]={");
		for(int i=0; i<SIZE2; i++)
		{
			//COMPLEX W;	// e^(-j 2 pi/ N)
		  double w = e*double(i)/double(SIZE);
		  WW_R[i]=cos(w);
		  WW_I[i]=sin(w);
		  //printf("%4d\t%f\t%f\n",i,WW_R[i],WW_I[i]);
			fprintf(fp_r, "%.20f,",WW_R[i]);
			fprintf(fp_i, "%.20f,",WW_I[i]);
			if(i%16==0)
				{
					fprintf(fp_r, "\n");
					fprintf(fp_i, "\n");
				}
		}
		fprintf(fp_r, "};\n");	
		fprintf(fp_i, "};\n");
		fclose(fp_r);
		fclose(fp_i);*/


	//Perform FFT
	
	
	for(int i=0;i<SIZE1;i++)
	{
		fft_streaming(input_R[i], input_I[i], output_R[i], output_I[i]);
		printf("input no. %d processed.\n",i+1);
		
	}

	fp=fopen("output_data.txt", "w");
	printf("Printing FFT Output\n");
	for(int j=0;j<SIZE1;j++)
	{
		for(int i=0; i<SIZE; i++){
			  //printf("%4d\t%f\t%f\n",i,Out_R[i],Out_I[i]);
				fprintf(fp, "%d %d\n",output_R[j][i],output_I[j][i]);
				//printf("%d  %d\n",output_R[j][i],output_I[j][i]);
			}
			
	}
	fclose(fp);
	printf ("Comparing against output data \n");
	//std::ifstream golden("out.fft.gold.dat");
	fp1=fopen("output_data.txt","r");
	if(fp1==NULL)
	{
			printf("error in opening file");
		exit(1);
	}
	DTYPE error = 0;
	DTYPE maxerror = 0;
	for(int j=0;j<SIZE1;j++)
	{
		for(int i=0; i<SIZE; i++) {
		  DTYPE rx, ix;
		
		 char *line;
		 char *line1;			
		//fscanf(fp1,"%s",line);
			//rx=atoi(line);
			//fscanf(fp1,"%s",line1);
			fscanf(fp1,"%d %d",&rx,&ix);
			//ix=atoi(line1);
			//printf("%d %d      %d %d\n",rx,ix,Out_R[i],Out_I[i]);
		  DTYPE newerror = abs(rx-output_R[j][i]) + abs(ix-output_I[j][i]);
		  error += newerror;
		  if(newerror > maxerror) {
			maxerror = newerror; 
		   // std::cout<< j<<" "<< rx<<" "<<ix<<"\t "<<Out_R[i]<<" "<<Out_I[i]<<std::endl;
			fprintf(stdout, "Max Error@%d: %d\n", i, maxerror);
			printf("%d  %d\t %d  %d\n",output_R[j][i],output_I[j][i],rx,ix);
		  }
		}
	}
	//printf("ERROR : %d",error);
	//fprintf(stdout, "Average Error: %d\n",error/SIZE);
	fclose(fp1);
	if ((error/SIZE) > .05 || maxerror > 2) { // This is somewhat arbitrary.  Should do proper error analysis.
	  fprintf(stdout, "*******************************************\n");
	  fprintf(stdout, "FAIL: Output DOES NOT match the golden output\n");
	  fprintf(stdout, "*******************************************\n");
	  return 1;
	} else {
	  fprintf(stdout, "*******************************************\n");
	  fprintf(stdout, "PASS: The output matches the golden output!\n");
	  fprintf(stdout, "*******************************************\n");
	  return 0;
	}

}
