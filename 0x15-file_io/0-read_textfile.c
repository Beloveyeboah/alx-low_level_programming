#include "main.h"

/**
 * read_textfile - read_textfile writes to a file
 *
 * @filename: the file to be written
 *
 * @letters: the letter
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *omo;
	ssize_t ak, mk, w;

	if (filename == NULL)
		return (0);
	omo = malloc(sizeof(char) * letters);
	ak = open(filename, O_RDONLY);
	if (ak == -1)
		return (0);
	mk = read(ak, omo, letters);
	w = write(STDOUT_FILENO, omo, mk);
	free(omo);
	close(ak);
	return (w);
}
