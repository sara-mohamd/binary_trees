#include "binary_trees.h"

/**
 * binary_tree_delete - entirely eliminates
 *
 * @tree: a clue regarding the root node
 *
 */

void binary_tree_delete(binary_tree_t *tree)

{
if (tree != NULL)

{
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}

}
