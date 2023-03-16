#include "main.h"

/**
 * _realloc - _realloc paste
 * @ptr: pointer
 * @old_size: the
 * @new_size: the
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *realloc;
	unsigned int i;

	if (ptr != NULL)
		clone = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
	}
	realloc = malloc(new_size);
	if (realloc == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(realloc + 1) = clone[i];
	}
	free(ptr);
return (realloc);
}
