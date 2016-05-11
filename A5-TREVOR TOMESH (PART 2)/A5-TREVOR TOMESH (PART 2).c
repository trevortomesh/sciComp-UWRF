//   A5-TREVOR TOMESH(PART 2).c
//   10/25/2007
//   Trevor Tomesh

#include <stdio.h> 
#include <math.h>
#include <string.h>

int main()
{//start main
 double function(char *fileame, double *a, double *b, double *c, int *d); //declare the function and what pointers to use
  
	double paverage = 0; //declare varialbes
    double pmin = 0;
    double pmax = 0;
    double pstddev = 0;
	int pnumlines = 0;
	char filename [300]; 
	
	strcpy(filename,"Asst5-2data.txt");
	
	pstddev = function(filename, &paverage,&pmax,&pmin,&pnumlines); //calculate pstddev with function (function returns pstddev)

	printf("The number of lines of data = %i\n",pnumlines);  //print the quoted text
    printf("The average value = %lf\n",paverage);
    printf("The maximum value = %lf\n",pmax);
    printf("The minimum value = %lf\n",pmin);
	printf ("The standard deviation = %lf\n",pstddev);


	
    getchar(); //wait for user to press a key
    return 0; //return an int

}//end main


/*
[Session started at 2007-10-25 13:13:21 -0500.]
The number of lines of data = 40
The average value = 0.493284
The maximum value = 1.635528
The minimum value = -0.742637
The standard deviation = 0.719250
*/


