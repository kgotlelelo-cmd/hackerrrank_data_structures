#include <stdio.h>

int *reverseArray(int a_count, int *a, int *result_count)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = a_count;
	while(i<j)
	{
		temp = a[i];
		a[i] = a[j-1];
		a[j-1] = temp;
		i++;
		j--;
	}
	*result_count = a_count;
	return a;
}
