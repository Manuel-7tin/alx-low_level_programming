#include <stdio.h>

/**
 * main - A program that prints it's name
 *
 * @argc: The number of arguments
 * @argv: The arguments vector
 *
 * Return: (0) if successful
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
