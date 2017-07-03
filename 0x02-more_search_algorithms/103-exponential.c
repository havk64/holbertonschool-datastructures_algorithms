#include "search_algos.h"

/**
 * min = find the smaller number
 * @a: first item
 * @b: second item
 *
 * Return: the small number
 */
size_t min(size_t a, size_t b)
{
	return ((a > b) ? b : a);
}

/**
 * binary_search - Implements the binary search algorithm
 * @array: the array of integers
 * @start: the index to start the search
 * @size: the length of the array
 * @value: the value to be found
 *
 * Return: On success: the index where the value was found
 * On error: returns -1
 */
int binary_search(int *array, int start, size_t size, int value)
{
	int m, end;

	end = size - 1;
	while (start <= end)
	{
		m = (start + end) / 2;
		if (array[m] > value)
			end = m - 1;
		else if (array[m] < value)
			start = m + 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * exponential_search - Implements exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: On success, the first index where value is located
 * On error, return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound;

	if (size == 0)
	{
		return (-1);
	}

	bound = 1;
	while (bound < (int)size && array[bound] < value)
	{
		bound *= 2;
	}
	bound /= 2;

	return (binary_search(array, bound, size, value));
}
