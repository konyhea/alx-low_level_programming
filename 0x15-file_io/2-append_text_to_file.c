#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure, if file doesn't exit return -1
 * if noth
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;
	int n_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);


	if  (text_content != NULL)
	{
		for (n_len = 0; text_content[n_len];)
			n_len++;
	}

	n_written = write(fd, text_content, n_len);

	if (n_written == -1)
	return (-1);

	close(fd);

	return (1);
}
