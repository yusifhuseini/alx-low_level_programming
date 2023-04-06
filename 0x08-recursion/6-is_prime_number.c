#include "main.h"

/**
 * comparar - recursively counts the number of divisors of an integer
 *
 * @n: integer to count the divisors of
 * @y: integer to divide n by and count as a divisor if it evenly divides n
 *
 * Return: integer count of divisors of n
 *
 * Code by - yusifhuseini
 */

int comparar(int n, int y)
{
	int count = 0;

	if (y <= n)
	{
		if (n % y == 0)
			count++;
		return (count + comparar(n, y + 1));
	}
	return (count);
}

/**
 * is_prime_number - checks if an integer is a prime number
 *
 * @n: integer to check if it is prime
 *
 * Return: 1 if n is prime, 0 otherwise
 *
 * Code by - yusifhuseini
 */

int is_prime_number(int n)
{
	if (comparar(n, 1) == 2)
		return (1);
	else
		return (0);
}
