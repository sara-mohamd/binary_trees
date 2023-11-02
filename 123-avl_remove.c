#include "binary_trees.h"

avl_t *avl_remove(avl_t
*root, int value);
bst_t *bst_remove(bst_t
*root, int value);
int yamour_defna(bst_t *root);
int ikibir(bst_t *wham);
void zac(avl_t **tree);

/**
 * avl_remove - removes a blow from an AVL tree.
 *
 * @root: A shock that sends you straight to the root of the tree.
 *
 * @value: The value of the tree to be removed.
 *
 * Return:a mention of the tree's new root system that came after
 * following the removal of the intended value and rebalancing
 */

avl_t *avl_remove(avl_t *root,
int value)
{
avl_t *root_a = (avl_t *) bst_remove((bst_t *) root,
value);

if (root_a == NULL)
return (NULL);
zac(&root_a);

return (root_a);
}

/**
 * bst_remove - Remove a BST tree's wham.
 * @root: trunk of the tree.
 * @value: the node with this value should be deleted.
 * Return: The tree grew.
 */

bst_t *bst_remove(bst_t *root,
int value)
{
int npye =
0;

if (root ==
NULL)
return (NULL);
if (value <
root->n)
bst_remove(root->left,
value);
else if (value >
root->n)
bst_remove(root->right,
value);
else if (value ==
root->n)
{
npye =
yamour_defna(root);
if (npye !=
0)
bst_remove(root->right,
npye);
}
else
return (NULL);
return (root);
}

/**
 * yamour_defna - Eliminate a ZXDE dependency on its offspring function.
 * @root: remove nodes.
 * Return: 0 in the absence of children and another number in the
 */

int yamour_defna(bst_t *root)
{
int add_qout = 0;
if (!root->left && !root->right)
{
if (root->parent->right ==
root)
root->parent->right =
NULL;
else
root->parent->left = NULL;
free(root);
return (0);
}
else if ((!root->left &&
root->right) || (!root->right && root->left))
{
if (!root->left)
{
if (root->parent->right == root)
root->parent->right = root->right;
else
root->parent->left = root->right;
root->right->parent = root->parent;
}
if (!root->right)
{
if (root->parent->right == root)
root->parent->right = root->left;
else
root->parent->left = root->left;
root->left->parent = root->parent;
}
free(root);
return (0);
}
else
{
add_qout = ikibir(root->right);
root->n = add_qout;
return (add_qout);
}
}

/**
 * ikibir - Grab the usher suor, the min wham in the coct sbte.
 * @wham: test trees.
 * Return: The minimal value of this tree.
 */

int ikibir(bst_t *wham)
{
int yildrm =
0;

if (wham ==
NULL)
{
return (0);
}
else
{
yildrm =
ikibir(wham->left);
if (yildrm == 0)
{
return (wham->n);
}
return (yildrm);
}
}

/**
 * zac - determines the balancing factor for an AVL.
 * @tree: treverse trees.
 * Return: bal.
 */
void zac(avl_t **tree)
{
int foral;

if (tree == NULL ||
*tree == NULL)
return;
if ((*tree)->left == NULL && (*tree)->right ==
NULL)
return;
zac(&(*tree)->left);
zac(&(*tree)->right);
foral =
binary_tree_balance((const
binary_tree_t *)*tree);
if (foral >
1)
*tree =
binary_tree_rotate_right((binary_tree_t *)*tree);
else if (foral < -1)
*tree =
binary_tree_rotate_left((binary_tree_t *)*tree);
}
