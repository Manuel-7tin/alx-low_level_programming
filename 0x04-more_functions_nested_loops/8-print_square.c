#include "main.h"

/**
 * print_square - Prints a square using hastag
 *
 * @size: The size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int loop1, loop2;

	if (size <= 0)
		_putchar('\n');
	for (loop1 = size; loop1 > 0; loop1--)
	{
		for (loop2 = size; loop2 > 0; loop2--)
			_putchar('#');
		_putchar('\n');
	}
}
