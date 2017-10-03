#include "heap.h"

void heap_delete(heap_t *heap, void (*free_data)(void *))
{
	binary_tree_node_t *node;

	if (free_data == NULL)
		return;

	node = heap->root;
	free_data(node);
	free(heap);
}
