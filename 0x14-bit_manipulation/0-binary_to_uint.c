#include "main.h"

/**
 * binary_to_uint - Converts from binary to unsigned int
 *
 * @b: a pointer to a string of the binary number
 *
 * Return: (unsigned int) The decimal value of the binary or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, digit, strsize, dec = 0;

	strsize = strlen(b);
	if (b == NULL || strsize == 0)
		return (0);
	for (i = 0; i < strsize; i++)
	{
		digit = (unsigned int)(b[i] - 48);
		if (digit > 1)
			return (0);
		dec += digit << (strsize - i - 1);
	}
	return (dec);
}
