#include "main.h"

/**
 * _puts - prints a string, add '\n', to stdout
 * @str - contains the string that will be printed
 * Code by - yusifhuseini
**/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
