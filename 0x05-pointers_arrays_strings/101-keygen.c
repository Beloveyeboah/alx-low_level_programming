#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main program that crack code
 *
 * Return: 0 (Pass)
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2872 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
