#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: Pointer to the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
