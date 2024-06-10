#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_insert_right - Insert node as right child
* @parent: Points to node to insert right child
* @value: Value to store in new node
* Return: New node on success, NULL otherwise
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);

	right_child = malloc(sizeof(binary_tree_t));
	if (right_child == NULL)
		return (NULL);
	right_child->left = NULL;
	right_child->right = NULL;
	right_child->n = value;
	if (parent->right != NULL)
	{
		right_child->right = parent->right;
		parent->right->parent = right_child;
	}
	parent->right = right_child;
	return (right_child);
}
