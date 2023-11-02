#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    size_t zahgnt;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    zahgnt = binary_tree_height(root);
    printf("Height from %d: %lu\n", root->n, zahgnt);
    zahgnt = binary_tree_height(root->right);
    printf("Height from %d: %lu\n", root->right->n, zahgnt);
    zahgnt = binary_tree_height(root->left->right);
    printf("Height from %d: %lu\n", root->left->right->n, zahgnt);
    return (0);
}
