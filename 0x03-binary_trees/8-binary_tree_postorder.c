#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a tree using post-order traversal
 * @tree:  pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: always void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
	{
		binary_tree_postorder(tree->left, func);
	}
	if (tree->right != NULL)
	{
		binary_tree_postorder(tree->right, func);
	}
	(*func)(tree->n);
}
