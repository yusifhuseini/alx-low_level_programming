#include "main.h"

/**
 * swap_int - exchanges the values of two integers
 * @a: the integer that will be swapped with @b
 * @b: the integer that will be swapped with @a
 * Code by - yusifhuseini
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
