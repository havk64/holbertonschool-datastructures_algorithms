#include "heap.h"

/**
 * seek_position - find the place to insert a node at the end of a binary heap
 * @n: the size of the binary heap
 * @size: a pointer to a variable to be used to insert the node
 * Return: On success, an array of _Bool objects. On failure, NULL
 */
static _Bool *seek_position(unsigned int n, unsigned short *size)
{
	unsigned int i = 0, bufsize = 0, x = 1, j;
	_Bool buf[32], *bits;

	while (n > (x - 1))
	{
		buf[bufsize] = (n & x) != 0;
		x <<= 1;
		bufsize++;
	}

	bits = malloc(sizeof(_Bool) * bufsize);
	if (bits == NULL)
		return (NULL);

	*size = bufsize;
	for (i = 0, j = (bufsize - 1); i < bufsize; i++, j--)
	{
		bits[i] = buf[j];
	}
	return (bits);
}

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
