#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination memory area
 * Code by - yusifhuseini
 */
char *_memcpy(char *dest, const char *src, size_t n)
{
	char *pdest = dest;
	const char *psrc = src;

	for (size_t i = 0; i < n; i++)
	{
	*pdest++ = *psrc++;
	}

	return (dest);
}
