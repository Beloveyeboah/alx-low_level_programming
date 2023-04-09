#include "main.h"

/**
 * set_bit - set_bit sets tje value to 1
 *
 * n: the pointet
 *
 * @index: thr index
 *
 * Returm: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) <= index)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
