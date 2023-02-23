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
	if (size <= 0)
		_putchar('\n');
	for (; size > 0; size--)
	{
		for (; size > 0; size--)
			_putchar('#');
		_putchar('\n');
	}
}
