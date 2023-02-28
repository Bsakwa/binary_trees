#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: A pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: The new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;
	newnode->left = NULL;

	return (newnode);
}
