#include "main.h"

/**
 * print_number - Prints numbers 0 - 9
 *
 * Return: void
 */

void print_number(void)
{
	int number;

	for (number = 0; number < 10; number++)
		_putchar(number);
	_putchar('\n');
}
