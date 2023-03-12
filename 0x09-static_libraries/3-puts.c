#include "main.h"

/**
 * _puts - Prints a strinng from it's memory location
 *
 * @str: string location to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
