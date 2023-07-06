#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char to the screen
 * @n: the char to be writtrn
 */
int _putchar(char n)
{
	return (write(1, &n, 1));
}
