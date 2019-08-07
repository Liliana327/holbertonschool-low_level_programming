#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: double pointer
 * @idx: insert new node
 * @n: data
 * Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert_node, *tem;
	unsigned int ct;

	if (head == NULL)
		return (NULL);

	insert_node = malloc(sizeof(listint_t));

	if (insert_node == NULL)
		return (NULL);

	insert_node->n = n;
	insert_node->next = NULL;
	if (idx == 0)
	{
		insert_node->next = *head;
		*head = insert_node;
		return (insert_node);
	}
	else
	{
		ct = 1;
		tem = *head;
		while (tem != NULL)
		{
			if (ct == idx)
			{
				insert_node->next = tem->next;
				tem->next = insert_node;
				return (insert_node);
			}
			tem = tem->next;
			ct++;
		}
	}
	return (NULL);
}
