#include "main.h"

/**
 * argstostr - argstostr write
 * @ac: take
 * @av: take
 * Return: thearray
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int len, i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
