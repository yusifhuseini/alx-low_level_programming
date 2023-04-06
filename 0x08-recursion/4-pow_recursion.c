#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 *
 * @x: base integer
 * @y: exponent integer
 *
 * Return: integer result of x^y, or -1 if y is negative
 *
 * Code by - yusifhuseini
 */

int _pow_recursion(int x, int y)
{
	if (y > -1 && y <= 1 && y != 0)
		return (x);
	if (y == 0)
		return (1);
	if (y <= -1)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
