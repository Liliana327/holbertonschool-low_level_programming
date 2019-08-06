#include "lists.h"
/**
 * pop_listint - deletes the node 
 * @head: double pointer of list
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *tem = *head;
	int data = 0;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	data = tem->n;
	*head = tem->next;
	free(tem);
	return (data);
}
