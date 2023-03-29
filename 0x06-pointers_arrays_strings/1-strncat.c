#include "main.h"

/**
 * _strncat - concatenates one string to another
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes from @src to @dest
 * Return: a pointer to destination string
 * Code by - yusifhuseini
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
