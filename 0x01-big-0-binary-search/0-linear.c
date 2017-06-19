#include "search_algos.h"

/**
 * linear_search - Linear search example
 * @array: an array of integers
 * @size: the size of the array
 * @value: the value to be searched
 *
 * Return: On Success: the index where the value was found
 * On error: It returns -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
