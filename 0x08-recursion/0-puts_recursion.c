#include "main.h"

/**
 * _puts_recursion - Prints outs strings to stdi
 *
 * @s: The string to be printed out
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s[0])
	{
		_putchar(s[0]);
		_puts_recursion(++s);
	}
	_putchar('\n');
}
