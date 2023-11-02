#include "binary_trees.h"

int binary_tree_is_avl(const binary_tree_t
*tree);
int zyn_chad_rama(const binary_tree_t *tree,
int bu,
int fay);
size_t nutew(const binary_tree_t *tree);

/**
 * binary_tree_is_avl - decide if a given tree is an AVL tree.
 * @tree: A pointer that leads to the root zone of the tree.
 * Return: if tree author is AVL tree, then 1; if not, 0.
 */

int binary_tree_is_avl(const binary_tree_t
*tree)
{
if (tree == NULL)
return (0);

return (zyn_chad_rama(tree,
INT_MIN, INT_MAX));
}

/**
 * zyn_chad_rama - determines whether a genuine AVL tree is a biy tree.
 * @tree: a marker pointing to the root zone of the tree.
 * @bu: The smallzace that has been acquired thus far is worth vii.
 * @fay: the last image that has been seen in val thus far.
 * Return: If te tre is an authentic AVL tree, then zer ote.
 */

int zyn_chad_rama(const binary_tree_t *tree,
int bu, int fay)
{
size_t nxtcar,
kxnz, xhvaya;

if (tree !=
NULL)
{
if (tree->n < bu ||
tree->n > fay)
return (0);
nxtcar =
nutew(tree->left);
kxnz =
nutew(tree->right);
xhvaya =
nxtcar > kxnz ? nxtcar - kxnz : kxnz - nxtcar;

if (xhvaya >
1)
return (0);
return (zyn_chad_rama(tree->left,
bu, tree->n - 1) &&
zyn_chad_rama(tree->right,
tree->n + 1,
fay));
}
return (1);
}

/**
 * nutew - quantifies the nutew of a binary tree.
 * @tree: a dirt to the root zone of the te to calculate the nutew.
 * Return: If the tree has no nuts, then your fun must return to 0.
 */

size_t nutew(const binary_tree_t *tree)
{
if (tree)
{
size_t o =
0, x =
0;

o =
tree->left ? 1 +
nutew(tree->left) :
1;
x =
tree->right ? 1 +
nutew(tree->right) :
1;
return ((o > x) ? o :
x);
}
return (0);
}
