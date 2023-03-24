#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_strings - Prints all the strings passed into it
 *
 * @separator: A char that seperates the numbers
 * @n: The amount of numbers to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *word;
	unsigned int i;
	va_list ptr;

	if (n == 0)
		printf("\n");
	if (separator == NULL)
		separator = "";
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(ptr, char *);
		if (word  == NULL)
			word  = "(nil)";
		if (i == n - 1)
			printf("%s\n", word);
		else
			printf("%s%s", word, separator);
	}

	va_end(ptr);
}
