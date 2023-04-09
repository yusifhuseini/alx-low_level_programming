#include <stdio.h>
#include "main.h"

/**
 * main - This program's entry point is the main function
 *
 * @argc: an integer representing the number of arguments passed to the program
 * @argv: an array of strings containing the arguments passed to the program
 *
 * Description: print the number of arguments
 * Code by - yusifhuseini
 * Return: value 0 upon successful completion
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
