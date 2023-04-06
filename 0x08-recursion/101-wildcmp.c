#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings, taking into account wildcard characters
 * @s1: pointer to the first character of the first string
 * @s2: pointer to the first character of the second string
 *
 * Return: 1 if strings match, 0 otherwise
 *
 * Code by - yusifhuseini
 */

int wildcmp(char *s1, char *s2)
{

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *(s2 + 1) != '\0' && *s2 == '*')
		return (0);
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}
