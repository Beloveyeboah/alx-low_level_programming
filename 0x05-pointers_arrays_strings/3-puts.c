#include "main.h"
/**
 * _puts - _puts prints a string
 *
 * @str: strimg to be  printes
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
