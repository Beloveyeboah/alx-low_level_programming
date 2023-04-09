#include "main.h"

/**
 * flip_bits - flip_bits flibs a bit
 *
 * @n: the interger
 *
 * @m: second int
 *
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sun;
	unsigned long int r;

	sun = n ^ m;
	r = 0;

	while (sun > 0)
	{
		r += (sun & 1);
		sun >>= 1;
	}
	return (r);
}
