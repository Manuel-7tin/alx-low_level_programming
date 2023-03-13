#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Creates a duplicate of an inputted string
 *
 * @str: The inputted string
 *
 * Return: A pointer to the duplicate (if successful) | Null (if not)
 */

char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(char) * strlen(str));
	if (dup == NULL)
		return (NULL);
	dup = str;
	return (dup);
}
