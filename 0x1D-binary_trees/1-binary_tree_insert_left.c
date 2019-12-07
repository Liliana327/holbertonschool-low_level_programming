#include "binary_trees.h"
/**
* binary_tree_node - inserts a node as the left-child of another node
* @parent: is a pointer to the node to insert the left-child in
* @value: is the value to store in the new node
* Return: Value the new node.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *son;

	if (parent == NULL)
		return (NULL);

	son = malloc(sizeof(binary_tree_t));
	if (son == NULL)
		return (NULL);

	son->parent = parent;
	son->left = NULL;
	son->right = NULL;
	son->n = value;

	if (son->left)
	{
		son->left->parent = son;
	}

	son->right = NULL;
	return (son);
}

