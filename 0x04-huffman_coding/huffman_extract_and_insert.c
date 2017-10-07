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

	first = heap_extract(priority_queue);
	if (first == NULL)
		return (EXIT_FAILURE);

	second = heap_extract(priority_queue);
	if (second == NULL)
		return (EXIT_FAILURE);

	sum = SYMBOL_T(first)->freq + SYMBOL_T(second)->freq;
	symbol = symbol_create(-1, sum);
	if (symbol == NULL)
		return (EXIT_FAILURE);

	nested = binary_tree_node(NULL, symbol);
	node = heap_insert(priority_queue, nested);
	if (node == NULL)
		return (EXIT_FAILURE);

	return (EXIT_SUCCESS);
}
