#include "main.h"

/**
 * create_file - a function that create a file
 * @filename: name of the file to be created
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure print (file can not be created,
 * file can not be written, write “fails”)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;
	int n_len;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		for (n_len = 0; text_content[n_len]; )
			n_len++;
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}


	n_written = write(fd, text_content, n_len);

	if (n_written == -1)
	return (-1);

	close(fd);

	return (1);

}
