// A4-TREVOR TOMESH(PART 1).c
//  10-11-07
//  Trevor Tomesh

#include <stdio.h> 
//includes program stdio.h
#include <math.h>
//includes program math.h
#include <stdlib.h>


int main()	//start main
{
int n = 1000,t,nthissec,i = 0;	//declare ints
double x,p = .05;	//declare doubles
 FILE * outputfile; //pointer to outputfile
 outputfile = fopen("timevsatoms.txt","w"); //write to file
 if (outputfile == NULL) //test if writing correctly
               {	//start if 
                       printf("Can't read outputfile!!\n"); //print quoted text
                       getchar(); //get character
                       return 1;  // return an integer                                                     
               }//end if
printf("Time: 0 Atoms: 1000\n");  //print quoted text (this is here so that it will actually print this line in the file.
fprintf(outputfile, "0 \t 1000 \n");	//print quoted text to outputfile
while(n > 0) //loop while number of atoms is more than zero
{	//start while
	nthissec = n;  //let nthissec = n

	for(i=0; i <nthissec; i++)	//from i = 0 until i is less than nthissec step up i one
	{	//start for
	

		x = (double)rand()/(double)RAND_MAX;	//generate a random number
		if(x <= p) //do if whin x is less than or equal to p
		{ //start if
			
			n = n-1; //subtract one atom
			

		}//end if

	} //end for
	 

	t++; //incriment time up one second
	printf("Time: %i Atoms: %i \n",t,n); //print quoted text to screen 
	fprintf(outputfile,"%i \t %i \n",t,n); //print quoted to outpufile
}  //end while
    fclose(outputfile); //close output file
    getchar(); //get character
    return 0;  //return integer   
}//end main

/*

[Session started at 2007-10-14 12:25:29 -0500.]
Time: 0 Atoms: 1000
Time: 1 Atoms: 955 
Time: 2 Atoms: 913 
Time: 3 Atoms: 861 
Time: 4 Atoms: 816 
Time: 5 Atoms: 788 
Time: 6 Atoms: 751 
Time: 7 Atoms: 717 
Time: 8 Atoms: 687 
Time: 9 Atoms: 650 
Time: 10 Atoms: 609 
Time: 11 Atoms: 578 
Time: 12 Atoms: 546 
Time: 13 Atoms: 517 
Time: 14 Atoms: 494 
Time: 15 Atoms: 470 
Time: 16 Atoms: 438 
Time: 17 Atoms: 424 
Time: 18 Atoms: 401 
Time: 19 Atoms: 378 
Time: 20 Atoms: 355 
Time: 21 Atoms: 333 
Time: 22 Atoms: 315 
Time: 23 Atoms: 304 
Time: 24 Atoms: 289 
Time: 25 Atoms: 270 
Time: 26 Atoms: 259 
Time: 27 Atoms: 249 
Time: 28 Atoms: 234 
Time: 29 Atoms: 225 
Time: 30 Atoms: 219 
Time: 31 Atoms: 212 
Time: 32 Atoms: 206 
Time: 33 Atoms: 202 
Time: 34 Atoms: 188 
Time: 35 Atoms: 176 
Time: 36 Atoms: 170 
Time: 37 Atoms: 161 
Time: 38 Atoms: 156 
Time: 39 Atoms: 149 
Time: 40 Atoms: 135 
Time: 41 Atoms: 129 
Time: 42 Atoms: 125 
Time: 43 Atoms: 118 
Time: 44 Atoms: 116 
Time: 45 Atoms: 110 
Time: 46 Atoms: 106 
Time: 47 Atoms: 97 
Time: 48 Atoms: 92 
Time: 49 Atoms: 88 
Time: 50 Atoms: 85 
Time: 51 Atoms: 81 
Time: 52 Atoms: 79 
Time: 53 Atoms: 79 
Time: 54 Atoms: 78 
Time: 55 Atoms: 73 
Time: 56 Atoms: 67 
Time: 57 Atoms: 64 
Time: 58 Atoms: 62 
Time: 59 Atoms: 59 
Time: 60 Atoms: 55 
Time: 61 Atoms: 52 
Time: 62 Atoms: 50 
Time: 63 Atoms: 49 
Time: 64 Atoms: 45 
Time: 65 Atoms: 43 
Time: 66 Atoms: 40 
Time: 67 Atoms: 37 
Time: 68 Atoms: 36 
Time: 69 Atoms: 33 
Time: 70 Atoms: 31 
Time: 71 Atoms: 29 
Time: 72 Atoms: 26 
Time: 73 Atoms: 24 
Time: 74 Atoms: 23 
Time: 75 Atoms: 22 
Time: 76 Atoms: 22 
Time: 77 Atoms: 22 
Time: 78 Atoms: 20 
Time: 79 Atoms: 17 
Time: 80 Atoms: 16 
Time: 81 Atoms: 14 
Time: 82 Atoms: 13 
Time: 83 Atoms: 11 
Time: 84 Atoms: 11 
Time: 85 Atoms: 10 
Time: 86 Atoms: 9 
Time: 87 Atoms: 9 
Time: 88 Atoms: 9 
Time: 89 Atoms: 8 
Time: 90 Atoms: 8 
Time: 91 Atoms: 8 
Time: 92 Atoms: 7 
Time: 93 Atoms: 6 
Time: 94 Atoms: 6 
Time: 95 Atoms: 6 
Time: 96 Atoms: 6 
Time: 97 Atoms: 6 
Time: 98 Atoms: 4 
Time: 99 Atoms: 4 
Time: 100 Atoms: 4 
Time: 101 Atoms: 3 
Time: 102 Atoms: 2 
Time: 103 Atoms: 2 
Time: 104 Atoms: 2 
Time: 105 Atoms: 2 
Time: 106 Atoms: 2 
Time: 107 Atoms: 1 
Time: 108 Atoms: 1 
Time: 109 Atoms: 1 
Time: 110 Atoms: 1 
Time: 111 Atoms: 1 
Time: 112 Atoms: 1 
Time: 113 Atoms: 1 
Time: 114 Atoms: 1 
Time: 115 Atoms: 1 
Time: 116 Atoms: 1 
Time: 117 Atoms: 1 
Time: 118 Atoms: 1 
Time: 119 Atoms: 1 
Time: 120 Atoms: 1 
Time: 121 Atoms: 1 
Time: 122 Atoms: 1 
Time: 123 Atoms: 1 
Time: 124 Atoms: 1 
Time: 125 Atoms: 1 
Time: 126 Atoms: 1 
Time: 127 Atoms: 1 
Time: 128 Atoms: 1 
Time: 129 Atoms: 1 
Time: 130 Atoms: 1 
Time: 131 Atoms: 1 
Time: 132 Atoms: 1 
Time: 133 Atoms: 1 
Time: 134 Atoms: 1 
Time: 135 Atoms: 1 
Time: 136 Atoms: 1 
Time: 137 Atoms: 1 
Time: 138 Atoms: 1 
Time: 139 Atoms: 1 
Time: 140 Atoms: 1 
Time: 141 Atoms: 1 
Time: 142 Atoms: 1 
Time: 143 Atoms: 1 
Time: 144 Atoms: 1 
Time: 145 Atoms: 1 
Time: 146 Atoms: 1 
Time: 147 Atoms: 1 
Time: 148 Atoms: 1 
Time: 149 Atoms: 1 
Time: 150 Atoms: 1 
Time: 151 Atoms: 1 
Time: 152 Atoms: 1 
Time: 153 Atoms: 1 
Time: 154 Atoms: 1 
Time: 155 Atoms: 0 
*/
