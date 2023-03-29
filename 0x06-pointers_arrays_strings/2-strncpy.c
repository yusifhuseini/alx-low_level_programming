#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes from @src to @dest
 * Return: a pointer to destination string
 * Code by - yusifhuseini
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
