#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 *
 * @s: pointer to string to be printed in reverse
 *
 * Return: void
 *
 * Code by - yusifhuseini
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
