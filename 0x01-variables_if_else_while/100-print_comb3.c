#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits number
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int rounds, num1, num2;

	rounds = 9;
	num1 = 0;
	num2 = 1;
	while (rounds != 0)
	{
		for (; num2 < 10; num2++)
		{
			putchar(48 + num1);
			putchar(48 + num2);
			if (rounds != 1)
			{
				putchar(',');
				putchar(' ');
			}
		}
		num1++;
		num2 = num1 + 1;
		rounds--;
	}
	putchar('\n');
	return (0);
}
