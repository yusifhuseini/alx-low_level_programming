#include "main.h"

/**
 * longitud - returns the length of a string
 * @s: pointer to the first character of the string
 *
 * Return: length of the string
 *
 * Code by - yusifhuseini
 */

int longitud(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		return (longitud(s + 1) + l);
	}
	return (l);
}


/**
 * comparar - recursively compares characters at opposite ends of a string
 * @i: starting index
 * @l: ending index
 * @s: pointer to the first character of the string
 *
 * Return: 1 if string is a palindrome, 0 if not
 *
 * Code by - yusifhuseini
 */

int comparar(int i, int l, char *s)
{
	if (i >= l)
		return (1);
	else if (s[i] == s[l])
		return (comparar(i + 1, l - 1, s));
	else
		return (0);
}


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the first character of the string
 *
 * Return: 1 if string is a palindrome, 0 if not
 *
 * Code by - yusifhuseini
 */

int is_palindrome(char *s)
{
	int l = longitud(s);
	int i = 0;

	return (comparar(i, l - 1, s));
}

