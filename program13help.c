#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*******************************************************************************
*Function Title: Main
*
*Summary: Uses dynamically allocated strings and array so alphabetically sort
*			an inputed amount of words.
*
*Input: argc, argv[];
*Output:None
*
*Compile Instructions: gcc program13help.c -o program13help.exe
********************************************************************************
*Psuedocode: 
*	Begin
*		Declare variables
*		Convert input to integer
*		Dynamically allocate size of array 
*		Begin For loop
*			Prints Enter a word to screen
*			Gets word from keyboard
*			dynamically allocates size of string
*			If string is equal to NULL
*				Prints Error malloc failed to screen
*				exit
*			Copy temp stirng into allocated string
*			Dynamically allocated array length to match string length
*			Copy string into array
*		End For loop
*		Declare variable
*		Begin Do loop while swapped is equal to one
*			Intialize swapped to one
*			Begin For loop
*			If array position i-1 is greater than array position i
*				Copy string into temp string
*				Swap pointer initialization
*				Swapped is 1
*		End do while loop
*		Prints Sorted words: to screen
*		Begin For loop
*			Prints string in array position i
*		End For loop
*	End
*******************************************************************************/

int main (int argc, char *argv[])
{							//Begin
	int len;				//Declare variables
	char **func;
	char *string;
	char temp[16];
	char *temp2;
	
	len = atoi(argv[1]); //Convert input to integer
	
	func = malloc(sizeof(len) + 1); //Dynamically allocate size of array 
	
	for(int i = 0; i < len; i++)	//Begin For loop
	{
		printf("Enter a word: ");	//Prints Enter a word to screen
		scanf("%s", temp);			//Gets word from keyboard
		string = malloc(strlen(temp) + 1);//dynamically allocates size of string
		if (string == NULL)			//If string is equal to NULL
		{
			printf("ERROR malloc failed");//Prints Error malloc failed to screen
			exit(1);        //exit
		}
		strcpy(string, temp);//Copy temp stirng into allocated string
		//Dynamically allocated array length to match string length
		func[i]= malloc(strlen(string) + 1);
		strcpy(func[i], string);	//Copy string into array
	}								//End For loop
	
	int swapped;   //Declare variable
	
	do {			//Begin Do loop while swapped is equal to one
		swapped = 0; //Intialize swapped to one
		for (int i = 1; i < len; i++) //Begin For loop
		{
			//If array position i-1 is greater than array position i
			if ((strcmp(func[i-1], func[i]) > 0))
			{
				temp2 = func[i]; //Copy string into temp string
				func[i] = func[i-1];//Swap pointer initialization
				func[i-1] = temp2;
				swapped = 1;//Swapped is 1
			}
		}			
	}	while(swapped == 1);//End do while loop
	
	printf("\n");
	printf("Sorted words: ");//Prints Sorted words: to screen
	for(int i = 0; i < len; i++)//Begin For loop
	{
		printf("%s ", func[i]);//Prints string in array position i
	}							//End For loop
	return 0;					//End
}

