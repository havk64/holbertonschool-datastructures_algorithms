#include "huffman.h"

/**
 * huffman_tree - Creates a complete huffman coding tree
 * @data: a pointer to an ASCII character
 * @freq: the frequency of occurence of related character
 * @size: the size (length) of the binary tree
 * Return: On success a pointer to the root of the binary heap
 * On failure, NULL.
 */
binary_tree_node_t *huffman_tree(char *data, size_t *freq, size_t size)
{
	heap_t *priority_queue;
	binary_tree_node_t *last;
	size_t x;

	priority_queue = huffman_priority_queue(data, freq, size);
	if (priority_queue == NULL || data == NULL || freq == NULL)
		return (NULL);

	while (priority_queue->size > 1)
	{
		x = huffman_extract_and_insert(priority_queue);
		if (x == 1)
			break;
	}
	last = insert_last(priority_queue);
	return (last);
}
