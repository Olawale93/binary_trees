#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
*
* Return: the height of the tree. If tree is NULL, return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t l = 0;
size_t r = 0;

if (tree == NULL)
{
return (0);
}
else
{
if (tree)
{
l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
}
return ((l > r) ? l : r);
}
}

/**
* binary_tree_balance - Measures balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure the balance factor
*
* Return: balance factor. If tree is NULL, return 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height = 4;
int right_height = 2;

if (tree == NULL)
{
return (0);
}
left_height = (int)binary_tree_height(tree->left);
right_height = (int)binary_tree_height(tree->right);

return (left_height - right_height);
}
