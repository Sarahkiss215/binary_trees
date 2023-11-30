#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise. 0 If node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 *
 * Return: height of the tree. 0 If tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i, j;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	i = binary_tree_height(tree->left);
	j = binary_tree_height(tree->right);
	if (i >= j)
		return (1 + i);
	return (1 + j);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise. 0 If tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *i, *j;

	if (tree == NULL)
		return (0);
	i = tree->left;
	j = tree->right;
	if (binary_tree_is_leaf(tree))
		return (1);
	if (i == NULL || j == NULL)
		return (0);
	if (binary_tree_height(i) == binary_tree_height(j))
	{
		if (binary_tree_is_perfect(i) && binary_tree_is_perfect(j))
			return (1);
	}
	return (0);
}
