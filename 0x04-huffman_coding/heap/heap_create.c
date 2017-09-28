#include "heap.h"

/**
 * heap_create - Create a Heap data structure
 * @data_cmp: pointer to a function that compare two nodes
 * Return: a heap_t data type
 */
heap_t *heap_create(int (*data_cmp)(void *, void *))
{
	heap_t *node;

	node = malloc(sizeof(heap_t));
	if (node == NULL)
		return (NULL);

	node->root = NULL;
	node->data_cmp = data_cmp;
	node->size = 0;
	return (node);
}
