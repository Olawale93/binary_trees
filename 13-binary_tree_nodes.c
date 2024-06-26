#include"binary_trees.h"

/**
 * binary_tree_nodes - funtion that returns the number of nodes in a tree.
 * @tree: Pointer tot he root node to be checked
 *
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (0);

}
