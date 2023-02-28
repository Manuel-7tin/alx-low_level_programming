#include <string.h>
#include "main.h"

/**
 * _strlen - Returns the length of an inputted string
 *
 * @s: Inputed string
 *
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s++;)
	{
		length++;
	}
	return (length);
}
