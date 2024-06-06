#include "binary_trees.h"

/**
 * binary_tree_sibling - function to find the sibling of a node
 * @node: Pointer to the node to find sibling
 *
 * Return: Pointer tot he sibling node or NULL if sibling does not exist
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
