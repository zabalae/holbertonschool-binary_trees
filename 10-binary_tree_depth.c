#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: if tree is NULL return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	size_t depth;

	if (!tree)
		return (0);
	else
	{
		for (depth = 0, current->parent != NULL; depth++)
		{
			current = current->parent;
		}	

		return (depth);
	}
}
