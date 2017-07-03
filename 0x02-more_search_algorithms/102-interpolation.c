#include "search_algos.h"

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	low = 0;
	high = size - 1;

	while (array[high] != array[low] && value >= array[low] &&
	       value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			     (value - array[low]));

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
