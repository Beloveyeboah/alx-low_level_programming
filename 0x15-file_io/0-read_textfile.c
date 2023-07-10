#include "main.h"

/**
 * read_textfile - read a text from a file and prints on the terminal
 *
 * @filename: the name of the file to be which the the texrt will be read from
 *
 * @letters: the characters to read from the file
 *
 * Return: the text
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *stream;
	ssize_t t;
	ssize_t w;
	ssize_t fd;

	fd = open(filename, O_RDONLY);
	if  (fd == -1)
	{
		return (0);
	}
	stream = malloc(sizeof(char) * letters);
	t = read(fd, stream, letters);
	w = write(STDOUT_FILENO, stream, t);

	free(stream);
	close(fd);
	return (w);
}
