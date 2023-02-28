#include "main.h"

/**
 * print_rev - Prints strings in reverse from its memory location
 *
 * @s: The memory location to be read
 *
 * Return: void
 */

void print_rev(char *s)
{
	int *c, n;

	c = s;
	for (n = -1; *c++;)
		n++;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
