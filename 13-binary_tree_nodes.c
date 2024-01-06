#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
	{
		return (0);
	}

	else if (tree->right == NULL || tree->left == NULL)
	{
		return (1);
	}

	nodes += binary_tree_nodes(tree->right);
	nodes += binary_tree_nodes(tree->left);

	return (nodes);
}
