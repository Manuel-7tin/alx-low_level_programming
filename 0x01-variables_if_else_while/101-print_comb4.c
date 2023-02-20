#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of 3 digits number
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int rounds, num1, num2, num3;

	rounds = 9;
	num1 = 0;
	while (rounds != 0)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar(48 + num1);
				putchar(48 + num2);
				putchar(48 + num3);
				if (rounds != 1)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		num1++;
		rounds--;
	}
	putchar('\n');
	return (0);
}
