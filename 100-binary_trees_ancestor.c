#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * if no common ancestor is found, return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *ancestor1, *ancestor2;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	ancestor1 = first->parent;
	ancestor2 = second->parent;

	if (first == ancestor2 || !ancestor1)
	{
		return (binary_trees_ancestor(first, ancestor2));
	}

	if (ancestor1 == second || !pop)
	{
		return (binary_trees_ancestor(second, ancestor1))
	}

	return (binary_trees_ancestor(ancestor1, ancestor2));
}
