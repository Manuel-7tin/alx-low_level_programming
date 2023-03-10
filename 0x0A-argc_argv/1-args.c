#include <stdio.h>

/**
 * main - Prints out the number of passed in arguments
 *
 * @argc: Number of arguments
 * @argv: Arguments passed in
 *
 * Return: (0) if successful (1) if not
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
