#include "binary_trees.h"

/**
  * binary_tree_node - create a binary tree node
  * @parent: pointer to parent node
  * @value: value for new node
  *
  * Return: new node if successful,NULL o failure
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
