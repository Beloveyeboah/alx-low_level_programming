#include <stdio.h>

void _attribute_((constructor)) hare(void);

/**
 * hare - prints string
 *
 * Return: nothing
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
