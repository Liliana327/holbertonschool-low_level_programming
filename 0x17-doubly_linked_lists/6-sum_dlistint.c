#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a doubly linked list
 * @head: pointer to the head node
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
