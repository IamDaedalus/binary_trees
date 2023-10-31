#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - checks if a node has no children
 * @node: the node to check
 * Return: 1 if node has no children or 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int retval = 0;

	if (!node)
		return (0);

	if (!node->left && !node->right)
		retval = 1;

	return (retval);
}
