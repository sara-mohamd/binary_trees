#include "binary_trees.h"

/**
 * binary_tree_size - a The size of a binary tree is measured.
 *
 * @tree: a The size of the poing dece tree's root node.
 *
 * Return: 0 if tree has no values.
 */

size_t binary_tree_size(const binary_tree_t *
tree)

{

if (!tree)
return (0);

return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
