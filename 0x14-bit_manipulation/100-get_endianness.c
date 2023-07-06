#include "main.h"

/**
 * get_endianness - determines if a machine is endian
 *
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *p = (char *) &i;
	return (*p);
}
