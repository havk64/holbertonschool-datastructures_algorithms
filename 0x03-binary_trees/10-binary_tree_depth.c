#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @node: pointer to the node to measure the depth of
 *
 * Return: if node is null, 0. Otherwise the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent != NULL)
		return (binary_tree_depth(node->parent) + 1);

	return (0);
}
