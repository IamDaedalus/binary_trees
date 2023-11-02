#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth = 0, right_depth = 0;

	if (!tree)
		return (0);

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	return (left_depth >= right_depth ? left_depth + 1 : right_depth + 1);
}
