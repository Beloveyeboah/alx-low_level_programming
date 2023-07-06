#include "main.h"
#include <math.h>
#include <string.h>

/**
 * binary_to_uint - prints into its binary form
 * @b: the char to be converted
 * Return: binary number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int con = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		con = 2 * con + (b[i] - '0');
	}
	return (con);
}
