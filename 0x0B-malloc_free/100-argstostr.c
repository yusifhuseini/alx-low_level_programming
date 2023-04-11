#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all cmd-line arg to a single str
 * @ac: number of cmd-line arg
 * @av: array of cmd-line arg
 * Code by - yusifhuseini
 * Return: concatenated str or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	k = len = 0;
	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j]; ++j)
			len++;
		len++;
	}
	len++;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j]; ++j)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
