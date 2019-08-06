#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer to list to be freed
 * Return: (void)
 */
void free_list(list_t *head)
{
	list_t *tim;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tim = head->next;
		free(head->str);
		free(head);
		head = tim;
	}
	free(head->next);
	free(head->str);
	free(head);
}
