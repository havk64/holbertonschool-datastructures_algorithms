#include "heap.h"

static binary_tree_node_t *swap_firstlast(binary_tree_node_t *last,
					  binary_tree_node_t *first)
{
	if (last->parent->right == last)
		last->parent->right = NULL;
	else
		last->parent->left = NULL;

	last->left = first->left;
	last->right = first->right;
	last->parent = first->parent; /* or NULL */
	first->left->parent =  first->right->parent = last;
	free(first);
	return (last);
}

void *heap_extract(heap_t *heap)
{
	binary_tree_node_t *node;
	_Bool *position;
	unsigned short size = 0, i;
	void *extracted;

	node = heap->root;
	extracted = (void *)node->data;
	position = seek_position(heap->size, &size);
	for (i = 1; i < size; i++)
		node = (position[i] != 0) ? node->right : node->left;

	heap->root = swap_firstlast(node, heap->root);
	heap->size -= 1;
	free(position);
	return (extracted);
}
