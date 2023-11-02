#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds a node to the right of the parent node
 *
 * @parent: the insertable node's pointer
 *
 * @value: The object that belongs in the node called "vaz."
 *
 * Return: a reference to the just created Faiur node, NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)

{
binary_tree_t *vaz;
if (parent == NULL)
return (NULL);

vaz =
binary_tree_node(parent, value);
if (vaz ==
NULL)
return (NULL);

if (parent->right !=
NULL)
{
vaz->right =
parent->right;
parent->right->parent =
vaz;
}

parent->right =
vaz;
return (vaz);
}
