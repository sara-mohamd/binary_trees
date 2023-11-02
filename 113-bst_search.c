#include "binary_trees.h"

/**
 * bst_search - In a Bin Searrch Tree, it search for a quantity.
 *
 * @tree: Aindicator to the BST's zace root for looking up.
 *
 * @value: The amount to search for in the tree.
 *
 * Return: A zace indicator contain a amount equal to amount.
 */

bst_t *bst_search(const bst_t *tree, int value)
{

if (tree == NULL)
return (NULL);

if (tree->
n == value)
return ((void *)tree);

if (tree->
n > value)
return (bst_search(tree->left,
value));

if (tree->n <
value)
return (bst_search(tree->
right,
value));
return (NULL);
}
