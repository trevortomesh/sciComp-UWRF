//A4-TREVOR TOMESH(PART 3).c
//Trevor Tomesh
//10-8-2007

#include <stdio.h>
#include <math.h>

int main ()
{      //define doubles
       double dy, dx, dt, viy, vix; //define doubles used  
       double yi = 0, xi = 0,v = 10,pi = acos(-1), ay = -9.8; //define doubles and what they equal
       
       //solve for...
       viy = sin(pi/6)*v; //initial velocity in y direction
       vix = cos(pi/6)*v; //initial velocity in x direction
       dt = -viy/ay;      //change in time          
       dy = yi + viy*-viy/ay + 0.5*ay*pow(dt,2); //change in y position
       dx = xi + vix*dt + 0.5*0*pow(dt,2);   //change in x position
       
     //test to see if calculations are correct     
       printf("change in y position is %lf and t is %lf \n",dy,dt); 
       printf("change in position in x direction is %lf \n",dx);
       
       //assign new doubles
       double t = 0; //assign double t 
       double h = 0; //assign double h

      //zero out dx and dy
       dy = 0; 
       dx = 0;

       //open and write to file
       FILE * outputfile; //pointer to outputfile
       outputfile = fopen("A3timevsposition.txt","w"); //open and write to quoted destination
               if (outputfile == NULL) //test if writing correctly
               {                                                                       
                       printf("Can't read outputfile!!\n");
                       getchar();
                       return 1;                                                       
               }//end if
       
       while (dy >= 0)  //loop until maximum height is reached at .510000 s
               {
                       t = h + .01; //incriment h by .01 
                       h = t;      
                       
                       dx = vix*t; //find change in x
                       dy = yi + viy*t + 0.5*ay*pow(t,2); //find change in y
                      
                       fprintf(outputfile,"%lf \t %lf \t %lf\n",dx,dy,t);


               }//end while


       fclose(outputfile);

       getchar();
   return 0;
}



            
