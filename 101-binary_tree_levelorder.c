#include "binary_trees.h"

/**
 * binary_tree_levelorder - function that goes through a binary tree
 * using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue_node_t *front = NULL, *rear = NULL, *temp;
	queue_node_t *root_node = malloc(sizeof(queue_node_t));
	queue_node_t *left_node = malloc(sizeof(queue_node_t));
	queue_node_t *right_node = malloc(sizeof(queue_node_t));
	const binary_tree_t *current = front->node;

	if (tree == NULL || func == NULL)
		return;
	if (root_node == NULL)
		return;
	root_node->node = tree;
	root_node->next = NULL;
	front = rear = root_node;
	while (front != NULL)
	{
		func(current->n);
		if (current->left != NULL)
		{
			if (left_node == NULL)
				break;
			left_node->node = current->left;
			left_node->next = NULL;
			rear->next = left_node;
			rear = left_node;
		}
		if (current->right != NULL)
		{
			if (right_node == NULL)
				break;
			right_node->node = current->right;
			right_node->next = NULL;
			rear->next = right_node;
			rear = right_node;
		}
		temp = front;
		front = front->next;
		free(temp);
	}
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		free(temp);
	}
}
