#include "binary_trees.h"

/**
 * binary_tree_height - function to calculate the height of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: height of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_h;
	size_t left_h;

	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		right_h = binary_tree_height(tree->right);
		left_h = binary_tree_height(tree->left);

		return (1 + (left_h > right_h ? left_h : right_h);
	}
}

/**
 * binary_tree_balance - function that measures the balance factor of a
 * binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: if tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right_h;
	size_t left_h;

	if (tree == NULL)
	{
		return (0);
	}

	right_h = binary_tree_height(tree->right);

	left_h = binary_tree_height(tree->left);

	return (right_h - left_h);
}
