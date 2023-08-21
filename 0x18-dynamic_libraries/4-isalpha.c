#include "main.h"
/**
 * _isalpha - check if alphabetic character
 *
 * @c: the character to be checked
 *
 *Return: if c is a letter l, otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
