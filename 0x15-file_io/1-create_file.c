#include "main.h"

/**
 * create_file - creates a file as the name implies
 * @filename: the name ofthe file to be created
 * @text_content: the string to write to the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int w;
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			i++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file, text_content, i);

	if (file == -1 || w == -1)
		return (-1);

	close(file);
	return (1);
}
