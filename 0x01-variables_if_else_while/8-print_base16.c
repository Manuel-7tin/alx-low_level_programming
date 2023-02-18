#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all base 16 numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int number;

	for (number = 0; number < 55; number++)
	{
		if (number < 10 || number > 48)
		{putchar(48 + number); }
	}
	putchar('\n');
	return (0);
}
