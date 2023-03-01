#include "binary_trees.h"

/**
 * full_recursive - Checks whether the tree is full recursively
 * @tree: A pointer to the root of the tree to check
 *
 * Return: if tree is full 0 or not full
 *         Otherwise 1
 */


int full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    full_recursive(tree->left) == 0 ||
		    full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root of the tree to check
 *
 * Return: 0 if the tree is null
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (full_recursive(tree));
}
