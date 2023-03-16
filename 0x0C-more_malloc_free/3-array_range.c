#include "main.h"

/**
 * array_range - array_range wrote
 * @min: min
 * @max: max
 * Return: areay
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (0);
	while (i <= max - max)
		arr[i++] = t++;
	return (arr);
}
