#include "function_pointers.h"

/**
 * print_name - calls a callback function that prints a name
 *
 * @name: The name to be passed to the callback function
 * @f: The callback function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)((char *)name);
}
