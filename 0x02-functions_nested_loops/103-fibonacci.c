#include <stdio.h>
/**
 * main - find and printsthe sum of the even values
 *
 * followed by a new line
 *
 * Return:alwys 0
 */
int main(void)
{
	int i;

	unsighed long int j, s, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;
	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
			k = next;
		}
		printf("%lu\n", sum);
		return (0);
}
