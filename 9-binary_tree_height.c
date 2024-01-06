#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of the left and right subtrees */
	left_height = (tree->left) ? binary_tree_height(tree->left) + 1 : 0;
	right_height = (tree->right) ? binary_tree_height(tree->right) + 1 : 0;

	/* Return the larger of the two heights */
	return ((left_height > right_height) ? left_height : right_height);
}
