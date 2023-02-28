#include "main.h"
/**
 * rev_string - reverses a string frtom it's allocated memory
 * _putchar - print each character
 * @str: char to check
 *
 * Description: This will reverse a string
 * Return: 0 is success
 */
void rev_string(char *str)
{
	int a = 0, b, c;
	char d;

	while (str[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = str[b];
		str[b] = str[c];
		str[c] = d;
	}
}
