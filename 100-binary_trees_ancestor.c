#include "binary_trees.h"

/**
* binary_trees_ancestor - Finds the lowest common ancestor of two nodes
* @first: Pointer to the first node
* @second: Pointer to the second node
*
* Return: Pointer to the lowest common ancestor node of the two given nodes
*         If no common ancestor was found, return NULL
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
const binary_tree_t *e, *a;

if (first == NULL || second == NULL)
return (NULL);

e = first;
a = second;

while (e != NULL)
{
while (a != NULL)
{
if (e == a)
return ((binary_tree_t *)e);
a = a->parent;
}
a = second;
e = e->parent;
}

return (NULL);
}
