#include "lists.h"

/**
 * list_len - get the number of elements
 * @h: pointer the list the arguments
 * Return: ct
 */
size_t list_len(const list_t *h)
{
	int ct = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		ct++;
		h = h->next;
	}
	ct++;
	return (ct);
}
