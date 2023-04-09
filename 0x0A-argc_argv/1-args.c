#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Description: This program prints the number of command-line arguments
 * passed to it (excluding the program name itself).
 * Code by - yusifhuseini
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
