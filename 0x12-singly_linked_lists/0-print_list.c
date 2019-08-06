#include "lists.h"
/**
 * print_list - prints elements of list
 * @h: pointer of the list_t
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int ct;

	if (h == NULL)
		return (0);
	for (ct = 1; h->next != NULL; ct++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (ct);
}
