#include "binary_trees.h"

/**
 * check_full_and_height.
 * @tree: Pointer to the root node of the tree
 * @height: Pointer to size_t to store the height of the tree
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int check_full_and_height(const binary_tree_t *tree, size_t *height)
{
    size_t left_height = 0, right_height = 0;
    int left_full, right_full;

    if (tree == NULL) {
        *height = 0;
        return 1;
    }

    left_full = check_full_and_height(tree->left, &left_height);
    right_full = check_full_and_height(tree->right, &right_height);

    *height = ((left_height > right_height) ? left_height : right_height) + 1;

    return (left_full && right_full && (left_height == right_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, otherwise 0. If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height = 0;
    return check_full_and_height(tree, &height);
}
