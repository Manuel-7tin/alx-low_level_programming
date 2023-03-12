#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: An int
 * Description: Decides if a letter is lower or upper case
 *
 * Return: 1 (success) 0
 */

int _isalpha(int c)
{
	if (c < 91 && c > 65 || c > 96 && c < 123)
		return (1);
	else
		return (0);
}
