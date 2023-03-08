#include "main.h"

/**
 * _pow_recursion - calculates the value of int x raised to pwer int y
 *
 * @x: Base number
 * @y: power
 *
 * Return: int (value of x exponential y)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
