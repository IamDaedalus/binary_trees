#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_size - calculates the size of a binary i.e the number
 * of all nodes on the tree
 * @tree: the tree to calculate the size of
 * Return: returns 0 if the tree is NULL or the number of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}
