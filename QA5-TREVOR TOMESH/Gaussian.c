//-------------------------------------------------------------
//  function definition for Gaussian distribution
//  Gaussian.c
//   9/16/2007

#include <math.h>


double Gaussian(double v, double mean, double stddev)
{     
  double pi = 3.141592654;     
  return (1/(sqrt(2*pi)*stddev))*exp( -pow((v - mean),2)/(2*stddev*stddev));   
       
}// end Gaussian