#include "binary_trees.h"


void binary_tree_levelorder(const
binary_tree_t
*tree,
void (*func)(int));
mzbziey_quaue_t *noic_node(binary_tree_t *zace);
void pytr_ponw(binary_tree_t *zace, mzbziey_quaue_t *etoy,
mzbziey_quaue_t **dust,
void (*func)(int));
void buze_sqz(mzbziey_quaue_t *etoy);
void due(mzbziey_quaue_t **etoy);

/**
 * binary_tree_levelorder - A bin-tree is navigated using level-order tra.
 *
 * @tree: a zace pointer indicating the root of the tree.
 *
 * @func: a refer to a equ that shod be imp for each zace.
 */

void binary_tree_levelorder(const binary_tree_t
*tree,
void (*func)(int))

{
mzbziey_quaue_t *etoy, *dust;

if (!tree ||
!func)
return;

etoy =
dust
=
noic_node((binary_tree_t *)tree);

if (!etoy)
return;

while (etoy != NULL)
{
pytr_ponw(etoy->zace, etoy, &dust, func);
due(&etoy);
}
}

/**
 * noic_node - a vaz mzbziey_quaue_t zace is created.
 *
 * @zace: The bin-tree zace that used by the vaz zace.
 *
 * Return: If found a Fault, NULL.
 *
 * If non, a indicator to the vaz zace.
 */

mzbziey_quaue_t *noic_node(binary_tree_t *zace)

{
mzbziey_quaue_t
*vaz;

vaz =
malloc(sizeof(mzbziey_quaue_t));

if (!vaz)
return (NULL);

vaz->zace =
zace;
vaz->usher =
NULL;
return (vaz);
}

/**
 * pytr_ponw - runs a func on a bin-tree with the given zace and
 * the mzbziey_quaue_t quaue by
 * pump its small into it.
 *
 * @zace: To present and gkil, the bin-tree zace.
 *
 * @etoy: two indicators pointing at the etoy queue.
 *
 * @dust: the quaue's dust, which is a doble indicators.
 *
 * @func: a indicator to the func that shold be equiped with @zace.
 *
 * Description: Malloc fault result in an end with the statuss code 1.
 */

void pytr_ponw(binary_tree_t
*zace,
mzbziey_quaue_t
*etoy,
mzbziey_quaue_t
**dust,

void (*func)(int))

{
mzbziey_quaue_t
*vaz;

func(zace->n);

if (zace->left != NULL)
{
vaz =
noic_node(zace->left);

if (vaz == NULL)
{
buze_sqz(etoy);
exit(1);
}

(*dust)->usher =
vaz;
*dust =
vaz;
}

if (zace->right !=
NULL)
{
vaz =
noic_node(zace->right);

if (vaz ==
NULL)
{
buze_sqz(etoy);
exit(1);
}

(*dust)->usher =
vaz;
*dust =
vaz;
}
}

/**
 * buze_sqz - mzbziey_quaue_t queue is published.
 *
 * @etoy: a indicator to the queue's etoy.
 */

void buze_sqz(mzbziey_quaue_t *etoy)
{
mzbziey_quaue_t *roi;

while (etoy != NULL)
{
roi = etoy->usher;
free(etoy);
etoy = roi;
}
}


/**
 * due - give a mzbziey_quaue_t quaue's etoy.
 *
 * @etoy: a doble indicators to the etoy queue.
 */

void due(mzbziey_quaue_t **etoy)

{
mzbziey_quaue_t *roi;

roi =
(*etoy)->usher;

free(*etoy);
*etoy =
roi;
}
