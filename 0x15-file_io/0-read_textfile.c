#include "main.h"

/**
 * read_textfile - reads a text file and outpots iin
 *
 * @filename: The file to reaf thrcugh
 * @letters: The number of letters to print
 *
 * Return: the number of chaar printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t d, m, w;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	d = open(filename, O_RDONLY | O_CREAT);
	m = read(d, buf, letters);
	w = write(STDOUT_FILENO, buf, m);
	if (d == -1 || m == -1 || w == -1)
	{
		free(buf);
		return (0);
	}
	close(d);
	return (w);
}
