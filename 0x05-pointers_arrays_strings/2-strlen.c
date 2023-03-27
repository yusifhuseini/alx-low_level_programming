#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: length of a string
 * Code by - yusifhuseini
**/

int _strlen(char *s)
{
		int i;

		for (i = 0; s[i] != '\0'; i++)
			;

		return (i);
}
