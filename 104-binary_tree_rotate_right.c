#include "binary_trees.h"

/**
 * binary_tree_rotate_right - drift a bin-tree to the right.
 *
 * @tree: a pass pointer indicating to the root tree zace.
 *
 * Return: Once, a indicator to the current root node tree's drifts.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)

{
binary_tree_t
*hrepo, *roi;

if (tree == NULL ||
tree->
left == NULL)
return (NULL);

hrepo =
tree->left;
roi =
hrepo->right;
hrepo->right =
tree;
tree->left =
roi;

if (roi != NULL)
roi->parent =
tree;
roi =
tree->parent;
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
