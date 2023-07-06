#include "main.h"

/**
 * flip_bits - returns the number of the bits
 * @n: the pointer
 *
 * @m: the number
 * Return: the bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int read = 0;
	unsigned long int now;
	unsigned long int next = n ^ m;

	for (i = 63; i >= 0; i++)
	{
		now = next >> 1;
		if (now & 1)
			read++;
	}
	return (now);
}
