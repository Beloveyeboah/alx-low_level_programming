#include "main.h"
/**
 *print_alphabet_x10- print_alpabet_x10
 *
 * Return: 0 ( success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			i++;
		}
	}
}
