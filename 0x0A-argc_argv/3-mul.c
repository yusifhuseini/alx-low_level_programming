#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Description: This program takes in two command-line arguments,
 * multiplies them together, and prints the result. If the number of
 * arguments is not 2, the program prints an error message and returns 1.
 * Code by - yusifhuseini
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int i, val = 1;

	/* Check if there are exactly two arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert arguments to integers and multiply them together */
	for (i = 1; i < argc; i++)
	{
		val *= atoi(argv[i]);
	}

	/* Print the result */
	printf("%d\n", val);

	/* Return success */
	return (0);
}
