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
	int value, c;

	c = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (value % 25 >= 0)
	{
		c += value / 25;
		value = value % 25;
	}
	if (value % 10 >= 0)
	{
		c += value / 10;
		value = value % 10;
	}
	if (value % 5 >= 0)
	{
		c += value / 5;
		value = value % 5;
	}
	if (value % 2 >= 0)
	{
		c += value / 2;
		value = value % 2;
	}
	if (value % 1 >= 0)
	{
		c += value / 1;
	}
	printf("%d\n", c);
	return (0);
}
