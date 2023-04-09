#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Description: This program takes in a single command-line argument,
 * which is assumed to be a non-negative integer. The program calculates
 * the minimum number of coins required to make change for the given amount,
 * using quarters, dimes, nickels, and pennies. The program then prints
 * the minimum number of coins required. If the argument is negative,
 * the program prints 0 and returns 0. If the argument is not a single
 * non-negative integer, the program prints an error message and returns 1.
 * Code by - yusifhuseini
 * Return: 0 if successful, 1 if an error occurred.
 */
int main(int argc, char *argv[])
{
	int value, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);

	if (value < 0)
	{
		printf("0\n");
		return (0);
	}

	while (value > 0)
	{
		if (value >= 25)
			value -= 25;
		else if (value >= 10)
			value -= 10;
		else if (value >= 5)
			value -= 5;
		else
			value -= 1;

		c++;
	}

	printf("%d\n", c);

	return (0);
}
