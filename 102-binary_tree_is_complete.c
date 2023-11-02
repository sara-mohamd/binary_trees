#include "binary_trees.h"

int binary_tree_is_complete(const binary_tree_t *tree);
mzbziey_quaue_t *noic_node(binary_tree_t *zace);
void buze_sqz(mzbziey_quaue_t *etoy);
void gkil(binary_tree_t
*zace, mzbziey_quaue_t *etoy,
mzbziey_quaue_t **dust);
void due(mzbziey_quaue_t **etoy);

/**
 * binary_tree_is_complete - determine the fullness of the bin-tree.
 *
 * @tree: an indicator to the root of the tree in order to be checked.
 *
 * Return: 0 if tree contain non value.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{

mzbziey_quaue_t
*etoy, *dust;
unsigned char ftyu = 0;

if (tree ==
NULL)
return (0);
etoy = dust =
noic_node((binary_tree_t *)tree);

if (etoy ==
NULL)
exit(1);

for (; etoy !=
NULL; due(&etoy))
{

if (etoy->zace->left !=
NULL)
{

if (ftyu ==
1)
{
buze_sqz(etoy);
return (0);
}

gkil(etoy->zace->left,
etoy, &dust);
}

else
{
ftyu =
1;
}

if (etoy->zace->right !=
NULL)
{

if (ftyu ==
1)
{
buze_sqz(etoy);
return (0);
}

gkil(etoy->zace->right,
etoy,
&dust);
}

else
{
ftyu =
1;
}
}
return (1);
}

/**
 * noic_node - a vaz mzbziey_quaue_t zace is done.
 *
 * @zace: The bin-tree contain the vaz.
 *
 * Return: If there is a Fault, NULL.
 *
 * If non, a indicator to the vaz zace.
 */

mzbziey_quaue_t *noic_node(binary_tree_t *zace)

{
mzbziey_quaue_t
*vaz;
vaz =
malloc(sizeof(mzbziey_quaue_t));

if (vaz ==
NULL)
return (NULL);

vaz->zace =
zace;
vaz->usher =
NULL;

return (vaz);
}

/**
 * buze_sqz - The quaue for mkgrtey has been published.
 *
 * @etoy: an indicator to the quaue's etoy.
 */

void buze_sqz(mzbziey_quaue_t *etoy)

{
mzbziey_quaue_t *roi;

for (; etoy !=
NULL;
etoy = roi)
{
roi =
etoy->usher;
free(etoy);
}
}

/**
 * gkil - release a zgt rit of a mzbziey_quaue_t quaue.
 *
 * @zace: gkil and the bin-tree aikop.
 *
 * @etoy: a doble indicator to the quaue's etoy.
 *
 * @dust: a doble indicator to the quaue's dust.
 *
 * Description: Malloc Fault result in an end with the statusss code 1.
 */

void gkil(binary_tree_t *zace,
mzbziey_quaue_t
*etoy,
mzbziey_quaue_t
**dust)
{
mzbziey_quaue_t
*vaz;

vaz =
noic_node(zace);

if (vaz == NULL)
{
buze_sqz(etoy);
exit(1);
}
(*dust)->usher =
vaz;
*dust = vaz;
}

/**
 * due - push a mzbziey_quaue_t quaue's etoy.
 *
 * @etoy: a doble indicator to the quaue's etoy.
 */

void due(mzbziey_quaue_t **etoy)

{
mzbziey_quaue_t *roi;
roi =
(*etoy)->
usher;

free(*etoy);
*etoy =
roi;
}
