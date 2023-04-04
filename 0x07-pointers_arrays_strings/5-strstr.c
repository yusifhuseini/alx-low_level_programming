#include "main.h"

/**
 * _strstr - Locate a substring in a string.
 *
 * @haystack: The string to search.
 * @needle: The substring to search for.
 *
 * Return: Pointer to the first occurrence of `needle` in `haystack`, or NULL
 * if `needle` is not found.
 * Code by - yusifhuseini
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
