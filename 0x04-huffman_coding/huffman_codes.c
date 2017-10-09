#include "huffman.h"

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
