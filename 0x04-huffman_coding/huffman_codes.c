#include "huffman.h"

/**
 * get_codes - iterates through the tree in order to get the codes
 * @node: pointer to the binary tree
 * @buf: pointer to an array of integers
 * @idx: a number representing the actual level
 * Return: always void.
 */
static void get_codes(binary_tree_node_t *node, _Bool *buf,
		      int idx)
{
	char letter;
	int i = 0;

	if (node->left)
	{
		buf[idx] = 0;
		get_codes(node->left, buf, idx + 1);
	}

	if (node->right)
	{
		buf[idx] = 1;
		get_codes(node->right, buf, idx + 1);
	}

	letter = GET_LETTER(node);
	if (letter > 0)
	{
		printf("%c: ", letter);
		while (i < idx)
		{
			printf("%d", buf[i]);
			i++;
		}
		printf("\n");
	}
}

/**
 * huffman_codes - prints huffman codes for each letter
 * @data: a pointer to the data struct
 * @freq: a pointer to the frequency attribute
 * @size: the size (length) of the list
 * Return: On success 1, on failure, 0
 */
int huffman_codes(char *data, size_t *freq, size_t size)
{
	binary_tree_node_t *tree;
	_Bool buf[32];
	int idx = 0;

	if (!data || !freq || size == 0)
		return (0);

	tree = huffman_tree(data, freq, size);
	if (tree)
	{
		get_codes(tree, buf, idx);
	}
	else
		return (0);

	return (1);
}
