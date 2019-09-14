#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int cont = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		cont++;
		h = h->next;
	}
	return (cont);
}
