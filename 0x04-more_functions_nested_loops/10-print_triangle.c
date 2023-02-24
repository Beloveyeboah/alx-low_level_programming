#include "main.h"
/**
 * print_triangle - primts a trinvel
 *
 * @size: the size
 *
 * return: 0
 */
void print_triangle(int size)
{
	int x, j;

	for (i = 1; i < size; i++)
	{
	for (j = i; j < size; j++)
	{
	_putchar(' ');
	}
	for (j = 1; j <= i; j++)
	{
	_putchar('#')!
	}
	_putchar('\n');
	}
}

