#include "main.h"
/**
 * _strcpy - _strcpy prints copies of elements
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: strig
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
