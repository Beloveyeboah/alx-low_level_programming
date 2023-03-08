#include "main.h"

/**
 * _sqrt_recursion - _sqrt_recursion function write
 * @n: integer
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - actual_sqrt_recursion fuction wrote
 *
 * @n: integer
 *
 * @i: iterator
 *
 * Return: number
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (actual_sqrt_recursion(n, i + 1));
}
