#include "lists.h"

/**
 * sum_dlistint - sums the list
 * @head: the pointr
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	if (head)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}
	return (sum);
}
