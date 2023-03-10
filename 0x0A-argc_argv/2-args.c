#include <stdio.h>

/**
 * main - Prints out all arguments passed into it.
 *
 * @argc: Number of arguments passed in
 * @argv: Array of passed in arguments
 *
 * Return: (0) if successful (1) if not
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
