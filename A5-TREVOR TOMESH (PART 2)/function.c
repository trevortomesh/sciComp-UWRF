//   function.c (based on Lowell McCann's day12program.c)
//   10/25/2007
//	 Trevor Tomesh

#include <stdio.h>
#include <math.h>
#include <string.h>

double function(char *filename, double *a, double *b, double *c, int *d) //define function and pointers
{ //start function
    
    FILE *inputfile; // file pointer points to inputfile
    inputfile = fopen(filename,"r"); //open inputfile and read
    
    
    if(inputfile == NULL) //if error opening inputfile
    { //start if
         fprintf(stdout,"There was a problem opening : "); //print quoted text
         fprintf(stdout,"%s",filename); //print quoted text
         getchar(); //get character
         return 1;  //return integer
         
    }//end if
    
    double n = 0; //declare variables
    int pnumlines = 0;
    double sum = 0;
    double pmax = -1E99;
    double pmin = 1E99;
 
    while ( fscanf(inputfile,"%lf",&n)==1) //while there are still lines to read... 
    {
          pnumlines++;  //counts the number of lines in the file
          
          sum += n;  // sum = sum + sum          
          //find the max and the min
		  if (n > pmax)
          {
              pmax = n;
          }
          if (n < pmin)
          {
              pmin = n;
          }
                    
    } //end while
    

    double paverage = sum/(double)pnumlines;  //cast the int as a double
    
	
    //find the std. deviation
    
    rewind(inputfile);//This puts us back to the beginning of the file
    
    int j; //declare int j
    
    sum = 0; // reuse sum, so set it back to zero

    for (j = 0; j < pnumlines; j++) //for j = 0 to j < pnumlines, incriment up by one
    {
        fscanf(inputfile,"%lf",&n); //scan in values of n
        
        sum += (n - paverage)*(n - paverage); //find average
    }//end for
    
    double pstddev = sqrt(sum/pnumlines);

	*d = pnumlines; //declare pointers
	*a = paverage;
	*b = pmax;
	*c = pmin;
	
    
    fclose(inputfile); //close inputfile
    
    return pstddev; //return int
}//end function