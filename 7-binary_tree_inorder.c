#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_inorder - Tree traversal in-order(left, root, rigtht)
 * @tree: pointer to root node
 * @func: function pointer to call for each node
 * Return: Nothing, as all void functions
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
