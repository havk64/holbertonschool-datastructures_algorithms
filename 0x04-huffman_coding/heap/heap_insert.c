#include "heap.h"

/**
 * insert_end - inserts a node at the end of a binary heap
 * @heap: a pointer to a binary heap
 * @data: the data to be inserted in the binary heap
 * Return: On success, the pointer to the node that was inserted or
 * NULL on failure
 */
static binary_tree_node_t *insert_end(heap_t *heap, void *data)
{
	binary_tree_node_t *node, *parent;
	unsigned short size = 0;
	unsigned int n, x = 1;
	int j;
	_Bool buf[32];

	n = heap->size + 1;
	/* Get the binary representation of the binary tree's size. */
	while (n > (x - 1))
	{
		buf[size++] = (n & x) != 0;
		x <<= 1;
	}

	parent = heap->root;
	/* Invert the binary representation of the binary tree's size */
	/* and cuts the first bit (size - 2). */
	for (j = (size - 2); j >= 0; j--)
	{
		if (j == 0)
		{
			node = binary_tree_node(parent, data);
			if (buf[j] == 0)
				parent->left = node;
			else
				parent->right = node;
			continue;
		}
		parent = (buf[j] == 0) ? parent->left : parent->right;
	}
	return (node);
}

/**
 * percolate_up - swaps a child with its parent when parent > child
 * @heap: a pointer to a heap structure
 * @tree: a pointer to a node on a binary tree
 * Return: Always void.
 */
static void percolate_up(heap_t *heap, binary_tree_node_t **tree)
{
	binary_tree_node_t *node, *parent;

	node = *tree;
	parent = node->parent;
	if (parent)
	{
		if (heap->data_cmp(parent->data, node->data) > 0)
		{
			void *tmp;

			tmp = parent->data;
			parent->data = node->data;
			node->data = tmp;
		}
		percolate_up(heap, &parent);
	}
}

/**
 * heap_insert - inserts a value in a Min Binary Heap
 * @heap: a pointer to a binary heap
 * @data: the data to be inserted
 * Return: On success, a pointer to the node that was inserted or
 * NULL on failure
 */
binary_tree_node_t *heap_insert(heap_t *heap, void *data)
{
	binary_tree_node_t *node;

	if (heap == NULL)
		return (NULL);

	if (heap->root == NULL)
	{
		node = binary_tree_node(NULL, data);
		if (node == NULL)
			return (NULL);

		heap->root = node;
	}
	else
	{
		node = insert_end(heap, data);
		percolate_up(heap, &node);
	}

	heap->size += 1;
	return (node);
}
