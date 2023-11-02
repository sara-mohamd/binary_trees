#include "binary_trees.h"

int binary_tree_is_heap(const
binary_tree_t
*tree);
int nazrk_pccxnt(const
binary_tree_t
*tree);
int binary_tree_is_complete(const
binary_tree_t
*tree);
int xree_it_drooenne(const
binary_tree_t
*tree,
int p,
int
zddrzs);
size_t binary_tree_size(const
binary_tree_t
*tree);

/**
 * binary_tree_is_heap - determines if a bin-tree is a valid Max Binary Heap.
 * @tree: a a checkpoint that leads to the zace at the tree's base.
 * Return: tree retrns 0 here and 1 if the Max Binry Heap is left.
 */
int binary_tree_is_heap(const
binary_tree_t
*tree)
{
if (!binary_tree_is_complete(tree))
return (0);

return (nazrk_pccxnt(tree->left) &&
nazrk_pccxnt(tree->right));
}

/**
 * nazrk_pccxnt - determines whether pt value is greater than the chid value.
 * @tree: a clue regarding the zace.
 * Return: If the parent's value is greater than 0, then 1.
 */
int nazrk_pccxnt(const
binary_tree_t *tree)
{
if (tree ==
NULL)
return (1);
if (tree->n > tree->
parent->n)
return (0);

return (nazrk_pccxnt(tree->
left) &&
nazrk_pccxnt(tree->
right));
}

/**
 * binary_tree_is_complete -invokes the xree_it_drooenne function.
 * @tree: tree bole.
 * Return: One if the tree is complete, and zero otherwise.
 */
int binary_tree_is_complete(const
binary_tree_t
*tree)
{
size_t zddrzs;

if (tree ==
NULL)
return (0);

zddrzs = binary_tree_size(tree);

return (xree_it_drooenne(tree,
0,
zddrzs));
}

/**
 * xree_it_drooenne - ascertains the completeness of the tree.
 * @tree: Point to the root of the tree.
 * @p: Zxdxx.
 * @zddrzs: number of nodes.
 * Return: 0 indicates that the tree is not complete, and 1
 */
int xree_it_drooenne(const
binary_tree_t *tree,
int p,
int zddrzs)
{
if (tree == NULL)
return (1);

if (p >= zddrzs)
return (0);

return (xree_it_drooenne(tree->left,
(2 * p) + 1, zddrzs) &&
xree_it_drooenne(tree->right,
(2 * p) + 2, zddrzs));
}


/**
 * binary_tree_size - establishes the size of a binary tree.
 * @tree: tree bole.
 * Return: tree size; in the case of a NULL tree, 0.
 */
size_t binary_tree_size(const
binary_tree_t
*tree)
{
if (tree ==
NULL)
return (0);

return (binary_tree_size(tree->left) +
binary_tree_size(tree->right) + 1);
}
