#include "main.h"

/**
 * _strlen_recursion - returns the length of a string using recursion
 *
 * @s: pointer to string to find the length of
 *
 * Return: integer length of the string
 *
 * Code by - yusifhuseini
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
