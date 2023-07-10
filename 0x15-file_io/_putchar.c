#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character into the the computer screens
 * @c: the character to be printed into the screen
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
