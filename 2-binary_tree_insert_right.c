#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: Pointer to the node to insert the right child in
 * @value: Is the value to store in the new node
 *
 * Return: A pointer to the newnode otherwise NULL
 *
 * Description: If parent has a right child the new node must take its place
 *              The old right child must be set as right child of new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newright;

	if (parent == NULL)
		return (NULL);

	newright = binary_tree_node(parent, value);
	if (newright == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newright->right = parent->right;
		parent->right->parent = newright;
	}
	parent->right = newright;

	return (newright);
}
