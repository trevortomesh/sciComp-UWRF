// QuickAssignment4.c
//  created:  8/24/2007 (Modified Oct. 3 2007)
//  by: Lowell McCann (Modified by Trevor M. Tomesh
//  Directions:  fix all the errors in this program to make it compile and 
//               run correctly.
//
/*  Modifications:
	-Added #include <math.h> and #include <string.h>
	-Changed all getch() to getchar() so will compile on mac
	-Capitolized file and added pointers
	-Deleted extra semi-colon in first int statement
	-Deleted extra "%" symbol in first scanf()
	-Replaced inputfile in fscanf with stdin
	-Changed "inputfile = 0" to "outputfile == NULL" and "inputfile = 0" to "oututfile == NULL"
	-Changed inputfile = fopen("voltagefluctuation.txt","w") to inputfile = fopen("voltagefluctuation.txt","r")
	-Added   fclose(outputfile); and fclose(inputfile);
	-Changed && to ||
	
	
*/
   

#include <stdio.h>  
#include <math.h>
#include <string.h>

int main()      
{  
   //This program should read in the file "voltagefluctuation.txt" , find
   //     all the data that fall below 3 V and above 5 V, and print them out
   //     on the screen and to a new file: "baddata.txt"
   
   FILE *inputfile, *outputfile;
   int i, numlines, numoutside = 0;
   double time, voltage;
   
   inputfile = fopen("//Users/trevortomesh//QA4-TREVOR TOMESH//voltagefluctuation.txt","r");
   if (inputfile == NULL)
   {
      printf("There was a problem opening the input file.\n");
      getch();
      return 1;
   }//end if input

   outputfile = fopen("baddata.txt","w");
   if (outputfile == NULL)
   {
      printf("There was a problem opening the output file.\n");
      getchar();
      return 1;
   }//end if
   
   fscanf(stdin,"%i",&numlines);
   
   for (i = 0;i>numlines;i++)
   {
       fscanf(inputfile,"%i %i",&time,&voltage);
       
       if ( (voltage >5.0) || (voltage < 3.0) )
       {
            printf("The point at time %lf seconds (%lf V) is outside the allowed range.\n",time, voltage);
            fprintf(inputfile,"%lf \t %lf",time, voltage);
            numoutside++;
       }//end if outside       
       
   }//end for
   
   printf("There were %i points outside the allowed range.\n",numoutside);
    fclose(outputfile);
    fclose(inputfile);

    getchar();            
    return 0;         
}  
