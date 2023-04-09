#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Code by - yusifhuseini
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	/* Print the last command-line argument */
	printf("%s\n", argv[argc - 1]);
	return (0);
}
