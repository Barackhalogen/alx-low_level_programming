#include "search_algos.h"

/**
 * linear_search - this function searches for a value in an array of
 * integers modelling the Linear search algorithm
 *
 * @array: input parameter which is an array
 * @size: size of the array
 * @value: a parameter to search in
 * Return: if succesful, the program  EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
