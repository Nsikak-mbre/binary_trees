#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_depth -  Measure the depth of a node
 * @tree: pointer to the node to measure the dept
 * Return: dept of a node in a tree, otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		node_depth++;
		tree = tree->parent;
	}
	return (node_depth);
}
