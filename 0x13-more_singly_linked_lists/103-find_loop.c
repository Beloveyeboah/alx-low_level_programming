#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sun = head;
	listint_t *fat = head;

	if (!head)
		return (NULL);
	while (sun && fat && fat->next)
	{
		fat = fat->next->next;
		sun = sun->next;
		if (fat == sun)
		{
			sun = head;
			fat = fat->next;
		}
	}
	return (fat);
}

