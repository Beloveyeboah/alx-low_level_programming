#include "main.h"

/**
 * _putchar - prints
 * @c: the char
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
