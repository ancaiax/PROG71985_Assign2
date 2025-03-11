#define _CRT_SECURE_NO_WARNINGS
#define OUTPUT_RANGE 13
#include <stdio.h>
#include <stdlib.h>

//Write a program that asks the user to enter an integer and then prints all the  
//integers starting at a value 13 less than the value entered by the user 
//up to the value entered by the user

//madisont - prog71985 - assign2, q1

int main(void) {

	int user_input;
	
	//Get user input and filter out bad input
	printf("Please enter a whole number:\n");
	int symbols_returned = scanf("%d", &user_input);

	if (symbols_returned != 1)
	{
		printf("ERROR: Invalid input.\nExiting...\n");
		return 1;
		exit(EXIT_FAILURE);
	}

	int output = user_input - OUTPUT_RANGE;

	//Print integers based on input
	for (output; output <= user_input; output++) 
	{
		printf("%d\n", output);
	}

	return 0;
}