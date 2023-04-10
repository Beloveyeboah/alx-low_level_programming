#include "main.h"

/**
 * read_textfile - read_textfile writes to a file
 *
 * @filenmae - the file to be written
 *
 * @letters - the letter
 *
 * Return - 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *omo;
	ssize_t ak, mk, w;

	if (filename == NULL)
	{
		return (0);
	}
	omo = malloc(sizeof(char) * letters);
	if (omo == NULL)
	{
		return (0);
	}
	ak = open(filename, O_RDONLY);
	mk = read(ak, omo, letters);
	w = write(STDOUT_FILENO, omo, mk);

	if (ak == -1 || w == -1 || mk == -1 || w == mk)
	{
		free(omo);
		return (0);
	}
	free(omo);
	close(ak);
	return (w);
}
