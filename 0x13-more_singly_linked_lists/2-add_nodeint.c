#include "lists.h"

/**
 * add_nodeint - adds new node
 * @head: double pointer
 * @n: number to put in node
 * Return: head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
	{
	new_node->n = n;
        new_node->next = *head;
        *head = new_node;
	}
	return (*head);
}
