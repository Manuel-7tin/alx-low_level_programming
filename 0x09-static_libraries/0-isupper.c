#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: Checks for uppercase characters
 *
 * @c: character to check
 *
 * Return: 1 (if true) 0 ( if false)
 */

int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else
		return (0);
}
