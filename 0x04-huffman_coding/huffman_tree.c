#include "huffman.h"

binary_tree_node_t *huffman_tree(char *data, size_t *freq, size_t size)
{
	heap_t *priority_queue;
	size_t i, x;

	priority_queue = huffman_priority_queue(data, freq, size);
	if (priority_queue == NULL || data == NULL || freq == NULL)
		return (NULL);

	for (i = 0; i < (size / 2); i++)
	{
		x = huffman_extract_and_insert(priority_queue);
		if (x == 1)
			return (NULL);
	}
	return (priority_queue->root);
}
