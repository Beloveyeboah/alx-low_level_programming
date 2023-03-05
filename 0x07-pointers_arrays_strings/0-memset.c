#include "main.h"

/**
 * _memset - _memset function fill the
 *
 * @s: A pointeiir
 *
 * @b: the character to
 *
 * @n: the number
 *
 * description:  _memset over
 *
 * Return: A pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
