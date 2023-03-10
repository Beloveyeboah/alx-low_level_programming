#include "main.h"

/**
 * _isupper - _isupper write uppercase letters
 *
 * @c: char to check
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
