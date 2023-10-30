#include "main.h"

int cp_contents(int from, int to);

/**
 * cp_file -
 * @file_from:
 * @file_to:
 * Return:
 */

int cp_file(char *file_from, char *file_to)
{
	int from, to, result;

	if (file_from == NULL || file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	from = open(file_from, O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}

	to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(from);
		return (99);
	}

	result = cp_contents(from, to);

	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		return (100);
	}

	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		return (100);
	}

	return (result);
}

/**
 * cp_contents - 
 * @from:
 * @to:
 * Return:
 */

int cp_contents(int from, int to)
{
	ssize_t r, w;
	char buffer[1024];

	r = read(from, buffer, sizeof(buffer));
	while (r > 0)
	{
		w = write(to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file descriptor %d\n", to);
			return (99);
		}
		r = read(from, buffer, sizeof(buffer));
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file descriptor %d\n", from);
		return (100);
	}

	return 0;
}
