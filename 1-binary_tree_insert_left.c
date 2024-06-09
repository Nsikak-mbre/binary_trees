#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_left - Inserts a node as teh left-child of another node
 * @parent: Points to the parent node, the new node
 * @value: item to be stored in the node
 * Return: Pointer to new node on success, NULL otherwise
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	if (parent->left != NULL)
	{
		parent->left = new_node;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
