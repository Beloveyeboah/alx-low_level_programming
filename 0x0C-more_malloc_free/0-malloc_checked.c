#include "main.h"

/**
 * malloc_checked - check areay
 * @b: the
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
