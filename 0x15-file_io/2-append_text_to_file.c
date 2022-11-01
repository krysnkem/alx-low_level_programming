#include "main.h"
#include <string.h>


/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to the text content that should
 * be appended to the file
 *
 * Return: 1 (success) or -1 (faliure)
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_op;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_op = write(fd, text_content, strlen(text_content) - 2);
		if (write_op < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
