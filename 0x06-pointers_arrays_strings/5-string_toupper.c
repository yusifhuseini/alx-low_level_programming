#include "main.h"

/**
 * string_toupper - function that converts all lowercase 
 * characters in a string to uppercase
 * @s: pointer to the input string
 * Return: a pointer to the resulting string
 * Code by - yusifhuseini
 */

char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}
