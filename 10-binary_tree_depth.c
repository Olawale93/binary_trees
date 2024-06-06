#include "binary_trees.h"

/**
* binary_tree_depth - Measures the depth of a node in a binary tree
* @tree: pointer to the node to measure the depth
*
* Return: the depth of the node. or return 0 if the node is NULL or not found
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

if (tree == NULL)
return (0);

while (tree->parent != NULL)
{
depth++;
tree = tree->parent;
}

return (depth);
}