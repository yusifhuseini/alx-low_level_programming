#include "main.h"

/**
 * set_bit - set value
 * @n: bit pointer
 * @index: index value at 0
 *
 * Return: value or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
