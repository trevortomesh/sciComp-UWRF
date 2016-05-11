//	A6-TREVOR TOMESH(PART 1).c
//	11/13/2007
//	Trevor Tomesh
#include <stdio.h>

int main()
{//start main  
	int i = 0; //define integers used
	int j = 0;
	int k = 0;
	double altitude[60000]; //define doubles used
	double time[60000];
	double maxaltitude[1000];
	double minaltitude[1000];
	double maxtime[1000];
	double mintime[1000];

//----------------------OPEN FILES AND CHECK IF NULL---------------------------------------
	FILE *inputfile = fopen("ballbounce.txt","r"); 
	if(inputfile == NULL)
{
	printf("The file did not open.\n");
	getchar();
	return 1;
}//end if
	
	    FILE * bouncepeaks = fopen("bouncepeaks.txt","w");
   	if( bouncepeaks == NULL)
{
		printf("The file failed to open.\n");
		getchar();
		return 1;
}//end if
	FILE * bouncetimes = fopen("bouncetimes.txt","w");
	if(bouncetimes == NULL)
{
		printf("The file failed to open.\n");
		getchar();
		return 1;

}//end if*/
//---------------------------------------------------------------------------
	
	
	while (fscanf(inputfile,"%lf\t%lf\n",&time[i],&altitude[i]) == 2) //while statement gets time and altitude from inputfile
{//start while
	i++;
	

}//end while
	
	
	for (i = 0; i<60000; i++) //for statement to find mintime and minaltitude
{ //start for
	
	if(altitude[i + 1] > altitude[i] && altitude[i - 1] > altitude[i]) //checks if values on either side are larger than i
	{//start if	

	mintime[k] = time[i]; //define mintime[k] values for time
	minaltitude[k] = altitude[i]; //define minaltitude[k] values for altitude
	
	fprintf(bouncetimes,"%lf\t%lf\n",mintime[i],minaltitude[k]); //<<PROBLEM WITH THIS STATEMENT... COULD NOT GET TO WORK! SHOULD WRITE TO FILE.
	k++;//incriment k
	
	}//end if
}//end for

	for (i = 0; i<60000; i++) //for statement to find maxtime and maxaltitude
{//start for
	
	if(altitude[i + 1] > altitude[i] && altitude[i - 1] > altitude[i]) //checks if values on either side are larger than i
	{ //start if		

	maxtime[j] = time[i]; //define maxtime[k] values for time
	maxaltitude[j] = altitude[i]; //define maxnaltitude[k] values for altitude
	fprintf(bouncepeaks,"%lf\t%lf\n",maxtime[i],maxaltitude[k]); //<<PROBLEM WITH THIS STATEMENT..... COULD NOT GET TO WORK! SHOULD WRITE TO FILE.
	j++;//incriment j
	}//end if
}//end for

    //close opened files
	fclose(inputfile);
	fclose(bouncetimes);
	fclose(bouncepeaks);

	getchar(); //get character
	return 0;  //return int
}//end main
