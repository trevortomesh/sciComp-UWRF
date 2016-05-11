//  QA6-TREVOR TOMESH.c
//  created:  9/30/2007 Modified: 11/05/2007
//  by: Lowell McCann Modified by: Trevor Tomesh
//  Directions:  fix all the errors in this program to make it compile and 
//               run correctly.
//
//  Modifications:
/*
-Changed <bounceheader.h> to "bounceheader.h"
-Changed while (Etot < 0.1) to while (Etot > 0.1)
-Changed double bounce(double &En, double Elost, double &v, double &y, double mass) to
double bounce(double *En, double Elost, double *v, double *y, double mass)
-Changed En = En * (1 - Elost); to *En = *En * (1 - Elost);
-Changed v = sqrt(2*(En)/mass); to *v = sqrt(2*(*En)/mass);
-Changed y = 0; to *y = 0;
-Changed double bounce(* double, double, * double , * double, double); to 
double bounce( Etot, Elostperbounce, velocity, position,m); 
*/
#include <stdio.h> 
//include stdio.h 
#include "bounceheader.h"
//include bouceheader.h

int main()      
{  //start main

   //This program should use Euler's Method to calculate the position of  a
   //     bouncing ball that loses energy upon each bounce.  The position of the 
   //     ball is stored in an array that is then saved to a file at the end.
   
   double position[60000];  //the array to store the position (height) of the ball
                             
   double velocity;	//define the double "velocity"
   
   
   double t = 0;	// define and set double "t" equal to zero
   double dt = 0.001;   //define and and set double dt equal to .001
							//NOTE:  this is too large to produce accurate results,
                          // but DO NOT change it!
   
   double g = 9.8; //define and set double g equal to 9.8
   double m = 3.0; //define and set double m to 3.0
   double Etot = 100;    //Total energy (potential plus kinetic)
   
   double Elostperbounce = 0.05;  //  5% lost each bounce
   
   int i = 0;  //define incriment variable i
   
   position[i] = Etot/(m*g); //calculate position[i]
   velocity = 0; //set velocity equal to 0

   while (Etot > 0.1)  
   {//start while
         
          //printf("%i\t%lf\n",i,position[i]);  //a print statement for testing
         
         i++;  //incriment i up one

         velocity += -g*dt;  //calculate velocity
         position[i] = position[i-1] + velocity*dt; //calculate position[i]
         
         Etot = 0.5*m*velocity*velocity  + m*g*position[i]; //calculate Etot
         
         if (position[i] <= 0.0)
         {//start if
             bounce( &Etot, Elostperbounce, &velocity, &position[i],m);     
                                      
         }//end if       
         
   }//end while
 
   
   FILE *outputfile = fopen("ballbounce.txt","w");	//open outputfile
   int j = 0;  //define integer j
   for (j = 0; j<i; j++)
   {//start for statement
       fprintf(outputfile,"%lf\t%lf\n",t,position[j]); //print quoted text to file
       t+=dt;	//sum dt
       
   }//end for
   
   fclose(outputfile);  //close outputfile
   
   printf("Press a key to exit....");  //print quoted text to screen
   
   getchar();  //get a key
   return 0;	//return an integer
   
}//end main

/*

[Session started at 2007-11-06 11:55:31 -0600.]
Press a key to exit....

QA6-TREVOR TOMESH has exited with status 0.

*/

