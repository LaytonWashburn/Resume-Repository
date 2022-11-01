#include<stdio.h>

/*******************************************************************************
*Function title: Main
*
*Summary: Calculates the least amount of bills needed for an amount
* 		  	entered by the user
*
*Inputs: None
*Outputs: None
*
*
*
*Compile Instructions: gcc compiler
********************************************************************************
*Pseudocode
*	Function Call
*	Begin
*		Declare variables
*		prints Enter an amount to be broken into bills: $ to screen
*		Gets amount from keyboard
*		Prints the following number of the specified billed 
*			are required to screen
*		Calls function
*		Prints the bill and how many of each there are to screen
*	End
*	End
*******************************************************************************/

void pay_amount(int dollars, int *twenties, int *tens, 
				int *fives, int *twos, int *ones); //Function call

int main (void)
{										//Begin
	
	int n, twen, tn, fv, tw, on;		//Declare Variables
	
				//prints Enter an amount to be broken into bills: $ to screen
	printf("Enter an amount to be broken into bills: $");
	
	//Gets amount from keyboard
	scanf("%d", &n);
	
	//Prints the following number of the specified billed are required to screen
	printf("The following numbers of the specified bills are required: \n");
	
	//Calls function
	pay_amount(n, &twen, &tn, &fv, &tw, &on);
	
	
	//Prints the bill and how many of each there are to screen
	printf(" $20: %d\n $10: %d\n $5: %d\n $2: %d\n $1: %d\n", twen, 
	tn, fv, tw, on);
	
	return 0;				//End
}

/*******************************************************************************
*Functon title:
*
*Summary:
*
*
*Inputs:
*Outputs:
*
*Compile Instructions: None
********************************************************************************
*Pseudocode
*
*	Begin
*		Pointer twneety to dollar amount
*		Calculates remainder 
*		Calculates how many twenty dollar bills are needed
*		Calculates remainder
*		Calculates number of ten dollar bills that are needed
*		Calculates remainder
*		Calculates how many five dollar bills are needed
*		Calculates remainder and the number of one dollar bills needed
*		Calculates the number of two dollar bills needed
*	End
*
*******************************************************************************/

void pay_amount(int dollars, int *twenties, int *tens,
				int *fives, int *twos, int *ones)
{							//Begin
	
	
	*twenties = dollars;			//Pointer twneety to dollar amount
	
	*tens = *twenties % 20;		//Calculates remainder 
	
	//Calculates how many twenty dollar bills are needed
	*twenties = *twenties / 20;
	
	//Calculates remainder
	*fives = *tens % 10;
	//Calculates number of ten dollar bills that are needed
	*tens = *tens / 10;
	
	//Calculates remainder
	*twos = *fives % 5;
	//Calculates how many five dollar bills are needed
	*fives = *fives / 5;
	
	//Calculates remainder and the number of one dollar bills needed
	*ones = *twos % 2;
	//Calculates the number of two dollar bills needed
	*twos = *twos / 2;
	
}							//End