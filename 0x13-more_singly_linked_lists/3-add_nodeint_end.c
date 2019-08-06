#include "lists.h"

/**
 * new_node - creates new node
 * @num: number to be put in node
 * Return: new pointer
 */
listint_t *new_node(const int num)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));

	if (add_node == NULL)
		return (NULL);

	add_node->n = num;
	add_node->next = NULL;
	return (add_node);
}

/**
 * add_nodeint_end - adds a new node  for list
 * @head: double pointer
 * @n: number
 * Return: head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end, *tim = *head;

	if (head == NULL)
		return (NULL);
	node_end = new_node(n);
	if (node_end == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = node_end;
		return (*head);
	}
	while (tim->next != NULL)
		tim = tim->next;
	tim->next = node_end;
	return (*head);
}
