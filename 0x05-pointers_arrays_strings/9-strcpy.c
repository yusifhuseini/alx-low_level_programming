#include "main.h"

/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: copy of the string
 * @src: origin of the string
 * Return: dest 0 for success
 * Code by - yusifhuseini
**/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
