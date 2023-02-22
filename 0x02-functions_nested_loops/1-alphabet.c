#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: prints alphabets with functions
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{_putchar(letter); }
	_putchar('\n');
}
