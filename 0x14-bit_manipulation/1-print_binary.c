#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 *
 * @n: The number to be turned to binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int i, j;

	i = n >> 1;
	j = n - (2 * i);
	if (n > 0 && i != 0)
		print_binary(i);
	putchar(48 + j);
}
