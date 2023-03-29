#include "main.h"

/**
 * reverse_array - function that reverses the 
 * order of elements in an integer array
 * @a: pointer to the integer array
 * @n: number of elements in the array
 * Return: void (no return value)
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
