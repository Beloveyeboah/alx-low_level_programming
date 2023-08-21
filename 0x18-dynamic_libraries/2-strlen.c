#include "main.h"
#include <stdio.h>

/**
 * _strlen - _strlen function returns size of a string
 *
 * @s: string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

