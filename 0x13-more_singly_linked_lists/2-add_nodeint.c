#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add_nodeint adds all nodes
 *
 * @head: pointer
 *
 * @n: interger
 *
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *sun;

	sun = malloc(sizeof(listint_t));
	if (sun == NULL)
		return (NULL);
	sun->n = n;
	sun->next = *head;
	*head = sun;
	return (sun);
}
