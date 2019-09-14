#include "lists.h"

/**
 * dlistint_len - prints number the elements of a doubly linked list
 * @h: pointer
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int cont = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
