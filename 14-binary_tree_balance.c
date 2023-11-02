#include "binary_trees.h"

/**
 * height - this calculates the height of the binary tree
 * @tree: the tree whose height we calculate
 * Return: returns the height of the tree from any node
 */
size_t height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree)
	{
		/* check if the node exists before adding one */
		left = tree->left ? 1 + height(tree->left) : 0;
		right = tree->right ? 1 + height(tree->right) : 0;
	}

	return ((left > right) ? left : right);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = (int)height(tree->left);
	right = (int)height(tree->right);

	return (left - right);
}
