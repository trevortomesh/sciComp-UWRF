/*  A1(part 2)-TREVOR TOMESH.c
    created on 9/13/2007
    by Trevor Tomesh
*/
#include <stdio.h>  //gets file stdio.h 
#include <math.h>   // gets file math.h

int main()          //initiates main program and defines the output as an integer
{                   
   float v,i;
   
    printf("Enter the voltage (in Volts) followed by the current (in Amps) from the device: ");
    
    scanf("%f %f",&v,&i); //stores enterd values for variables v and i as floats
    
    printf("The resistance of the device is:%.3f ohms.",v/i);
    //prints to screen: The resistance of the device is: ####.### ohms.
    //%.3f displays the result of v/i with 3 decimal places.
    
    getch();   // waits for user to press a key       
    
    return 0; //main must return an integer to call program        
    
}   //end main program

