#include "huffman.h"

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
