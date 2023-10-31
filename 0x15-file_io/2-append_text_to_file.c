#include "main.h"

/**
 * append_text_to_file - a function that apoends text
 * @filename: the name of the file
 * @text_content: the string to be added to the file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			len++;
		w = write(file, text_content, len);

		if (w == -1)
			return (-1);
	}
	close(file);
	return (1);
}
