#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search in
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (j);
			}
		}
		s++;
	}
	return (j);
}
