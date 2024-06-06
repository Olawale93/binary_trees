#include "binary_trees.h"

/**
* binary_tree_size - Measures the size (number of nodes) of a binary tree.
*
* @tree: A pointer to the root node of the tree to measure the size.
*
* Return: The size of the tree (number of nodes), or 0 if the tree is NULL.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL) /* Base case: Empty tree has size 0 */
{
return (0);
}

size_t left_size = binary_tree_size(tree->left); /* Size of left subtree */
size_t right_size = binary_tree_size(tree->right); /* Size of right subtree */

return (1 + left_size + right_size); /* Size is 1 (root) + sizes of subtrees */
}
