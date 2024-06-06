#include "binary_trees.h"

/**
* binary_tree_is_root - Checks if a given node is the root of a binary tree.
*
* @node: A pointer to the node to check.
*
* Return: 1 if the node is the root, 0 otherwise.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{
return (0); /* NULL node cannot be a root */
}

if (node->parent == NULL) /* Root node has no parent */
return (1);

return (0);
}
