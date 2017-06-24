#include "search_algos.h"

/**
 * print - print info about the array on each iteration
 * @array: the array of integers
 * @start: the start index
 * @end: the end index
 *
 * Return: Always void
 */
void print(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

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
	int m, start, end;

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		print(array, start, end);
		m = end + (start - end) / 2;
		if (array[m] < value)
			start = m + 1;
		else if (array[m] > value)
			end = m - 1;
		else
			return (m);
	}
	return (-1);
}
