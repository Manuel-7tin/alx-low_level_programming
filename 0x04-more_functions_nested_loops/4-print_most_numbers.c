#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 - 9 except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		if (number != 2 && number != 4)
			_putchar(48 + number);
	}
	_putchar('\n');
}
