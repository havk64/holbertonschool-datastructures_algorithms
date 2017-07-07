#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->right = NULL;
	if (parent->left != NULL)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	else
		node->left = NULL;

	parent->left = node;
	return (node);
}
