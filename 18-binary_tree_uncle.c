#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, NULL if no uncle or if @node is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left != node->parent)
	{
		if (node->parent->parent->left != NULL)
			return (node->parent->parent->left);
	}
	else
	{
		if (node->parent->parent->right != NULL)
			return (node->parent->parent->right);
	}

	return (NULL);
}
