#include "main.h"

/**
 * comparar - recursively compares the square of an integer with another
 *
 * @n: integer to compare the square of
 * @y: integer to square and compare with n
 *
 * Return: integer square root of n if it is a perfect square, -1 otherwise
 * Codey by - yusifhuseini
 */

int comparar(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);

	}
	return (comparar(n, y + 1));
}


/**
 * _sqrt_recursion - calculates the square root of a given number
 *
 * @n: integer to find the square root of
 *
 * Return: integer square root of n if it is a perfect square, -1 otherwise
 * Code by - yusifhuseini
 */

int _sqrt_recursion(int n)
{
	return (comparar(n, 1));
}
