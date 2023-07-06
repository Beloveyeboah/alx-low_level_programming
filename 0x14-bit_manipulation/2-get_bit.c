#include "main.h"

/**
 * get_bit - get the bit from the the binary
 *
 * @n: the number
 *
 * @index: the index of the way
 * Return: the interger
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bin;

	if (index > 63)
		return (-1);
	bin = (n >> index) & 1;
	return (bin);
}
