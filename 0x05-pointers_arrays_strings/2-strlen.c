#include "main.h"

/**
 * _strlen - returns the size of @s
 * @s - the string
 * return - the length of @s
 * Code by - yusifhuseini
**/

int _strlen(char *s)
{
		int i;

		for (i = 0; s[i] != '\0'; i++)
			;

		return (i);
}
