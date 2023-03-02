#include "main.h"

/**
 * _strcat - Function concatenates two imputted strings
 *
 * @dest: First string input to be concatenated
 * @src: Second string input to be concatenated
 *
 * Return: Char (Conctenated string)
 */

char *_strcat(char *dest, char *src);
{
	int n, len1, len2 = 0;

	for (n = 0; dest[n] != '\0'; n++)
		len1++;
	for (n = 0; src[n] != '\0'; n++)
		len2++;
	for (n = 0; n < len2; n++)
	{
		dest[len1 + 1] = src[n];
		len1++;
	}
	return (&dest);
}
