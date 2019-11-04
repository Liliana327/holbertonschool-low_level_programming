#include "sort.h"
/**
* sorted_insert - function to insert a new node in sorted way in
* a sorted doubly linked list
* @list: ready to order
* @left: left the node to be compared
* @right: right the node to be compared
*/

void sorted_insert(listint_t *left, listint_t *right, listint_t **list)
{
	listint_t *node, *previous;

	node = left->prev;
	previous = right->next;
	if (node)
		node->next = right;
	else
		*list = right;
	if (previous)
		previous->prev = left;
		right->prev = node;
		left->next = previous;
		right->next = left;
		left->prev = right;
		print_list(*list);
}

/**
* insertion_sort_list - Sort a doubly linked list.
* @list: ready to order
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *nexts, *current;

	if (!list || !*list || !(*list)->next)
		return;

	current = *list;
	while (current && current->next)
	{
		if (current->n > current->next->n)
		{
			sorted_insert(current, current->next, list);
			nexts = current;
			current = current->prev;
			while (current && current->prev)
			{
				temp = current;
				if (temp->n < temp->prev->n)
					sorted_insert(temp->prev, temp, list);
				else
				break;
			}
			current = nexts;
		}
		else
			current = current->next;
	}
}
