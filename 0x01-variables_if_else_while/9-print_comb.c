#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints base 10 numbers seperated by a comma
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(48 + number);
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
