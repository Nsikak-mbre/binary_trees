#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_node - creates a binary tree node
 * @parent: Pointer to root node/parent node
 * @value: value for new node
 * Return: on success new node, Null on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = new_node->right = NULL;
	return (new_node);
}
