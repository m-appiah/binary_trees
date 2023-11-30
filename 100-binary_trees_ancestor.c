#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor, NULL on failure
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *tmp;

	if (!first || !second)
		return (NULL);

	tmp = first;
	while (tmp)
	{
		if (tmp == second)
			return ((binary_tree_t *)tmp);
		tmp = tmp->parent;
	}

	tmp = second;
	while (tmp)
	{
		if (tmp == first)
			return ((binary_tree_t *)tmp);
		tmp = tmp->parent;
	}

	return (NULL);
}
