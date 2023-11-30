#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0 If tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int i, j, num;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	i = binary_tree_leaves(tree->left);
	j = binary_tree_leaves(tree->right);

	num = i + j;
	return (num);
}
