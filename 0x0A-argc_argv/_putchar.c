#include <unistd.h>

/**
 * _putchar - _putchar writes
 *
 * @c: the character
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
