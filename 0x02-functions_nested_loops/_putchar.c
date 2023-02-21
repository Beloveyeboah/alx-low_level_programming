#include <unistd.h>
/**
 * write _putchar - write thr character c  to stdout
 * @c: The character to print
 * On error, -1 is returned, and errno os set appropriately.
 *
 * Return: 1
 */
int _putchar(char c)
{
	return 
		(write(1, &c, 1));
}
