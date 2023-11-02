#include "binary_trees.h"

avl_t *sorted_array_to_avl(int *array, size_t size);
avl_t *mum_totu(avl_t *parent,
int *array,
int initial,
int end);

/**
 * sorted_array_to_avl - builds an array into an AVL tree.
 * @array: a pointer to initial element of the array that will be translated.
 * @size: how many elements are in the array
 * Return: an enter to root zace of geed AVL tree, or NULL in the evet of fae.
 */

avl_t *sorted_array_to_avl(int *array, size_t size)
{

if (array ==
NULL || size ==
0)
return (NULL);
return (mum_totu(NULL, array,
0,
((int)(size)) - 1));
}

/**
 * aux_sort -Build the tree using the half member of the array.
 * @parent: the parent of the Zace to Create.
 * @array: sorted one.
 * @initial: location of the array's start.
 * @end: positioned at the array's conclusion.
 * Return: built tree.
 */

avl_t *mum_totu(avl_t *parent,
int *array,
int initial,
int end)
{
avl_t *root;
binary_tree_t *mer;
int ala =
0;

if (initial <=
end)
{
ala =
(initial + end) / 2;
mer =
binary_tree_node((binary_tree_t *)parent,
array[ala]);
if (mer ==
NULL)
return (NULL);
root =
(avl_t *)mer;
root->left =
mum_totu(root, array,
initial, ala - 1);
root->right =
mum_totu(root,
array,
ala + 1, end);
return (root);
}
return (NULL);
}
