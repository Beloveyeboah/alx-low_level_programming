#include "main.h"
/**
 * _strncat - _strncat function joints two strings
 *
 * @dest: copy to
 *
 * @src: copy from
 *
 * @n: number of char
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (0);
}
