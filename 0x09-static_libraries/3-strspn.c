#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 *
 * @s: string to be scanned
 * @accept: Strings containing characters to match
 *
 * Return: Number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, n;
	unsigned int num = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept[n])
				num++;
		}
	}
	return (num);
}
