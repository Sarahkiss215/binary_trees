#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: 0 If tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t j = 0;

	if (tree == NULL)
	{
		return (0);
	}
	i = binary_tree_size(tree->left);
	j = binary_tree_size(tree->right);

	return (i + j + 1);
}
