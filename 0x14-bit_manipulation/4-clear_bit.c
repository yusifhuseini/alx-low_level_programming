#include "main.h"

/**
 * clear_bit - clear value
 * @n: bit pointer
 * @index: index value at 0
 *
 * Return: 1 (success) or -1 (error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
