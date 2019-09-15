#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of doubly linked list
 * @head: double pointer
 * @n: number to be added to the new node
 * Return: new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	if (head == NULL)
		return (NULL);
		new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
		new->n = n;
		new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
		temp->next = new;
		new->prev = temp;
	return (*head);
}
