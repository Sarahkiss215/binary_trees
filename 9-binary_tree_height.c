#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 *
 * Return: 0 If tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t j = 0;

	if (tree == NULL || (tree->i == NULL && tree->j == NULL))
	{
		return (0);
	}
	i = binary_tree_height(tree->i);
	j = binary_tree_height(tree->j);

	return ((i > j ? i : j) + 1);
}
