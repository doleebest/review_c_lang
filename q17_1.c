#include <stdio.h>

void MaxAndMin(int ** maxPtr, int **minPtr, int arr[]) 
{
	int max = arr[0];
	int	min = arr[0];
	*maxPtr = &max;
	*minPtr = &min;

	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	printf("max = %d, min = %d", *maxPtr, *minPtr);
}

int main(void)
{
	int* maxPtr=0;
	int* minPtr=0;
	int arr[5] = { 1,3,5,7,9 };

	MaxAndMin(*maxPtr, *minPtr, arr);
	return 0;
}