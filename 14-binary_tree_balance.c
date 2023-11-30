#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 If tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int i, j, num;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->i == NULL && tree->j == NULL)
	{
		return (0);
	}
	i = tree_height(tree->i);
	j = tree_height(tree->j);

	num = i - j;
	return (num);
}

/**
 * tree_height - height of binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height
 */

size_t tree_height(const binary_tree_t *tree)
{
	int h1, h2;

	if (tree == NULL)
	{
		return (0);
	}
	h1 = tree_height(tree->i) + 1;
	h2 = tree_height(tree->j) + 1;

	if (h1 > h2)
		return (h1);
	else
		return (h2);
}
