#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle to a node
 * @node: A pointer to find the uncle
 *
 * Return: A pointer to the uncle node
 *         if node is NULL then return NULL
 *         if node has no uncle then return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
