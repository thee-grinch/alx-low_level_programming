#include "main.h"
/**
*rev_string - check the code
*@S:string to be checked
*/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp = s[0];

	while (s[j] != '\0')
	{
		j++;
	}
	while (i < j)
	{
		s[i] = temp;
		s[i] = s[j];
		s[j] = temp;
		j--;
		i++;
	}
}	
