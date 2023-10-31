#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - checks if a node has no parent
 * @node: the node to check
 * Return: 1 if node has no parent or 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int retval = 0;

	if (!node)
		return (0);

	if (!node->parent)
		retval = 1;

	return (retval);
}
