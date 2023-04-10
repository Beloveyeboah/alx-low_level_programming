#include "main.h"

char *cope_buffer(char *file);
void close_file(int fd);

/**
 * cope_buffer - cope_buffer copies from onr file to another
 *
 * @file:  the int to receive
 *
 * Return: 0
 */
char *cope_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes
 *
 * @fd: the int
 *
 * Return: 0
 */
void close_file(int fd)
{
	int don;

	don = close(fd);
	if (don == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - main prints
 *
 * @argc: the number
 *
 * @argv: the arrays
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int to, vin;
	int from, sun;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp flie_from_to\n");
		exit(97);
	}
	buffer = cope_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	vin = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || vin == -1)
		{
			dprintf(STDERR_FILENO,
					"Erro: cant read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		sun = write(to, buffer, vin);
		if (to == -1 || sun == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		vin = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (vin > 0);
	free(buffer);
	close_file(from);
	return (0);
}
