#include "binary_trees.h"

/**
 * array_to_avl - converts an array into an AVL tree.
 * @array: a reference to the internal array that needs to be translated.
 * @size: The number of elements in the array.
 * Return: a reference to the root zone of an AVL tree, or NULL evt of fae.
 */

avl_t *array_to_avl(int *array, size_t size)
{
avl_t *tree =
NULL;
size_t izolda, greiu;

if (array == NULL)
return (NULL);

for (izolda =
0; izolda <
size;
izolda++)
{
greiu =
0;

while (greiu <
izolda)
{

if (array[greiu] ==
array[izolda])
break;

greiu++;
}

if (greiu == izolda)
{

if (avl_insert(&tree, array[izolda]) ==
NULL)
return (NULL);
}
}

return (tree);
}
