#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: new node if successful, NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = newnode;
	}
	else
	{
		newnode->left = parent->left;
		parent->left = newnode;
		newnode->left->parent = newnode;
	}
	return (newnode);
}
