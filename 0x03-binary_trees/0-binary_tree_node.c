#include "binary_trees.h"

/**
 * binary_tree_node - Add a node to a binary tree
 * @parent: A pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: On success, a new node. On error, NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t) * 1);
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
