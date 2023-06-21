#include "function_pointers.h"
/**
 * array_iterator - itterates an array
 * @array: the number of parameters
 * @size: the size of the array
 * @action: the action pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
