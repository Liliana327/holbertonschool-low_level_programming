#include "lists.h"

/**
 * get_nodeint_at_index - return the node a listint_t linked list
 * @head: pointer
 * @index: the linked list
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ct = 0;
	listint_t *tem = head;

	if (head == NULL)
		return (0);
	while (tem != NULL)
	{
		if (ct == index)
			return (tem);
		ct++;
		tem = tem->next;
	}
	return (NULL);
}

