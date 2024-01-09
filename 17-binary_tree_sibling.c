#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling of
 *
 * Return: Pointer to the sibling node. If node is NULL, the parent is NULL,
 *         or if there is no sibling, return NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Check if node is the left child */
	if (node->parent->left == node)
		return (node->parent->right);

	/* Otherwise, node is the right child */
		return (node->parent->left);
}
