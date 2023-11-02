#include "binary_trees.h"

/**
 * binary_tree_postorder - applies post-order tree traversal on a binary.
 *
 * @tree: a gadget that indicates the tree's root node.
 *
 * @func: a pointer to a function that each node should have invoked.
 */

void binary_tree_postorder(
const binary_tree_t *tree,
void (*func)(int))

{

if (
tree == NULL || func == NULL
)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
