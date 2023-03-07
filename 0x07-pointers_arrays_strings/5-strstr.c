#include "main.h"

/**
 * _strstr - finds first occurrence of d substring needle in d string haystack
 *
 * @haystack: The string to be searched
 * @needle: The substring to be searched for
 *
 * Return: Pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, s, n, num, same;

	s = n = num = same = 0;
	for (; needle[s]; s++)
		num++;

	while (s < 20)
	{
		for (i = 0; (haystack[n] != ' ') && (haystack[n]); i++)
		{
			if (needle[i] == haystack[n])
				same++;
			n++;
		}
		if (same == num && i <= num)
			return (haystack + (n - num));
		if (haystack[n] == '\0')
			return (NULL);
		n++;
		same = 0;
	}
	return (NULL);
}
