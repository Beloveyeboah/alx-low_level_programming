#include "main.h"
#include <unistd.h>
/**
 *_putchar - writes the character c to th stdout
 *
 * @c: the character to print
 *
 * Return:1 on success
 *
 * on erro : -1 is return and error os set appropriately
 */
int _putchar(char c)
{
	return (write(1 & c, 1));
}
