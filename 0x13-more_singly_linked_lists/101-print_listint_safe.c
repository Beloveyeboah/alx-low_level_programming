#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - prints the number of unique nodes
 * @head: A pointer to the head of
 *
 * Return: alwaays
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cat, *fun;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	while (fun)
	{
		if (cat == fun)
		{
			cat = head;
			while (cat != fun)
			{
				nodes++;
				cat = cat->next;
				fun = fun->next;
			}
			cat = cat->next;
			while (cat != fun)
			{
				nodes++;
				cat = cat->next;
			}
			return (nodes);
		}
		cat = cat->next;
		fun = fun->next;
	}
	return (0);
}


/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, abc;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (abc = 0; abc < nodes; abc++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
