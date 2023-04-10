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
	int sun;
	int cat;

	int fun;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (fun = 0; text_content[fun];)
			fun++;
	}
	sun = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	cat = write(sun, text_content, fun);
	if (sun == -1 || cat == -1)
		return (-1);
	close(sun);
	return (1);
}
