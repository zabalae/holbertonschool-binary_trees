#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, otherwise 0. If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* Use binary_tree_is_full to check if tree is full */
	if (!binary_tree_is_full(tree))
		return (0);

	/* Calculate the height of the leftmost and rightmost paths */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* A perfect tree must have equal left and right heights */
	return (left_height == right_height);
}
