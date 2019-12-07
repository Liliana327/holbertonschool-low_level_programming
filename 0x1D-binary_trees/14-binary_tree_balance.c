#include "binary_trees.h"
/**
*binary_tree_height - measures the height of a binary tree
*@tree: is a pointer to the root node of the tree to measure the height
*Return: If tree is NULL, your function must return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t tall, low;

	if (tree == NULL)
		return (0);

	tall = binary_tree_height(tree->left);
	low = binary_tree_height(tree->right);

	if (tall > low)
		return (tall + 1);
	else
		return (low + 1);
}

/**
*binary_tree_balance - measures the balance factor of a binary tree
*@tree: pointer to the root node of the tree to measure the balance factor
*Return: If tree is NULL, return 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t tall, low;

	if (tree == NULL)
		return (0);

	tall = binary_tree_height(tree->left);
	low = binary_tree_height(tree->right);

	return (tall - low);
}
