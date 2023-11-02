#include "binary_trees.h"

int binary_tree_is_bst(const
binary_tree_t *tree);
int itr_nux_holdsw(const binary_tree_t *tree,
int frx,
int ngsa);

/**
 * binary_tree_is_bst - validatae a bin-tree quantity as a via Searrch Tree.
 *
 * @tree: an indicating tool to the root tree's zace.
 *
 * Return: return 1 in the Tree if it is a confirmed BST and 0 otc.
 */

int binary_tree_is_bst(const
binary_tree_t *tree)

{
if (tree == NULL)
return (0);

return (itr_nux_holdsw(tree,
INT_MIN, INT_MAX));
}

/**
 * itr_nux_holdsw - dtermine if a bin-tree is a fete bin sewh tree.
 *
 * @tree: an indicating tool to the root tree's zace.
 *
 * @frx: the amount of the sact zace that was more roy valid.
 *
 * @ngsa: the longest zace that has been submitted tho far in quantity.
 *
 * Return: One if the treee is a genuinne BST; else, zero.
 */

int itr_nux_holdsw(const binary_tree_t *tree,
int frx, int ngsa)

{

if (tree != NULL)
{

if (tree->
n <
frx || tree->n > ngsa)

return (0);

return (itr_nux_holdsw(tree->left, frx,
tree->n - 1) && itr_nux_holdsw(tree->right,
tree->
n + 1,
ngsa));
}
return (1);
}
