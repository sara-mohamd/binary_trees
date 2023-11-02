#include "binary_trees.h"

/**
  * function_tree_numtwo - support for the function binary_tree_height
  *
  * @tree: original tree
  *
  * Return: Tree.
  *
  */

size_t function_tree_numtwo(const binary_tree_t *tree)
{
size_t k, r;
if (tree == NULL)
return (0);

k =
function_tree_numtwo(tree->left);
r =
function_tree_numtwo(tree->right);
return (1 + MAX(k, r));
}

/**
  * binary_tree_height - measures pertaining to the binary tree C.
  *
  * @tree: original tree
  *
  * Return: Tree.
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (function_tree_numtwo(tree) - 1);
}

/**
  * binary_tree_size - Size of C binary tree is measured.
  *
  * @tree: tree.
  *
  * Return: number of descendants of a node.
  */

size_t binary_tree_size(const
binary_tree_t *tree)

{
if (tree == NULL)
return (0);

return (1 + binary_tree_size(tree->left) +
binary_tree_size(tree->right));

}
/**
  * binary_tree_is_perfect - to check for perfectness in the C binary tree.
  *
  * @tree: I got into the binary tree
  *
  * Return: 1 true, 0 false
  */

int binary_tree_is_perfect(const
binary_tree_t *tree)

{
int p, q;
if (tree == NULL)
return (0);

p
= (int)binary_tree_size(tree);
q
= binary_tree_height(tree);

return (p == (2 << q)  -1);
}
