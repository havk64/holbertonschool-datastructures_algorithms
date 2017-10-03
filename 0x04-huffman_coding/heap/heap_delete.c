#include "heap.h"

/**
 * heap_delete - deallocate a entire heap structure
 * @heap: a pointer to a heap structure
 * @free_data: a pointer to a function to free/deallocate the structure
 * Return: Always void.
 */
void heap_delete(heap_t *heap, void (*free_data)(void *))
{
	binary_tree_node_t *node;

	if (free_data == NULL)
		return;

	node = heap->root;
	free_data(node);
	free(heap);
}
