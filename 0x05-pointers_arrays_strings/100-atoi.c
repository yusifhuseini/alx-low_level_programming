#include "main.h"

/**
 * _atoi - changes the data type of a given string to integer
 * @s - the string that will be transformed to an integer
 *Return the integer representation of the input string
 Code by - yusifhuseini
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
	} while (*s++);

	return (num *sign);
}
