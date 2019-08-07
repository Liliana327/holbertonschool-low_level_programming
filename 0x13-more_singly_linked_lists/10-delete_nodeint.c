#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: double pointer
 * @index: index at which node 
 * Return: (1);
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem = *head, *next;
	unsigned int ct;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tem->next;
		free(tem);
		return (1);
	}
	for (ct = 0; tem != NULL && ct < index - 1; ct++)
		tem = tem->next;
	if (tem == NULL || tem->next == NULL)
		return (-1);
	next = tem->next->next;
	free(tem->next);
	tem->next = next;
	return (1);
}
