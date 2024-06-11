#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_preorder - Pre-order traversal of node(root, left, right)
 * @tree: Points to node tree to traverse
 * @func: function pointer to call each node
 * Return: Null or nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
