#include "main.h"

/**
 * set_bit - prints bit into index
 *
 * @n: pointer of thee number
 *
 * @index: index of the bit
 *
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
