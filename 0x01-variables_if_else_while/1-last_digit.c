#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main- Entry point
 *
 * description: power of
 *
 * Return:0 (PASS)
 */
int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	if (y > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, y);
	}
	else if (y < 6 && y != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, y);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", n, y);
	}
	return (0);
}
