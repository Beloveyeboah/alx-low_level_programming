#include <unistd>

/**
 * _putchar - writes
 * @c: the
 * Return: nothing
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
