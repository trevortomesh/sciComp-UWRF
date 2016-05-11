//  QA3-TREVOR TOMESH.c
//  created:  8/24/2007 (Modified 9/20/2007)
//  by: Lowell McCann (Modified by: Trevor Tomesh)
//  Directions:  fix all the errors in this program to make it compile and 
//               run correctly. 

//  Modifications:
/*  -Added nescessary comments
    -Added #include <stdio.h> 
    -Added #include <math.h>
    -Added "() after "main"
    -Changed acos(1) to acos(-1)
    -Added "f" after scan in first scanf()
    -Added "&" before side, hypotenuse, and units in first scanf()
    -Defined side, hypotenuse and units as floats.
    -Changed first two %i's to %lf's in first scanf() and changed the third to %c 
    -Corrected beginning and ending parentesies in "if" statement 
    -Corrected ^'s to (base,exponent) form
    -Changed x symbol to * symbol in fourth to last line
    -Changed "O" to "0" in return 0 
    -Changed "sqroot" to "sqrt"
    -defined units as a character
    -added units after "side" in 3rd printf() statement
    -changed < to >
    -added "else" statement with respective curly brackets 
    -Changed \r to \n in 3rd printf()
    -Changed getch() to getchar() in order for program to work on my mac.
	-Added pow()'s to otherside = sqrt( line.
	-Changed angle to equal asing(side/hypotenuse)*(180/PI)
*/  

#include <stdio.h> 
//gets file <stdio.h>
#include <math.h>  
//gets file <math.h>
int main()  //initiates main program and defines the output as an integer
{
    // This program will allow the user to enter the length of one
    // side and the hypotenuse of a right triangle, it will then 
    // test to make sure that the length of the side is less than the
    // length of the hypotenuse, then it will calculate a few other proerties of
    // the triangle.
    
    double angle = 0, pi = acos(-1); 
    double otherside = 0.;
    double side,hypotenuse;
    char units;
    
    printf("Please enter the length of the side of the triangle followed by\n");
    printf(" the length of the hypotenuse, and then the units used (m or f): \n"); 
    scanf("%lf %lf %c",&side,&hypotenuse,&units);
    printf("The side is %lf %c long and the hypotenuse is %lf %c long.\n", side, units, hypotenuse, units);
    
    //Check that the side is smaller than the hypotenuse 
    if(side >= hypotenuse)
    {
       printf("The side must be less than the hypotenuse!  Try again.\n");
       getchar();
       return 1;
     }// end the if section
    
    else 
    {
    //Calculate the angle in degrees for the corner opposite of the side entered.
    
    angle = asin(side/hypotenuse)*(180/pi);
    printf("the angle is: %f degrees.\n",angle);
    
    //calculate the length of the other side using Pythagorean Thm.
    otherside = sqrt(pow(hypotenuse,2) - pow(side,2));
    printf("the other side's length (by Pyth.) is: %g %c \n",otherside,units);
    
    //calculate the length of the other side using trig.
    otherside = hypotenuse*cos(angle) ;  
    printf("the other side's length (by trig.) is: %g %c \n",otherside,units);
    }
    getchar(); 

    return 0;
}  //end main

/*QA3-TREVOR TOMESH has exited with status 0.
[Session started at 2007-09-20 11:56:44 -0500.]
Please enter the length of the side of the triangle followed by
 the length of the hypotenuse, and then the units used (m or f): 
3
5
m
The side is 3.000000 m long and the hypotenuse is 5.000000 m long.
the angle is: 36.869898 degrees.
the other side's length (by Pyth.) is: 4 m 
the other side's length (by trig.) is: 3.37728 m 

QA3-TREVOR TOMESH has exited with status 0.
[Session started at 2007-09-20 11:57:20 -0500.]
Please enter the length of the side of the triangle followed by
 the length of the hypotenuse, and then the units used (m or f): 
5
3
f
The side is 5.000000 f long and the hypotenuse is 3.000000 f long.
The side must be less than the hypotenuse!  Try again.

QA3-TREVOR TOMESH has exited with status 1.
*/


  

