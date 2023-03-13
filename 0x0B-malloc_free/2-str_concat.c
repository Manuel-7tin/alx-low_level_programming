#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Concactenate two inputted strings
 *
 * @s1: Inputted string 1
 * @s2: Inputted string 2
 *
 * Return: Pointer to concactenated string (if successful) | NULL (if not)
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr_concat_str;
	unsigned int i;

	if (s1 == NULL && s2 == NULL)
		return ("");
	ptr_concat_str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (ptr_concat_str == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		ptr_concat_str[i] = s1[i];
	for (i = 0; i <= strlen(s2); i++)
		ptr_concat_str[i] = s2[i];
	return (ptr_concat_str);
}
