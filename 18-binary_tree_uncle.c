#include "binary_trees.h"
#include <stdlib.h>

/**
 * sibling_of - returns the "sibling" of a node
 * @node: the node to check its sibling
 * Return: returns pointer to the sibling node
 */
binary_tree_t *sibling_of(binary_tree_t *node)
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

/**
 * binary_tree_uncle - returns the "sibling" of the node's parent
 * @node: the node to check
 * Return: returns a pointer to the node's uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (!node || !node->parent)
		return (NULL);

	if (node->parent)
		uncle = sibling_of(node->parent);

	return (uncle);
}
