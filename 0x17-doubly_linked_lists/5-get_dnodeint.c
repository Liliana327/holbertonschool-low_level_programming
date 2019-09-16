#include "lists.h"

/**
 * get_dnodeint_at_index - returns the the data of the nth elements
 * @head: pointer to head node
 * @index: the index
 * Return: the number the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cont = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (cont == index)
			return (current);
		cont++;
		current = current->next;
	}
	return (NULL);
}
