#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function that performs a left-rotation
 * on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new rott node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *newRoot;

	newRoot = tree->right;

	if (tree->right == NULL || tree == NULL)
	{
		return (NULL);
	}

	tree->right = newRoot->left;

	if (newRoot->left != NULL)
	{
		newRoot->left->parent = tree;
	}

	newRoot->left = tree;
	newRoot->parent = tree->parent;
	tree->parent = newRoot;

	return (newRoot);
}
