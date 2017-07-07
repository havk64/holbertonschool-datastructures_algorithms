#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a given node is root
 * @node: pointer to node to be checked
 *
 * Return: 1 if the node is root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((node != NULL && node->parent == NULL) ? 1 : 0);
}
