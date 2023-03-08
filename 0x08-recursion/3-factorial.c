#include "main.h"

/**
 * factorial - factorial functin writes
 *
 * @n: the nber
 *
 * Return: if
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
