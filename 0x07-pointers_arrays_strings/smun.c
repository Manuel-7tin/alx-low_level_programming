#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}

char *_strstr(char *haystack, char *needle)
{
        int i, s, n, num, same;

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
                if (same == num)
                        return (haystack + (n - num));
                if (haystack[n] == '\0')
                        return (NULL);
                n++;
                same = 0;
        }
	return (NULL);
}
