#include "main.h"

/**
 * is_prime_number - is_prime_number function write
 *
 * actual_prime - actual_prime funtion wite
 *
 * @n: nber
 *
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (actual_prime(n, n - 1));
}

/**
 * actual_prime - actual_prime writw
 *
 * @n: number
 *
 * @i: itilator
 *
 * Return: 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	else
		return (actual_prime(n, i - 1));
}

