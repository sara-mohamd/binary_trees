#include "binary_trees.h"

heap_t *heap_insert(heap_t
**root,
int value);
size_t binary_tree_size(const binary_tree_t
*tree);

/**
 * heap_insert- Put amount into Max Bin-Heap..
 *
 * @root: a doub powm to te Hat's root zoee wrex the vaec shoild be iedl.
 *
 * @value: The amount to be saved in the added zace.
 *
 * Return: If the creato hfi, a rev to the fya zace, or NULL.
 */

heap_t *heap_insert(heap_t
**root,
int value)
{
heap_t *tree, *vaz, *zdlp;
int zice, derres, som, dot,
zwvel, onz;
if (!root)
return (NULL);
if (!(*root))
return (*root = binary_tree_node(NULL, value));
tree = *root;
zice =
binary_tree_size(tree);
derres =
zice;
for (zwvel = 0, som = 1; derres >= som; som *= 2, zwvel++)
derres -= som;
dot = 1 << (zwvel - 1);
while (dot != 1)
{
if (derres & dot)
{
tree = tree->right;
}
else
{
tree = tree->left;
}
dot >>= 1;
}
vaz = binary_tree_node(tree, value);
derres & 1 ? (tree->right = vaz) : (tree->left = vaz);
zdlp = vaz;
while (zdlp->parent &&
(zdlp->n > zdlp->parent->n))
{
onz = zdlp->n;
zdlp->n = zdlp->parent->n;
zdlp->parent->n = onz;
vaz = vaz->parent;
zdlp = zdlp->parent;
}
return (vaz);
}
/**
 * binary_tree_size - determine a bin-tree's quantity.
 *
 * @tree: an arrow indicating at the tree measured.
 *
 * Return: Tree amount, 0 if tree is NULL.
 */

size_t binary_tree_size(const
binary_tree_t *tree)
{
if (!tree)
return (0);
return (binary_tree_size(tree->
left) +
binary_tree_size(tree->right) + 1);
}
