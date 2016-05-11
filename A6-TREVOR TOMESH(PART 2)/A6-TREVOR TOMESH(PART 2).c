//  11/13/2007
//  A6-TREVOR TOMESH(PART 2).c
//  Trevor Tomesh

//include the following files
#include <stdio.h> 
#include <math.h>

int main()
{//start main
   
    double data [60]; //declare "data" with 60 slots 
    int i = 0; //define integer i 
	
	FILE *inputfile = fopen("Asst6-2data.txt","r"); //open file & get the data
    
	if(inputfile == NULL) //test to see if file works
	{//start if
		printf("There was a problem opening the file.\n");
		getchar();
		return 1;
	}//end if
	
	double *dataset = data; //assign values of data to pointer dataset

	while (fscanf(inputfile,"%lf\n", (dataset + i) ) == 1) //incriment by one until there is no more data to be read
	{//begin while
		printf("%lf\t%i\n", *(dataset + i), (dataset + i) ); //print to screen the values and the address of the values
		i++; //incriment i by one
	}//end while
	
	fclose(inputfile); //close inputfile "barney"
    
    getchar(); //get character
    return 0;  //return an int
}//end main