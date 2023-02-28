#include "main.h"
#include <stdio.h>
/**
*print_array -  check the code
*@a:array to be printed
*@n:number of items
*/
void print_array(int *a, int n)
{
 	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d\n", a[i]);
				break;
			}
			printf("%d, ", a[i]);
		}
	}
	else
		printf("\n");
}
