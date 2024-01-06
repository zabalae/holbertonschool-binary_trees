#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count number of leaves
 *
 * Return: if tree is Null, return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right == NULL && tree-left == NULL)
	{
		return (1);
	}

	leaves += binary_tree_leaves(tree->right);
	leaves += binary_tree_leaves(tree->left);

	return (leaves);

}
