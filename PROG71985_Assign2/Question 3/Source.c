#define _CRT_SECURE_NO_WARNINGS
#define DAYS_IN_WEEK 7
#include <stdio.h>
#include <stdlib.h>

//Write a program that asks the user to enter some number of days and then
//converts that value to weeks and days
//Display results in the following format: 18 days is 2 weeks, 4 days.
//Use a do...while loop structure to allow the user to repeatedly enter day values; 
//terminate the loop when the user enters a non-positive value


//madisont - prog71985 - assign2, q3

int main(void) {
	
	int days_input;

	do {
		//Get input from user and filter out bad input
		printf("Please enter a number of days (enter a number less than 1 to exit):\n");
		int symbols_returned = scanf("%d", &days_input);
		
		if (symbols_returned != 1)
		{
			printf("ERROR: Invalid input.\nExiting...\n");
			exit(EXIT_FAILURE);
		}
		else if (days_input < 1)
		{
			break;														//terminate the loop
		}

		//Transform
		int weeks = days_input / DAYS_IN_WEEK;
		int remaining_days = days_input % DAYS_IN_WEEK;

		//Output to user
		printf("%d days is %d weeks, %d days.\n", days_input, weeks, remaining_days);

	} while (days_input > 0);

	printf("Cya!\n");
		
	return 0;
}