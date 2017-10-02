#include "heap.h"

static _Bool *seek_position(unsigned int n, unsigned short *size)
{
	unsigned int i = 0, bufsize = 0, x = 1, j;
	static _Bool buf[16];
	_Bool *bits;

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

static
binary_tree_node_t *insert_end(heap_t *heap,
			       void *data)
{
	binary_tree_node_t *node, *parent;
	_Bool *position;
	unsigned short size = 0, i;
	unsigned int n;

	n = heap->size + 1;
	position = seek_position(n, &size);
	if (position == NULL)
		return (NULL);

	parent = heap->root;
	for (i = 1; i < size; i++)
	{
		if (i == (size - 1))
		{
			node = binary_tree_node(parent, data);
			if (position[i] == 0)
				parent->left = node;
			else
				parent->right = node;
			continue;
		}
		parent = (position[i] == 0) ? parent->left : parent->right;
	}
	free(position);
	return (node);
}
