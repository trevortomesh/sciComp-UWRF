// A2 - TREVOR TOMESH.c
// 9 / 23 / 2007
// Trevor Tomesh

#include <stdio.h>
// Gets file sdio.h
#include <math.h>
// Gets file math.g
	int             main() // start program
{
	float           length, uncertainty; //defines floats length and uncertainty
	char            units;	//defines units as a character
	printf(" Enter the length of the pendulum, the uncertainty, and whether the units are centimeters or inches (c or i): \n"); //prints quoted text
	scanf("%f %f %c", &length, &uncertainty, &units);	//gets two floats and a character and stores them 
	if ((length < 0) || (uncertainty < 0)) {  //conditional making sure that entered numbers are positive
		printf("Only positive numbers, please!\n"); //prints quoted text
		
	}
	if ((uncertainty > length)) //condtional making sure that uncertainty is less than length
		printf("Your uncertainty is larger than your length!\n"); //prints quoted text
		

	else //else statement runs if above conditionals are false
	 {
		if (units == 'c') { //conditional runs following if inside is true
			float           period1 = (2 * 3.14159 * sqrt(length / 9.8)) / 100; //float equals calculated value for period
			float           u1 = ((3.14159 / sqrt(9.8 * length)) * uncertainty) / 100; //float equals calculated value for uncertainty
			printf("The period of the pendulum is %f +- %f seconds.", period1, u1);	//prints the quoted text

		}
		 if (units == 'i') {
			float           period2 = (2 * 3.14159 * sqrt(length / 32)) / 12;  //float equals calculated value for uncertainty
			float           u2 = ((3.14159 / sqrt(32 * length)) * uncertainty) / 12; //float equals calculated value for uncertainty
			printf("The period of the pendulum is %f +- %f seconds.", period2, u2); //prints the quoted text

		}
	}
	getchar();
	//gets a character(is gectchar insted of getch to compile on a mac)
		return 0;
	//returns an integer to terminate the program

} //end

/*
[Session started at 2007-09-24 02:42:30 -0500.]
 Enter the length of the pendulum, the uncertainty, and whether the units are centimeters or inches (c or i): 
25
.5
c
The period of the pendulum is 0.100354 +- 0.001004 seconds.
A2-TREVOR TOMESH has exited with status 0.

[Session started at 2007-09-24 02:43:07 -0500.]
 Enter the length of the pendulum, the uncertainty, and whether the units are centimeters or inches (c or i): 
-12
.5
i
Only positive numbers, please!
Your uncertainty is larger than your length!

A2-TREVOR TOMESH has exited with status 0.



*/
