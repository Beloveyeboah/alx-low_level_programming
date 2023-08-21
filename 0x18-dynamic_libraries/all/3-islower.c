#include "main.h"
/**
 * _islower - check if char is lowercase
 *
 * @c: is char to be checked
 *
 * Return: 1 if the char is lowercase, otherwisw 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
