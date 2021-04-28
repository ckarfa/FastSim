#include "insertion_cell_sort.h"
#include <iostream>
#include <stdlib.h>
#define COL 16
#define SIZE1 30000
int input[SIZE1+10][COL+100],output[SIZE1+10][COL+100];
int output_org[SIZE1+10][COL+100];
const static int DEBUG=1;
const static int MAX_NUMBER=1000;
int main () {
	int fail = 0;
	clock_t t;
	t = clock();
	
	hls::stream<DTYPE> in, out;

	//generate random data to sort
	/*if(DEBUG) std::cout << "Random Input Data\n";
	srand(20); //change me if you want different numbers
	for(int i = 0; i < SIZE; i++) {
		input[i] = rand() % MAX_NUMBER + 1;
		if(DEBUG) std::cout << input[i] << "\t";
	}*/
	FILE *fp;
	fp=fopen("input_data.txt","r");
	
	
	int index = 0,index1=0;
	while(!feof(fp))
	{			
		char line [ 1000 ];			
		fscanf(fp,"%s",&line);				
		input[index1][index]=atoll(line);
		output_org[index1][index]=atoi(line);
		index = (index+1)%COL;
		if(index==0)
		{
			index1+=1;
		}
	}
	
	

	//process the data through the insertion_cell_sort function
	for(int j=0;j<SIZE1;j++)
	{
		for(int i = 0; i < SIZE*2; i++) {
			if(i < SIZE) {
				//feed in the SIZE elements to be sorted
				in.write(input[j][i]);
				insertion_cell_sort(in, out);
				output[j][i] = out.read();
			} else {
				//then send in dummy data to flush pipeline
				in.write(MAX_NUMBER);
				insertion_cell_sort(in, out);
				output[j][i-SIZE] = out.read();
			}
		}
	}

	//sort the data using the insertion_sort function
	for(int j=0j<SIZE1;j++)
	{
		insertion_sort(output_org[j]);

	//compare the results of insertion_sort to insertion_cell_sort; fail if they differ
	//if(DEBUG) std::cout << "\nSorted Output\n";
	/*for(int i = 0; i < SIZE; i++) {
		if(DEBUG) std::cout << cell_output[i] << "\t";
	}*/
		for(int i = 0; i < SIZE; i++) {
			if(output_org[j][i] != output[j][i]) {
				fail = 1;
				std::cout << "golden=" << output_org[j][i] << "hw=" << output[j][i] << "\n";
			}
		}
	}

	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("Time taken: %f seconds \n", time_taken);
	fclose(fp);
	
	if(fail == 0) std::cout << "PASS\n";
	else std::cout << "FAIL\n";
	return fail;
}
