#include <stdio.h>
#include "main"
/**
 * print_to_98_prints all natural numners from n to 98,
 * 
 * followed ny a new file
 *
 * @n: print from this numner
 */
void print_to_98(int n)
{
        int i;

        if (n < 98)
        {
                for (i = n; i <= 98; i++)
                {
                        printf("%d, ", i);
                }
                printf("\n");
        }
        else
        {
                for (i = n; i >= 99; i--)
                {
                        printf("%d, ", i);
                }
                _putchar('\n');
        }
}
