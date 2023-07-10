#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

char *new_file(char *file);


/**
 * new_file - copies from a file into new
 *
 * @file: the pointer hold the content
 *
 * Return: the pointer to te file
 */
char *new_file(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n",
				file);
		exit(99);
	}
	return (buf);
}

void _closef(int fd);

/**
 * _closef - closes the fd
 *
 * @fd: the descriptor
 */
void _closef(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Erro: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy from a file to another file
 *
 * @argc: the number of agurments
 *
 * @argv: the array of pointer to the file
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int to;
	int from;
	int r;
	int w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = new_file(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file\n", argv[1]);
			free(buf);
			exit(98);
		}
		w = write(to, buf, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Erro: Can't write to\n", argv[2]);
			free(buf);
			exit(99);
		}
		r = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	     } while (r > 0);

		free(buf);
		_closef(from);
		_closef(to);

		return (0);
}
