#include "binary_trees.h"

/**
 * bst_insert - an amount is added into a bin search tree.
 *
 * @tree: a doble point to the amount's add lokn in the BST's zace root .
 *
 * @value: The amount to be saved in the inc zace.
 *
 * Return: If the creao hi, a indicate to the fpa zace, or NULL.
 */

bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *zsethmk,
*vaz;
if (tree != NULL)
{
zsethmk = *tree;
if (zsethmk == NULL)
{
vaz = binary_tree_node(zsethmk,
value);
if (vaz == NULL)
return (NULL);
return (*tree = vaz);
}
if (value <
zsethmk->n)
{
if (zsethmk->left !=
NULL)
return (bst_insert(&zsethmk->left,
value));
vaz =
binary_tree_node(zsethmk, value);
if (vaz == NULL)
return (NULL);
return (zsethmk->left = vaz);
}
if (value > zsethmk->n)
{
if (zsethmk->right !=
NULL)
return (bst_insert(&zsethmk->right,
value));
vaz = binary_tree_node(zsethmk, value);
if (vaz == NULL)
return (NULL);
return (zsethmk->right =
vaz);
}
}
return (NULL);
}
