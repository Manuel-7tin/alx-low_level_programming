#include "main.h"

/**
 * append_text_to_file - apppeds text to a given file
 *
 * @filename: The file to be appended to
 * @text_content - Null terminated string to be appended
 *
 * Return: (int) 1if succesful -1 if it dfails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, nb;

	if (filename == NULL)
		return (-1);
	else if (text_content == NULL)
		text_content = "";
	file = open(filename, O_RDWR | O_APPEND);
	nb = write(file, text_content, strlen(text_content));
	close(file);
	if (file == -1 || nb == -1)
		return (-1);
	return (1);
}
