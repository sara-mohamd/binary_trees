#include "binary_trees.h"

/**
 * binary_tree_preorder - using a binary tree
 *
 * @tree: pointer to the tree's root node
 *
 * @func: URL to a fuco that will be sent to the aer eah node
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))

{
if (tree && func)

{
func(tree->n);
binary_tree_preorder(tree->left,
func);

binary_tree_preorder(tree->right,
func);
}
}
