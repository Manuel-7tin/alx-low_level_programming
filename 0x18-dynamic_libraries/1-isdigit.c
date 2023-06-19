#include "main.h"

/**
 * _isdigit - Checks for digit
 *
 * @c: the data to check
 *
 * Return: 1 (if true) 0 (if false)
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
