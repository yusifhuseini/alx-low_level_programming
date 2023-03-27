#include "main.h"
#include "string.h"

/**
 * rev_string - reverses a given string
 * @s - the string that needs to be reversed
 * Code by - yusifhuseini
**/

void rev_string(char *s)
{
	int i, len = strlen(s), j = 0;
	char temp;

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	}
}
