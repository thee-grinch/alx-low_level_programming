#include "search_algos.h"
/**
 * binary_search - implements a binary search algorithm
 * @array: the array to be searched
 * @size: the size of the array to be searched
 * @value: the value to be searched
 * Return: index or -1 on error
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid_point, i;
	int result;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d, ", array[i]);
	printf("\n");

	if (size % 2 != 0)
		mid_point = size / 2;
	else
		mid_point = size / 2 - 1;
	if (array[mid_point] == value)
		return (mid_point);
	if (size == 1)
		return (-1);
	if (array[mid_point] < value)
	{
		result = (binary_search((array + mid_point + 1),
					size - mid_point - 1, value));
		if (result == -1)
			return (-1);
		return (1 + mid_point + result);
	}
	if (array[mid_point] > value)
		return (binary_search(array, mid_point, value));
	return (-1);
}
