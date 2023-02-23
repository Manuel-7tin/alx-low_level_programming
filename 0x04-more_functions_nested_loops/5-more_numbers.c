#include "main.h"

/**
 * more_numbers - prints numbers 0 -14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int number, times;

	for (times = 10; times > 0; times--)
	{
		for (number = 0; number < 15; number++)
		{
			if (number > 9)
				_putchar(49);
			_putchar(number % 10 + 48);
		}
		_putchar('\n');
	}
}
