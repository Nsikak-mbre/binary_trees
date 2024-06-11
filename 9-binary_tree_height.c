#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to the root node of tree height to be measured
 * Return: tree height on success, or 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_count = 0;
	size_t right_count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_count = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_count = binary_tree_height(tree->right) + 1;
	return (left_count > right_count ? left_count : right_count);
}
