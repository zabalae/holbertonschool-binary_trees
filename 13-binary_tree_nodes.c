#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes with at least 1 child. If tree is NULL, return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	/* Return 0 if tree is NULL */
	if (tree == NULL)
		return (0);

	/* Count the current node if it has at least one child */
	if (tree->left != NULL || tree->right != NULL)
		count = 1;

	/* Recursively count nodes in left and right subtrees */
	return (count + binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right));
}
