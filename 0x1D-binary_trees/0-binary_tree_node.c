#include "binary_trees.h"
/**
* binary_tree_node - Function that creates a binary tree node
* @parent: Edge up to a node called father.
* @value: The value of the new nodes.
* return: Value the new node.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *son;

	son = malloc(sizeof(binary_tree_t));
	if (son == NULL)
	return (NULL);

	son->parent = parent;
	son->left = NULL;
	son->right = NULL;
	son->n = value;

	return (son);
}
