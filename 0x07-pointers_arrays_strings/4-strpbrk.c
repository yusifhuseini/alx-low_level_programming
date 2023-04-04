#include "main.h"

/**
 * _strpbrk - Find a string of any character from a set.
 *
 * @s: The string to search.
 * @accept: The characters to search for.
 *
 * Return: Pointer character in `accept` that appears
 * in `s`, or NULL if no such character is found.
 * Code by - yusifhuseini
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
