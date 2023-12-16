#include <stdio.h>
/**
  * main - entry to the programme
  * Return: 0
  */
int main(void)
{
        int i;
        char *a = "FizzBuzz";
        char *b = "Fizz";
        char *c = "Buzz";


        for (i = 1; i < 101; i++)
        {
                if (i % 3 == 0  && i % 5 == 0)
                {
                        printf("%s ", a);
                }
                else if (i % 3 == 0)
                {
                        printf("%s ", b);
                }
                else if (i % 5 == 0)
                {
                        printf("%s ", c);
                }
                else
                        printf("%d ", i);
        }
        printf("\n");
        return (0);
}
