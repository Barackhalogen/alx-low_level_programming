#include "search_algos.h"
#include <math.h>

size_t min(size_t a, size_t b);

/**
 * min - function returns the minimum of two size_t values
 * @a: param, first value
 * @b: param, second value
 * Return: a if lower or equal to b,else b
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - function that searches for a value in a sorted array of
 * integers modelling a jump search algorithm
 * @array: pointer to first element of array to search
 * @size: param, number of elements in array
 * @value: param, value to search for
 * Return: first index containing value, else  -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (high = 0; high < size && array[high] < value;
	     low = high, high += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high, array[high]);
	}

	/* causes 'found' msg even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
