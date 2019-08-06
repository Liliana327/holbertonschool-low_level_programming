#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: double pointer
 * Return: (void)
 */
void free_listint2(listint_t **head)
{
	listint_t *tim;

	if (*head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tim = (*head)->next;
		free(*head);
		*head = tim;
	}
	free((*head)->next);
	free(*head);
	*head = NULL;
}
