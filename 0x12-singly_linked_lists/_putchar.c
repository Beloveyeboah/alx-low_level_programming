#include "lists.h"

#include <unistd.h>

/**
 * _putchar - _putchar write
 * @c: char
 * Return: p
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
