//  A4-TREVOR TOMESH.c
//  10-14-07
//  Trevor Tomesh

#include <stdio.h> 
//include file stdio.h
#include <math.h>
//include file math.h

int main() //start main
{
    int n, n2, t; //declare integers
    double p = 0, tot = 0, avg; //declare doubles
    
    FILE * inputfile; //point to input file


    inputfile = fopen("timevsatoms.txt","r"); //open and read quoted file
   
    if (inputfile == NULL)//Detect problem opening inputfile1   
	{
        printf("There was a problem opening the file 1.\n"); //print quoted text
        getchar(); //get character
        return 1;  //return an integer
    }//end if

 	
    fscanf(inputfile,"%i %i",&t, &n);  //scan first line of data

	 while (n > 0)//run untill n > 0 is false
	{ 
		fscanf(inputfile,"%i %i",&t, &n2);
		p = (((double)n - (double)n2)/(double)n)*100; //calculate percent
		tot += p; //tot is equal to the sum of p
		n = n2;
	}//end while
		
		avg = tot/t;

	printf("Avg. decay: %lf%% per sec.",avg); //print quoted text to screen
	fclose(inputfile);
		
	getchar(); //get character
	return 0; //return int
	}//end main