#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_tree;
	size_t right_tree;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_tree = binary_tree_is_perfect(tree->left);
	right_tree  = binary_tree_is_perfect(tree->right);

	if (tree->left != NULL && tree->right != NULL && left_tree && right_tree)
		return (1);
	return (0);
}
