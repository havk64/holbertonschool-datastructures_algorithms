#include "heap.h"

/**
 * free_node - recursive function to free a binary tree node
 * @node: a pointer to binary tree node
 * @free_data: a pointer to a function to deallocate nodes
 * Return: always void.
 */
static void free_node(binary_tree_node_t *node, void (*free_data)(void *))
{
	if (node == NULL)
		return;

	if (node->left)
		free_node(node->left, free_data);

	if (node->right)
		free_node(node->right, free_data);

	if (free_data)
		free_data(node->data);

	free(node);
}

/**
 * heap_delete - deallocate a entire heap structure
 * @heap: a pointer to a heap structure
 * @free_data: a pointer to a function to free/deallocate the structure
 * Return: Always void.
 */
void heap_delete(heap_t *heap, void (*free_data)(void *))
{
	if (heap == NULL)
		return;

	free_node(heap->root, free_data);
	free(heap);
}
