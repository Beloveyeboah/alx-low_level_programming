#include "main.h"

/**
 * get_endianness - get_endianness checks the
 *
 * Return: 0
 */
int get_endianness(void)
{
	int r;
	char *e;

	r = 1;
	e = (char *)&r;
	if (*e == 1)
		return (1);
	return (0);
}
