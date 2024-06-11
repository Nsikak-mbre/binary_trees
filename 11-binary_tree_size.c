#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_size - measures the size of the tree
 * @tree: pointer to the root node of the tree
 * Return: size of the tree or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_node = 0;
	size_t right_node = 0;

	if (tree == NULL)
		return (0);
	left_node = binary_tree_size(tree->left);
	right_node = binary_tree_size(tree->right);
	return (left_node + right_node + 1);
}
