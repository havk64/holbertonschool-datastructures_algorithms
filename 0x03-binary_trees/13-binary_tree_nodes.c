#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));

	return (0);
}

