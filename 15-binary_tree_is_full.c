#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree);
int function_numone(const binary_tree_t *tree);

/**
 * binary_tree_is_full - confirms the fill level of a binary tree.
 *
 * @tree: a denotes the root node of the tree, which could be ched.
 *
 * Return: 0 or another value.
 */

int binary_tree_is_full(const
binary_tree_t *tree)

{
if (tree == NULL)
return (0);

return (function_numone(tree));
}

/**
 * function_numone - finds the fullness of a binary tree recursively.
 *
 * @tree: a the verifon reference to the tree's root node.
 *
 * Return: Tree = 0 if tree is not NULL; else, 1.
 */

int function_numone(const
binary_tree_t *tree)
{
if (tree != NULL)
{
if ((tree->left !=
NULL &&
tree->right ==
NULL) ||
(tree->left ==
NULL &&
tree->right !=
NULL) ||
function_numone(tree->
left) ==
0 ||
function_numone(tree->
right) ==
0)

return (0);
}

return (1);
}
