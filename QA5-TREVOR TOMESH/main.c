// QA5-TREVOR TOMESH.c
//  created:  9/16/2007 (modified 10-17-07)
//  by: Lowell McCann (Modified by: Trevor Tomesh)
//  Directions:  fix all the errors in this program to make it compile and 
//               run correctly.
//
//  Modifications:
/*  HERE IS WHERE YOU SHOULD LIST THE CHANGES YOU MAKE.  ADD COMMENTS TO THE PROGRAM, ALSO. 
-Added #include <math.h>
-Changed "getchh()" to "getchar()" to run on mac.
-Ommited unused variables
-fixed scanf("%d",&N) to scanf("%lf",&N)
-change line area += width*(left-right)/2.0 to area += left*width+(right-left)*width/2
-In Gaussian.c:
-changed extern double pi to  double pi = 3.141592654
 -changed return (1/(sqrt(2*pi*stddev)))*exp( -((v - mean)/(2*stddev*stddev)) to   
 return (1/(sqrt(2*pi)*stddev))*exp( -pow((v - mean),2)/(2*stddev*stddev)); 
-changed double right = Gaussian(x, xave, xstand) to double right = Gaussian(x + width, xave, xstand)
*/ 

#include <stdio.h> 
//includ file stdio.h 
#include <math.h>
//include file math.h


int main()     
{ //begin program main()

   //This program should ask the user to enter in the average value and 
   //  standard deviation of a set of data.  It should then calculate the
   //  probability that a measurement will lie between the mean value minus
   //  N standard deviations and the
   //  mean plus N standard deviations--assuming that the measurements
   //  follow a Gaussian ("Normal") distribution. 
   
   double Gaussian(double v, double mean, double stddev); //define function

   double xave, xstand; //define doubles
   double x;
   double width;
   double area = 0.0;
   double N;
   
   printf("Please enter the values of the average and standard deviation:"); //print quoted text
   scanf("%lf %lf",&xave, &xstand); //prompt user for avg and s.d. 
   
   printf("I will calculate the probability between xave - N*standard deviation\n"); //print quoted text
   printf("  and xave + N*standard deviation.  Please enter N: "); //print quoted text
   scanf("%lf",&N); //prompt user for N
   
   width = 2*N*xstand/100; //calculate width

   for (x = xave- N*xstand; x< xave+N*xstand-width/2; x+=width) //do when x = xave- N*xstand; x< xave+N*xstand-width/2; x+=width
   { //begin for
       double left = Gaussian(x, xave, xstand); //define right using Gaussian function
       double right = Gaussian(x + width, xave, xstand);  //define rigth using Gausian function
       area += left*width+(right-left)*width/2;  //calculate
       
   }//end for loop
   
   printf("\nThe probability of being between -%lf sigma and +%lf sigma is: \n   %lf\n",N,N,area); //print quoted text
   
   getchar();  //get character from user  
   getchar();        
   return 0;   //return an integer        
} 

/*
[Session started at 2007-10-18 12:59:14 -0500.]
Please enter the values of the average and standard deviation:34.56 13.23
I will calculate the probability between xave - N*standard deviation
  and xave + N*standard deviation.  Please enter N: 1

The probability of being between -1.000000 sigma and +1.000000 sigma is: 
   0.682689

QA5-TREVOR TOMESH has exited with status 0.

   
[Session started at 2007-10-18 13:00:33 -0500.]
Please enter the values of the average and standard deviation:87.3 3.1
I will calculate the probability between xave - N*standard deviation
  and xave + N*standard deviation.  Please enter N: 2

The probability of being between -2.000000 sigma and +2.000000 sigma is: 
   0.954499

QA5-TREVOR TOMESH has exited with status 0.
*/