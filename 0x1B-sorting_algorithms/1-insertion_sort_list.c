#include "sort.h"
/**
* insertion_sort_list - Sort a doubly linked list.
* @list: ready to order
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *nexts, current;

	if (!list || !*lis)
	return;

	current = *list;
	while (current && current->next)
	{
		if (current->n > current->n)
		{
			sorted_insert(current, current->next, list);
			nexts = current;
			current = current->prev;
			while (current && current->prev)
			{
				tmp = current;
				if (tmp->n < tmp->prev->n)
					sorted_insert(tmp->prev, tmp, list);
				else
				break;
			}
			current = nexts;
		}
		else
		current = current->next;
	}
}

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

	node = right->next;
	previous = left->prev;

	if (previous)
		previous->next = right;
	else
		*list = right;
	if (node)
		node->prev = left;
	right->prev = previous;
	left->next = node;
	right->next = left;
	left->prev = right;
	print_list(*list);
}
