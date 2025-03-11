#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#define MIN 2
#define MAX 22

//Write a program that prints a table with each line printing the integer, 
//its square root, its square and its cube in that column order.
//Ask the user to enter a lower and upper limit for the table
//set limits so that input stays between 2 and 22. Use a for loop.


//madisont - prog71985 - assign2, q2

int main(void) {

	int lower_limit;
	int upper_limit;

	//Get lower limit input from user and filter out bad input
	printf("Please enter a lower limit between %d and %d:\n", MIN, MAX);
	int symbols_returned1 = scanf("%d", &lower_limit);

	if (symbols_returned1 != 1)
	{
		printf("ERROR: Invalid input.\nExiting...\n");
		exit(EXIT_FAILURE);
	}
		else if (lower_limit < MIN || lower_limit > MAX)
	{
		printf("ERROR: Invalid input.\nExiting...\n");
		exit(EXIT_FAILURE);
	}

	//Get upper limit input from user and filter out bad input
	printf("Please enter an upper limit between %d and %d:\n", MIN, MAX);
	int symbols_returned2 = scanf("%d", &upper_limit);

	if (symbols_returned2 != 1)
	{
		printf("ERROR: Invalid input.\nExiting...\n");
		exit(EXIT_FAILURE);
	}
		else if (upper_limit < lower_limit || upper_limit > MAX)
	{
		printf("ERROR: Invalid input.\nExiting...\n");
		exit(EXIT_FAILURE);
	}

	//Print table header
	printf("|---------------|-----------------------|---------------|---------------|\n");
	printf("|    Integer\t|      Square Root\t|     Square\t|      Cube\t|\n");					//this is ugly but necessary to make it look pretty
	printf("|---------------|-----------------------|---------------|---------------|\n");

	//Use a for loop
		for (lower_limit; lower_limit <= upper_limit; lower_limit++) {
				
			float square_root = sqrt(lower_limit);
			int square = lower_limit * lower_limit;
			int cube = lower_limit * lower_limit * lower_limit;
			
			printf("|\t%d\t|\t%8.2f\t|\t%d\t|\t%d\t|\n", lower_limit, square_root, square, cube);

		}

	printf("|---------------|-----------------------|---------------|---------------|\n");

	 return 0;
}