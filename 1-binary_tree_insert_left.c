#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left child of another node
 * @parent: Pointer to the node to insert the left child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node otherwise NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newleft;

	if (parent == NULL)
		return (NULL);

	newleft = binary_tree_node(parent, value);
	if (newleft == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newleft->left = parent->left;
		parent->left->parent = newleft;
	}
	parent->left = newleft;

	return (newleft);
}
