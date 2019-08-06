#include "lists.h"

/**
 * _strlen - long string
 * @s: pointer
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
 * add_node - adds new node
 * @head: double pointer
 * @str: string to put in node
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	*head = new_node;
	return (*head);
}
