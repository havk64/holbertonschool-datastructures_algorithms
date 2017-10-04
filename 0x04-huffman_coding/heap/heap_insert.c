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
 * copy_attr - copy the attributes of a binary tree node updating child/parents
 * @node: a pointer to a binary tree node (child)
 * @parent: a pointer to a binary tree node (parent)
 * Return: Always void.
 */
static void copy_attr(binary_tree_node_t *node, binary_tree_node_t *parent)
{
	binary_tree_node_t tmp;

	/* Swap parent/node, except member data */
	tmp = *parent;
	*parent = *node;
	parent->data = tmp.data;
	tmp.data = node->data;
	*node = tmp;
	/* Update right/left reference and child parents */
	parent->parent = node;
	if (node->left == node)
	{
		node->left = parent;
		if (node->right != NULL)
			node->right->parent = node;
	}
	else
	{
		node->right = parent;
		if (node->left != NULL)
			node->left->parent = node;
	}
	/* Update parent childs */
	if (parent->right != NULL)
		parent->right->parent = parent;
	if (parent->left != NULL)
		parent->left->parent = parent;
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
			if (parent->parent == NULL)
			{
				heap->root = node;
			}
			else
			{
				if (parent->parent->left == parent)
					parent->parent->left = node;
				else
					parent->parent->right = node;
			}
			copy_attr(node, parent);
			percolate_up(heap, &node);
		}
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
