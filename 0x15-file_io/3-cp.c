#include "main.h"

/**
 * argc_check - checks for the argument count
 * @argc: argument count
 *
 * Return: void
 */
void argc_check(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * from_check - checks the existence of source file
 * @check: checks true or false
 * @file_from: source file name
 * @from_fd: file descriptor of file_from, or -1
 * @to_fd: file descriptor of file_to, or -1
 *
 * Return: void
 */
void from_check(ssize_t check, char *file_from, int from_fd, int to_fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		if (from_fd != -1)
			close(from_fd);
		if (to_fd != -1)
			close(to_fd);
		exit(98);
	}
}

/**
 * to_check - checks that the destination file is created and can be written to
 * @check: checks true or false
 * @file_to: destination file name
 * @from_fd: file descriptor of source file, or -1
 * @to_fd: file descriptor of destination file, or -1
 *
 * Return: void
 */
void to_check(ssize_t check, char *file_to, int from_fd, int to_fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		if (from_fd != -1)
			close(from_fd);
		if (to_fd != -1)
			close(to_fd);
		exit(99);
	}
}

/**
 * fd_check - checks that file descriptors are closed
 * @check: checks true or false
 * @fd: file descriptor
 *
 * Return: void
 */
void fd_check(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, to_close, from_close;
	ssize_t len_r, len_w;
	char buffer[1024];
	mode_t file_perm;

	argc_check(argc);
	from_fd = open(argv[1], O_RDONLY);
	from_check((ssize_t)from_fd, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	to_check((ssize_t)to_fd, argv[2], from_fd, -1);
	len_r = 1024;
	while (len_r == 1024)
	{
		len_r = read(from_fd, buffer, 1024);
		from_check(len_r, argv[1], from_fd, to_fd);
		len_w = write(to_fd, buffer, len_r);
		if (len_w != len_r)
			len_w = -1;
		to_check(len_w, argv[2], from_fd, to_fd);
	}
	to_close = close(to_fd);
	from_close = close(from_fd);
	fd_check(to_close, to_fd);
	fd_check(from_close, from_fd);
	return (0);
}
