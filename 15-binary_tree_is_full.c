#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left_tree;
	size_t right_tree;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_tree = binary_tree_is_full(tree->left);
	right_tree = binary_tree_is_full(tree->right);

	if (tree->left != NULL && tree->right != NULL && left_tree && right_tree)
		return (1);
	return (0);

}
