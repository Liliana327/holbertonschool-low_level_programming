#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the first node
 * Return: number
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	if (h == NULL)
		return (0);
	for (number = 0; h != NULL; number++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (number);
}
