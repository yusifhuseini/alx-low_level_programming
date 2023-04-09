#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point is the main function
 * @argc: an integer representing the count of command line arguments
 * @argv: an array of strings representing the command line arguments
 * Description: The program prints positive integers
 * Code by - yusifhuseini
 * Return: 0 if successful, 1 if no argument is provided
 */
int main(int argc, char *argv[])
{
	int i, sum;
	char *ptr;

	sum = 0;
	for (i = 1; i < argc; ++i)
	{
		strtol(argv[i], &ptr, 10);
		if (*ptr == '\0')
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
