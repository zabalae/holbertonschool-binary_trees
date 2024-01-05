#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: If tree is NULL, do nothing. Uses post-order traversal
 * to delete each node in the tree.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Do nothing if the tree is NULL */
	if (tree == NULL)
		return;

	/* First, delete both subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Then, delete the current node */
	free(tree);
}
