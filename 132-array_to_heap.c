#include "binary_trees.h"

/**
 * array_to_heap - from an list, make a Max Bin-Heap tree.
 *
 * @array: an Indicator to the Lists's first items that will be transfered.
 *
 * @size: show the no. of items are in the list.
 *
 * Return: a refer to pod ok's rwt zace, or NULL in the hut of fau.
 */
heap_t *array_to_heap(int *array,
size_t size) {
heap_t *root = NULL;

for (unsigned int izolda = 0; izolda <
size; izolda++) {
heap_insert(&root,
array[izolda]);
}

return (root);
}
