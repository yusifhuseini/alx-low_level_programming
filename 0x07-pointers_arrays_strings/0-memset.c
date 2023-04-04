#include "main.h"
/**
 * _memset - sets the first n bytes of the memory area
 *           pointed to by s to the specified value.
 * @s: pointer to the memory area to be filled
 * @c: value to be set
 * @n: number of bytes to be set to the value
 *
 * Return: a pointer to the memory area s.
 */
void *_memset(void *s, int c, size_t n)


	for (size_t i = 0; i < n; i++)
	{
		*p++ = c;
	}
	return (s);
}
