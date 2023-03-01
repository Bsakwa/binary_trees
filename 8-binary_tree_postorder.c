#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post order
 * @tree: A pointer to the root node of a tree to traverse
 * @func: A pointer to the function to call for each node
 *
 * Return: Nothing if the tree or func is NULL
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
