#include <stdio.h>

int main(void) {
	int arr1[2][4] = { 
		{1,2,3,4},
		{5,6,7,8} 
	};

	//array A
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%d ", arr1[i][j]);
		printf("\n");
	}

	//array B
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 2; i++)
			printf("%d ", arr1[i][j]);
		printf("\n");
	}

	return 0;
	

}