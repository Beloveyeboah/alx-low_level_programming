#include "main.h"

/**
 * create_file -  creates a file to the terminal
 *
 * @filename: the name of the file to be creadted
 *
 * @text_content: the content to be written
 *
 * Return: the content
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int tot;

	tot = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (tot = 0; text_content[tot];)
			tot++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, tot);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
