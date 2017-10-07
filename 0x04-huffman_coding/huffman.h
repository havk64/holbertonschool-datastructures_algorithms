#ifndef HUFFMAN_H
#define HUFFMAN_H
#include <stdlib.h>
#include "heap.h"
#define SYMBOL_T(node) ((symbol_t *)((binary_tree_node_t *)node)->data)
/**
 * struct symbol_s - Stores a char and its associated frequency
 *
 * @data: The character
 * @freq: The associated frequency
 */
typedef struct symbol_s
{
	char data;
	size_t freq;
} symbol_t;
symbol_t *symbol_create(char data, size_t freq);
heap_t *huffman_priority_queue(char *data, size_t *freq, size_t size);
#endif /* HUFFMAN_H */
