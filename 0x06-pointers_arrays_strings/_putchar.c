#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - _putchar writes
 * @c: char to ne printed
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
