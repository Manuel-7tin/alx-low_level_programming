#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Prints all alphabets 10 times
 *
 * Returns: Always ) (success)
 */

void print_alphabet_x10(void)
{
	int runtime, letter;

	for (runtime = 9; runtime >= 0; runtime--)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{_putchar(letter); }
		_putchar('\n');
	}
}
