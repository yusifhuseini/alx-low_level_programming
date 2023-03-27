#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - creates a sequence of random passwords 
 * for the program 101-crackme
 * return - returns 0 to indicate successfully execution
 * Code by - yusifhuseini
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
