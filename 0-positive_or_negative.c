#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'This program puts a string to the standard output'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{printf("%i is positive", n)}
	else if (n < 0)
	{printf("%i is negative", n)}
	else
	{printf("%i is zero", n)}
	return (0);
}
