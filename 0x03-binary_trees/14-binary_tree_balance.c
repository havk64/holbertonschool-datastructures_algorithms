#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ltree, rtree;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
	{
		ltree = binary_tree_height(tree->left);
		rtree = binary_tree_height(tree->right);
		return (((ltree > rtree) ? ltree : rtree) + 1);
	}
	return (1);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
