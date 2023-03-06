#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 *
 * @dest: The memory to be copied into
 * @src: The memory to copy from
 * @n: The number of bytes to be copied
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
