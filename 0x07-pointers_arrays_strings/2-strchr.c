#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 *
 * Return: a pointer to the first occurrence of c in s
 * or NULL if not found
 * Code by - yusifhuseini
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
		return (s);
		s++;
	}

	return (NULL);
}
