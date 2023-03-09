#include "main.h"

/**
 * find_palindrome - finds palindrome
 *
 * @x: replica string
 * @y: suspected palindrome
 * @i: integer to assign char to replica
 *
 * Return: (1) if it's a palindrome (0) if it isn't
 */

int find_palindrome(char *x, char *y, int i)
{
	int n = -1;

	for ( ; *y++; )
		n++;

	if (!y[i])
	{
		if (x == y)
			return (1);
		else
			return (0);
	}else
	{
		x[i] = y[n];
		return (find_palindrome(x, y, i++));
	}
}


/**
 * is_palindrome - Checks for palindrtome strings
 *
 * @s: String to be checked
 *
 * Return: (1) if tstring s is a palindrome and (0) if it's not
 */

int is_palindrome(char *s)
{
	char *p = "";

	if (!*s)
		return (1);
	return (find_palindrome(p, s, 0));
}
