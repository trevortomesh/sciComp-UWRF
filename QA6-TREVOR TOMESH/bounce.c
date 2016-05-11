//-----------------------------------------------------------------------
//   bounce code
#include <math.h>
double bounce(double *En, double Elost, double *v, double *y, double mass)
{
       *En = *En * (1 - Elost);  //total energy is reduced by Elost (a percentage)
       *v = sqrt(2*(*En)/mass);  //needs to be positive after a bounce
      *y = 0;       
       
       return 0.0;
       
}//end bounce