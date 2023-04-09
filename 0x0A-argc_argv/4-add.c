#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Description: This program takes in multiple command-line arguments,
 * which are assumed to be positive integers. The program adds up all
 * the integers and prints the sum. If any of the arguments are not
 * positive integers, the program prints an error message and returns 1.
 * If there are less than two arguments, the program prints 0 and returns 0.
 * Code by - yusifhuseini
 * Return: The sum of the positive integers, or 0 if there are less than two
 * arguments or an error occurred.
 */
int main(int argc, char *argv[])
{
	unsigned int i, sum, num;

	sum = 0;

	/* Check if there are at least two arguments */
	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}

	/* Iterate through each argument and add up the positive integers */
	while (argc-- && argc > 0)
	{
		/* Check if the argument is a positive integer */
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Convert the argument to an integer and add it to the sum */
		num = atoi(argv[argc]);
		sum += num;
	}

	/* Print the sum and return it */
	printf("%d\n", sum);
	return (sum);
}
