#include "main.h"
#include <stdlib.h>

/**
 * word_len - word_len writes
 * @str; tje
 * Return: nothing
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while(*(str + index) && *(str + index) != ' ')
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
int count_words(char str)
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
