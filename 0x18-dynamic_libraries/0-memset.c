#include "main.h"

/**
 * _memset - Fills the 1st n bytes of d memory area pointed to by s with byte b
 *
 * @s: Pointer to a string location
 * @b: Character to be filled in
 * @n: Number of bytes to be filled
 *
 * Return: Returns pointer to string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
