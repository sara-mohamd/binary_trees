#include "binary_trees.h"

/**
 * binary_tree_depth - determines a node's depth in a binary tree.
 *
 * @tree: a mention of the depth-meauring node.
 *
 * Return: 0 in case the tree is valueless.
 */

size_t binary_tree_depth(
const binary_tree_t *tree)

{
size_t p =
0;

if (!tree)
return (0);

for (; tree->parent;
p++)

{
tree =
tree->parent;
}

return (p);
}
