#include <unistd.h>

/**
 * _putchar - _putchar prints char c
 *
 * @c: char to be ptinted
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

