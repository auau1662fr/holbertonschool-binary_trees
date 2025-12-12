#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle of
 *
 * Return: Pointer to the uncle node, or NULL if node is NULL,
 *         if node has no parent or if parent has no sibling.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	grand = parent->parent;
	if (grand == NULL)
		return (NULL);

	if (grand->left == parent)
		return (grand->right);
	return (grand->left);
}

