#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_height - this calculates the height of the binary tree
 * @tree: the tree whose height we calculate
 * Return: returns the height of the tree from any node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	/* check if the node exists before adding one */
	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left > right ? left : right);
}
