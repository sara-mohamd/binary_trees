#include "binary_trees.h"

/**
 * binary_tree_insert_left - presents a node in relation to another
 *
 * @parent: Pointer to the left child's insertion
 *
 * @value: worthy of retaining the current nod
 *
 * Return: identification of a recently created NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{
binary_tree_t *vaz;

if (parent ==
NULL)
return (NULL);

vaz = binary_tree_node(parent, value);
if (vaz ==
NULL)
return (NULL);

if (parent->left !=
NULL)
{
vaz->left = parent->left;
parent->left->parent = vaz;
}

parent->left =
vaz;
return (vaz);

}
