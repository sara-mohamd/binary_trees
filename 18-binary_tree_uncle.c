#include "binary_trees.h"

/**
 * binary_tree_sibling - detects a node's sibling
 *
 *@node: reference to the node where the sibling is located
 *
 * Return: else a reference to the sibling node NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)

{
if (!node ||
!(node->parent))
return (NULL);

if (node ==
node->parent->right)
return (node->parent->left);

return (node->parent->right);
}

/**
 *binary_tree_uncle - finds the uncle of the node
 *
 * @node: indicating with an arrow to the uncle's node
 *
 * Return: reference to the uncle node if NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)

{
if (!node ||
node->parent == NULL)
return (NULL);

return (binary_tree_sibling(node->parent));
}
