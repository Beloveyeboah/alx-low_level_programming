#include "main.h"

/**
 * get_bit - return the bit of the binary
 *
 * @n: the number
 *
 * @index: the index of the array
 *
 * Return: the ind
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if ((n & mask) != 0)
	{
		return (1);
	}
	return (0);
}
