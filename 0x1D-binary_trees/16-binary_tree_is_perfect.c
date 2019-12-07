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
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	tall = binary_tree_height(tree->left);
	low = binary_tree_height(tree->right);
	if (tall > low)
		return (tall + 1);
	else
		return (low + 1);
}

/**
*binary_tree_is_perfect - checks if a binary tree is perfect
*@tree: is a pointer to the root node of the tree to check
*Return: If tree is NULL, your function must return 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
		    binary_tree_is_perfect(tree->right))
		return (1);
	}
	return (0);
}
