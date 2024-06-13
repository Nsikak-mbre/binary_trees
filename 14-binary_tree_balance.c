#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to the root node of tree height to be measured
 * Return: tree height on success, or 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_count;
	size_t right_count;

	if (tree == NULL)
		return (-1);
	left_count = binary_tree_height(tree->left);
	right_count = binary_tree_height(tree->right);
	if (left_count > right_count)
		return (left_count + 1);
	return (right_count + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary treee
 * @tree: points to the root node
 * Return: 0 on success, NULL otherwise
 */



int binary_tree_balance(const binary_tree_t *tree)
{
	int bal_factor;
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	bal_factor = left_height - right_height;
	return (bal_factor);
}
