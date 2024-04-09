#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * linear_search - perform searching using the lineal algorithm
 * @array: the name of the array
 * @size: size of the array
 * @value: the item to be search in the array
 * Return: the idx if found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);


		if (array[i] == value)
		{
			return (i);
		}
		i++;

	}
	return (-1);
}
