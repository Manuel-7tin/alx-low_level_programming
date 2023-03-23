#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - A mini calculator function
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: result of calculation
 */

int main(int argc, char *argv[])
{
	char *op;
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if (!*get_op_func(op))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func(op))(n1, n2));
	return (0);
}
