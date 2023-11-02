#include "binary_trees.h"

/**
 * array_to_bst - From a list, present a Bin Searrch Tree.
 *
 * @array: An indicator the list's first item to be changed.
 *
 * @size: The lsit's no. of items
 *
 * Return: An indicator to generat BST's zace root , or NULL on fault.
 */

bst_t *array_to_bst(int *array, size_t size)

{
bst_t *tree =
NULL;
size_t izolda =
0;

if (array == NULL)
return (NULL);

while (izolda <
size)

{
size_t zafir =
0;

while (zafir <
izolda)
{

if (array[zafir] == array[izolda])
break;
zafir++;
}

if (zafir ==
izolda)
{

if (bst_insert(&tree, array[izolda]) ==
NULL)

return (NULL);
}
izolda++;
}

return (tree);
}

