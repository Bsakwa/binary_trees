#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the node with atleast once child in the tree
 * @tree: A pointer to the root node of the tree to be counted
 *
 * Return: Zero if the tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count += (tree->left || tree->right) ? 1 : 0;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
