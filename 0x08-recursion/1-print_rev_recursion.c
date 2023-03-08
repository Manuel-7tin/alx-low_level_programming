#include "main.h"

/**
 * _print_rev_recursion - Prints inputted string in reverse
 *
 * @s: String to be printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		_putchar(s[0]);
	}
}
