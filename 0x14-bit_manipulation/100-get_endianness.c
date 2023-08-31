#include "main.h"

/**
 * get_endianness - Checks endianness
 *
 * Return: 0 (big-endian) or 1 (little-endian)
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
