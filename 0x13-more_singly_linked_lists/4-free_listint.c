#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to list to be freed
 * Return: (void)
 */
void free_listint(listint_t *head)
{
	listint_t *tim;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tim = head->next;
		free(head);
		head = tim;
	}
	free(head->next);
	free(head);
}
