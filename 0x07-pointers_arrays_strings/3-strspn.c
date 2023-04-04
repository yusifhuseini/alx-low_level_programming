#include "main.h"

/**
 * _strspn - Returns the length of the initial segment of `s` that
 * consists of only the characters in `accept`.
 *
 * @s: The string to search.
 * @accept: The characters to accept.
 *
 * Return: The number of characters in `s` that consist of only the
 * characters in `accept`.
 * Code by - yusifhuseini.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;

	while (*s && *accept)
	{
		if (*s == *accept)
		{
			j++;
			accept++;
		}
		else if (j > 0)
		{
			return (j);
		}
		else
		{
			s++;
		}
	}

	return (j);
}
