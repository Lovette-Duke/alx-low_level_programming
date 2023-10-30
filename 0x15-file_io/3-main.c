#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: result
 */

int main(int argc, char **argv)
{
	int result = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	result = cp_file(argv[1], argv[2]);
	if (result == 0)
		printf("File copied successfully.\n");
	return (result);
}
