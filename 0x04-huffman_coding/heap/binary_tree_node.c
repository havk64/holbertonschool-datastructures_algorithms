#include "heap.h"

/**
 * binary_tree_node - creates a generic binary tree node
 * @parent: a pointer to a parent
 * @data: a pointer to data
 * Return: a binary_tree_node_t or NULL
 */
binary_tree_node_t *binary_tree_node(binary_tree_node_t *parent, void *data)
{
	binary_tree_node_t *node;

	node = malloc(sizeof(binary_tree_node_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
