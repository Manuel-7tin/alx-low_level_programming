#include "main.h"

/**
 * check_for_square - checks for the square root
 *
 * @x: aids with the calculation
 * @y: Int whose root we shalll determine
 *
 * Return: int (the root)
 */

int check_for_square(int x, int y)
{
	long unsigned int root = (x + y) / 2;

	if (y == 1)
		return (1);
	else if (root < 1)
		return (-1);
	else if (root * root == y)
		return (root);
	else
		return (check_for_square(--x, y));
}


/**
 * _sqrt_recursion - Determines the square root of an inputted integer
 *
 * @n: The integer whose square root will be returned
 *
 * Return: int (rooot of n)
 */

int _sqrt_recursion(int n)
{
	return (check_for_square(0, n));
}
