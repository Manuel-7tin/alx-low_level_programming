#include <stdio.h>

/*Prints data type sizes*/

int main(void)
{

	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (signed long)sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", (signed long)sizeof(long long));
	printf("Size of a float: %d byte(s)\n", (signed long)sizeof(float));
}
