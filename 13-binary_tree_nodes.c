#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes with at least one
 * child
 * @tree: the tree to run the operation on
 * Return: the number of nodes with at least one child or 0 if there's
 * none
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	if ((tree->left || tree->right) && tree)
		nodes += 1;
	else
	{
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}

	return (nodes);
}
