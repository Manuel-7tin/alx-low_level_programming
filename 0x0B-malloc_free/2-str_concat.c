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
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr_concat_str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (ptr_concat_str == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		ptr_concat_str[i] = s1[i];
	for (i = strlen(s1); j <= strlen(s2); j++)
	{
		ptr_concat_str[i] = s2[j];
		i++;
	}
	return (ptr_concat_str);
}
