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
	size_t right_h = 0;
	size_t left_h = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right != NULL)
	{
		right_h = 1 + binary_tree_height(tree->right);
	}

	if (tree->left != NULL)
	{
		left_h = 1 + binary_tree_height(tree->left);
	}

	if (left_h > right_h)
	{
		return (left_h);
	}

	else
	{
		return (right_h);
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
	size_t right_h = 0;
	size_t left_h = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right != NULL)
	{
		right_h = 1 + binary_tree_height(tree->right);
	}

	if (tree->left != NULL)
	{
		left_h = 1 + binary_tree_height(tree->left);
	}

	return (left_h - right_h);
}
