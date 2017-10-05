#include "heap.h"

/**
 * swap - swap two data member pointers
 * @parent: a pointer to a parent node
 * @child: a pointer to a child node
 * Return: Always void
 */
static void swap(binary_tree_node_t *parent, binary_tree_node_t *child)
{
	void *tmp;

	tmp = parent->data;
	parent->data = child->data;
	child->data = tmp;
}

/**
 * percolate_down - swap the data of a child with its parent
 * @heap: a pointer to a binary heap
 * @node: a pointer to a node on a binary tree
 * Return: Always void
 */
static void percolate_down(heap_t *heap, binary_tree_node_t *node)
{
	binary_tree_node_t *left, *right;
	int ldiff, rdiff;

	left = node->left;
	right = node->right;
	if (right != NULL && left != NULL)
	{
		ldiff = heap->data_cmp(node->data, left->data);
		rdiff = heap->data_cmp(node->data, right->data);
		if (ldiff > rdiff)
		{
			if (ldiff > 0)
			{
				swap(node, left);
				percolate_down(heap, left);
			}
		}
		else
			if (rdiff > 0)
			{
				swap(node, right);
				percolate_down(heap, right);
			}
	}
	if (right != NULL)
		if (heap->data_cmp(node->data, right->data) > 0)
		{
			swap(node, right);
			percolate_down(heap, right);
		}

	if (left != NULL)
		if (heap->data_cmp(node->data, left->data) > 0)
		{
			swap(node, left);
			percolate_down(heap, left);
		}
}

/**
 * swap_firstlast - swap the first and last nodes of a binary tree
 * @last: the last inserted element in the binary tree
 * @first: the first (top) element in a binary tree
 * Return: a pointer to the top of the binary tree
 */
static binary_tree_node_t *swap_firstlast(binary_tree_node_t *last,
					  binary_tree_node_t *first)
{
	void *tmp;

	tmp = first->data;
	first->data = last->data;
	last->data = tmp;
	if (last->parent->right == last)
		last->parent->right = NULL;
	else
		last->parent->left = NULL;
	free(last);
	return (first);
}

/**
 * heap_extract - extract the first element of a Min binary heap
 * @heap: a pointer to the binary heap
 * Return: a void pointer to the data member of the top node
 */
void *heap_extract(heap_t *heap)
{
	binary_tree_node_t *first, *last;
	unsigned short bsize = 0;
	unsigned int n, x = 1;
	int j;
	_Bool buf[32];
	void *extracted;

	if (heap == NULL || heap->root == NULL)
		return (NULL);

	first = heap->root;
	extracted = first->data;
	/* Get the binary representation of the binary tree's size. */
	n = heap->size;
	if (n > 1)
	{
		while (n > (x - 1))
		{
			buf[bsize++] = (n & x) != 0;
			x <<= 1;
		}
		/* Invert the binary representation of the binary tree's size */
		/* and cuts the first bit (size - 2). */
		last = heap->root;
		for (j = (bsize - 2); j >= 0; j--)
			last = (buf[j] != 0) ? last->right : last->left;

		heap->root = swap_firstlast(last, first);
		percolate_down(heap, heap->root);
	}
	heap->size -= 1;
	return (extracted);
}
