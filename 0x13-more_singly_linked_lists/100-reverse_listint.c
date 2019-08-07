#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: double pointer
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *m = NULL, *tem = *head, *next;

	while (tem != NULL)
	{
		next = tem->next;
		tem->next = m;
		m = tem;
		tem = next;
	}
	*head = m;
	return (*head);
}
