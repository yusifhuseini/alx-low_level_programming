#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: 0 if the two strings are equal, 
 * otherwise a non-zero value.
 * Code by - yusifhuseini
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}
