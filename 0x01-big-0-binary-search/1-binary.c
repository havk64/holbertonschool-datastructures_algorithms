#include "search_algos.h"

/**
 * binary_search - Implements the binary search algorithm
 * @array: the array of integers
 * @size: the length of the array
 * @value: the value to be found
 *
 * Return: On success: the index where the value was found
 * On error: returns -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i, m, start, end;

	start = 0;
	end = size - 1;
	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		m = (start + end) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			start = m + 1;
		else
			end = m - 1;
	}
	return (-1);
}
