#include "lists.h"

/**
 * delete_nodeint_at_index - delete_nodeint_at_index prints
 *
 * @head: the pointer
 *
 * @index: the imdex
 *
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *abc, *cat = *head;
	unsigned int fun;

	if (cat == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cat);
		return (1);
	}
	for (fun = 0; fun < (index - 1); fun++)
	{
		if (cat->next == NULL)
			return (-1);
		cat = cat->next;
	}
	abc = cat->next;
	cat->next = abc->next;
	free(abc);
	return (1);
}
