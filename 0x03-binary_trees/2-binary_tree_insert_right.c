#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: On success, the new node. On error, NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	else
		node->right = NULL;

	parent->right = node;
	return (node);
}
