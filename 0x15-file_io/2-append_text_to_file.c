#include "main.h"

/**
 * append_text_to_file - append_text_to_file wappends a file
 *
 * @filename: the nmae of tje file
 *
 * @content: the content of the file
 *
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int m;
	int k;
	int fun;

	fun = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (fun = 0; text_content[fun];)
			fun++;
	}
	m = open(filename, O_WRONLY | O_APPEND);
	k = write(m, text_content, fun);
	if (m == -1 || k == -1)
		return (0);
	close(m);
	return (0);
}
