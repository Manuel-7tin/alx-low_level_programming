#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - SUms up a variable number of integers
 *
 * @n: Number of integers to sum up
 *
 * Return: (int) summed up number
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
