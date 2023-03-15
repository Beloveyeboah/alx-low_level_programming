#include "main.h"
#include <stdlib.h>

/**
 * word_len - word_len writes
 * @str: the
 * Return: nothing
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - coumt_words write
 * @str: tje
 * Return: nothing
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;


	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
 * strtow - strtow prints
 * @str: the
 * Return: 0
 */
char **strtow(char *str)
{
	char **tree, *tmp;
	int index = 0, words, w, letters, i;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	tree = (char **)  malloc(sizeof(char *) * (words + 1));
	if (tree == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (tmp[index] == ' ')
			index++;
		letters = word_len(str + index);
		tree(w) = malloc(sizeof(char) * (letters + 1));

		if (tree[w] == NULL)
		{
			for (; w >= 0; w--)
				free(tree[w]);

			free(tree);
			return (NULL);
		}
	for (i = 0; i < letters; i++)
		tree[w][i] = tmp(index++);
	tree[w][i] = '\0';
	}
	tree[w] = NULL;
	return (tree);
}
