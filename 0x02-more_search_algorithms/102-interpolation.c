#include "search_algos.h"

/**
 * interpolation_search - Implements interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: On success, the first index where value is located
 * On error, return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	low = 0;
	high = size - 1;
	if (array == NULL)
		return (-1);

	while (array[high] != array[low] && value >= array[low] &&
	       value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			     (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
