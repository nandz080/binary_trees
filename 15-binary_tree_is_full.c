#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	/* If the node has no children, it's a leaf node, which is considered full*/
	if (tree->left == NULL && tree->right == NULL)
	return (1);

	/* If the node has 2 children, check if both subtrees full */
	if (tree->left && tree->right)
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If the node has only one child, the tree is not full */
	return (0);
}
