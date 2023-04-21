#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum param
 * @n: function numer integer
 * @...: var num param to sum
 * Return: If n == 0 - 0 else sum param
 * Code by - yusifhuseini
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index, sum = 0;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
