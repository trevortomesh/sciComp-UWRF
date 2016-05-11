//A3-TREVOR TOMESH(PART 1).c
//Trevor Tomesh
//10-08-07

#include <math.h>
#include <stdio.h>
int main() //start main
{
    int a=0, b=0, c=0, n;    //declare int.
    
    //declare doubles
    double d0;
    double d1;
    double d2;
    double x=0;
   
    
        for (a = 0; a < n; a ++) //begin for statement 
        {
            d1 = cos(x) - x*x; //define d1
            x += .01; //add .01 to x
            printf("d1= %lf \ a = %i\n", d1, a); //print quoted text
            
         while (fabs(d2) >= 1E-8); //start while loop
         {
            if (d1 < 0) //begin if statement
            {
                printf("Difference is = %lf\nx = %.2lf\n", d1, x); //print quoted text
                printf("a-1 = %i\n", b=x-.01); //print quoted text
                
                d0 = cos(b)-(b)*(b); //define d0
                
                printf("Difference = %lf\n", d0); //print quoted text
                
                double y = d0; // define double "y"
                do
                {
                          
                          d2 = cos(y) - y*y; //define d2
                          
                          y += .001;        //add .001 to y
                          
                          printf("d2=%lf\n", d2); //print quoted text
                          
                          if (fabs(d2) < 1E-8) //start if loop
                          {
                             printf("Difference = %lf\nx = %.3lf\n", d2, y); //print quoted text
                             
                          }//end if statement

                          
                }
                
                          
                       
            }//end if statement
        }//end loop
                
            
                    
    
    getch();
    return 0;
    
}//end main

//I couldn't get the program to stop looping and ran out of time!!


