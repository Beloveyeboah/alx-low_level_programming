#include "main.h"

/**
 * append_text_to_file - appends text into a file
 * @filename: filename of the file
 * @text_content: text to be added
 *
 * Return: 1 if the file exists. -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int buf;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (buf = 0; text_content[buf]; buf++)
			;

		rwr = write(fd, text_content, buf);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
