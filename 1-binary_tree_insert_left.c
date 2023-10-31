#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a new node on the left of the parent
 * replacing any existing node there with itself while setting the previous
 * left to its current left
 * @parent: the parent of the new node
 * @value: the value of the new node
 * Return: returns the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;

	return (new);
}
