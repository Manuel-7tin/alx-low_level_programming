#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints addition of arguments
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: (0) if successful (1) if not
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("%i\n", 0);
			return (1);
		} else if (sizeof(atoi(argv[i]) < 4 || i != 0))
		
			printf("Eor\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
