#include "main.h"
/**
*reverse_array - check the code;
*@a: array one
*@n: size of the array
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n -1;
	int temp;

	while (i < n / 2)
	{
		while (j >= 0)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			j--;
		}
		i++;
	}
}
