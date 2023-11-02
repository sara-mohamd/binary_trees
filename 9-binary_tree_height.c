#include "binary_trees.h"

/**
  * calculate_binary_tree_height - support for the function binary_tree_height
  *
  * @tree: origin tree
  *
  * Return: Tree
  */

size_t calculate_binary_tree_height(const binary_tree_t *
tree)

{
size_t
k,
r;

if (!tree)
return (0);

k = calculate_binary_tree_height(tree->left);
r = calculate_binary_tree_height(tree->right);

return (MAX(k, r) + 1);
}

/**
  * binary_tree_height - measurements of nutew in a binary tree
  *
  * @tree: original tree
  *
  * Return: Tree.
  */

size_t binary_tree_height(const binary_tree_t *
tree)

{
if (!tree)
return (0);

return (calculate_binary_tree_height(tree) - 1);
}
