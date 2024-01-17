#include <stdio.h>

/**
 * linear_search - implementation of a linear search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched
 * Return: index or -1 on error
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i,  array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
