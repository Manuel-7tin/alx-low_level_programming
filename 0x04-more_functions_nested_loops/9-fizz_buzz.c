#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Fizz buzz exercise
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int number;

	for (number = 1; number < 101; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
			printf("Fizz buzz");
		else if (number % 3 == 0)
			printf("Fizz");
		else if (number % 5 == 0)
			printf("Buzz");
	}
}
