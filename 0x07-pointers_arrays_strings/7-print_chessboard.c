#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 *
 * @a: The chessboard to print.
 *
 * Return: Nothing.
 * Code by - yusifhuseini.
 */
void print_chessboard(char (*a)[8])
{
	for (int row = 0; row < 8; row++)
	{
		for (int col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
