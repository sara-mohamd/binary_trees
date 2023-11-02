#include "binary_trees.h"

/**
 * binary_tree_sibling - discovers a node's twin.
 *
 * @node: a pointing device to the sibling node.
 *
 * Return: The va will be NULL if the pa, node, and node's are all NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)

{
if (!node ||
!node->parent)
return (NULL);
return (node->
parent->
left == node
?
node->parent->right : node->parent->left);
}
