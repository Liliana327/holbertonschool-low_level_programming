#include "sort.h"
/**
* insertion_sort_list - Sort a doubly linked list.
* @list: ready to order
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *next = NULL;

		if (list  == NULL)
		if (*list == NULL)
		if ((*list)->next == NULL)
		return;

	temp = *list;
		while (temp->next)
		{
		next = temp->next;
		sorted_insert(list, next);
		temp = next;
		}
}

/**
* sorted_insert - function to insert a new node in sorted way in
* a sorted doubly linked list
* @list: ready to order
* @node:  the node to be compared
*/
void sorted_insert(listint_t **list, listint_t *node)
{
	listint_t *previous = NULL, *double_prev = NULL, *double_next = NULL;

	previous = node->prev;

	while (previous)
	{
		if (previous->n > node->n)
			{
			double_prev = previous->prev;
			double_next = node->next;
			node->next = previous;
			previous->prev = node;
				if (!double_prev)
				{
				*list = node;
				(*list)->prev = NULL;
				}
				else
				{
				node->prev = double_prev;
				double_prev->next = node;
				}
				if (double_next)
				{
				previous->next = double_next;
				double_next->prev = previous;
				}
				else
				previous->next = NULL;
				print_list((const listint_t *)*list);
	}
			else
			return;
			previous = node->prev;
	}
}
