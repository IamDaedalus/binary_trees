#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - returns the number of nodes with no
 * children in a binary tree
 * @tree: the tree to operate on
 * Return: returns the number of nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if ((!tree->left && !tree->right) && tree)
		leaves += 1;
	else
	{
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}

	return (leaves);
}
