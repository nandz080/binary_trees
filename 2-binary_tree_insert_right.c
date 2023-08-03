#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: value is the value to store in the new node
 *
 * Return: right_child_node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child_node;

	if (parent == NULL)
		return (NULL);

	right_child_node = binary_tree_node(parent, value);
	if (right_child_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		right_child_node->right = parent->right;
		parent->right->parent = right_child_node;
	}
	parent->right = right_child_node;
	return (right_child_node);
}
