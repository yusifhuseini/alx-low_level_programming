#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: pointer to the string to search
 * @c: character to locate
 * Return: point character c in the string s, NULL if not foound.
 * Code by - yusifhuseini
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
