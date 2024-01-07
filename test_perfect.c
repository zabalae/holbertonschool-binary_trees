#include "binary_trees.h"
#include <stdio.h>

int main(void)
{
    binary_tree_t *root;
    int is_perfect;

    /* Example of creating a perfect binary tree */
    root = binary_tree_node(NULL, 1);
    root->left = binary_tree_node(root, 2);
    root->right = binary_tree_node(root, 3);
    root->left->left = binary_tree_node(root->left, 4);
    root->left->right = binary_tree_node(root->left, 5);
    root->right->left = binary_tree_node(root->right, 6);
    root->right->right = binary_tree_node(root->right, 7);

    /* Test if the tree is perfect */
    is_perfect = binary_tree_is_perfect(root);
    printf("Is the tree perfect? %s\n", is_perfect ? "Yes" : "No");

    /* Clean up the tree */
    /* Implement and call a function like binary_tree_delete(root) to free allocated memory */

    /* You can add more test cases for different tree structures */

    return (0);
}
