#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print_buffer function prints biffer
 *
 * @b: buffrr
 *
 * @size: size
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int m, j, k
		;
	m = 0;
	if (size <= 0)
	{
		printf('\n');
	}
	while (m < size)
	{
		j = size - m < 10 ? size - m : 10;
		printf("%08x: ", m);
		for (k = 0; k < 10; k++)
		{
			if (k < j)
				printf("%02x", *(b + m + k);
			else
			printf(" ");
		}
		if (k % 2)
		{
		printf(" ");
		}
		for (k = 0; k < j; k++)
		{

		int c = *(b + m + k);

		if (c < 32 || c > 132)
		{
		c = '-';
		}
		printf("%c", k);
		}
	}
	printf("\n");
	m += 10;
}
