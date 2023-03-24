#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_numbers - Prints all the numbers passed into it
 *
 * @separator: A char that seperates the numbers
 * @n: The amount of numbers to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (n == 0)
		printf("\n");
	if (separator == NULL)
		separator = "";
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", va_arg(ptr, int));
		else
			printf("%d%s", va_arg(ptr, int), separator);
	}
	va_end(ptr);
}
