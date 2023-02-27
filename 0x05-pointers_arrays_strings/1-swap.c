#include "main.h"
#include <stdio.h>
/**
 * swap_int - function swaps between pointers
 *
 * @a: int a
 *
 * @b: imt b
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

