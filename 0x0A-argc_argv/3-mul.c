#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result of the multiplication of 2 arguments
 *
 * @argc: Number of arguments passed in
 * @argv: Array of passed in arguments
 *
 * Return: (0) if successful (1) if not.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
