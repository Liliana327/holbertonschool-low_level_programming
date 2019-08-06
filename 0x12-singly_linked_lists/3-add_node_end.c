#include "lists.h"

/**
 * _strlen - string
 * @s: string to be calculated
 * Return: longt
 */
int _strlen(const char *s)
{
	int longt = 0;

	while (s[longt] != '\0')
		longt++;
	return (longt);
}

/**
 * new_node - creates a new node
 * @s: string to be put in node
 * Return: add_node
 */
list_t *new_node(const char *s)
{
	list_t *add_node;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);
	add_node->str = strdup(s);
	add_node->len = _strlen(s);
	add_node->next = NULL;
	return (add_node);
}

/**
 * add_node_end - adds node
 * @head: pointer to pointer
 * @str: string to be put in new node
 * Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end, *tim = *head;

	if (head == NULL)
		return (NULL);
	node_end = new_node(str);
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
