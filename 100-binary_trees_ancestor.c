#include "binary_trees.h"

/**
 * binary_tree_ancestor - Function that checks for an ancestor
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Node of the ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *p, *q;

	if (first == NULL  || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *) first);
	}
	p = first->parent;
	q = second->parent;
	if (p == NULL || first == q || (!p->parent && q))
	{
		return (binary_trees_ancestor(first, q));
	}
	else if (q == NULL || p == second || (!q->parent && p))
	{
		return (binary_trees_ancestor(p, second));
	}
	return (binary_trees_ancestor(p, q));
}