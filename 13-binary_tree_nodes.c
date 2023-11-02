#include "binary_trees.h"

/**
 * binary_tree_nodes - Select the bin tree nodes have a minimum of one child.
 *
 * @tree: Refer to root node of the tree in order to count the number of nodes.
 *
 * Return: 0 in case the tree is valueless.
 */

size_t binary_tree_nodes(const
binary_tree_t
*tree)

{
if (tree == NULL)
return (0);

if (
tree->left || tree->right
)
return (
1 + binary_tree_nodes(tree->
left) +
binary_tree_nodes(tree->right));
return (0);
}
