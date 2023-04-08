#include "main.h"

/**
 * print_binary + prints the decimal of binary
 *
 * @n: the interger
 *
 * Return: anything
 */
void print_binary(unsigned long int n)
{
	if (n != 0 && n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
