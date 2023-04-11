#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Create a duplicate of a string
 * @str: the string to be duplicated
 * Return: If @str is NULL or allocate space in memory,
 * Code by - yusifhuseini
 */

char *_strdup(char *str)
{
	char *newstr;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (*(str + len++))
		;
	newstr = malloc(len * sizeof(char));
	if (newstr == NULL)
		return (NULL);

	i = 0;
	while (*(str + i))
	{
		*(newstr + i) = *(str + i);
		++i;
	}
	*(newstr + i) = '\0';
	return (newstr);
}
