#include "main.h"

/**
 * _memset - Fill memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The byte value to be set.
 * @n: The number of bytes to be filled.
 * Return: A pointer to the memory area @s.
 * Code by - yusifhuseini
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
