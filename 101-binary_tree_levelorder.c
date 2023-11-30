#include "binary_trees.h"

/**
 * binary_tree_levelorder - level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: If tree or func is NULL, do nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_t **queue = malloc(sizeof(
				binary_tree_t *) * binary_tree_height(tree));
	if (!queue)
		return;

	int front = 0, rear = 0;

	binary_tree_t *temp;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		temp = queue[front++];
		func(temp->n);
		if (temp->left)
			queue[rear++] = temp->left;

		if (temp->right)
			queue[rear++] = temp->right;
	}

	free(queue);
}
