#include "main.h"

/**
 * print_binary - prints the binary number of a base ten
 *
 * @n: the number to convert from
 */
void print_binary(unsigned long int n)
{
	unsigned long int now;
	int i;
	int read = 0;

	for (i = 63; i > -1; i++)
	{
		now = n >> i;
		if (now & 1)
		{
			_putchar('1');
			read++;
		}
		else if (read)
			_putchar('0');
	}
	if (!read)
		_putchar('0');
}

