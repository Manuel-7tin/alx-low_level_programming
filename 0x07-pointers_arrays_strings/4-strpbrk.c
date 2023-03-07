#include "main.h"

/**
 * _strpbrk -  A  function that searches a string for any of a set of bytes
 *
 * @s: String whose char we hope to find
 * @accept: String to be searched
 *
 * Return: Pointer to string
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
