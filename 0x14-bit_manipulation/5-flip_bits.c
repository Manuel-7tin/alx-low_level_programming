#include "main.h"

/**
 * flip_bits - gets the number of bits flipped to get one number another.
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: returns the number of bits you'd need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int d, i, j = 0;

	i = n ^ m;
	while (i > 0)
	{
		d = i;
		i >>= 1;
		j += d - (2 * i);
	}
	return (j);
}
