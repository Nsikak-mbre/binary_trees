#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_postorder - Post order traversing(left, right, root)
 * @tree: pointer to the root node
 * @func: function pointer to call each node
 * Return: void function returns nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
