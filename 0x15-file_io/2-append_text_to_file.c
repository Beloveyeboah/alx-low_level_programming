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
	if (text_content 
