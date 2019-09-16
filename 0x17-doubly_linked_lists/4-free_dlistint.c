#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head node
 * Return: (void)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head->next);
	free(head);
}
