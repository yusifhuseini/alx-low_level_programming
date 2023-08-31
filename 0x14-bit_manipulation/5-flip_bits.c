#include "main.h"

/**
 * flip_bits - Counts bit num
 * @n: num.
 * @m: num to flip
 *
 * Return: flip num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
