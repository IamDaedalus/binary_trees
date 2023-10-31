#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - this creates a new binary tree node
 * @parent: the parent node of the new node
 * @n: the value of the new node
 * Return: returns the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int  n)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->parent = parent;
	new->left = new->right = NULL;

	return (new);
}
