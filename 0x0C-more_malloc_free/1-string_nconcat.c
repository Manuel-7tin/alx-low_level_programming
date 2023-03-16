#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concactenates tewo strings
 *
 * @s1: String 1, to be concactenated
 * @s2: String 2, to be concatenated
 * @n: NUmber of char to concatenate frtom string 2
 *
 * Return: Pointer to new string (if succesful) | Null ( if not )
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatd_str;
	unsigned int s1_size, s2_size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_size = strlen(s1);
	s2_size = strlen(s2);

	if (n > s2_size)
		n = s2_size;
	concatd_str = malloc(s1_size + n + 1);
	if (concatd_str == NULL)
		return (NULL);
	for (i = 0; i < s1_size; i++)
		concatd_str[i] = s1[i];
	for (j = 0; i <= n + s1_size; j++)
	{
		concatd_str[i] = s2[j];
		i++;
	}
	return (concatd_str);
}
