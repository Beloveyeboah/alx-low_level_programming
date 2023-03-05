#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the
 * @c: the character to be primted
 * Return: 1
 * On error: -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
