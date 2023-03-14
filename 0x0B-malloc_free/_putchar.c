#include <unistd.h>

/**
 * _putchar - _putchar writes
 * @c: the char
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
