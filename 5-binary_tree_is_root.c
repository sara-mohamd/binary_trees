#include "binary_trees.h"

/**
 * binary_tree_is_root - ascertains whether a specific node is active
 *
 * @node: an indication of the node
 *
 * Return: node's root 1
 *
 */

int binary_tree_is_root(const binary_tree_t *node)

{
if (node
== NULL || node->parent !=
NULL)

return (0);
return (1);
}
