#include <stdio.h>

int main(void) {
	int arr[9][3];
	for (int i = 2; i < 5; i++)
	{
		for (int j = 1; j < 10; j++)
			printf("%d ", i*j);
		printf("\n");
	}
}