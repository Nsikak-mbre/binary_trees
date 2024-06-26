#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_root - Check if a node is the root node
 * @node: pointer to node to check
 * Return: 1 if node is root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->parent == NULL);
}
