#include "main.h"

/**
 * print_numbers - Prints numbers 0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
		_putchar(48 + number);
	_putchar('\n');
}
