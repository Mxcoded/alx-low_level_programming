#include "search_algos.h"

/**
 * linear_search - Uses the Linear Search algorithm to
 * find a given value in an array of integers
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	/* Handle empty array */
	if (array == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%u] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}

	return (-1);
}
