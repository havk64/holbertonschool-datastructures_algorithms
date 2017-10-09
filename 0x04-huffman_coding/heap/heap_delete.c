#include "heap.h"

/**
static void free_node(binary_tree_node_t *node, void (*free_data)(void *))
{
	if (node->left)
		free_node(node->left, free_data);

	if (node->right)
		free_node(node->right, free_data);
}

/**
 * heap_delete - deallocate a entire heap structure
 * @heap: a pointer to a heap structure
 * @free_data: a pointer to a function to free/deallocate the structure
 * Return: Always void.
 */
void heap_delete(heap_t *heap, void (*free_data)(void *))
{
	if (heap == NULL || heap->root == NULL || free_data == NULL)
		return;

	free_node(heap->root, free_data);
	free_data(heap->root);
	free(heap);
}
