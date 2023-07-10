#include "main.h"

/**
 * append_text_to_file - use to append text into a file
 *
 * @filename: the name of the file
 *
 * @text_content: the content to written
 *
 * Return: the pointer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	int w;
	int tot;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (tot = 0; text_content[tot];)
			tot++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, tot);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
