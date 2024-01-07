#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: if tree is NULL, return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_l;
	int full_r;

	if (!tree)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->right != NULL && tree->left != NULL)
	{
		full_r = binary_tree_is_full(tree->right);

		full_l = binary_tree_is_full(tree->left);

		return (full_r && full_l);
	}

	return (0);
}
