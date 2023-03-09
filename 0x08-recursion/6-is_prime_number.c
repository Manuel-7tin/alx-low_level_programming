#include "main.h"

/**
 * check_for_prime - Checks for prime numbers
 *
 * @x: aids with the calculation
 * @y: The prime number
 *
 *
 * Return: 1 if it's a prime and 0 if it isn't
 */

int check_for_prime(int x, int y)
{
	if (x == 1)
		return (0);
	else if (y % x == 0)
		return (1);
	else
		return (check_for_prime(x - 1, y));
}


/**
 * is_prime_number - Determines a prime number
 *
 * @n: int to be checked
 *
 * Return: (1) if it's a prime number (0) if it's not.
 */

int is_prime_number(int n)
{
	int x = n / 2;

	if (n <= 1)
		return (0);
	return (check_for_prime(x, n));
}
