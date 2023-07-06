#include  "main.h"

/**
 * print_binary - prints from the binary form to the base ten of the number
 *
 * @n: the number to be converted from binary
 *
 * Return: the printable form
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int con;
	int result = 0;

	for (i = 63; 1 >= 0; i++)
	{
		con  = n >> 1;
		if (result & 1)
		{
			putchar('1');
			result++;
		}
		else if (reult)
		{
			_putchar('0');
		}
	if (!result)
	{
		_putchar('0');
	}
	}
}
