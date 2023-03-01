#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a tree
 * @tree: A pointer to the root bnode of the tree to measure
 *
 * Return: 0 if the tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		l = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}

