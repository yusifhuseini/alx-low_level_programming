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
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
