#include "main.h"

/**
 * string_toupper - function that converts all lowercase 
 * characters in a string to uppercase
 * @s: pointer to the input string
 * Return: a pointer to the resulting string
 * Code by - yusifhuseini
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
