#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * close_files - closes files using the file descriptors
 * @file_from_fd: from_file file descriptor
 * @file_to_fd: file to file descriptor
 */

void close_files(int file_from_fd, int file_to_fd)
{
	int close_file_from = close(file_from_fd);
	int close_file_to = close(file_to_fd);

	if (close_file_from == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_from_fd);
	if (close_file_to == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_to_fd);
	if (close_file_from == -1 || close_file_to == -1)
		exit(100);
}


/**
 * open_file_from - opens the file in file path
 * @path: the path of the file to open
 * @oflags: flags for opening the file
 * @file_from: name of the file
 *
 * Return: the file descriptor
 */

int open_file_from(const char *path, int oflags, char *file_from)
{
	int file_from_fd = open(path, oflags);

	if (file_from_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	return (file_from_fd);

}

/**
 * open_file_to - opens the file in file path
 * @path: the path of the file to open
 * @oflags: flags for opening the file
 * @file_to: name of the file
 * @mode: mode to open the file
 * @file_from_fd: file descriptor of the file to read from
 * @file_to: name of the file to open
 *
 * Return: the file descriptor
 */

int open_file_to(const char *path, int oflags, mode_t mode,
		int file_from_fd, char *file_to)
{
	int file_to_fd = open(path, oflags, mode);

	if (file_to_fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(file_from_fd);
		exit(99);
	}
	return (file_to_fd);

}

/**
 * main - Entry point
 * @ac: number of argument passed into the main function
 * @av: list of arguments passed into the the function
 *
 * Return: 0 (success)
 */
int main(int ac, char **av)
{
	char buffer[1024], *file_to, *file_from;
	int file_from_fd, file_to_fd;
	ssize_t read_op, write_op;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = av[1];
	file_to = av[2];

	file_from_fd = open_file_from(file_from, O_RDONLY, file_from);
	file_to_fd = open_file_to(file_to, O_CREAT | O_TRUNC | O_WRONLY
		| O_APPEND, 0664, file_from_fd, file_to);
	do {
		read_op = read(file_from_fd, buffer, 1024);
		if (read_op == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n",
					file_from);
			exit(98);
		}
		write_op = write(file_to_fd, buffer, read_op);
		if (write_op == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	} while (read_op != 0);
	close_files(file_from_fd, file_to_fd);
	return (0);

}
