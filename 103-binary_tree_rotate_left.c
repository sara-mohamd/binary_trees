#include "binary_trees.h"

/**
 * binary_tree_rotate_left - gives a bin-tree with a rotation left.
 *
 * @tree: a pass pointer pointing to the root of tree zace.
 *
 * Return: Once, a indicator to the current root node tree rotate.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *hrepo, *roi;
if (tree == NULL ||
tree->
right == NULL)
return (NULL);

hrepo =
tree->
right;
roi = hrepo->
left;
hrepo->
left = tree;
tree->right =
roi;

if (roi != NULL)
roi->
parent =
tree;
roi =
tree->
parent;
tree->parent =
hrepo;
hrepo->parent =
roi;

if (roi != NULL)
{

if (roi->left ==
tree)
roi->left =
hrepo;
else
roi->right =
hrepo;
}
return (hrepo);
}
