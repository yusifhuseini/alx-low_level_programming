#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point is the main function
 *
 * @argc: an integer representing the count of command line arguments
 * @argv: an array of strings representing the command line arguments
 *
 * Description: multiplies two integers from the command line arguments
 * Code by - yusifhuseini
 * Return: value 0 upon successful completion and 1 upon failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
