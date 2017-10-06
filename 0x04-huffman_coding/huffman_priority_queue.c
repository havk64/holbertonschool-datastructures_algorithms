#include "huffman.h"
#include "heap.h"

/**
 * data_cmp_sym - a function to compare the value of two nodes
 * @first: a pointer to a node
 * @second: a pointer to another node
 * Return: the differente between the data of two nodes
 */
int data_cmp_sym(void *first, void *second)
{
	binary_tree_node_t *nested1, *nested2;
	symbol_t *data1, *data2;

	nested1 = (binary_tree_node_t *)first;
	nested2 = (binary_tree_node_t *)second;
	data1 = (symbol_t *)nested1->data;
	data2 = (symbol_t *)nested2->data;
	return ((int)(data1->freq - data2->freq));
}

/**
 * huffman_priority_queue - creates a huffman priority queue
 * @data: a pointer to an array of characters
 * @freq: a pointer to an array of numbers representing the character
 * occurence frequency
 * @size: the size (length) of the queue
 * Return: a pointer to the newly created binary heap/priority queue
 */
heap_t *huffman_priority_queue(char *data, size_t *freq, size_t size)
{
	heap_t *heap;
	symbol_t *symbol;
	void *nested;
	size_t i;
	binary_tree_node_t *node;

	heap = heap_create(data_cmp_sym);
	for (i = 0; i < size; i++)
	{
		symbol = symbol_create(data[i], freq[i]);
		if (symbol == NULL)
			return (NULL);

		nested = binary_tree_node(NULL, symbol);
		if (nested == NULL)
			return (NULL);

		node = heap_insert(heap, nested);
		if (node == NULL)
			return (NULL);
	}

	return (heap);
}
