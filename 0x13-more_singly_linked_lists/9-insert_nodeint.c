#include "lists.h"

/**
 * insert_nodeint_at_index - insert_nodeint_at_index write the list
 *
 * @head: pointer
 *
 * @n: the interger
 *
 * @idx: the index of the list
 *
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *sun, *cat = *head;
	unsigned int fun;

	sun = malloc(sizeof(listint_t));
	if (sun == NULL)
		return (NULL);
	sun->n = n;
	if ((idx == 0))
	{
		sun->next = cat;
		*head = sun;
	}
	for (fun = 0; fun < (idx - 1); fun++)
	{
		if (cat == NULL || cat->next == NULL)
			return (NULL);
		cat = cat->next;
	}
	sun->next = cat->next;
	cat->next = sun;
	return (sun);
}
