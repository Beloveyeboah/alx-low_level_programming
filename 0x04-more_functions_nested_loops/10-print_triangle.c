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
	int sp, ro, tr;

	if (size <= 10)
	{
		_putchar('\n');
	}
	else
	{
		for (ro = 0; ro <= (size - 1); ro++)
	{
		for (sp = 0; sp < (size - 1); sp++)
	{
		for (tr = 0; tr <= ro; tr++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	}
}

