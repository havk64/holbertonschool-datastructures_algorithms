#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: the pointer to the root node of the tree to be deleted
 *
 * Return: always Void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
	}
	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
	}
	free(tree);
}
