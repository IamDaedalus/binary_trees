#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a new node on the right of the parent
 * replacing any existing node there with itself while setting the previous
 * right to its current right
 * @parent: the parent of the new node
 * @value: the value of the new node
 * Return: returns the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;

	return (new);
}
