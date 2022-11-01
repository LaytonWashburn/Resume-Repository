#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100
/*******************************************************************************
*Function Title: Main
*
*Summary: Finds the smallest and largest in a series of 
*		  	words inputed by the user
*
*Input:compand line parameter
*Output: integer argc
*
*Compile Instructions: gcc compiler
********************************************************************************
*Pseudocode
*	 Command line prompt input
*	Begin
*		Declare Variables
*		Declare Variables
*		set len equal to argv[1]
*		Initialize 3 character arrays
*		Begin For loop
*			print Enter a word to screen
*			Get word from keyboard
*			If current is less than small
*				Copy current into small
*			If current is greater than large
*				Copy current into large
*		End For loop
*			Prints new line character to screen
*			Print Smallest Word: Value to screen
*			Print Largest Word: Value to screen
*	End
*******************************************************************************/

int main (int argc, char* argv[])//Command line prompt input
{													//Begin
	int i,sum;										//Declare variables
	int len;										//Declare variables
	
	
	
	len = atoi(argv[1]);						//set len equal to argv[1]

	
	char large[N], small[N], current[N]; //Initialize 3 character arrays
	
	
	
	for (int i = 0; i < len; i++)// Begin For loop
	{
		printf("Enter a word: "); //print Enter a word to screen
		scanf("%s", current); // Get word from keyboard
		
	
		
		if ((strcmp(current,small) < 0) || (i == 0))/*If current is 
														less than small*/
		{
			strcpy(small, current);//Copy current into small
		}
		if((strcmp(current, large) > 0) || (i == 0))/*If current 
														is greater than large*/
		{
			strcpy(large, current);//Copy current into large
		}
		
		 
	}						//End For loop
		printf("\n");//Prints new line character to screen
		printf("Smallest word: %s\n", small);
					//Print Smallest Word: Value to screen
		printf("Largest word: %s\n", large);
					//Print Largest Word: Value to screen
	
	
	
	return 0;					//End
}