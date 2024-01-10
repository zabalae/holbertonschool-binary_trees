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
	const binary_tree_t *first_copy = first;
	const binary_tree_t *second_copy = second;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	while (first_copy != second_cooy)
	{
		first_copy = (first_copy) ? first_copy->parent : second;

		second_copy = (second_copy) ? second_copy->parent : second;
	}

	return ((binary_tree_t *)first_copy);
}
