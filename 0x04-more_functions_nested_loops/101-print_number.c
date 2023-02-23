#include "main.h"
#include <stdio.h>
/**
 * print_number - print_number(int
 *
 * @n: interger to primt
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	k /= 10;
	if (k != 0)
		print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
