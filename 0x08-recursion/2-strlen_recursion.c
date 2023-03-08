#include "main.h"

/**
 * _strlen_recursion - Returns length of inputed string using recursion
 *
 * @s: String whose length is to be determined
 *
 * Return: int (length of string s)
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(++s));
	}
	return (0);
}
