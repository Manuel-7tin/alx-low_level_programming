#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 *
 * @s: The string to be searched
 * @c: The character to be located
 *
 * Return: Char location (Succesful) Null (Failed)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (c == s[i])
		{
			return (s + i);
		}
	}
	if (c == '\0')
		return (s + i);

	return (NULL);
}
