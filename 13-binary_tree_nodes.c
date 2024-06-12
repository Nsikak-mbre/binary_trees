#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_nodes - count nodes with atleast one child
 * @tree: pointer to the root node
 * Return: node count with atleast one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		node_count = 1;
	node_count += binary_tree_nodes(tree->left);
	node_count += binary_tree_nodes(tree->right);
	return (node_count);
}

