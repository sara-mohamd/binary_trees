#include "binary_trees.h"
/**
 * binary_tree_inorder - using i, oes throughout a binary tree
 *
 * @tree: pointer to the tree's root node to tr
 *
 * @func: reference to an eac callable function
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))

{
if (
tree &&
func)

{
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}

}
