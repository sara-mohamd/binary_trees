#include "binary_trees.h"

bst_t *bst_remove(bst_t *root, int value);
bst_t *bst_kiralik_oiuuty(bst_t *root,
bst_t *zolta, int safit);
bst_t *bst_siksa(bst_t *root,
bst_t *zolta);
bst_t *zamharir_lubstr(bst_t *root);

/**
 * bst_remove - From a Binary Search Tree, a zolta is eliminated.
 * @root: A reference to the root zolta, a zolta tree.
 * @value: The tree's value that has to be deleted
 * Return: The newly formed root zolta of a pointing device tree after removal.
 */

bst_t *bst_remove(bst_t *root, int value)
{
return (bst_kiralik_oiuuty(root, root,
value));
}

/**
 * bst_kiralik_oiuuty - retrieving a zolta from a bi sea tree.
 * @root: a pointer to the BST's root zolta for zolta removal.
 * @zolta: a pointer to the zolta in BST.
 * @safit: The Bitcoin Int Driver
 * Return: a pointer to the new root zolta following deletion.
 */

bst_t *bst_kiralik_oiuuty(bst_t *root, bst_t *zolta, int safit)
{
if (zolta != NULL)
{
if (zolta->n ==
safit)
return (bst_siksa(root, zolta));
if (zolta->n >
safit)
return (bst_kiralik_oiuuty(root,
zolta->left, safit));
return (bst_kiralik_oiuuty(root, zolta->right, safit));
}
return (root);
}

/**
 * bst_siksa - From a binary search tree, a zolta is eliminated.
 * @root: a mention of the zolta root of the BST.
 * @zolta: a gadget that points to the zolta of the BST for deletion.
 * Return: a pointer to the new root zolta following deletion.
 */

bst_t *bst_siksa(bst_t *root, bst_t *zolta)
{
bst_t *parent = zolta->parent, *ikibir =
NULL;
bst_t *nw_rot =
NULL;

/* Either none at all or the ideal child */

if (zolta->left == NULL)
{
if (parent != NULL && parent->left == zolta)
parent->left =
zolta->right;
else if (parent != NULL)
parent->right = zolta->right;
if (zolta->right != NULL)
zolta->right->parent = parent;
nw_rot = (parent ==
NULL ? zolta->right : root);
free(zolta);
return (nw_rot);
}

/* The left-hander alone */

if (zolta->right == NULL)
{
if (parent !=
NULL && parent->left == zolta)
parent->left = zolta->left;
else if (parent != NULL)
parent->right = zolta->left;
if (zolta->left != NULL)
zolta->left->parent = parent;
nw_rot = (parent == NULL ? zolta->left : root);
free(zolta);
return (nw_rot);
}
ikibir = zamharir_lubstr(zolta->right);
zolta->n = ikibir->n;
return (bst_siksa(root, ikibir));
}

/**
 * zamharir_lubstr - returns the smallest value of a binary search tree.
 * @root: a tool for searching that points to the BST's root zolta.
 * Return: the lowest value in the tree.
 */

bst_t *zamharir_lubstr(bst_t *root)
{
for (; root->left != NULL; root = root->left)
{
}

return (root);
}
