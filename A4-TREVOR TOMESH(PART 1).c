// A4-TREVOR TOMESH(PART 1).c
//  10-11-07
//  Trevor Tomesh

#include <stdio.h> 
//includes program stdio.h
#include <math.h>
//includes program math.h
#include <stdlib.h>


int main()
{
    int n = 1000;
	double p = .05;
	int t = 0;
	int loop = 0;
    double x;
	int y;

	while(n > 0)
    {
	x = (double)rand()/RAND_MAX;  
	if(x <= p)
	{
	do
	{ n = n-1;
	loop++ == loop;
	y = n;
	}
	while(loop < y);
	
	}
	
	t++ == t;
	printf("Time: %i Atoms Left: %i", t, 1000-n);
	}
	printf("Time: %i",t); 
	    }//end while
       
    getch();
    return 0;    
}//end main
