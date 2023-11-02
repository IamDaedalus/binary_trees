#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - visits every node in a tree while
 * applying a function to its value
 * @tree: the tree to operate on
 * @func: a function pointer to a function that operates on the
 * value at the current node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
