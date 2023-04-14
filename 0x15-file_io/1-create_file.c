#include "main.h"

/**
 * create_file - creates a file if nothing exit
 *
 * @filename: the file
 *
 * @text_content: the content of yhe file
 *
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int c;
	int fun;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (fun = 0; text_content[fun];)
			fun++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(fd, text_content, fun);

	if (fd == -1 || c == -1)
		return (-1);
	close(fd);

	return (1);
}
