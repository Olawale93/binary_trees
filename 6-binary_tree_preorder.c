#include "binary_trees.h"

/**
* binary_tree_preorder - Goes through a binary tree using pre-order traversal.
*
* @tree: A pointer to the root node of the tree to traverse.
* @func: A pointer to a function to call for each node.
*
* Return: Nothing (void function).
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL) /* Check for NULL pointers */
{
return;
}

func(tree->n); /* Process current node value */
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
