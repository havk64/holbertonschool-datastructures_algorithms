#include "huffman.h"

/**
static binary_tree_node_t *insert_last(heap_t *priority_queue)
{

	binary_tree_node_t *first, *second, *nested;
	symbol_t *symbol;
	size_t sum;

	first = heap_extract(priority_queue);
	if (first == NULL)
		return (NULL);

	if (priority_queue->size > 0)
	{
		second = heap_extract(priority_queue);
	}

	sum = SYMBOL_T(first)->freq;
	sum += (second) ? SYMBOL_T(second)->freq : 0;
	symbol = symbol_create(-1, sum);
	if (symbol == NULL)
		return (NULL);

	nested = binary_tree_node(NULL, symbol);
	if (nested == NULL)
		return (NULL);

	nested->left = first;
	nested->right = second;
	first->parent = nested;
	if (second)
		second->parent = nested;

	return (nested);
}

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
