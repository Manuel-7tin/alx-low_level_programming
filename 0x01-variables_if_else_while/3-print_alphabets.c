#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints out all alphabets in upper and lower case
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		{putchar(letter); }
	for (letter = 'A'; letter <= 'Z'; letter++)
		{putchar(letter); }
	return (0);
}
