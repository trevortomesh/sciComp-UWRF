//Assignment 1
#include <stdio.h>  //gets file stdio.h 
#include <math.h>   // gets file math.h

int main()          //initiates main program and defines the output as an integer
{                   

    int d = 12;  //defines variable d as an integer that equals 12
    float t = 0.123;  //defines variable  as a float that equals 0.123
    
    printf("The distance traveled was equal to %i meters.\nThe time to travel that distance was: %f seconds.\nThe average velocity during that time was %f meters/sec.",d,t,d/t); 
    //prints to screen: The distance traveled was equal to: 12 meters. 
    //                  The time to travel that distance was:0.123000 seconds.
    //                  The average velocity during that time was:97.560974 meters/sec. 
    //%i (which is specific for integers) calls the integer "d" and %f, which is specific
    //floats calls the floats "t" and "d/t" in the order that they are entered after the quotations. The \n begins a new line.     

    getchar();   // waits for user to press a key       
    
    return 0; //main must return an integer to call program        
    
}   //end main program

