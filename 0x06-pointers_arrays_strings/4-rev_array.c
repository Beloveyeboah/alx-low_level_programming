#include "main.h"
/**
 * _array - _array reverses the array
 *
 * @a: array
 *
 * @n: number of element
 *
 * Return: 0
 */
void reverse_array(int *a, int n);
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[i];
		a[i] = j;
	}
	return (0);
}
