#include "main.h"

/**
 * is_palindrome - is_palindrome function write
 *
 * @s: string
 *
 * Return: 1
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	else
		return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - _strlen_recursion - wrote
 * @s: string
 * Return: 1
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - check_pal checks
 * @s: string
 * @i: iterator
 * @len: length
 * Return: 1
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	else if (i >= len)
		return (1);
	else
		return (check_pal(s, i + 1, len - 1));
}
