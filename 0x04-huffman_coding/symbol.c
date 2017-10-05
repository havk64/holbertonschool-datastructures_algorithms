#include "huffman.h"

/**
 * symbol_create - creates a symbol structure
 * @data: the data to be stored in the structure
 * @freq: the data's associated frequency
 * Return: a pointer to the new structure or NULL on failure
 */
symbol_t *symbol_create(char data, size_t freq)
{
	symbol_t *symbol;

	symbol = malloc(sizeof(symbol_t));
	if (symbol == NULL)
		return (NULL);

	symbol->data = data;
	symbol->freq = freq;
	return (symbol);
}
