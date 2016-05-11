//A3-TREVOR TOMESH (PART 2).c
//Trevor M. Tomesh
//10-7-2007

#include <stdio.h> 
//gets <stdio.h>
#include <math.h>
//gets <math.h>
int main () //start main
{
       double x = -10,  i = .01, E, f; //assign variables 
       while (x < 20) //loop while x is less than 20
               {
               x = x + i;  //incriment up .01
               f = pow(pow(25 - pow(x,2),2) +1,-1);  //calculate f
			   E = E + (f*i); //add sum to f times incriment
               }//end while
			   printf("The integral of the function is %.6lf",E); //print quoted text
       getchar();
   return 0;
} //end main
