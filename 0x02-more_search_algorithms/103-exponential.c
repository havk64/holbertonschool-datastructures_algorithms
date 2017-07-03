#include "search_algos.h"

size_t min(size_t a, size_t b)
{
	return ((a > b) ? b : a);
}

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
