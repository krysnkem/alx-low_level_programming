#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 * output
 * @filename: pointer to the filename
 * @letters: the number of letters to print
 *
 * Return: 0 (failure) or value of @letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t read_result, write_result;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	read_result = read(fd, buff, letters);
	if (read_result < 0)
	{
		close(fd);
		free(buff);
		return (0);
	}
	write_result = write(1, buff, read_result);
	if (write_result < 0)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	free(buff);
	return (write_result);
}
