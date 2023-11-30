#include "binary_trees.h"

/**
 * max - Computes the maximum of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Maximum of two numbers
 */
size_t max(size_t a, size_t b)
{
	return (a > b ? a : b);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, 0 if @tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (1 + max(binary_tree_height(tree->left),
				binary_tree_height(tree->right)));
}
