#include "binary_trees.h"

/**
 * free_tree - Free a previoulsy allocated tree structure
 * @node: the tree/subtree/node to be freed
 *
 * Return: always Void
 */
void free_tree(binary_tree_t *node)
{
	if (node->left != NULL)
	{
		free_tree(node->left);
	}

	if (node->right != NULL)
	{
		free_tree(node->right);
	}

	free(node);
}
