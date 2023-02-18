#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints out all single digit numbers of base 10
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char number;

	for (number = 0; number >= 10; number++)
	{putchar(number); }
	putchar('\n');
	return (0);
}
