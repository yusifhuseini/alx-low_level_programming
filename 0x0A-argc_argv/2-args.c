#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: an integer representing the count of command line arguments
 * @argv: an array of strings representing the command line arguments
 * Description: This program prints the command line arguments
 * Code by - yusifhuseini
 * Return: value 0 (indicating success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);
	return (0);
}
