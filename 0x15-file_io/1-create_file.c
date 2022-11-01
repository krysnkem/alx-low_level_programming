#include "main.h"
#include <errno.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to the string which will be written into the file
 *
 * Return: -1 (failure) or 1 (success)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_op;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	write_op = write(fd, text_content, strlen(text_content));
	close(fd);
	if (write_op < 0)
		return (-1);
	return (1);

}
