#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX output
 * @filename: the pointer to the file
 * @letters: the number of letters that should be read and printed
 * Return: the number of letters it read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t r, w;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(file, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(file);
	return (w);
}
