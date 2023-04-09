#include "main.h"

/**
 * clear_bit - clear_bit clears the
 *
 * @n: the pointer
 *
 * @index: the imdex
 *
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) <= index)
		return (-1);
	*n &= ~ (1 << index);
	return (1);
}
