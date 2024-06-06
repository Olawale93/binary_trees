#include "binary_trees.h"

/**
 * binary_tree_uncle - function to find the uncle node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULLif node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
