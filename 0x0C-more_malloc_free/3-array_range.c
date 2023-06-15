#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of numbers
 * @min: the start
 * @max: the end
 * Return: the array
 */
int *array_range(int min, int max)
{
	int i, j;
	int *arr;

	if (min > max)
		return (NULL);
	arr = (int *)malloc((max - min) * sizeof(int) + 1);
	if (arr == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		arr[j++] = i;
	}
	return (arr);
}
