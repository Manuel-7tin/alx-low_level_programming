#include "main.h"

/**
 * main - THe main function
 *
 * Description: This program copies the content from a file to another
 * @ac: argument count
 * @av: List of arguments
 *
 * Return: (int) 0 if successful
 */

int main(int ac, char **av)
{
	int file_from, file_to, fr, fw, cl, buf_len = 1024;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	fr = read(file_from, buf, 1024);
	if (file_from == -1 || fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fr < buf_len)
		buf_len = fr;
	file_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	fw = write(file_to, buf, buf_len);
	if (file_to == -1 || fw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	cl = close(file_from);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}
	cl = close(file_to);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}
	return (0);
}
