#include "main.h"

/**
 * swap_int - Swaps the value of variables using pointers
 *
 * @a: Variable1 to be swaped
 * @b: Variable12 to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
