#include "binary_trees.h"
/**
*binary_tree_height - measures the height of a binary tree
*@tree: is a pointer to the root node of the tree to measure the height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t tall, low;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
			return(0);
	tall = binary_tree_height(tree->left);
	low = binary_tree_height(tree->right);
	if (tall < low)
		return (tall + 1);
	return(tall + 1);
}
