#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point is the main function
 * @argc: an integer representing the count of command line arguments
 * @argv: an array of strings representing the command line arguments
 * Description: Calculate the minimum number of coins needed
 * to provide change for a given amount of money.
 * Code by - yusifhuseini
 * Return: 0 if successful, 1 if no argument is provided
 */
int main(int argc, char *argv[])
{
	int coins[5] = { 25, 10, 5, 2, 1 };
	int total, i, val;

	total = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	val = atoi(argv[1]);
	if (val < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; ++i)
		{
			total += (val / coins[i]);
			val %= coins[i];
			if (val == 0)
				break;
		}
		printf("%d\n", total);
	}
	return (0);
}
