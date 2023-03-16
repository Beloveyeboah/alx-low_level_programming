#include <stdlib.h>

/**
 * _putchar - writes
 * @c: the
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
