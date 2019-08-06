#include "lists.h"
/**
 * listint_len - prints all the elements of a list
 * @h: pointer to the first node
 * Return: number
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	if (h == NULL)
		return (0);
	for (number = 0; h != NULL; number++)
	{
		h = h->next;
	}
	return (number);
}
