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
	int number;

	for (number = 0; number < 10; number++)
	{printf("%i",  number); }
	putchar('\n');
	return (0);
}
