#include "main.h"

/**
 * factorial - Returns the factorial of an inputted int
 *
 * @n: The int to use
 *
 * Return: int (n factorial)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
