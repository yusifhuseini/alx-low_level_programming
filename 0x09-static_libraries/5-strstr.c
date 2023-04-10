#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to locate substring, or NULL
 * Code by - yusifhuseini
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *need = needle;
		char *hay = haystack;

		while (*need != '\0' && *hay == *need)
		{
			hay++;
			need++;
		}

		if (*need == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
