/*******************************************************************************
*Functin Title: Main
*
*Summary: Determines if the word/phrase is a palindrome
*
*Input:None
*Output:None
*
*Compile Instructions: gcc compiler
********************************************************************************
*Pseudocode
*	Begin
*		Declare variable
*		Declare array
*		Prints Enter a word/phrase to screen
*		Initialize variable
*		Initialize variable
*		Begin for loop
*			Takes value from keyboard
*			if m is a lowercase or upper case letter
*				place value  into array
*				if m is an uppercase letter
*					Convert upper case to lowercase
*					place lower case into array
*				add one to count variable
*			Initialize pointers
*			Declare variables
*			Begin for loop
*				If pointers equal eachother
*					Add one to front pointer
*					Subtract on from back pointer
*				else
*					break from for loop
*				If pointer are equal or passed eachother
*					Print The word/phrase is a palindrome to screen
*					break
*				if front pointer is less than back pointer
*					print The is word/phrase is not a palindrome		
*	End
*******************************************************************************/
#include<stdio.h>

#define N 200

int main (void)
{									//Begin
	int count;						//Declare variable
	char arr[N];					//Declare array
	
	printf("Enter a word/phrase: ");	//Prints Enter a word/phrase to screen
	
	char m = 0;						//Initialize variable
	count = 0;						//Initialize variable
	
		for (count = 0; m != '\n'; )	//Begin for loop
		{
			scanf("%c", &m);			//Takes value from keyboard
			
			// if m is a lowercase or upper case letter
			if ( (m >= 65 && m <= 90 )|| (m >= 97 && m <= 122 ))
			{
				*(arr + count) = m;	//place value  into array
				
				if (m <= 90 && m >= 65)	// if m is an uppercase letter
				{
					m = m + 32;		//Convert upper case to lowercase
					*(arr + count) = m;//place lower case into array
				
				}
				count = count + 1; //add one to count variable
			}
		}
		
		char *front, *back;					//Initialize pointers
		int i;								//Declare variables
		
		for (front = arr, back = arr +(count - 1);;)//Begin for loop
		{
			if (*front == *back)		//If pointers equal eachother
			{
				front = front + 1;		//Add one to front pointer
				back = back - 1;		//Subtract on from back pointer
			}
			else						//else
			{
				break;					//break from for loop
			}
			 if (front >= back)		//If pointer are equal or passed eachother
			 {
				 //Print This word/phrase is a palindrome to screen
				 printf("The word/phrase is a palindrome");
				 break; //break
			 }
		}
			if(front < back) //if front pointer is less than back pointer
			{
				//print This is word/phrase is not a palindrome
				printf("The word/phrase is not a palindrome.");
			}
	return 0;				//End
}										