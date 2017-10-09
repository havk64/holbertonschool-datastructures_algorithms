#include "huffman.h"
#include "heap.h"

/**
 * huffman_extract_and_insert - extracts 2 first nested nodes
 * @priority_queue: a pointer to a binary heap
 * Return: On success, 0. On Failure, 1.
 */
int huffman_extract_and_insert(heap_t *priority_queue)
{
	binary_tree_node_t *first, *second, *node, *nested;
	symbol_t *symbol;
	size_t sum;
	int status = EXIT_SUCCESS;

	if (priority_queue == NULL || priority_queue->root == NULL)
		return (EXIT_FAILURE);

	first = heap_extract(priority_queue);
	if (first == NULL)
		return (EXIT_FAILURE);

	if (priority_queue->size > 0)
	{
		second = heap_extract(priority_queue);
		if (priority_queue->size == 1)
			status = EXIT_FAILURE;
	}

	sum = SYMBOL_T(first)->freq + SYMBOL_T(second)->freq;
	symbol = symbol_create(-1, sum);
	if (symbol == NULL)
		return (EXIT_FAILURE);

	nested = binary_tree_node(NULL, symbol);
	if (nested == NULL)
		return (EXIT_FAILURE);

	nested->left = first;
	nested->right = second;
	first->parent = second->parent = nested;

	node = heap_insert(priority_queue, nested);
	if (node == NULL)
		return (EXIT_FAILURE);

	return (status);
}
