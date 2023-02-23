#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of specified length
 *
 * @n: The length of the line to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int spaces, refill;

	spaces = 1;
	refill = 1;
	if (n <=0)
		_putchar('\n');
	for (; n > 0; n--)
	{
		_putchar(92);
		_putchar('\n');
		for (; spaces > 0; spaces--)
		{
			if (n != 0)
				_putchar(' ');
		}
		refill++;
		spaces = refill;
	}
}
