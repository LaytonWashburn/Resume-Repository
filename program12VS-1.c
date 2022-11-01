#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*******************************************************************************
*Function Title: Main
*
*Summary: Determines if an inputed abbreviation is one of the 50 states
*
*input: None
*output: None
*
*Compile Instructions: Visual Studios
********************************************************************************
*Pseudocode
*	Begin
*		Inititalize struct us_abb
*		Initialize const struct us_states
*		Declare const struct us_states
*		print Enter a 2-letter U.S state abbreviation to screen
*		Get abbreviation from keyborad
*		Begin For loop
*			if i is equal to fifty
*				prints abbreviation is not an to screen
*				prints abbreviation for any of the 50 U.S states. to screen
*				exit
*			if inputed abbreviation does not match any of the fifty states
*				increment i
*			else
*				prints inputed abreviation is an to screen
*				prints abbrevition for the corresponding state to screen
*				exit
*		end for loop
*	End
*******************************************************************************/
int main(void)
{
	struct us_abb {					//Inititalize struct us_abb 
		char abbreviation[3];
	}ab1;

	struct us_states {				//Initialize const struct us_states
		char* state;
		char* abb;
	};

	const struct us_states states_abb[] = 		//Declare const struct us_states
	{ {"Alabama",                    "AL"},
		{"Alaska",                     "AK"},
		/*{"American Samoa",             "AS"},*/
		{"Arizona",                    "AZ"},
		{"Arkansas",                   "AR"},
		{"California",                 "CA"},
		{"Colorado",   				   "CO"},
		{"Connecticut",				   "CT"},
		{"Delaware",				   "DE"},
		/*{"District of Columbia",		 "DC"},*/
		{"Florida",					   "FL"},
		{"Georgia",					   "GA"},
		/*{"Guam",						 "GU"},*/
		{"Hawaii",                     "HI"},
		{"Idaho",					   "ID"},
		{"Illinois",				   "IL"},
		{"Indiana",					   "IN"},
		{"Iowa",					   "IA"},
		{"Kansas",					   "KS"},
		{"Kentucky",				   "KY"},
		{"Louisiana",				   "LA"},
		{"Maine",					   "ME"},
		{"Maryland",				   "MD"},
		{"Massachusetts",              "MA"},
		{"Michigan",				   "MI"},
		{"Minnesota",				   "MN"},
		{"Mississippi",				   "MS"},
		{"Missouri",				   "MO"},
		{"Montana",					   "MT"},
		{"Nebraska",				   "NE"},
		{"Nevada",					   "NV"},
		{"New Hampshire",              "NH"},
		{"New Jersey",				   "NJ"},
		{"New Mexico",				   "NM"},
		{"New York",				   "NY"},
		{"North Carolina",			   "NC"},
		{"North Dakota",			   "ND"},
		/*{"Northern Mariana Is",        "MP"},*/
		{"Ohio",					   "OH"},
		{"Oklahoma",				   "OK"},
		{"Oregon",					   "OR"},
		{"Pennsylvania",  			   "PA"},
		/*{"Puerto Rico", 				 "PR"},*/
		{"Rhode Island",			   "RI"},
		{"South Carolina",			   "SC"},
		{"South Dakota",	           "SD"},
		{"Tennessee",				   "TN"},
		{"Texas",					   "TX"},
		{"Utah",					   "UT"},
		{"Vermont",					   "VT"},
		{"Virginia",				   "VA"},
		/*{"Virgin Islands",			 "VI"},*/
		{"Washington",				   "WA"},
		{"West Virginia",			   "WV"},
		{"Wisconsin",				   "WI"},
		{"Wyoming",					   "WY"} };


	//print Enter a 2-letter U.S state abbreviation to screen
	printf("Enter a 2-letter U.S. state abbreviation: ");
	scanf_s("%s", ab1.abbreviation, 4);		//Get abbreviation from keyborad

	for (int i = 0; i < 51;) //Begin For loop
	{
		if (i == 50) //if i is equal to fifty
		{
			//prints abbreviation is not an to screen
			printf("%s is not an ", ab1.abbreviation);
			//prints abbreviation for any of the 50 U.S states. to screen
			printf("abbreviation for any of the 50 U.S. states.");
			exit(1);	//exit 
		}

		//if inputed abbreviation does not match any of the fifty states
		if (strcmp(ab1.abbreviation, states_abb[i].abb))
		{
			i++; //increment i
		}

		else		//else 
		{
			//prints inputed abreviation is an to screen
			printf("%s is an ", ab1.abbreviation);
			//prints abbrevition for the corresponding state to screen
			printf("abbreviation for %s.", states_abb[i].state);
			exit(1);//exit
		}
	}				//end for loop
	return 0;			//End
}