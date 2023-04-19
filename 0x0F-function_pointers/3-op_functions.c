#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - func returns sum of a and b
 * @a: integer input a
 * @b: integer input b
 * Return: value sum a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - func returns subtract of a and b
 * @a: integer input a
 * @b: integer input b
 * Return: value substract a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - func returns multiply of a and b
 * @a: integer input a
 * @b: integer input b
 * Return: value multiply a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - func returns divide of a and b
 * @a: integer input a
 * @b: integer input b
 * Return: value divide a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - func returns module of a and b.
 * @a: integer input a
 * @b: integer input b
 * Return: value module a % b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
