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
	unsigned int star;

	for (star = 0; n || m; n >>=  1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			star++;
	}
	return (star);
}
