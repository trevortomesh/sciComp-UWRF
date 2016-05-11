//  A2-TREVOR TOMESH(PART 2).c
//  9/23/2007
//  Trevor Tomesh

#include <stdio.h> 
//Gets file sdio.h
#include <math.h> 
//Gets file math.g
int main() //start program
{
float a,b,c; //defines a,b, and c as flats.
printf("Enter Three Numbers, and I will determine the max and min values!\n"); //displays the qoted text.
scanf("%f %f %f",&a,&b,&c); //promts the user to imput values for variables a,b, and c
if( (a <= b) && (a <= c) )	//conditionals for a
{printf("%f is a min!\n",a);//prints quoted text if conditionals are true
}
if( (b <= a) && (b <= c) )	//conditionals for b 
{printf("%f is a min!\n",b); //prints quoted text if conditionals are true
}//end if statement
if( (c <= a) && (c <= b) ) //conditionals for c 
{printf("%f is a min!\n",c); //prints quoted text if conditionals are true
}//end if statement
if( (a >= b) && (a >= c) )	//conditionals for a
{printf("%f is a max!\n",a); //prints quoted text if conditionals are true
}//end if statement
if( (b >= a) && (b >= c) )	//conditionals for b
{printf("%f is a max!\n",b); //prints quoted text if conditionals are true
}//end if statement
if( (c >= a) && (c >= b) ) //conditionals for c
{printf("%f is a max!\n",c); //prints quoted text if conditionals are true
}//end if statement
       
     
    getchar(); //gets a character (is gectchar insted of getch to comile on a mac)
    return 0;  //returns an integer to terminate the program
    
}//end 

/*

[Session started at 2007-09-23 01:14:14 -0500.]
Enter Three Numbers, and I will determine the max and min values!
5
-2
3
-2.000000 is a min!
5.000000 is a max!

A2-TREVOR TOMESH (PART 2) has exited with status 0.

*/