#include <stdio.h>

int main(void)
{
	int* arr1[5];
	int* arr2[3][5];

	int **dpt1 = arr1;
	int (*dpt2)[5] = arr2;
}