#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints out all alphabets in lower case except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{putchar(letter); }
	}
	putchar('\n');
	return (0);
}
