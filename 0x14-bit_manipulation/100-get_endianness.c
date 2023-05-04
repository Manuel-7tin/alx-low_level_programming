#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Description: Checks the endianess of a system
 *
 * Return: 0 if big endian and 1 if little
 */

int get_endianness(void)
{
	int n = 1;
	char *c = (char *)&n;

	return (*c & 1);
}
