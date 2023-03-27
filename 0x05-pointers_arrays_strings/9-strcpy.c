#include "main.h"

/**
 * _strcpy - duplicates the string that is pointed
 * @dest - destination string where the copy will be stored
 * @src - the source string that needs to be copied
 * return - a copy of the origin string
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
