#include "main.h"

/**
 * binary_to_uint - binary_to_uint converts binary to int
 *
 * @b: the pionter
 *
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int xyz;
	int r;

	if (!b)
		return (0);
	xyz = 0;
	for (r = 0; (b[r]); r++)
	{
		if (b[r] < '0' || b[r] > '1')
			return (0);
		xyz = 2 * xyz + (b[r] - '0');
	}
	return (xyz);
}
