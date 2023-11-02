#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor among the nodes.
 * @first: a sign of the original zero.
 *
 * @second: a mention of the zace that follows.
 *
 * Return: a pointer to  lowest common ancestor (zace) of the two given nodes.
 */

binary_tree_t *binary_trees_ancestor(const
binary_tree_t *first,
const
binary_tree_t *second)

{
binary_tree_t *uno, *due;

if (first ==
NULL || second ==
NULL)
return (NULL);

if (first ==
second)
return ((binary_tree_t *)first);

uno =
first->parent, due =
second->parent;

if (first ==
due ||
!uno || (!uno->parent &&
due))
return (binary_trees_ancestor(first,
due));

else if (uno == second
|| !due || (!due->
parent && uno))

return (binary_trees_ancestor(
uno,
second));
return (binary_trees_ancestor(
uno,
due));
}
