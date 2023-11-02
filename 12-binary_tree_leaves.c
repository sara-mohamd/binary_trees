#include "binary_trees.h"

/**
 * binary_tree_leaves - count how many leaves there are in a binary tree.
 *
 * @tree: The number of leaves on a tree is determined by its root node.
 *
 * Return: 0 in case the tree is valueless.
 */

size_t binary_tree_leaves(
const
binary_tree_t *tree)

{
if (!tree)
{
return (0);
}

if (!(tree->left) && !(tree->right))

{
return (1);
}

return
binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
}
