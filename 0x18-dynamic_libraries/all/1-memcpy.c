#include "main.h"

/**
 * _memcpy - _memcpy function copies
 *
 * @dest: copy to
 *
 * @src: copy from
 *
 * @n: number
 *
 * Return: copy momemory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
