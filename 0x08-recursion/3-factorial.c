#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 *
 * @n: integer to find the factorial of
 *
 * Return: integer factorial of n, or -1 if n is negative
 *
 * Code by - yusifhuseini
 */

int factorial(int n)
{
	if (n >= 0 && n <= 1)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
