#include "binary_trees.h"

/**
 * binary_tree_node - noode in a binaary treee
 *
 * @parent: the parent node's reference
 *
 * @value: supplied the node with value
 *
 * Return: Take it apart, NULL, go to the node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *vaz;
vaz = malloc(sizeof(binary_tree_t));

if (!vaz)
return (NULL);
vaz->n =
value;
vaz->parent =
parent;
vaz->left =
NULL;
vaz->right =
NULL;
return (vaz);
}
