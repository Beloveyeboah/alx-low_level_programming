#include "main.h"

/**
 * _putchar - _putchar write a char
 * @c: the char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
