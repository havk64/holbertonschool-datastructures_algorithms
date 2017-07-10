#include "search_algos.h"

/**
 * min - find the smaller number
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
 * print - print the numbers being compared
 * @a: index
 * @b: value
 *
 * Return: void
 */
void print(size_t a, int b)
{
	printf("Value checked array[%lu] = [%d]\n", a, b);
}

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 * Return: On success, the index where the value was found
 * On error: return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b;

	a = 0;
	b = (size_t)sqrt(size);
	print(a, array[a]);
	while (array[min(b, size) - 1] < value)
	{
		a = b;
		b += sqrt(size);
		if (a >= size)
			return (-1);
		print(a, array[a]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	while (array[a] < value)
	{
		print(a, array[a]);
		a++;
		if (a == min(b, size))
			return (-1);
	}

	if (array[a] == value)
	{
		print(a, array[a]);
		return (a);
	} else
		return (-1);
}

