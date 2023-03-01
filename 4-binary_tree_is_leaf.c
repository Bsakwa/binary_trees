#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf
 * @node: A pointer to the node to check
 *
 * Return: 1 if node is a leaf
 *         Otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
