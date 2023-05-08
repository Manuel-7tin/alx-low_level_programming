#include "main.h"

/**
 * create_file - Creates a file containing text
 *
 * @filename: The name of the file tro be created
 * @text_content: The content to be written into the file
 *
 * Return: (int) 1 if successful -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int file, nb;

	if (filename == NULL)
		return (-1);
	else if (text_content == NULL)
		text_content = "";
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	nb = write(file, text_content, strlen(text_content));
	close(file);
	if (file == -1 || nb == -1)
		return (-1);
	return (1);
}
