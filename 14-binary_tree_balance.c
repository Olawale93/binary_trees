#include "binary_trees.h"

/**
* binary_tree_height - Funtion that measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height.
*
* Return: height of the tree. If tree is NULL, return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return (left_height > right_height ? left_height : right_height);
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: Pointer to the root node of the tree to measure the balance factor.
*
* Return: The balance factor. If tree is NULL, return 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;

if (tree == NULL)
return (0);

left_height = tree->left ? (int)binary_tree_height(tree->left) : 0;
right_height = tree->right ? (int)binary_tree_height(tree->right) : 0;
return (left_height - right_height);
}