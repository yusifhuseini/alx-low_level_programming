#include "main.h"

/**
 * _strcat - concatenates one string to another
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: a pointer to destination string
 * Code by - yusifhuseini
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
