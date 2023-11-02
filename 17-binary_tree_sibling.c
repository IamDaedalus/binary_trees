#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_sibling - returns the "sibling" of a node
 * @node: the node to check its sibling
 * Return: returns pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left && node->parent->right)
		sibling = node->parent->right;
	else if (node == node->parent->right && node->parent->left)
		sibling = node->parent->left;

	return (sibling);
}
