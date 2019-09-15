#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a doubly linked list
 * @head: double pointer
 * @n: the number to be put into the new node
 * Return: new element or NULL if fail.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
		new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
		new->n = n;
		new->next = *head;
		new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
		*head = new;
	return (*head);
}
