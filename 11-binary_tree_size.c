#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: Pointer to the root node of the tree
 * @size: unsigned int representing the size of tree
 * Return: If the tree is NULL return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);

	}
	return (size);
}
