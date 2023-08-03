#include "binary_trees.h"

/**
 * binary_tree_is_root - Functin checks if a given node is a root
 * @node: Pointer to the node to check
 * Return: 1 if node is a root or 0 if node is not root.
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);

	return (0);
}
