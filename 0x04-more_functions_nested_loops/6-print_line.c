#include "main.h"

/**
 * print_line - Prints a line of specified length
 *
 * @n: lenght of line
 *
 * Return: void
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
